#include <regex.h>
#include <u/libu.h>

int facility = LOG_LOCAL0;

int main (int ac, char *av[])
{
    u_uri_t *u = NULL;

    con_err_ifm (ac != 2, "uuri <uri string>");

    con_err_if (u_uri_parse(av[1], &u));
    u_uri_print(u);
    u_uri_free(u);

    return 0;
err:
    if (u)
        u_uri_free(u);
    return 1;
}
