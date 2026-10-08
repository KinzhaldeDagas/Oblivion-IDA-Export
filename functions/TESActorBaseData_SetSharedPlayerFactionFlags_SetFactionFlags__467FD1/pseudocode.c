int __userpurge TESActorBaseData_SetSharedPlayerFactionFlags_::SetFactionFlags@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        _BYTE *a4@<esi>,
        int a5)
{
  if ( *(char *)(a1 + 4) != 0xFFFFFFFF ) /*0x467fd8*/
  {
    if ( a2 ) /*0x467fdf*/
    {
      if ( a2 == 1 ) /*0x467fe4*/
      {
        a4[0x34] |= 0x20u; /*0x467ff1*/
      }
      else
      {
        if ( a2 != 2 ) /*0x467fe9*/
          return TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop_next(a3, a5); /*0x467fe9*/
        a4[0x34] |= 0x10u; /*0x467feb*/
      }
    }
    else
    {
      a4[0x34] |= 0x40u; /*0x467ff7*/
    }
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a4 + 0x40))(a4, 4); /*0x468004*/
  }
  return TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop_next(a3, a5);
}
