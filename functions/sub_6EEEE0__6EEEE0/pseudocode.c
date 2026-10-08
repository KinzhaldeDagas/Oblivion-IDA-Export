void __thiscall sub_6EEEE0(
        char **this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        unsigned int a15)
{
  unsigned int v16; // ecx
  int v17; // edi
  unsigned int v18; // eax
  char *v19; // ebx
  FaceGenMatrix *v20; // edi
  unsigned int v21; // ebx
  FaceGenMatrix *v22; // ebp
  bool v23; // cc
  _DWORD v24[5]; // [esp+14h] [ebp-14h] BYREF

  v16 = (unsigned int)*(this + 1); /*0x6eef09*/
  v17 = 0; /*0x6eef0c*/
  v24[4] = 0; /*0x6eef10*/
  if ( v16 ) /*0x6eef14*/
    v18 = (int)&(*(this + 2))[-v16] / 0x34; /*0x6eef2e*/
  else
    v18 = 0; /*0x6eef16*/
  if ( v18 < a2 ) /*0x6eef36*/
  {
    if ( v16 ) /*0x6eef3a*/
      v17 = (int)&(*(this + 2))[-v16] / 0x34; /*0x6eef50*/
    v19 = *(this + 2); /*0x6eef52*/
    if ( v16 > (unsigned int)v19 ) /*0x6eef57*/
      _invalid_parameter_noinfo(); /*0x6eef59*/
    sub_6EEBC0(this, (int)this, v19, a2 - v17, &a3); /*0x6eef6a*/
  }
  if ( v16 ) /*0x6eef73*/
  {
    v20 = (FaceGenMatrix *)*(this + 2); /*0x6eef75*/
    if ( a2 < (int)((int)v20 - v16) / 0x34 ) /*0x6eef8f*/
    {
      if ( v16 > (unsigned int)v20 ) /*0x6eef93*/
        _invalid_parameter_noinfo(); /*0x6eef95*/
      v21 = (unsigned int)*(this + 1); /*0x6eef9a*/
      if ( v21 > (unsigned int)*(this + 2) ) /*0x6eefa0*/
        _invalid_parameter_noinfo(); /*0x6eefa2*/
      v22 = (FaceGenMatrix *)(v21 + 0x34 * a2); /*0x6eefaa*/
      v23 = v22 <= (FaceGenMatrix *)*(this + 2); /*0x6eefac*/
      v24[1] = v21; /*0x6eefaf*/
      if ( !v23 || v22 < (FaceGenMatrix *)*(this + 1) ) /*0x6eefb8*/
        _invalid_parameter_noinfo(); /*0x6eefba*/
      sub_6EEA10(this, v24, (int)this, v22, (int)this, v20); /*0x6eefca*/
    }
  }
  if ( a15 >= 0x10 ) /*0x6eefd4*/
    FormHeapFree(a10); /*0x6eefdb*/
  a15 = 0xF; /*0x6eefe9*/
  a14 = 0; /*0x6eeff1*/
  LOBYTE(a10) = 0; /*0x6eeff9*/
  if ( a6 ) /*0x6eeffe*/
    FormHeapFree(a6); /*0x6ef001*/
}
