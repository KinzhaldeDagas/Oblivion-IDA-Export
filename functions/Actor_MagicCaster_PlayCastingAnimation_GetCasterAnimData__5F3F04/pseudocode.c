int __usercall Actor_MagicCaster_PlayCastingAnimation_::GetCasterAnimData@<eax>(
        int a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // ecx

  v10 = *(_DWORD *)(a1 - 4); /*0x5f3f04*/
  if ( v10 ) /*0x5f3f0c*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x2BC))(v10, 1); /*0x5f3f18*/
  return Actor_MagicCaster_PlayCastingAnimation_::GetAnimGroup(
           a1,
           (TESObjectREFR *)(a1 - 0x5C),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
