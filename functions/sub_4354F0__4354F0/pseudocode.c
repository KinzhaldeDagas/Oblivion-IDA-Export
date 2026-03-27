char __thiscall sub_4354F0(_DWORD *this, int a2)
{
  int v2; // ecx
  int (__thiscall *v3)(int, int, int *); // eax
  char v4; // bl
  void (__thiscall ***v5)(_DWORD, int); // esi
  int v7; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v8; // [esp+18h] [ebp-4h]

  v7 = 0;
  v2 = *(this + 2);
  v3 = *(int (__thiscall **)(int, int, int *))(*(_DWORD *)v2 + 4);
  v8 = 0;
  v4 = v3(v2, a2, &v7);
  v8 = 0xFFFFFFFF;
  if ( v7 )
  {
    v5 = (void (__thiscall ***)(_DWORD, int))v7;
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) )
      (**v5)(v5, 1);
  }
  return v4;
}
