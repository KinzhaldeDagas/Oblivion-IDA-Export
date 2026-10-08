int __thiscall TESActorBaseData_SetBarterGold(_WORD *this, __int16 a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this; /*0x4672d5*/
  *(this + 6) = a2; /*0x4672d7*/
  return (*(int (__cdecl **)(int))(v2 + 0x50))(0x10);
}
