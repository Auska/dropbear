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
