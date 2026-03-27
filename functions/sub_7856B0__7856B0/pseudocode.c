void __thiscall sub_7856B0(char **this, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v9; // ecx
  int v10; // edi
  unsigned int v11; // eax
  char *v12; // ebp
  char *v13; // edi
  unsigned int v14; // ebp
  char *v15; // ebx
  bool v16; // cc
  int v17[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v18; // [esp+24h] [ebp-4h]

  v9 = (unsigned int)*(this + 1);
  v10 = 0;
  v18 = 0;
  if ( v9 )
    v11 = (int)&(*(this + 2))[-v9] / 0x18;
  else
    v11 = 0;
  if ( v11 < a2 )
  {
    if ( v9 )
      v10 = (int)&(*(this + 2))[-v9] / 0x18;
    v12 = *(this + 2);
    if ( v9 > (unsigned int)v12 )
      _invalid_parameter_noinfo();
    sub_785050((int)this, (int)this, v12, a2 - v10, &a3);
  }
  if ( v9 )
  {
    v13 = *(this + 2);
    if ( a2 < (int)&v13[-v9] / 0x18 )
    {
      if ( v9 > (unsigned int)v13 )
        _invalid_parameter_noinfo();
      v14 = (unsigned int)*(this + 1);
      if ( v14 > (unsigned int)*(this + 2) )
        _invalid_parameter_noinfo();
      v15 = (char *)(v14 + 0x18 * a2);
      v16 = v15 <= *(this + 2);
      v17[1] = v14;
      if ( !v16 || v15 < *(this + 1) )
        _invalid_parameter_noinfo();
      sub_784AC0(this, v17, (int)this, v15, (int)this, v13);
    }
  }
  v18 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(&a3);
}
