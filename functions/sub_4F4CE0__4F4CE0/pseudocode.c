// GetIsID_Eval (index 72 / opcode 0x1048): ObjectID ParamInfo is a TESForm pointer. The parameter must pass TESForm::IsActor (base implementation at 0x69D990 returns false); then the function pointer-compares it with the subject reference's BaseForm. No editor-ID/name comparison occurs.
char __cdecl sub_4F4CE0(int a1, int a2, int a3, double *a4)
{
  int v4; // esi

  *a4 = 0.0; /*0x4f4ce7*/
  v4 = 0; /*0x4f4cef*/
  if ( a2 ) /*0x4f4cf3*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0xA4))(a2) ) /*0x4f4cff*/
      v4 = a2; /*0x4f4d05*/
  }
  if ( a1 ) /*0x4f4d0d*/
  {
    if ( v4 ) /*0x4f4d11*/
    {
      if ( (*(int (**)(void))(*(_DWORD *)a1 + 0x170))() == v4 ) /*0x4f4d1f*/
        *a4 = 1.0; /*0x4f4d23*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4d25*/
    Interface_ConsolePrint("GetIsID >> %0.2f", *a4); /*0x4f4d3b*/
  return 1; /*0x4f4d43*/
}
