double __thiscall sub_4BF550(_DWORD *this, unsigned __int8 a2, unsigned __int16 a3)
{
  int v4; // eax
  bool v5; // zf
  _DWORD *v6; // eax
  int i; // esi
  double v8; // st7
  float v10; // [esp+4h] [ebp-4h]

  v10 = 0.0;
  if ( a2 < 4u && a3 < 8u )
  {
    v4 = *(this + 9);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 4 * a2 + 0x30) == 0;
      v6 = (_DWORD *)(v4 + 4 * a2 + 0x30);
      if ( !v5 )
      {
        if ( *(_DWORD *)(*v6 + 4 * a3) )
        {
          for ( i = 0; i < 0x121; ++i )
          {
            v8 = sub_4BF210(this, a2, i, a3);
            v10 = v8 + v10;
          }
        }
      }
    }
  }
  return v10;
}
