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
  char *v20; // edi
  unsigned int v21; // ebx
  char *v22; // ebp
  bool v23; // cc
  _DWORD v24[5]; // [esp+14h] [ebp-14h] BYREF

  v16 = (unsigned int)*(this + 1);
  v17 = 0;
  v24[4] = 0;
  if ( v16 )
    v18 = (int)&(*(this + 2))[-v16] / 0x34;
  else
    v18 = 0;
  if ( v18 < a2 )
  {
    if ( v16 )
      v17 = (int)&(*(this + 2))[-v16] / 0x34;
    v19 = *(this + 2);
    if ( v16 > (unsigned int)v19 )
      _invalid_parameter_noinfo();
    sub_6EEBC0(this, (int)this, v19, a2 - v17, &a3);
  }
  if ( v16 )
  {
    v20 = *(this + 2);
    if ( a2 < (int)&v20[-v16] / 0x34 )
    {
      if ( v16 > (unsigned int)v20 )
        _invalid_parameter_noinfo();
      v21 = (unsigned int)*(this + 1);
      if ( v21 > (unsigned int)*(this + 2) )
        _invalid_parameter_noinfo();
      v22 = (char *)(v21 + 0x34 * a2);
      v23 = v22 <= *(this + 2);
      v24[1] = v21;
      if ( !v23 || v22 < *(this + 1) )
        _invalid_parameter_noinfo();
      sub_6EEA10(this, v24, (int)this, v22, (int)this, v20);
    }
  }
  if ( a15 >= 0x10 )
    FormHeapFree(a10);
  a15 = 0xF;
  a14 = 0;
  LOBYTE(a10) = 0;
  if ( a6 )
    FormHeapFree(a6);
}
