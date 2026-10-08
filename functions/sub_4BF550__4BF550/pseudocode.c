double __thiscall sub_4BF550(_DWORD *this, unsigned __int8 a2, unsigned __int16 a3)
{
  int v4; // eax
  bool v5; // zf
  _DWORD *v6; // eax
  int i; // esi
  double v8; // st7
  float v10; // [esp+4h] [ebp-4h]

  v10 = 0.0; /*0x4bf558*/
  if ( a2 < 4u && a3 < 8u ) /*0x4bf56d*/
  {
    v4 = *(this + 9); /*0x4bf56f*/
    if ( v4 ) /*0x4bf574*/
    {
      v5 = *(_DWORD *)(v4 + 4 * a2 + 0x30) == 0; /*0x4bf579*/
      v6 = (_DWORD *)(v4 + 4 * a2 + 0x30); /*0x4bf57e*/
      if ( !v5 ) /*0x4bf582*/
      {
        if ( *(_DWORD *)(*v6 + 4 * a3) ) /*0x4bf589*/
        {
          for ( i = 0; i < 0x121; ++i ) /*0x4bf590*/
          {
            v8 = sub_4BF210(this, a2, i, a3); /*0x4bf597*/
            v10 = v8 + v10; /*0x4bf5a9*/
          }
        }
      }
    }
  }
  return v10; /*0x4bf5b6*/
}
