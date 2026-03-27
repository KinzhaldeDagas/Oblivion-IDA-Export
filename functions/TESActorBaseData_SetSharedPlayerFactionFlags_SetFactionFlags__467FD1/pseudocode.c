int __userpurge TESActorBaseData_SetSharedPlayerFactionFlags_::SetFactionFlags@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        _BYTE *a4@<esi>,
        int a5)
{
  if ( *(char *)(a1 + 4) != 0xFFFFFFFF )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        a4[0x34] |= 0x20u;
      }
      else
      {
        if ( a2 != 2 )
          return TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop_next(a3, a5);
        a4[0x34] |= 0x10u;
      }
    }
    else
    {
      a4[0x34] |= 0x40u;
    }
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a4 + 0x40))(a4, 4);
  }
  return TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop_next(a3, a5);
}
