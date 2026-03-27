void __thiscall NightEyeEffect_Apply(float *this)
{
  float v2; // [esp+0h] [ebp-4h]

  *(this + 6) = 1.0;
  ValueModifierEffect_Apply(this, v2);
  if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 4))(*((_DWORD *)this + 8)) == TESDataHandler_g_PlayerRef )
    NightEyeEffect_SetPlayerShader_();
  else
    NightEyeEffect_Apply_::Done();
}
