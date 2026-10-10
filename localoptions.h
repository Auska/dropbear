/* 关闭所有转发、代理功能 */

/* 客户端/服务端 agent 转发 */
#define DROPBEAR_CLI_AGENTFWD 0
#define DROPBEAR_SVR_AGENTFWD 0
/* X11 转发(服务端) */
#define DROPBEAR_X11FWD 0
/* TCP 转发 */
#define DROPBEAR_CLI_LOCALTCPFWD 0
#define DROPBEAR_CLI_REMOTETCPFWD 0
#define DROPBEAR_SVR_LOCALTCPFWD 0
#define DROPBEAR_SVR_REMOTETCPFWD 0
/* streamlocal(Unix socket)转发(服务端) */
#define DROPBEAR_SVR_LOCALSTREAMFWD 0
#define DROPBEAR_SVR_REMOTESTREAMFWD 0
/* 客户端 -J 代理命令与 netcat 模式(两者关掉即禁用 multihop) */
#define DROPBEAR_CLI_PROXYCMD 0
#define DROPBEAR_CLI_NETCAT 0

/* 开启所有加密方式 */
#define DROPBEAR_3DES 1
#define DROPBEAR_ENABLE_CBC_MODE 1
#define DROPBEAR_ENABLE_GCM_MODE 1
/* SHA1 系:HMAC、RSA-SHA1 签名、DH group1/group14-sha1 */
#define DROPBEAR_SHA1_HMAC 1
#define DROPBEAR_SHA1_96_HMAC 1
#define DROPBEAR_RSA_SHA1 1
#define DROPBEAR_DH_GROUP14_SHA1 1
#define DROPBEAR_DH_GROUP1 1
/* DSS 密钥/签名(仅兼容老系统,固定 1024 位) */
#define DROPBEAR_DSS 1
/* 关闭抗量子混合 KEX */
#define DROPBEAR_SNTRUP761 0
#define DROPBEAR_MLKEM768 0
