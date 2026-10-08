int __thiscall TESActorBaseData_SetLevel(_WORD *this, __int16 a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this; /*0x467275*/
  *(this + 7) = a2; /*0x467277*/
  return (*(int (__cdecl **)(int))(v2 + 0x50))(0x10);
}
