int __thiscall TESActorBaseData_SetFatigue(_WORD *this, __int16 a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this; /*0x4672b5*/
  *(this + 5) = a2; /*0x4672b7*/
  return (*(int (__cdecl **)(int))(v2 + 0x50))(0x10);
}
