// positive sp value has been detected, the output may be wrong!
char __userpurge MagicCaster_CastMagicItem_::SetCastingItem@<al>(int a1@<ebx>, int a2@<esi>, int a3, int a4, int a5)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x34))(a2); /*0x6991f1*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x3C))(a2, a5); /*0x6991ff*/
  if ( EffectItemList_HasOnTarget(a1) && a5 ) /*0x69920e*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2); /*0x699217*/
    return 1; /*0x69921b*/
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x699228*/
    return 1; /*0x69922c*/
  }
}
