void __thiscall DarknessEffect_PostLink(volatile LONG ***this, _DWORD *a2)
{
  NiNode *v3; // esi
  float v4; // [esp+14h] [ebp+4h]

  ValueModifierEffect_PostLink(this, (int)a2); /*0x692d06*/
  v4 = 1.0 - ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*a2 + 0x288))(a2, 0x46) / fCostant_100; /*0x692d23*/
  if ( v4 >= 0.0 ) /*0x692d34*/
  {
    if ( v4 > 1.0 ) /*0x692d4b*/
      v4 = 1.0; /*0x692d4d*/
  }
  else
  {
    v4 = 0.0; /*0x692d38*/
  }
  v3 = (NiNode *)a2[0xF]; /*0x692d55*/
  if ( v3 ) /*0x692d5a*/
    sub_7B8440(v3, v4); /*0x692d65*/
}
