void __usercall NightEyeEffect_Remove(_DWORD *this@<ecx>, double a2@<st0>)
{
  ValueModifierEffect_Remove(a2);
  if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 8) + 4))(*(this + 8)) == TESDataHandler_g_PlayerRef )
    NightEyeEffect_SetPlayerShader_();
}
