int __usercall Actor_MagicCaster_PlayCastingAnimation_::GetCasterAnimData@<eax>(
        int a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // ecx

  v6 = *(_DWORD *)(a1 - 4);
  if ( v6 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2BC))(v6, 1);
  return Actor_MagicCaster_PlayCastingAnimation_::GetAnimGroup(a1, (TESObjectREFR *)(a1 - 0x5C), a2, a3, a4, a5, a6);
}
