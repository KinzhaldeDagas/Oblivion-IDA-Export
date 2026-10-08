void __usercall ActiveEffect_Base_PlayHitSoundOnTarget_::ProcessHitSound(int a1@<esi>, int a2@<ebp>)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  int v4; // edx
  int v5; // ebx
  int v6; // edx
  char v7; // bl

  if ( !*(_DWORD *)(a1 + 0x20) /*0x68e24d*/
    || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 0x18))(*(_DWORD *)(a1 + 8)) == 4 )
  {
    ActiveEffect_Base_PlayHitSoundOnTarget_::Done_(); /*0x68e23a*/
  }
  else
  {
    v2 = *(MagicTarget **)(a1 + 0x20); /*0x68e253*/
    if ( v2 ) /*0x68e258*/
      ParentActor = MagicTarget_GetParentActor(v2); /*0x68e25a*/
    else
      ParentActor = 0; /*0x68e261*/
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C); /*0x68e266*/
    v5 = *(_DWORD *)(v4 + 0x58); /*0x68e26a*/
    v6 = *(_DWORD *)(v4 + 0x88); /*0x68e26d*/
    v7 = (v5 & 0x400) != 0; /*0x68e276*/
    if ( v6 ) /*0x68e27f*/
      ActiveEffect_Base_PlayHitSoundOnTarget_::PlayOnActor(ParentActor, (*(_DWORD *)(v6 + 0x3C) & 0x10) != 0, a2, a1); /*0x68e299*/
    else
      ActiveEffect_Base_PlayHitSoundOnTarget_::PlayOnActor(ParentActor, v7, a2, a1); /*0x68e27f*/
  }
}
