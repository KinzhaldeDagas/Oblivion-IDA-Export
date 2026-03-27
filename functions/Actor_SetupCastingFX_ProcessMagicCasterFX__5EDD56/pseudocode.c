int __userpurge Actor_SetupCastingFX__::ProcessMagicCasterFX@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4)
{
  int v4; // eax
  int v5; // esi
  unsigned int v6; // ebp

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 0x5C) + 0x24))(a1 + 0x5C);
  v5 = v4;
  if ( !v4 || !a2 )
    JUMPOUT(0x5EDEA0);
  sub_477EF0((_WORD *)(v4 + 0xAC));
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 0x84))(v5, a2, 1);
  if ( !*(_DWORD *)(a3 + 0x70) || byte_B333B8 )
    JUMPOUT(0x5EDDF6);
  v6 = *(_DWORD *)(a1 + 0x60);
  if ( !v6 )
    return Actor_SetupCastingFX__::AllocNewMagicCasterFX(a4);
  MagicCaster_CastingVFX_destr(*(void **)(a1 + 0x60));
  FormHeapFree(v6);
  return Actor_SetupCastingFX__::AllocNewMagicCasterFX(a4);
}
