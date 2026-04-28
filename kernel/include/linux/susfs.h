#ifndef KSU_SUSFS_H
#define KSU_SUSFS_H

#include <linux/types.h>

// Dummy functions for SUSFS
static inline void susfs_add_sus_path(void __user *arg) {}
static inline void susfs_add_sus_path_loop(void __user *arg) {}
static inline void susfs_set_hide_sus_mnts_for_non_su_procs(void __user *arg) {}
static inline void susfs_add_sus_kstat(void __user *arg) {}
static inline void susfs_update_sus_kstat(void __user *arg) {}
static inline void susfs_set_uname(void __user *arg) {}
static inline void susfs_enable_log(void __user *arg) {}
static inline void susfs_set_cmdline_or_bootconfig(void __user *arg) {}
static inline void susfs_add_open_redirect(void __user *arg) {}
static inline void susfs_add_sus_map(void __user *arg) {}
static inline void susfs_set_avc_log_spoofing(void __user *arg) {}
static inline void susfs_get_enabled_features(void __user *arg) {}
static inline void susfs_show_variant(void __user *arg) {}
static inline void susfs_show_version(void __user *arg) {}

#endif
