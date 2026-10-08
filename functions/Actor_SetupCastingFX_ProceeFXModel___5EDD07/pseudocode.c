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
        _DWORD *magicItem)
{
  int v11; // ebp
  int FXEffect; // eax
  int v13; // edi

  v11 = 0; /*0x5edd0b*/
  if ( !magicItem ) /*0x5edd15*/
    return Actor_SetupCastingFX__::ProcessMagicCasterFX(a1, 0, 0, a2); /*0x5edd15*/
  FXEffect = (int)MagicItem_GetFXEffect(magicItem, 0); /*0x5edd18*/
  v13 = FXEffect; /*0x5edd1d*/
  if ( !FXEffect ) /*0x5edd21*/
    return Actor_SetupCastingFX__::ProcessMagicCasterFX(a1, 0, 0, a2); /*0x5edd15*/
  LOWORD(FXEffect) = *(_WORD *)(FXEffect + 0x20); /*0x5edd23*/
  if ( (_WORD)FXEffect == 0xFFFF ) /*0x5edd2b*/
    FXEffect = strlen(*(const char **)(v13 + 0x1C)); /*0x5edd30*/
  else
    FXEffect = (unsigned __int16)FXEffect; /*0x5edd40*/
  if ( FXEffect ) /*0x5edd45*/
    v11 = sub_69FD20(v13); /*0x5edd54*/
  return Actor_SetupCastingFX__::ProcessMagicCasterFX(a1, v11, v13, a2);
}
