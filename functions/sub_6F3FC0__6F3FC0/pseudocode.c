void __thiscall sub_6F3FC0(
        char **this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13)
{
  unsigned int v14; // ecx
  int v15; // edi
  unsigned int v16; // eax
  char *v17; // ebp
  char *v18; // edi
  unsigned int v19; // ebp
  char *v20; // ebx
  bool v21; // cc
  _DWORD v22[5]; // [esp+14h] [ebp-14h] BYREF

  v14 = (unsigned int)*(this + 1);
  v15 = 0;
  v22[4] = 0;
  if ( v14 )
    v16 = (int)&(*(this + 2))[-v14] / 0x2C;
  else
    v16 = 0;
  if ( v16 < a2 )
  {
    if ( v14 )
      v15 = (int)&(*(this + 2))[-v14] / 0x2C;
    v17 = *(this + 2);
    if ( v14 > (unsigned int)v17 )
      _invalid_parameter_noinfo();
    sub_6F3B50(this, (int)this, v17, a2 - v15, &a3);
  }
  if ( v14 )
  {
    v18 = *(this + 2);
    if ( a2 < (int)&v18[-v14] / 0x2C )
    {
      if ( v14 > (unsigned int)v18 )
        _invalid_parameter_noinfo();
      v19 = (unsigned int)*(this + 1);
      if ( v19 > (unsigned int)*(this + 2) )
        _invalid_parameter_noinfo();
      v20 = (char *)(v19 + 0x2C * a2);
      v21 = v20 <= *(this + 2);
      v22[1] = v19;
      if ( !v21 || v20 < *(this + 1) )
        _invalid_parameter_noinfo();
      sub_6F34D0(this, v22, (int)this, v20, (int)this, v18);
    }
  }
  if ( a13 >= 0x10 )
    FormHeapFree(a8);
}
