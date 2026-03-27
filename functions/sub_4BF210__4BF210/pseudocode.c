double __thiscall sub_4BF210(_DWORD *this, unsigned __int8 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  int v4; // eax
  bool v5; // zf
  _DWORD *v6; // eax
  float v8; // [esp+0h] [ebp-4h]

  v8 = 0.0;
  if ( a2 < 4u && a3 < 0x121u && a4 < 8u )
  {
    v4 = *(this + 9);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 4 * a2 + 0x40) == 0;
      v6 = (_DWORD *)(v4 + 4 * a2 + 0x40);
      if ( !v5 )
        return *(float *)(*(_DWORD *)(*v6 + 4 * a3) + 4 * a4);
    }
  }
  return v8;
}
