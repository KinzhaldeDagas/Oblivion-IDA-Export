void __thiscall sub_6FEA60(unsigned __int16 *this, NiPoint3 *a2, NiPoint3 *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  float v7; // [esp+8h] [ebp-Ch]

  v4 = *(this + 0x31);
  if ( *(this + 0x31) )
  {
    v7 = (double)rand() / dbl_A3D5A8;
    v5 = (__int64)(v7 * (double)v4);
    if ( v5 == v4 )
      --v5;
    v6 = *(_DWORD *)(*((_DWORD *)this + 0x17) + 4 * v5);
  }
  else
  {
    v6 = 0;
  }
  if ( *((_DWORD *)this + 0x15) )
    sub_6FE3C0(this, v6, a2, a3);
  else
    sub_6FE5A0(v6, &a2->x, &a3->x);
}
