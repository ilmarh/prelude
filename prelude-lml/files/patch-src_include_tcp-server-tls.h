--- src/include/tcp-server-tls.h.orig	2016-09-01 19:14:41 UTC
+++ src/include/tcp-server-tls.h
@@ -9,7 +9,7 @@
 
 int tls_auth_global_init(void);
 
-int tls_auth_init(gnutls_certificate_credentials_t *cred, tcp_tls_config_t *tlsconf);
+int tls_auth_init_lml(gnutls_certificate_credentials_t *cred, tcp_tls_config_t *tlsconf);
 
 int tls_auth_client(tcp_client_t *client, int sock, gnutls_alert_description_t *alert, gnutls_certificate_credentials_t server_cred);
 
