int __thiscall TESAIForm_SetAggression(_BYTE *this, char a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  *(this + 4) = a2;
  return (*(int (__cdecl **)(int))(v2 + 0x10))(0x100);
}
