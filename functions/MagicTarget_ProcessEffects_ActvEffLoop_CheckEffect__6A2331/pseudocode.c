int __usercall MagicTarget_ProcessEffects_::ActvEffLoop_CheckEffect@<eax>(
        int a1@<eax>,
        int *a2@<ebp>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  int v9; // esi

  v9 = *a2;
  if ( !*a2 || HIBYTE(a7) && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 0xC) + 0x1C) + 0x98) != 0x46464553 )
    JUMPOUT(0x6A239C);
  return MagicTarget_ProcessEffects_::ProcessEffect(a1, (int)a2, a3, v9, a4, a5, a6, a7, a8, a9);
}
