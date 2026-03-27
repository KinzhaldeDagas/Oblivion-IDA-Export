int __usercall ActiveEffect_Base_PlayHitSoundOnTarget_::ProcessHitSound@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  MagicTarget *v7; // ecx
  int v8; // edx
  int v9; // ebx
  _DWORD *v10; // edx

  if ( !*(_DWORD *)(a1 + 0x20)
    || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 0x18))(*(_DWORD *)(a1 + 8)) == 4 )
  {
    return ActiveEffect_Base_PlayHitSoundOnTarget_::Done_();
  }
  v7 = *(MagicTarget **)(a1 + 0x20);
  if ( v7 )
    MagicTarget_GetParentActor(v7);
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C);
  v9 = *(_DWORD *)(v8 + 0x58);
  v10 = *(_DWORD **)(v8 + 0x88);
  if ( v10 )
  {
    LOBYTE(a3) = (v10[0xF] & 0x10) != 0;
    return ActiveEffect_Base_PlayHitSoundOnTarget_::PlayOnActor(a2, a3, v10[0xE], a5, v10[0x10], a7);
  }
  else
  {
    LOBYTE(a3) = (v9 & 0x400) != 0;
    return ActiveEffect_Base_PlayHitSoundOnTarget_::PlayOnActor(a2, a3, a4, a5, a6, a7);
  }
}
