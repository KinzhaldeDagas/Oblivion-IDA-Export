char __thiscall sub_4354F0(_DWORD *this, int a2)
{
  int v2; // ecx
  int (__thiscall *v3)(int, int, int *); // eax
  char v4; // bl
  void (__thiscall ***v5)(_DWORD, int); // esi
  int v7; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v8; // [esp+18h] [ebp-4h]

  v7 = 0; /*0x435513*/
  v2 = *(this + 2); /*0x43551b*/
  v3 = *(int (__thiscall **)(int, int, int *))(*(_DWORD *)v2 + 4); /*0x435520*/
  v8 = 0; /*0x43552d*/
  v4 = v3(v2, a2, &v7); /*0x435537*/
  v8 = 0xFFFFFFFF; /*0x43553f*/
  if ( v7 ) /*0x435547*/
  {
    v5 = (void (__thiscall ***)(_DWORD, int))v7; /*0x435549*/
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x43554f*/
      (**v5)(v5, 1); /*0x435565*/
  }
  return v4; /*0x435569*/
}
