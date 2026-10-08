struct threadlocaleinfostruct
{
int refcount;
unsigned int lc_codepage;
unsigned int lc_collate_cp;
unsigned int lc_handle[6];
LC_ID lc_id[6];
threadlocaleinfostruct::$F0551D0CB09E7A078CAEF7CAC43D74C7 lc_category[6];
int lc_clike;
int mb_cur_max;
int *lconv_intl_refcount;
int *lconv_num_refcount;
int *lconv_mon_refcount;
lconv *lconv;
int *ctype1_refcount;
unsigned __int16 *ctype1;
const unsigned __int16 *pctype;
const unsigned __int8 *pclmap;
const unsigned __int8 *pcumap;
__lc_time_data *lc_time_curr;
};
