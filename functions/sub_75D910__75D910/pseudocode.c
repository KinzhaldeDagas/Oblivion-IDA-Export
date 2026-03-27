int __thiscall sub_75D910(int this, unsigned int a2, int a3)
{
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // edx
  bool v6; // zf
  unsigned __int16 **v7; // edx

  result = a2;
  if ( a2 >= *(unsigned __int16 *)(this + 0x7E) )
  {
    v4 = (int (__thiscall ***)(_DWORD, int))a3;
    if ( !a3 )
      return result;
    goto LABEL_10;
  }
  v5 = *(_DWORD *)(this + 0x78);
  v6 = *(_DWORD *)(v5 + 4 * a2) == 0;
  v7 = (unsigned __int16 **)(v5 + 4 * a2);
  if ( v6 )
  {
    v4 = (int (__thiscall ***)(_DWORD, int))a3;
    if ( !a3 )
      return result;
    goto LABEL_10;
  }
  result = *(_DWORD *)(*(_DWORD *)(this + 0x78) + 4 * a2);
  if ( *(_WORD *)(result + 0xA) < *(_WORD *)(result + 8) )
    result = sub_6FEB00(*v7, &a3);
  v4 = (int (__thiscall ***)(_DWORD, int))a3;
  if ( a3 )
  {
LABEL_10:
    result = InterlockedDecrement((volatile LONG *)(a3 + 4));
    if ( !result )
      return (**v4)(v4, 1);
  }
  return result;
}
