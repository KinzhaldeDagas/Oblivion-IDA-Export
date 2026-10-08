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

  v14 = (unsigned int)*(this + 1); /*0x6f3fe9*/
  v15 = 0; /*0x6f3fec*/
  v22[4] = 0; /*0x6f3ff0*/
  if ( v14 ) /*0x6f3ff4*/
    v16 = (int)&(*(this + 2))[-v14] / 0x2C; /*0x6f400e*/
  else
    v16 = 0; /*0x6f3ff6*/
  if ( v16 < a2 ) /*0x6f4016*/
  {
    if ( v14 ) /*0x6f401a*/
      v15 = (int)&(*(this + 2))[-v14] / 0x2C; /*0x6f4030*/
    v17 = *(this + 2); /*0x6f4032*/
    if ( v14 > (unsigned int)v17 ) /*0x6f4037*/
      _invalid_parameter_noinfo(); /*0x6f4039*/
    sub_6F3B50(this, (int)this, v17, a2 - v15, &a3); /*0x6f404a*/
  }
  if ( v14 ) /*0x6f4053*/
  {
    v18 = *(this + 2); /*0x6f4055*/
    if ( a2 < (int)&v18[-v14] / 0x2C ) /*0x6f406f*/
    {
      if ( v14 > (unsigned int)v18 ) /*0x6f4073*/
        _invalid_parameter_noinfo(); /*0x6f4075*/
      v19 = (unsigned int)*(this + 1); /*0x6f407a*/
      if ( v19 > (unsigned int)*(this + 2) ) /*0x6f4080*/
        _invalid_parameter_noinfo(); /*0x6f4082*/
      v20 = (char *)(v19 + 0x2C * a2); /*0x6f408a*/
      v21 = v20 <= *(this + 2); /*0x6f408c*/
      v22[1] = v19; /*0x6f408f*/
      if ( !v21 || v20 < *(this + 1) ) /*0x6f4098*/
        _invalid_parameter_noinfo(); /*0x6f409a*/
      sub_6F34D0(this, v22, (int)this, v20, (int)this, v18); /*0x6f40aa*/
    }
  }
  if ( a13 >= 0x10 ) /*0x6f40b4*/
    FormHeapFree(a8); /*0x6f40bb*/
}
