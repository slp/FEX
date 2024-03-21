// SPDX-License-Identifier: MIT
/*
$info$
tags: LinuxSyscalls|syscalls-arm64
$end_info$
*/
#pragma once
#include <cstdint>

namespace FEX::HLE::Arm64 {
///< Enum containing all Arm64 linux syscalls for the host kernel
enum Syscalls_Arm64 {
  SYSCALL_Arm64_io_setup = 0,
  SYSCALL_Arm64_io_destroy = 1,
  SYSCALL_Arm64_io_submit = 2,
  SYSCALL_Arm64_io_cancel = 3,
  SYSCALL_Arm64_io_getevents = 4,
  SYSCALL_Arm64_setxattr = 5,
  SYSCALL_Arm64_lsetxattr = 6,
  SYSCALL_Arm64_fsetxattr = 7,
  SYSCALL_Arm64_getxattr = 8,
  SYSCALL_Arm64_lgetxattr = 9,
  SYSCALL_Arm64_fgetxattr = 10,
  SYSCALL_Arm64_listxattr = 11,
  SYSCALL_Arm64_llistxattr = 12,
  SYSCALL_Arm64_flistxattr = 13,
  SYSCALL_Arm64_removexattr = 14,
  SYSCALL_Arm64_lremovexattr = 15,
  SYSCALL_Arm64_fremovexattr = 16,
  SYSCALL_Arm64_getcwd = 17,
  SYSCALL_Arm64_lookup_dcookie = 18,
  SYSCALL_Arm64_eventfd2 = 19,
  SYSCALL_Arm64_epoll_create1 = 20,
  SYSCALL_Arm64_epoll_ctl = 21,
  SYSCALL_Arm64_epoll_pwait = 22,
  SYSCALL_Arm64_dup = 23,
  SYSCALL_Arm64_dup3 = 24,
  SYSCALL_Arm64_fcntl = 25,
  SYSCALL_Arm64_inotify_init1 = 26,
  SYSCALL_Arm64_inotify_add_watch = 27,
  SYSCALL_Arm64_inotify_rm_watch = 28,
  SYSCALL_Arm64_ioctl = 29,
  SYSCALL_Arm64_ioprio_set = 30,
  SYSCALL_Arm64_ioprio_get = 31,
  SYSCALL_Arm64_flock = 32,
  SYSCALL_Arm64_mknodat = 33,
  SYSCALL_Arm64_mkdirat = 34,
  SYSCALL_Arm64_unlinkat = 35,
  SYSCALL_Arm64_symlinkat = 36,
  SYSCALL_Arm64_linkat = 37,
  SYSCALL_Arm64_renameat = 38,
  SYSCALL_Arm64_umount2 = 39,
  SYSCALL_Arm64_mount = 40,
  SYSCALL_Arm64_pivot_root = 41,
  SYSCALL_Arm64_nfsservctl = 42,
  SYSCALL_Arm64_statfs = 43,
  SYSCALL_Arm64_fstatfs = 44,
  SYSCALL_Arm64_truncate = 45,
  SYSCALL_Arm64_ftruncate = 46,
  SYSCALL_Arm64_fallocate = 47,
  SYSCALL_Arm64_faccessat = 48,
  SYSCALL_Arm64_chdir = 49,
  SYSCALL_Arm64_fchdir = 50,
  SYSCALL_Arm64_chroot = 51,
  SYSCALL_Arm64_fchmod = 52,
  SYSCALL_Arm64_fchmodat = 53,
  SYSCALL_Arm64_fchownat = 54,
  SYSCALL_Arm64_fchown = 55,
  SYSCALL_Arm64_openat = 56,
  SYSCALL_Arm64_close = 57,
  SYSCALL_Arm64_vhangup = 58,
  SYSCALL_Arm64_pipe2 = 59,
  SYSCALL_Arm64_quotactl = 60,
  SYSCALL_Arm64_getdents64 = 61,
  SYSCALL_Arm64_lseek = 62,
  SYSCALL_Arm64_read = 63,
  SYSCALL_Arm64_write = 64,
  SYSCALL_Arm64_readv = 65,
  SYSCALL_Arm64_writev = 66,
  SYSCALL_Arm64_pread_64 = 67,
  SYSCALL_Arm64_pwrite_64 = 68,
  SYSCALL_Arm64_preadv = 69,
  SYSCALL_Arm64_pwritev = 70,
  SYSCALL_Arm64_sendfile = 71,
  SYSCALL_Arm64_pselect6 = 72,
  SYSCALL_Arm64_ppoll = 73,
  SYSCALL_Arm64_signalfd4 = 74,
  SYSCALL_Arm64_vmsplice = 75,
  SYSCALL_Arm64_splice = 76,
  SYSCALL_Arm64_tee = 77,
  SYSCALL_Arm64_readlinkat = 78,
  SYSCALL_Arm64_fstatat = 79,
  SYSCALL_Arm64_fstat = 80,
  SYSCALL_Arm64_sync = 81,
  SYSCALL_Arm64_fsync = 82,
  SYSCALL_Arm64_fdatasync = 83,
  SYSCALL_Arm64_sync_file_range2 = 84,
  SYSCALL_Arm64_sync_file_range = 84,
  SYSCALL_Arm64_timerfd_create = 85,
  SYSCALL_Arm64_timerfd_settime = 86,
  SYSCALL_Arm64_timerfd_gettime = 87,
  SYSCALL_Arm64_utimensat = 88,
  SYSCALL_Arm64_acct = 89,
  SYSCALL_Arm64_capget = 90,
  SYSCALL_Arm64_capset = 91,
  SYSCALL_Arm64_personality = 92,
  SYSCALL_Arm64_exit = 93,
  SYSCALL_Arm64_exit_group = 94,
  SYSCALL_Arm64_waitid = 95,
  SYSCALL_Arm64_set_tid_address = 96,
  SYSCALL_Arm64_unshare = 97,
  SYSCALL_Arm64_futex = 98,
  SYSCALL_Arm64_set_robust_list = 99,
  SYSCALL_Arm64_get_robust_list = 100,
  SYSCALL_Arm64_nanosleep = 101,
  SYSCALL_Arm64_getitimer = 102,
  SYSCALL_Arm64_setitimer = 103,
  SYSCALL_Arm64_kexec_load = 104,
  SYSCALL_Arm64_init_module = 105,
  SYSCALL_Arm64_delete_module = 106,
  SYSCALL_Arm64_timer_create = 107,
  SYSCALL_Arm64_timer_gettime = 108,
  SYSCALL_Arm64_timer_getoverrun = 109,
  SYSCALL_Arm64_timer_settime = 110,
  SYSCALL_Arm64_timer_delete = 111,
  SYSCALL_Arm64_clock_settime = 112,
  SYSCALL_Arm64_clock_gettime = 113,
  SYSCALL_Arm64_clock_getres = 114,
  SYSCALL_Arm64_clock_nanosleep = 115,
  SYSCALL_Arm64_syslog = 116,
  SYSCALL_Arm64_ptrace = 117,
  SYSCALL_Arm64_sched_setparam = 118,
  SYSCALL_Arm64_sched_setscheduler = 119,
  SYSCALL_Arm64_sched_getscheduler = 120,
  SYSCALL_Arm64_sched_getparam = 121,
  SYSCALL_Arm64_sched_setaffinity = 122,
  SYSCALL_Arm64_sched_getaffinity = 123,
  SYSCALL_Arm64_sched_yield = 124,
  SYSCALL_Arm64_sched_get_priority_max = 125,
  SYSCALL_Arm64_sched_get_priority_min = 126,
  SYSCALL_Arm64_sched_rr_get_interval = 127,
  SYSCALL_Arm64_restart_syscall = 128,
  SYSCALL_Arm64_kill = 129,
  SYSCALL_Arm64_tkill = 130,
  SYSCALL_Arm64_tgkill = 131,
  SYSCALL_Arm64_sigaltstack = 132,
  SYSCALL_Arm64_rt_sigsuspend = 133,
  SYSCALL_Arm64_rt_sigaction = 134,
  SYSCALL_Arm64_rt_sigprocmask = 135,
  SYSCALL_Arm64_rt_sigpending = 136,
  SYSCALL_Arm64_rt_sigtimedwait = 137,
  SYSCALL_Arm64_rt_sigqueueinfo = 138,
  SYSCALL_Arm64_rt_sigreturn = 139,
  SYSCALL_Arm64_setpriority = 140,
  SYSCALL_Arm64_getpriority = 141,
  SYSCALL_Arm64_reboot = 142,
  SYSCALL_Arm64_setregid = 143,
  SYSCALL_Arm64_setgid = 144,
  SYSCALL_Arm64_setreuid = 145,
  SYSCALL_Arm64_setuid = 146,
  SYSCALL_Arm64_setresuid = 147,
  SYSCALL_Arm64_getresuid = 148,
  SYSCALL_Arm64_setresgid = 149,
  SYSCALL_Arm64_getresgid = 150,
  SYSCALL_Arm64_setfsuid = 151,
  SYSCALL_Arm64_setfsgid = 152,
  SYSCALL_Arm64_times = 153,
  SYSCALL_Arm64_setpgid = 154,
  SYSCALL_Arm64_getpgid = 155,
  SYSCALL_Arm64_getsid = 156,
  SYSCALL_Arm64_setsid = 157,
  SYSCALL_Arm64_getgroups = 158,
  SYSCALL_Arm64_setgroups = 159,
  SYSCALL_Arm64_uname = 160,
  SYSCALL_Arm64_sethostname = 161,
  SYSCALL_Arm64_setdomainname = 162,
  SYSCALL_Arm64_getrlimit = 163,
  SYSCALL_Arm64_setrlimit = 164,
  SYSCALL_Arm64_getrusage = 165,
  SYSCALL_Arm64_umask = 166,
  SYSCALL_Arm64_prctl = 167,
  SYSCALL_Arm64_getcpu = 168,
  SYSCALL_Arm64_gettimeofday = 169,
  SYSCALL_Arm64_settimeofday = 170,
  SYSCALL_Arm64_adjtimex = 171,
  SYSCALL_Arm64_getpid = 172,
  SYSCALL_Arm64_getppid = 173,
  SYSCALL_Arm64_getuid = 174,
  SYSCALL_Arm64_geteuid = 175,
  SYSCALL_Arm64_getgid = 176,
  SYSCALL_Arm64_getegid = 177,
  SYSCALL_Arm64_gettid = 178,
  SYSCALL_Arm64_sysinfo = 179,
  SYSCALL_Arm64_mq_open = 180,
  SYSCALL_Arm64_mq_unlink = 181,
  SYSCALL_Arm64_mq_timedsend = 182,
  SYSCALL_Arm64_mq_timedreceive = 183,
  SYSCALL_Arm64_mq_notify = 184,
  SYSCALL_Arm64_mq_getsetattr = 185,
  SYSCALL_Arm64_msgget = 186,
  SYSCALL_Arm64_msgctl = 187,
  SYSCALL_Arm64_msgrcv = 188,
  SYSCALL_Arm64_msgsnd = 189,
  SYSCALL_Arm64_semget = 190,
  SYSCALL_Arm64_semctl = 191,
  SYSCALL_Arm64_semtimedop = 192,
  SYSCALL_Arm64_semop = 193,
  SYSCALL_Arm64_shmget = 194,
  SYSCALL_Arm64_shmctl = 195,
  SYSCALL_Arm64_shmat = 196,
  SYSCALL_Arm64_shmdt = 197,
  SYSCALL_Arm64_socket = 198,
  SYSCALL_Arm64_socketpair = 199,
  SYSCALL_Arm64_bind = 200,
  SYSCALL_Arm64_listen = 201,
  SYSCALL_Arm64_accept = 202,
  SYSCALL_Arm64_connect = 203,
  SYSCALL_Arm64_getsockname = 204,
  SYSCALL_Arm64_getpeername = 205,
  SYSCALL_Arm64_sendto = 206,
  SYSCALL_Arm64_recvfrom = 207,
  SYSCALL_Arm64_setsockopt = 208,
  SYSCALL_Arm64_getsockopt = 209,
  SYSCALL_Arm64_shutdown = 210,
  SYSCALL_Arm64_sendmsg = 211,
  SYSCALL_Arm64_recvmsg = 212,
  SYSCALL_Arm64_readahead = 213,
  SYSCALL_Arm64_brk = 214,
  SYSCALL_Arm64_munmap = 215,
  SYSCALL_Arm64_mremap = 216,
  SYSCALL_Arm64_add_key = 217,
  SYSCALL_Arm64_request_key = 218,
  SYSCALL_Arm64_keyctl = 219,
  SYSCALL_Arm64_clone = 220,
  SYSCALL_Arm64_execve = 221,
  SYSCALL_Arm64_mmap = 222,
  SYSCALL_Arm64_fadvise64 = 223,
  SYSCALL_Arm64_swapon = 224,
  SYSCALL_Arm64_swapoff = 225,
  SYSCALL_Arm64_mprotect = 226,
  SYSCALL_Arm64_msync = 227,
  SYSCALL_Arm64_mlock = 228,
  SYSCALL_Arm64_munlock = 229,
  SYSCALL_Arm64_mlockall = 230,
  SYSCALL_Arm64_munlockall = 231,
  SYSCALL_Arm64_mincore = 232,
  SYSCALL_Arm64_madvise = 233,
  SYSCALL_Arm64_remap_file_pages = 234,
  SYSCALL_Arm64_mbind = 235,
  SYSCALL_Arm64_get_mempolicy = 236,
  SYSCALL_Arm64_set_mempolicy = 237,
  SYSCALL_Arm64_migrate_pages = 238,
  SYSCALL_Arm64_move_pages = 239,
  SYSCALL_Arm64_rt_tgsigqueueinfo = 240,
  SYSCALL_Arm64_perf_event_open = 241,
  SYSCALL_Arm64_accept4 = 242,
  SYSCALL_Arm64_recvmmsg = 243,
  SYSCALL_Arm64_wait4 = 260,
  SYSCALL_Arm64_prlimit_64 = 261,
  SYSCALL_Arm64_fanotify_init = 262,
  SYSCALL_Arm64_fanotify_mark = 263,
  SYSCALL_Arm64_name_to_handle_at = 264,
  SYSCALL_Arm64_open_by_handle_at = 265,
  SYSCALL_Arm64_clock_adjtime = 266,
  SYSCALL_Arm64_syncfs = 267,
  SYSCALL_Arm64_setns = 268,
  SYSCALL_Arm64_sendmmsg = 269,
  SYSCALL_Arm64_process_vm_readv = 270,
  SYSCALL_Arm64_process_vm_writev = 271,
  SYSCALL_Arm64_kcmp = 272,
  SYSCALL_Arm64_finit_module = 273,
  SYSCALL_Arm64_sched_setattr = 274,
  SYSCALL_Arm64_sched_getattr = 275,
  SYSCALL_Arm64_renameat2 = 276,
  SYSCALL_Arm64_seccomp = 277,
  SYSCALL_Arm64_getrandom = 278,
  SYSCALL_Arm64_memfd_create = 279,
  SYSCALL_Arm64_bpf = 280,
  SYSCALL_Arm64_execveat = 281,
  SYSCALL_Arm64_userfaultfd = 282,
  SYSCALL_Arm64_membarrier = 283,
  SYSCALL_Arm64_mlock2 = 284,
  SYSCALL_Arm64_copy_file_range = 285,
  SYSCALL_Arm64_preadv2 = 286,
  SYSCALL_Arm64_pwritev2 = 287,
  SYSCALL_Arm64_pkey_mprotect = 288,
  SYSCALL_Arm64_pkey_alloc = 289,
  SYSCALL_Arm64_pkey_free = 290,
  SYSCALL_Arm64_statx = 291,
  SYSCALL_Arm64_io_pgetevents = 292,
  SYSCALL_Arm64_rseq = 293,
  SYSCALL_Arm64_kexec_file_load = 294,
  SYSCALL_Arm64_clock_gettime64 = 403,
  SYSCALL_Arm64_clock_settime64 = 404,
  SYSCALL_Arm64_clock_adjtime64 = 405,
  SYSCALL_Arm64_clock_getres_time64 = 406,
  SYSCALL_Arm64_clock_nanosleep_time64 = 407,
  SYSCALL_Arm64_timer_gettime64 = 408,
  SYSCALL_Arm64_timer_settime64 = 409,
  SYSCALL_Arm64_timerfd_gettime64 = 410,
  SYSCALL_Arm64_timerfd_settime64 = 411,
  SYSCALL_Arm64_utimensat_time64 = 412,
  SYSCALL_Arm64_pselect6_time64 = 413,
  SYSCALL_Arm64_ppoll_time64 = 414,
  SYSCALL_Arm64_io_pgetevents_time64 = 416,
  SYSCALL_Arm64_recvmmsg_time64 = 417,
  SYSCALL_Arm64_mq_timedsend_time64 = 418,
  SYSCALL_Arm64_mq_timedreceive_time64 = 419,
  SYSCALL_Arm64_semtimedop_time64 = 420,
  SYSCALL_Arm64_rt_sigtimedwait_time64 = 421,
  SYSCALL_Arm64_futex_time64 = 422,
  SYSCALL_Arm64_sched_rr_get_interval_time64 = 423,
  SYSCALL_Arm64_pidfd_send_signal = 424,
  SYSCALL_Arm64_io_uring_setup = 425,
  SYSCALL_Arm64_io_uring_enter = 426,
  SYSCALL_Arm64_io_uring_register = 427,
  SYSCALL_Arm64_open_tree = 428,
  SYSCALL_Arm64_move_mount = 429,
  SYSCALL_Arm64_fsopen = 430,
  SYSCALL_Arm64_fsconfig = 431,
  SYSCALL_Arm64_fsmount = 432,
  SYSCALL_Arm64_fspick = 433,
  SYSCALL_Arm64_pidfd_open = 434,
  SYSCALL_Arm64_clone3 = 435,
  SYSCALL_Arm64_close_range = 436,
  SYSCALL_Arm64_openat2 = 437,
  SYSCALL_Arm64_pidfd_getfd = 438,
  SYSCALL_Arm64_faccessat2 = 439,
  SYSCALL_Arm64_process_madvise = 440,
  SYSCALL_Arm64_epoll_pwait2 = 441,
  SYSCALL_Arm64_mount_setattr = 442,
  SYSCALL_Arm64_quotactl_fd = 443,
  SYSCALL_Arm64_landlock_create_ruleset = 444,
  SYSCALL_Arm64_landlock_add_rule = 445,
  SYSCALL_Arm64_landlock_restrict_self = 446,
  SYSCALL_Arm64_memfd_secret = 447,
  SYSCALL_Arm64_process_mrelease = 448,
  SYSCALL_Arm64_futex_waitv = 449,
  SYSCALL_Arm64_set_mempolicy_home_node = 450,
  SYSCALL_Arm64_cachestat = 451,
  SYSCALL_Arm64_fchmodat2 = 452,
  SYSCALL_Arm64_map_shadow_stack = 453,
  SYSCALL_Arm64_futex_wake = 454,
  SYSCALL_Arm64_futex_wait = 455,
  SYSCALL_Arm64_futex_requeue = 456,
  SYSCALL_Arm64_statmount = 457,
  SYSCALL_Arm64_listmount = 458,
  SYSCALL_Arm64_lsm_get_self_attr = 459,
  SYSCALL_Arm64_lsm_set_self_attr = 460,
  SYSCALL_Arm64_lsm_list_modules = 461,
  SYSCALL_Arm64_MAX = 512,

