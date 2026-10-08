void __thiscall sub_6FEA60(unsigned __int16 *this, NiPoint3 *a2, NiPoint3 *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  float v7; // [esp+8h] [ebp-Ch]

  v4 = *(this + 0x31); /*0x6fea67*/
  if ( *(this + 0x31) ) /*0x6fea67*/
  {
    v7 = (double)rand() / dbl_A3D5A8; /*0x6fea8a*/
    v5 = (__int64)(v7 * (double)v4); /*0x6feaba*/
    if ( v5 == v4 ) /*0x6feac4*/
      --v5; /*0x6feac6*/
    v6 = *(_DWORD *)(*((_DWORD *)this + 0x17) + 4 * v5); /*0x6feacc*/
  }
  else
  {
    v6 = 0; /*0x6fead1*/
  }
  if ( *((_DWORD *)this + 0x15) ) /*0x6fead3*/
    sub_6FE3C0(this, v6, a2, a3); /*0x6feae6*/
  else
    sub_6FE5A0(v6, &a2->x, &a3->x); /*0x6feaf3*/
}
