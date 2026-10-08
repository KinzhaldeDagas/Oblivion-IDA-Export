char __userpurge Actor_SetupCastingFX__::ProcessMagicCasterFX@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>, float a4)
{
  int v4; // eax
  int v5; // esi
  unsigned int v6; // ebp

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 0x5C) + 0x24))(a1 + 0x5C); /*0x5edd5f*/
  v5 = v4; /*0x5edd61*/
  if ( !v4 || !a2 ) /*0x5edd6d*/
    JUMPOUT(0x5EDEA0); /*0x5edea0*/
  NiTObjectArray_ClearAndRelease((void *)(v4 + 0xAC)); /*0x5edd79*/
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 0x84))(v5, a2, 1); /*0x5edd8b*/
  if ( !*(_DWORD *)(a3 + 0x70) || unk_B333B8 ) /*0x5edd93*/
    JUMPOUT(0x5EDDF6); /*0x5eddf6*/
  v6 = *(_DWORD *)(a1 + 0x60); /*0x5edd9c*/
  if ( !v6 ) /*0x5edda1*/
    return Actor_SetupCastingFX__::AllocNewMagicCasterFX(a1, a3, v5, a4); /*0x5edda1*/
  MagicCaster_CastingVFX_destr(*(void **)(a1 + 0x60)); /*0x5edda5*/
  FormHeapFree(v6); /*0x5eddab*/
  return Actor_SetupCastingFX__::AllocNewMagicCasterFX(a1, a3, v5, a4);
}
