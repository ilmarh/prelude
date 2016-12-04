# prelude
Prelude SIEM (https://www.prelude-siem.org/) v.3.1.0 FreeBSD 11 port

The work is not finished because it appeared to be useless for me.
I was seeking for BASE replacement for snort alerts view, but decided, that BASE is better than prelude/prewikka
In order to make it work one has to hack some things, fo example, the problem with barnyard2 configure is not solved.
It can't find prelude, so one has to insert #define statement in config.h and add prelude path and lib in generated file manually.
There are some other issues, but i will not solve them (with libprelude bindings if i recall correctly)
