void __thiscall DarknessEffect_PostLink(_DWORD *this, _DWORD *a2)
{
  int v4; // esi
  float v5; // [esp+14h] [ebp+4h]

  ValueModifierEffect_PostLink(this, (int)a2);
  v5 = 1.0 - ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*a2 + 0x288))(a2, 0x46) / fCostant_100;
  if ( v5 >= 0.0 )
  {
    if ( v5 > 1.0 )
      v5 = 1.0;
  }
  else
  {
    v5 = 0.0;
  }
  v4 = a2[0xF];
  if ( v4 )
    sub_7B8440(v4, v5);
}
