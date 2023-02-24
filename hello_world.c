#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("DANIYAR-ASEL-DANA-NURMUKHAMMED-ZHADYRA");
MODULE_DESCRIPTION("KERNEL MODULE");
MODULE_VERSION("1.0");

int __init init_module(void)
{
	printk(KERN_INFO "Hello, AITU!\n");
	return 0;
}

void __exit cleanup_module(void)
{
	printk(KERN_INFO "Goodbye AITU!\n");
}

module_init(init_module);
module_exit(cleanup_module);
