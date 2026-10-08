// SpeedTreeBranchShader branch-pass setup: iterates global branch pass table dword_B47790..dword_B477FC and applies vtable +0x94 helper to each pass slot.
int __thiscall OB_SpeedTreeBranchShader_SetupPasses_010201A0(void *this)
{
  float *v2; // esi
  int result; // eax

  v2 = &OB_ShaderConstantStorage_010201A0[0x65F]; /*0x810aa4*/
  do /*0x810ac8*/
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x94))(this, *(_DWORD *)v2++); /*0x810abd*/
  while ( (int)v2 < (int)&OB_ShaderConstantStorage_010201A0[0x67B] ); /*0x810ac8*/
  return result; /*0x810aca*/
}
