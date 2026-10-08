int __thiscall TESAIForm_SetAggression(_BYTE *this, char a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this; /*0x468184*/
  *(this + 4) = a2; /*0x468186*/
  return (*(int (__cdecl **)(int))(v2 + 0x10))(0x100);
}
