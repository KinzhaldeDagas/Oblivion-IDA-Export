double __usercall SpellItem_EffectItemList_GetMastery@<st0>(int a1@<ecx>, double result@<st0>)
{
  float v2; // [esp+4h] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 0x1C) & 1) == 0 ) /*0x41d3c4*/
  {
    (**(void (__thiscall ***)(int, _DWORD))a1)(a1, 0); /*0x41d3d0*/
    v2 = result; /*0x41d3d3*/
    Calc_MagickaMasteryLevel(v2); /*0x41d3d6*/
  }
  return result; /*0x41d3c9*/
}
