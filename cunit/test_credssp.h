
#include "test_freerdp.h"

int init_credssp_suite(void);
int clean_credssp_suite(void);
int add_credssp_suite(void);

void test_credssp_ntlm_hash(void);
void test_credssp_ntlm_v2_hash(void);
void test_credssp_lm_response(void);
void test_credssp_lm_v2_response(void);
void test_credssp_ntlm_v2_response(void);
