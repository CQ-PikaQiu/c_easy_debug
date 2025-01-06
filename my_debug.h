#ifndef __my_debug_h_
#define __my_debug_h_



#ifdef DBG_TAG 
    #define DBG_NAME   DBG_TAG
#else
    #define DBG_NAME   unkonw
#endif // DBG_TAG


/*
 * The color for terminal (foreground)
 * BLACK    30
 * RED      31
 * GREEN    32
 * YELLOW   33
 * BLUE     34
 * PURPLE   35
 * CYAN     36
 * WHITE    37
 */



#define LOG_E(fmt, ...)   do \
{ \
    printf("\033[31m [ %s ] FUNCTION: [%s] LINE: [%d] : ", DBG_NAME, __FUNCTION__, __LINE__); \
    printf(fmt, ##__VA_ARGS__); \
    printf("\033[0m\n");    \
} while (0); 

#define LOG_I(fmt, ...)   do \
{ \
    printf("\033[32m [ %s ] FUNCTION: [%s] LINE: [%d] : ", DBG_NAME, __FUNCTION__, __LINE__); \
    printf(fmt, ##__VA_ARGS__); \
    printf("\033[0m\n");    \
} while (0); 

#define LOG_W(fmt, ...)   do \
{ \
    printf("\033[33m [ %s ] FUNCTION: [%s] LINE: [%d] : ", DBG_NAME, __FUNCTION__, __LINE__); \
    printf(fmt, ##__VA_ARGS__); \
    printf("\033[0m\n");    \
} while (0); 

#define LOG_D(fmt, ...)   do \
{ \
    printf("\033[36m [ %s ] FUNCTION: [%s] LINE: [%d] : ", DBG_NAME, __FUNCTION__, __LINE__); \
    printf(fmt, ##__VA_ARGS__); \
    printf("\033[0m\n");    \
} while (0); 


#define LOG_RAW(fmt, ...)   do \
{ \
    printf(fmt, ##__VA_ARGS__); \
} while (0); 


#define log_e(fmt, ...)     LOG_E(fmt, ##__VA_ARGS__)
#define log_i(fmt, ...)     LOG_I(fmt, ##__VA_ARGS__)
#define log_w(fmt, ...)     LOG_W(fmt, ##__VA_ARGS__)
#define log_d(fmt, ...)     LOG_D(fmt, ##__VA_ARGS__)
#define log_raw(fmt, ...)   LOG_RAW(fmt, ##__VA_ARGS__)

#endif // __my_debug_h_