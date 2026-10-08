void __thiscall sub_6F08E0(int *this, unsigned int a2, int a3, int a4, unsigned int a5, int a6, int a7)
{
  unsigned int v8; // ecx
  int v9; // edi
  unsigned int v10; // eax
  float *v11; // ebp
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // ebx
  bool v15; // cc
  _DWORD v16[5]; // [esp+14h] [ebp-14h] BYREF

  v8 = *(this + 1); /*0x6f0909*/
  v9 = 0; /*0x6f090c*/
  v16[4] = 0; /*0x6f0910*/
  if ( v8 ) /*0x6f0914*/
    v10 = (int)(*(this + 2) - v8) / 0x14; /*0x6f092e*/
  else
    v10 = 0; /*0x6f0916*/
  if ( v10 < a2 ) /*0x6f0936*/
  {
    if ( v8 ) /*0x6f093a*/
      v9 = (int)(*(this + 2) - v8) / 0x14; /*0x6f0950*/
    v11 = (float *)*(this + 2); /*0x6f0952*/
    if ( v8 > (unsigned int)v11 ) /*0x6f0957*/
      _invalid_parameter_noinfo(); /*0x6f0959*/
    sub_6F05C0(this, (int)this, v11, a2 - v9, (float *)&a3); /*0x6f096a*/
  }
  if ( v8 ) /*0x6f0973*/
  {
    v12 = *(this + 2); /*0x6f0975*/
    if ( a2 < (int)(v12 - v8) / 0x14 ) /*0x6f098f*/
    {
      if ( v8 > v12 ) /*0x6f0993*/
        _invalid_parameter_noinfo(); /*0x6f0995*/
      v13 = *(this + 1); /*0x6f099a*/
      if ( v13 > *(this + 2) ) /*0x6f09a0*/
        _invalid_parameter_noinfo(); /*0x6f09a2*/
      v14 = v13 + 0x14 * a2; /*0x6f09aa*/
      v15 = v14 <= *(this + 2); /*0x6f09ae*/
      v16[1] = v13; /*0x6f09b1*/
      if ( !v15 || v14 < *(this + 1) ) /*0x6f09ba*/
        _invalid_parameter_noinfo(); /*0x6f09bc*/
      sub_559240(this, v16, (int)this, v14, (int)this, v12); /*0x6f09cc*/
    }
  }
  if ( a5 ) /*0x6f09d7*/
    FormHeapFree(a5); /*0x6f09da*/
}
