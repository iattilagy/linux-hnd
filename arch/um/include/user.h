/* 
 * Copyright (C) 2000 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __USER_H__
#define __USER_H__

extern void panic(const char *fmt, ...)
	__attribute__ ((format (printf, 1, 2)));
extern int printk(const char *fmt, ...)
	__attribute__ ((format (printf, 1, 2)));
extern void schedule(void);
extern int in_aton(char *str);
extern int open_gdb_chan(void);
/* These use size_t, however unsigned long is correct on both i386 and x86_64. */
extern unsigned long strlcpy(char *, const char *, unsigned long);
extern unsigned long strlcat(char *, const char *, unsigned long);

#endif

/*
 * Overrides for Emacs so that we follow Linus's tabbing style.
 * Emacs will notice this stuff at the end of the file and automatically
 * adjust the settings for this buffer only.  This must remain at the end
 * of the file.
 * ---------------------------------------------------------------------------
 * Local variables:
 * c-file-style: "linux"
 * End:
 */
