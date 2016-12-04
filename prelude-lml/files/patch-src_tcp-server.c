--- src/tcp-server.c.orig	2016-09-01 19:14:33 UTC
+++ src/tcp-server.c
@@ -410,7 +410,7 @@ tcp_server_t *tcp_server_new(lml_log_sou
                 prelude_list_init(&server->trusted_fingerprint);
                 prelude_list_splice(&server->trusted_fingerprint, &tls_config->trusted_fingerprint);
 
-                ret = tls_auth_init(&server->cred, tls_config);
+                ret = tls_auth_init_lml(&server->cred, tls_config);
                 if ( ret < 0 ) {
                         close(sock);
                         free(server->addr);
