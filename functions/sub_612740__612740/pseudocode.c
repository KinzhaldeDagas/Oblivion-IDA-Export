unsigned int __cdecl sub_612740(int a1, int a2)
{
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+8h] [ebp+8h]

  v3 = EffectItemList_MagickaCost((_DWORD *)(*(_DWORD *)a1 + 0xC)); /*0x61274e*/
  v4 = EffectItemList_MagickaCost((_DWORD *)(*(_DWORD *)a2 + 0xC)); /*0x612760*/
  if ( v4 >= (double)v3 ) /*0x612773*/
    return v4 > (double)v3; /*0x612784*/
  else
    return 0xFFFFFFFF; /*0x612777*/
}
