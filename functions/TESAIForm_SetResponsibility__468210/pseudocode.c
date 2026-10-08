int __thiscall TESAIForm_SetResponsibility(_BYTE *this, char a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this; /*0x468214*/
  *(this + 7) = a2; /*0x468216*/
  return (*(int (__cdecl **)(int))(v2 + 0x10))(0x100);
}
