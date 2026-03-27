unsigned int __thiscall sub_798090(_DWORD *this, unsigned __int16 a2)
{
  unsigned int v3; // esi
  int *v4; // ebp
  unsigned int v5; // ebx
  unsigned int v6; // esi
  int *v7; // ebx
  unsigned int v8; // eax
  bool v9; // cc
  char *v10; // eax
  unsigned int result; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // [esp-10h] [ebp-2Ch]
  char v15; // [esp-10h] [ebp-2Ch]
  unsigned int v16; // [esp+10h] [ebp-Ch]
  char *v17; // [esp+10h] [ebp-Ch]
  void *Src[2]; // [esp+14h] [ebp-8h] BYREF

  v3 = *(this + 0x10);
  v4 = this + 0xE;
  if ( *(this + 0xF) > v3 )
    _invalid_parameter_noinfo();
  v5 = v4[1];
  if ( v5 > v4[2] )
    _invalid_parameter_noinfo();
  sub_796730(v4, Src, (int)v4, v5, (int)v4, v3);
  v6 = *(this + 0x14);
  v7 = this + 0x12;
  if ( *(this + 0x13) > v6 )
    _invalid_parameter_noinfo();
  v8 = *(this + 0x13);
  v16 = v8;
  if ( v8 > *(this + 0x14) )
  {
    _invalid_parameter_noinfo();
    v8 = v16;
  }
  sub_796790(this + 0x12, Src, (int)(this + 0x12), v8, (int)(this + 0x12), v6);
  v9 = *(this + 0xB) <= *(this + 0xC);
  Src[0] = *((void **)this + 0xC);
  if ( !v9 )
    _invalid_parameter_noinfo();
  v10 = (char *)*(this + 0xB);
  v17 = v10;
  if ( (unsigned int)v10 > *(this + 0xC) )
  {
    _invalid_parameter_noinfo();
    v10 = v17;
  }
  sub_439050(this + 0xA, (int)v7, Src, (int)(this + 0xA), v10, (int)(this + 0xA), (char *)Src[0]);
  *((_WORD *)this + 0x10) = a2;
  sub_7975F0(v4, a2, v14, 0, 0, 0);
  sub_7976E0(v7, a2, v15, 0, 0, 0);
  result = sub_795720(this + 0xA, a2, 0);
  v12 = 0;
  if ( a2 )
  {
    do
    {
      v13 = *(this + 0xB);
      if ( !v13 || (result = (*(this + 0xC) - v13) >> 2, v12 >= result) )
        result = _invalid_parameter_noinfo();
      *(_DWORD *)(*(this + 0xB) + 4 * v12++) = 0;
    }
    while ( v12 < a2 );
  }
  return result;
}
