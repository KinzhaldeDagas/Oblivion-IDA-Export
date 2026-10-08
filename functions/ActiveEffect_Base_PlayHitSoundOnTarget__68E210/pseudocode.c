void __thiscall ActiveEffect_Base_PlayHitSoundOnTarget(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v8; // ebp

  v7 = *(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x88); /*0x68e21d*/
  if ( v7 ) /*0x68e225*/
    v8 = *(_DWORD *)(v7 + 0xC); /*0x68e227*/
  else
    v8 = 0; /*0x68e22c*/
  if ( v8 ) /*0x68e230*/
    ActiveEffect_Base_PlayHitSoundOnTarget_::ProcessHitSound((int)this, a2, a3, a4, a5, a6, a7); /*0x68e231*/
  else
    ActiveEffect_Base_PlayHitSoundOnTarget_::Done_(); /*0x68e230*/
}
