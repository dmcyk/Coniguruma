#include <oniguruma.h>

extern int onig_error_code_to_str_info(OnigUChar* s, int err_code,OnigErrorInfo* inf) {
    return onig_error_code_to_str(s, err_code, inf);
}

extern int onig_error_code_to_str_raw(OnigUChar* s, int err_code) {
    return onig_error_code_to_str(s, err_code);
}