  // Unsupported syscalls on this host
  SYSCALL_Arm64_fork = ~0,
  SYSCALL_Arm64_open = ~0,
  SYSCALL_Arm64_waitpid = ~0,
  SYSCALL_Arm64_creat = ~0,
  SYSCALL_Arm64_link = ~0,
  SYSCALL_Arm64_unlink = ~0,
  SYSCALL_Arm64_time = ~0,
  SYSCALL_Arm64_mknod = ~0,
  SYSCALL_Arm64_chmod = ~0,
  SYSCALL_Arm64_lchown = ~0,
  SYSCALL_Arm64_break = ~0,
  SYSCALL_Arm64_oldstat = ~0,
  SYSCALL_Arm64_umount = ~0,
  SYSCALL_Arm64_stime = ~0,
  SYSCALL_Arm64_alarm = ~0,
  SYSCALL_Arm64_oldfstat = ~0,
  SYSCALL_Arm64_pause = ~0,
  SYSCALL_Arm64_utime = ~0,
  SYSCALL_Arm64_stty = ~0,
  SYSCALL_Arm64_gtty = ~0,
  SYSCALL_Arm64_access = ~0,
  SYSCALL_Arm64_nice = ~0,
  SYSCALL_Arm64_ftime = ~0,
  SYSCALL_Arm64_rename = ~0,
  SYSCALL_Arm64_mkdir = ~0,
  SYSCALL_Arm64_rmdir = ~0,
  SYSCALL_Arm64_pipe = ~0,
  SYSCALL_Arm64_prof = ~0,
  SYSCALL_Arm64_signal = ~0,
  SYSCALL_Arm64_lock = ~0,
  SYSCALL_Arm64_mpx = ~0,
  SYSCALL_Arm64_ulimit = ~0,
  SYSCALL_Arm64_oldolduname = ~0,
  SYSCALL_Arm64_ustat = ~0,
  SYSCALL_Arm64_dup2 = ~0,
  SYSCALL_Arm64_getpgrp = ~0,
  SYSCALL_Arm64_sigaction = ~0,
  SYSCALL_Arm64_sgetmask = ~0,
  SYSCALL_Arm64_ssetmask = ~0,
  SYSCALL_Arm64_sigsuspend = ~0,
  SYSCALL_Arm64_sigpending = ~0,
  SYSCALL_Arm64_select = ~0,
  SYSCALL_Arm64_symlink = ~0,
  SYSCALL_Arm64_oldlstat = ~0,
  SYSCALL_Arm64_readlink = ~0,
  SYSCALL_Arm64_uselib = ~0,
  SYSCALL_Arm64_readdir = ~0,
  SYSCALL_Arm64_profil = ~0,
  SYSCALL_Arm64_ioperm = ~0,
  SYSCALL_Arm64_socketcall = ~0,
  SYSCALL_Arm64_stat = ~0,
  SYSCALL_Arm64_lstat = ~0,
  SYSCALL_Arm64_olduname = ~0,
  SYSCALL_Arm64_iopl = ~0,
  SYSCALL_Arm64_idle = ~0,
  SYSCALL_Arm64_vm86old = ~0,
  SYSCALL_Arm64_ipc = ~0,
  SYSCALL_Arm64_sigreturn = ~0,
  SYSCALL_Arm64_modify_ldt = ~0,
  SYSCALL_Arm64_sigprocmask = ~0,
  SYSCALL_Arm64_create_module = ~0,
  SYSCALL_Arm64_get_kernel_syms = ~0,
  SYSCALL_Arm64_bdflush = ~0,
  SYSCALL_Arm64_sysfs = ~0,
  SYSCALL_Arm64_afs_syscall = ~0,
  SYSCALL_Arm64__llseek = ~0,
  SYSCALL_Arm64_getdents = ~0,
  SYSCALL_Arm64__newselect = ~0,
  SYSCALL_Arm64__sysctl = ~0,
  SYSCALL_Arm64_vm86 = ~0,
  SYSCALL_Arm64_query_module = ~0,
  SYSCALL_Arm64_poll = ~0,
  SYSCALL_Arm64_chown = ~0,
  SYSCALL_Arm64_getpmsg = ~0,
  SYSCALL_Arm64_putpmsg = ~0,
  SYSCALL_Arm64_vfork = ~0,
  SYSCALL_Arm64_ugetrlimit = ~0,
  SYSCALL_Arm64_mmap2 = ~0,
  SYSCALL_Arm64_truncate64 = ~0,
  SYSCALL_Arm64_ftruncate64 = ~0,
  SYSCALL_Arm64_stat64 = ~0,
  SYSCALL_Arm64_lstat64 = ~0,
  SYSCALL_Arm64_fstat64 = ~0,
  SYSCALL_Arm64_lchown32 = ~0,
  SYSCALL_Arm64_getuid32 = ~0,
  SYSCALL_Arm64_getgid32 = ~0,
  SYSCALL_Arm64_geteuid32 = ~0,
  SYSCALL_Arm64_getegid32 = ~0,
  SYSCALL_Arm64_setreuid32 = ~0,
  SYSCALL_Arm64_setregid32 = ~0,
  SYSCALL_Arm64_getgroups32 = ~0,
  SYSCALL_Arm64_setgroups32 = ~0,
  SYSCALL_Arm64_fchown32 = ~0,
  SYSCALL_Arm64_setresuid32 = ~0,
  SYSCALL_Arm64_getresuid32 = ~0,
  SYSCALL_Arm64_setresgid32 = ~0,
  SYSCALL_Arm64_getresgid32 = ~0,
  SYSCALL_Arm64_chown32 = ~0,
  SYSCALL_Arm64_setuid32 = ~0,
  SYSCALL_Arm64_setgid32 = ~0,
  SYSCALL_Arm64_setfsuid32 = ~0,
  SYSCALL_Arm64_setfsgid32 = ~0,
  SYSCALL_Arm64_fcntl64 = ~0,
  SYSCALL_Arm64_sendfile64 = ~0,
  SYSCALL_Arm64_set_thread_area = ~0,
  SYSCALL_Arm64_get_thread_area = ~0,
  SYSCALL_Arm64_epoll_create = ~0,
  SYSCALL_Arm64_epoll_wait = ~0,
  SYSCALL_Arm64_statfs64 = ~0,
  SYSCALL_Arm64_fstatfs64 = ~0,
  SYSCALL_Arm64_utimes = ~0,
  SYSCALL_Arm64_fadvise64_64 = ~0,
  SYSCALL_Arm64_vserver = ~0,
  SYSCALL_Arm64_inotify_init = ~0,
  SYSCALL_Arm64_futimesat = ~0,
  SYSCALL_Arm64_fstatat_64 = ~0,
  SYSCALL_Arm64_signalfd = ~0,
  SYSCALL_Arm64_eventfd = ~0,
  SYSCALL_Arm64_arch_prctl = ~0,
  SYSCALL_Arm64_tuxcall = ~0,
  SYSCALL_Arm64_security = ~0,
  SYSCALL_Arm64_epoll_ctl_old = ~0,
  SYSCALL_Arm64_epoll_wait_old = ~0,
  SYSCALL_Arm64_newfstatat = ~0,
};
}
