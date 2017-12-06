#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x3a29a7c3, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xe62abf2c, "i2c_master_send" },
	{ 0xceb6e104, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x383e8a27, "gpio_request_ex" },
	{ 0xf9a482f9, "msleep" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x5a72259b, "i2c_smbus_read_byte_data" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x61772329, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x55f80b49, "i2c_del_driver" },
	{ 0x88caf95, "i2c_transfer" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xd4961721, "device_destroy" },
	{ 0x33543801, "queue_work" },
	{ 0xd4bbf3a1, "__register_chrdev" },
	{ 0xe066614e, "filp_close" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8c4bfe7b, "i2c_put_adapter" },
	{ 0x91715312, "sprintf" },
	{ 0x343a1a8, "__list_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3aaa5c48, "input_set_abs_params" },
	{ 0xc1018999, "input_event" },
	{ 0xa0c40efc, "vfs_read" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x83f5ad70, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x328a05f1, "strncpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8198b6b6, "device_create" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x344a50ed, "gpio_release" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdd361e00, "i2c_register_driver" },
	{ 0xd0a252e3, "gpio_get_one_pin_status" },
	{ 0x2be241de, "kmem_cache_alloc" },
	{ 0x59331f90, "input_register_device" },
	{ 0x51828018, "input_free_device" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x556262a4, "i2c_master_recv" },
	{ 0xa5ae9652, "script_parser_fetch_ex" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x394920e9, "input_unregister_device" },
	{ 0xf9f7fcfd, "class_destroy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x377b5534, "i2c_get_adapter" },
	{ 0x21de05d8, "__class_create" },
	{ 0xfcebbaee, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7e053424, "filp_open" },
	{ 0x8bb140b8, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ft5x_ts");

MODULE_INFO(srcversion, "B244F08472280376FAC173E");
