void __thiscall sub_6F3ED0(
        char **this,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  unsigned int v11; // ecx
  int v12; // ebx
  unsigned int v13; // eax
  char *v14; // ebp
  char *v15; // ebp
  unsigned int v16; // ebx
  char *v17; // edi
  bool v18; // cc
  _DWORD v19[5]; // [esp+14h] [ebp-14h] BYREF

  v11 = (unsigned int)*(this + 1);
  v12 = 0;
  v19[4] = 0;
  if ( v11 )
    v13 = (int)&(*(this + 2))[-v11] >> 5;
  else
    v13 = 0;
  if ( v13 < a2 )
  {
    if ( v11 )
      v12 = (int)&(*(this + 2))[-v11] >> 5;
    v14 = *(this + 2);
    if ( v11 > (unsigned int)v14 )
      _invalid_parameter_noinfo();
    sub_6F38A0(this, (int)this, v14, a2 - v12, &a3);
  }
  if ( v11 )
  {
    v15 = *(this + 2);
    if ( a2 < (int)&v15[-v11] >> 5 )
    {
      if ( v11 > (unsigned int)v15 )
        _invalid_parameter_noinfo();
      v16 = (unsigned int)*(this + 1);
      if ( v16 > (unsigned int)*(this + 2) )
        _invalid_parameter_noinfo();
      v17 = (char *)(v16 + 0x20 * a2);
      v18 = v17 <= *(this + 2);
      v19[1] = v16;
      if ( !v18 || v17 < *(this + 1) )
        _invalid_parameter_noinfo();
      sub_6F3470(this, v19, (int)this, v17, (int)this, v15);
    }
  }
  if ( a10 >= 0x10 )
    FormHeapFree(a5);
}
