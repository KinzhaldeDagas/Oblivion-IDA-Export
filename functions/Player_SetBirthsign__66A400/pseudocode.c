int __thiscall Player_SetBirthsign(MagicTarget *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // edi
  int i; // edi
  SkillActorValue AVFromGroupOffset; // eax
  int result; // eax

  v3 = *((_DWORD *)this + 0x191); /*0x66a403*/
  if ( v3 ) /*0x66a40c*/
  {
    v4 = (_DWORD *)(v3 + 0x3C); /*0x66a40e*/
    if ( v3 != 0xFFFFFFC4 ) /*0x66a413*/
    {
      do /*0x66a42d*/
      {
        if ( !*v4 ) /*0x66a415*/
          break; /*0x66a419*/
        ((void (__thiscall *)(MagicTarget *, _DWORD))this->vtbl[0x10].GetResistanceFactor)(this, *v4); /*0x66a426*/
        v4 = (_DWORD *)v4[1]; /*0x66a428*/
      }
      while ( v4 ); /*0x66a42d*/
    }
  }
  MagicTarget_ProcessEffects(this + 0xD, 0.0); /*0x66a438*/
  *((_DWORD *)this + 0x191) = a2; /*0x66a443*/
  if ( a2 ) /*0x66a449*/
  {
    v5 = (_DWORD *)(a2 + 0x3C); /*0x66a44b*/
    if ( a2 != 0xFFFFFFC4 ) /*0x66a450*/
    {
      do /*0x66a46a*/
      {
        if ( !*v5 ) /*0x66a452*/
          break; /*0x66a456*/
        ((void (__thiscall *)(MagicTarget *, _DWORD))this->vtbl[0x10].PlayAbsorbShader)(this, *v5); /*0x66a463*/
        v5 = (_DWORD *)v5[1]; /*0x66a465*/
      }
      while ( v5 ); /*0x66a46a*/
    }
  }
  for ( i = 0; i < 0x15; ++i ) /*0x66a46c*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i); /*0x66a473*/
    result = Player_RecalculateRequiredSkillExperience((PlayerCharacter *)this, AVFromGroupOffset); /*0x66a47e*/
  }
  return result; /*0x66a48b*/
}
