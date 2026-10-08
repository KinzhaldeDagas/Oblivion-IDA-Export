int __usercall MagicCaster_FindTouchTarget_::CalcHandReach@<eax>(int a1@<ebp>, int a2@<esi>, int *edi0@<edi>)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x26C))(a1); /*0x699535*/
  ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0xEC))(a1); /*0x699546*/
  if ( a1 ) /*0x69955c*/
    return MagicCaster_FindTouchTarget_::CalcDistToPlayer__(a1, edi0); /*0x699562*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x20))(a2); /*0x69956b*/
  return MagicCaster_FindTouchTarget_::CalcDistToPlayer__(0, edi0);
}
