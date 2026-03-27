int __userpurge TESActorBaseData_SetSharedPlayerFactionFlags_::PlayerFactionLoop@<eax>(
        int a1@<ebp>,
        int eax0@<eax>,
        _BYTE *a3@<esi>,
        int a4@<ebx>,
        int a5)
{
  int v5; // ecx

  v5 = *(_DWORD *)eax0;
  if ( *(_DWORD *)eax0 && (*(_BYTE *)(*(_DWORD *)v5 + 0x34) & 8) == 0 && *(_BYTE **)v5 == a3 )
    return TESActorBaseData_SetSharedPlayerFactionFlags_::SetFactionFlags(v5, a4, a1, a3, a5);
  else
    return TESActorBaseData_SetSharedPlayerFactionFlags_::PlayerFactionLoop_next(a1, eax0, a5);
}
