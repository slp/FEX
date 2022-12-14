%ifdef CONFIG
{
  "HostFeatures": ["AVX"],
  "RegData": {
    "XMM0":  ["0x0000000000000000", "0x8000000000000000", "0x0000000000000000", "0x0000000000000000"],
    "XMM1":  ["0x0000000000000000", "0xBFF0000000000000", "0x0000000000000000", "0x0000000000000000"],
    "XMM2":  ["0x3FF0000000000000", "0x8000000000000000", "0x0000000000000000", "0x0000000000000000"],
    "XMM3":  ["0x0000000000000000", "0x8000000000000000", "0x0000000000000000", "0x0000000000000000"],
    "XMM4":  ["0x0000000000000000", "0x8000000000000000", "0x0000000000000000", "0x0000000000000000"],
    "XMM5":  ["0x0000000000000000", "0xBFF0000000000000", "0x0000000000000000", "0x0000000000000000"],
    "XMM6":  ["0x3FF0000000000000", "0x8000000000000000", "0x0000000000000000", "0x0000000000000000"],
    "XMM7":  ["0x0000000000000000", "0x8000000000000000", "0x0000000000000000", "0x0000000000000000"],
    "XMM8":  ["0x0000000000000000", "0x8000000000000000", "0x0000000000000000", "0x8000000000000000"],
    "XMM9":  ["0x0000000000000000", "0xBFF0000000000000", "0x0000000000000000", "0xBFF0000000000000"],
    "XMM10": ["0x3FF0000000000000", "0x8000000000000000", "0x3FF0000000000000", "0x8000000000000000"],
    "XMM11": ["0x0000000000000000", "0x8000000000000000", "0x0000000000000000", "0x8000000000000000"],
    "XMM12": ["0x0000000000000000", "0x8000000000000000", "0x0000000000000000", "0x8000000000000000"],
    "XMM13": ["0x0000000000000000", "0xBFF0000000000000", "0x0000000000000000", "0xBFF0000000000000"],
    "XMM14": ["0x3FF0000000000000", "0x8000000000000000", "0x3FF0000000000000", "0x8000000000000000"],
    "XMM15": ["0x0000000000000000", "0x8000000000000000", "0x0000000000000000", "0x8000000000000000"]
  }
}
%endif

lea rdx, [rel .data]

vroundpd xmm0, [rdx], 00000000b ; Nearest
vroundpd xmm1, [rdx], 00000001b ; -inf
vroundpd xmm2, [rdx], 00000010b ; +inf
vroundpd xmm3, [rdx], 00000011b ; truncate

vroundpd ymm8,  [rdx], 00000000b ; Nearest
vroundpd ymm9,  [rdx], 00000001b ; -inf
vroundpd ymm10, [rdx], 00000010b ; +inf
vroundpd ymm11, [rdx], 00000011b ; truncate

; MXCSR
; Set to nearest
mov eax, 0x1F80
mov [rel .mxcsr], eax
ldmxcsr [rel .mxcsr]

vroundpd xmm4,  [rdx], 00000100b
vroundpd ymm12, [rdx], 00000100b

; Set to -inf
mov eax, 0x3F80
mov [rel .mxcsr], eax
ldmxcsr [rel .mxcsr]

vroundpd xmm5,  [rdx], 00000100b
vroundpd ymm13, [rdx], 00000100b

; Set to +inf
mov eax, 0x5F80
mov [rel .mxcsr], eax
ldmxcsr [rel .mxcsr]

vroundpd xmm6,  [rdx], 00000100b
vroundpd ymm14, [rdx], 00000100b

; Set to truncate
mov eax, 0x7F80
mov [rel .mxcsr], eax
ldmxcsr [rel .mxcsr]

vroundpd xmm7,  [rdx], 00000100b
vroundpd ymm15, [rdx], 00000100b

hlt

align 32
.data:
dq 0.5, -0.5
dq 0.5, -0.5

.mxcsr:
dq 0, 0
