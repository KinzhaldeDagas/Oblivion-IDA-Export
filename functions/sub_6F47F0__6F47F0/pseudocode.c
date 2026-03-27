void __thiscall sub_6F47F0(
        int *this,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        unsigned int a11,
        int a12,
        int a13)
{
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // edi
  char *v17; // ebp
  unsigned int v18; // edi
  unsigned int v19; // ebp
  unsigned int v20; // ebx
  bool v21; // cc
  _DWORD v22[5]; // [esp+14h] [ebp-14h] BYREF

  v14 = *(this + 1);
  v22[4] = 0;
  if ( v14 )
    v15 = (int)(*(this + 2) - v14) / 0x2C;
  else
    v15 = 0;
  if ( v15 < a2 )
  {
    if ( v14 )
      v16 = (int)(*(this + 2) - v14) / 0x2C;
    else
      v16 = 0;
    v17 = (char *)*(this + 2);
    if ( v14 > (unsigned int)v17 )
      _invalid_parameter_noinfo();
    sub_6F41C0(this, (int)this, v17, a2 - v16, &a3);
  }
  if ( v14 )
  {
    v18 = *(this + 2);
    if ( a2 < (int)(v18 - v14) / 0x2C )
    {
      if ( v14 > v18 )
        _invalid_parameter_noinfo();
      v19 = *(this + 1);
      if ( v19 > *(this + 2) )
        _invalid_parameter_noinfo();
      v20 = v19 + 0x2C * a2;
      v21 = v20 <= *(this + 2);
      v22[1] = v19;
      if ( !v21 || v20 < *(this + 1) )
        _invalid_parameter_noinfo();
      sub_6F37D0(this, v22, (int)this, v20, (int)this, v18);
    }
  }
  if ( a11 )
    FormHeapFree(a11);
  a11 = 0;
  a12 = 0;
  a13 = 0;
  if ( a9 >= 0x10 )
    FormHeapFree(a4);
}
