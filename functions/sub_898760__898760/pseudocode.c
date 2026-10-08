char __usercall sub_898760@<al>(int a1@<edi>, int a2@<esi>, int a3)
{
  bool v3; // zf
  char result; // al
  int v5; // [esp+14h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 0x1C))(a1, &v5, a2); /*0x89876c*/
  v3 = *(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int))(a3 + 8))(a3 + 8, &a3, a1 + 0x14, a2) == 0; /*0x898785*/
  result = v5; /*0x898788*/
  if ( v3 ) /*0x89878c*/
  {
    if ( (_BYTE)v5 ) /*0x8987b2*/
    {
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x20))(a1, a2); /*0x8987b9*/
      if ( *(_BYTE *)(a2 + 0x18) == 2 ) /*0x8987c0*/
        return (*(char (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(a2 + 0x10) + a2) + 0x20))( /*0x8987cb*/
                 a2 + *(_DWORD *)(a2 + 0x10),
                 a1 + 0x14);
    }
  }
  else if ( !(_BYTE)v5 ) /*0x898790*/
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x18))(a1, a2); /*0x898797*/
    if ( *(_BYTE *)(a2 + 0x18) == 2 ) /*0x89879e*/
      return (*(char (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(a2 + 0x10) + a2) + 0x18))( /*0x8987aa*/
               *(_DWORD *)(a2 + 0x10) + a2,
               a1 + 0x14);
  }
  return result; /*0x8987ad*/
}
