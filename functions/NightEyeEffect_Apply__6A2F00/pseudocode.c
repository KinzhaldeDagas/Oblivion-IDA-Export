void __thiscall NightEyeEffect_Apply(float *this)
{
  float v2; // [esp+0h] [ebp-4h]

  *(this + 6) = 1.0; /*0x6a2f05*/
  ValueModifierEffect_Apply(this, v2); /*0x6a2f08*/
  if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 4))(*((_DWORD *)this + 8)) == reference ) /*0x6a2f1e*/
    NightEyeEffect_SetPlayerShader_(); /*0x6a2f20*/
  else
    NightEyeEffect_Apply_::Done(); /*0x6a2f1e*/
}
