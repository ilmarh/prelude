--- src/tcp-server-tls.c.orig	2016-09-01 19:14:27 UTC
+++ src/tcp-server-tls.c
@@ -558,7 +558,7 @@ int tls_auth_client(tcp_client_t *client
 
 
 
-int tls_auth_init(gnutls_certificate_credentials_t *cred, tcp_tls_config_t *tlsconf)
+int tls_auth_init_lml(gnutls_certificate_credentials_t *cred, tcp_tls_config_t *tlsconf)
 {
         int ret;
 
