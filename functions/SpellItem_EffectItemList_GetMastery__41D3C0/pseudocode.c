double __usercall SpellItem_EffectItemList_GetMastery@<st0>(int a1@<ecx>, double result@<st0>)
{
  float v2; // [esp+4h] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 0x1C) & 1) == 0 )
  {
    (**(void (__thiscall ***)(int, _DWORD))a1)(a1, 0);
    v2 = result;
    Calc_MagickaMasteryLevel(v2);
  }
  return result;
}
