int __userpurge Actor_SetupCastingFX__::ProceeFXModel_@<eax>(
        int a1@<ebx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11)
{
  int v11; // ebp
  int FXEffect; // eax
  int v13; // edi

  v11 = 0;
  if ( !a11 )
    return Actor_SetupCastingFX__::ProcessMagicCasterFX(a1, 0, 0, a2);
  FXEffect = MagicItem_GetFXEffect(a11, 0);
  v13 = FXEffect;
  if ( !FXEffect )
    return Actor_SetupCastingFX__::ProcessMagicCasterFX(a1, 0, 0, a2);
  LOWORD(FXEffect) = *(_WORD *)(FXEffect + 0x20);
  if ( (_WORD)FXEffect == 0xFFFF )
    FXEffect = strlen(*(const char **)(v13 + 0x1C));
  else
    FXEffect = (unsigned __int16)FXEffect;
  if ( FXEffect )
    v11 = sub_69FD20(v13);
  return Actor_SetupCastingFX__::ProcessMagicCasterFX(a1, v11, v13, a2);
}
