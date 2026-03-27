void __thiscall sub_7A5F00(
        int *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        unsigned int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23)
{
  unsigned int v24; // ecx
  int v25; // edi
  unsigned int v26; // eax
  unsigned int v27; // ebp
  unsigned int v28; // edi
  unsigned int v29; // ebp
  unsigned int v30; // ebx
  bool v31; // cc
  _DWORD v32[5]; // [esp+14h] [ebp-14h] BYREF

  v24 = *(this + 1);
  v25 = 0;
  v32[4] = 0;
  if ( v24 )
    v26 = (int)(*(this + 2) - v24) / 0x54;
  else
    v26 = 0;
  if ( v26 < a2 )
  {
    if ( v24 )
      v25 = (int)(*(this + 2) - v24) / 0x54;
    v27 = *(this + 2);
    if ( v24 > v27 )
      _invalid_parameter_noinfo();
    sub_7A5C00(this, (int)this, v27, a2 - v25, (int)&a3);
  }
  if ( v24 )
  {
    v28 = *(this + 2);
    if ( a2 < (int)(v28 - v24) / 0x54 )
    {
      if ( v24 > v28 )
        _invalid_parameter_noinfo();
      v29 = *(this + 1);
      if ( v29 > *(this + 2) )
        _invalid_parameter_noinfo();
      v30 = v29 + 0x54 * a2;
      v31 = v30 <= *(this + 2);
      v32[1] = v29;
      if ( !v31 || v30 < *(this + 1) )
        _invalid_parameter_noinfo();
      sub_7A4B80(this, v32, (int)this, v30, (int)this, v28);
    }
  }
  if ( a14 >= 0x10 )
    FormHeapFree(a9);
}
