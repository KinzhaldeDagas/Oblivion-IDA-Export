void __thiscall sub_6EF920(
        int *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  unsigned int v19; // ecx
  int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  float *v23; // ebp
  unsigned int v24; // ebx
  float *v25; // edi
  bool v26; // cc
  _DWORD v27[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v28; // [esp+24h] [ebp-4h]

  v19 = *(this + 1); /*0x6ef949*/
  v20 = 0; /*0x6ef94c*/
  v28 = 0; /*0x6ef950*/
  if ( v19 ) /*0x6ef954*/
    v21 = (int)(*(this + 2) - v19) >> 6; /*0x6ef95f*/
  else
    v21 = 0; /*0x6ef956*/
  if ( v21 < a2 ) /*0x6ef968*/
  {
    if ( v19 ) /*0x6ef96c*/
      v20 = (int)(*(this + 2) - v19) >> 6; /*0x6ef973*/
    v22 = *(this + 2); /*0x6ef976*/
    if ( v19 > v22 ) /*0x6ef97b*/
      _invalid_parameter_noinfo(); /*0x6ef97d*/
    sub_6EF660(this, (int)this, v22, a2 - v20, (float *)&a3); /*0x6ef98e*/
  }
  if ( v19 ) /*0x6ef997*/
  {
    v23 = (float *)*(this + 2); /*0x6ef999*/
    if ( a2 < (int)((int)v23 - v19) >> 6 ) /*0x6ef9a5*/
    {
      if ( v19 > (unsigned int)v23 ) /*0x6ef9a9*/
        _invalid_parameter_noinfo(); /*0x6ef9ab*/
      v24 = *(this + 1); /*0x6ef9b0*/
      if ( v24 > *(this + 2) ) /*0x6ef9b6*/
        _invalid_parameter_noinfo(); /*0x6ef9b8*/
      v25 = (float *)(v24 + (a2 << 6)); /*0x6ef9c0*/
      v26 = (unsigned int)v25 <= *(this + 2); /*0x6ef9c2*/
      v27[1] = v24; /*0x6ef9c5*/
      if ( !v26 || (unsigned int)v25 < *(this + 1) ) /*0x6ef9ce*/
        _invalid_parameter_noinfo(); /*0x6ef9d0*/
      sub_5592A0(this, v27, (int)this, v25, (int)this, v23); /*0x6ef9e0*/
    }
  }
  v28 = 0xFFFFFFFF; /*0x6ef9f3*/
  _LN21(&a7, 0x10u, 3, (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0); /*0x6ef9fb*/
}
