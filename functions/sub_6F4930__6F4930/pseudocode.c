void __thiscall sub_6F4930(
        char **this,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13,
        int a14)
{
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // edi
  char *v18; // ebp
  char *v19; // edi
  unsigned int v20; // ebp
  char *v21; // ebx
  bool v22; // cc
  _DWORD v23[5]; // [esp+14h] [ebp-14h] BYREF

  v15 = (unsigned int)*(this + 1);
  v23[4] = 0;
  if ( v15 )
    v16 = (int)&(*(this + 2))[-v15] / 0x30;
  else
    v16 = 0;
  if ( v16 < a2 )
  {
    if ( v15 )
      v17 = (int)&(*(this + 2))[-v15] / 0x30;
    else
      v17 = 0;
    v18 = *(this + 2);
    if ( v15 > (unsigned int)v18 )
      _invalid_parameter_noinfo();
    sub_6F44D0(this, (int)this, v18, a2 - v17, &a3);
  }
  if ( v15 )
  {
    v19 = *(this + 2);
    if ( a2 < (int)&v19[-v15] / 0x30 )
    {
      if ( v15 > (unsigned int)v19 )
        _invalid_parameter_noinfo();
      v20 = (unsigned int)*(this + 1);
      if ( v20 > (unsigned int)*(this + 2) )
        _invalid_parameter_noinfo();
      v21 = (char *)(0x30 * a2 + v20);
      v22 = v21 <= *(this + 2);
      v23[1] = v20;
      if ( !v22 || v21 < *(this + 1) )
        _invalid_parameter_noinfo();
      sub_6F3830(this, v23, (int)this, v21, (int)this, v19);
    }
  }
  if ( a12 )
    FormHeapFree(a12);
  a12 = 0;
  a13 = 0;
  a14 = 0;
  if ( a9 >= 0x10 )
    FormHeapFree(a4);
}
