int __thiscall TESActorBaseData_SetMagicka(_WORD *this, __int16 a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this; /*0x467295*/
  *(this + 4) = a2; /*0x467297*/
  return (*(int (__cdecl **)(int))(v2 + 0x50))(0x10);
}
