int __thiscall TESAIForm_SetConfidence(_BYTE *this, char a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this; /*0x4681b4*/
  *(this + 5) = a2; /*0x4681b6*/
  return (*(int (__cdecl **)(int))(v2 + 0x10))(0x100);
}
