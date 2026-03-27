double __thiscall sub_6EDD30(_BYTE *this, signed int a2, signed int a3, signed int a4, int a5)
{
  int *v7; // edi
  _DWORD *v8; // esi
  int v9; // eax
  _DWORD v10[3]; // [esp+10h] [ebp-18h] BYREF
  unsigned int v11; // [esp+1Ch] [ebp-Ch]
  float v12; // [esp+2Ch] [ebp+4h]

  if ( a2 >= 5 )
    sub_6ED6D0(".\\FanControls.cpp", 0xBB);
  if ( a3 >= 2 )
    sub_6ED6D0(".\\FanControls.cpp", 0xBC);
  if ( a4 >= 2 )
    sub_6ED6D0(".\\FanControls.cpp", 0xBD);
  if ( !*this )
    return 0.0;
  v7 = (int *)(this + 0x80 * a2 + 0x40 * a3 + 0x20 * a4);
  v8 = sub_5523C0(v7 + 0x97, v10, (_DWORD *)(a5 + 0x30 * a4));
  v9 = v8[3];
  if ( !v9 || !((v8[4] - v9) >> 2) )
    _invalid_parameter_noinfo();
  v12 = *(float *)v8[3];
  if ( v11 )
    FormHeapFree(v11);
  return (float)(*((float *)v7 + 0x9E) + v12);
}
