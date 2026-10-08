int __thiscall TESAIForm_SetEnergy(_BYTE *this, char a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this; /*0x4681e4*/
  *(this + 6) = a2; /*0x4681e6*/
  return (*(int (__cdecl **)(int))(v2 + 0x10))(0x100);
}
