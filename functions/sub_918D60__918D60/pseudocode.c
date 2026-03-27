int __userpurge sub_918D60@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // ebp
  int v5; // eax
  int i; // esi
  int result; // eax

  v4 = a1 + 0x20;
  sub_948CE0(a1 + 0x20, a2);
  sub_948CB0(v4, a2, 0xF);
  v5 = *(_DWORD *)(a1 + 0x1C);
  for ( i = 0; i < *(_DWORD *)(v5 + 0x60); ++i )
  {
    (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)(a1 + 0x28) + 8))(
      a1 + 0x28,
      "World",
      4,
      *(_DWORD *)(*(_DWORD *)(v5 + 0x5C) + 4 * i));
    v5 = *(_DWORD *)(a1 + 0x1C);
  }
  sub_948CD0(v4, a2);
  result = *(_DWORD *)(v4 + 0x10);
  if ( result > 0 )
  {
    result = *(_DWORD *)(v4 + 0xC);
    if ( result )
    {
      if ( *(int *)(v4 + 0x10) <= 0 )
        return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x10) + 0x2C))(
                 *(_DWORD *)(a1 + 0x10),
                 0,
                 *(_DWORD *)(a1 + 0x30));
      else
        return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x10) + 0x2C))(
                 *(_DWORD *)(a1 + 0x10),
                 *(_DWORD *)(v4 + 0xC),
                 *(_DWORD *)(a1 + 0x30));
    }
  }
  return result;
}
