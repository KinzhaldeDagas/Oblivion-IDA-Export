int __userpurge sub_918D60@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // ebp
  int v5; // eax
  int i; // esi
  int result; // eax

  v4 = a1 + 0x20; /*0x918d65*/
  sub_948CE0(a1 + 0x20, a2); /*0x918d6a*/
  sub_948CB0(v4, a2, 0xF); /*0x918d73*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x918d78*/
  for ( i = 0; i < *(_DWORD *)(v5 + 0x60); ++i ) /*0x918d82*/
  {
    (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)(a1 + 0x28) + 8))( /*0x918d9a*/
      a1 + 0x28,
      "World",
      4,
      *(_DWORD *)(*(_DWORD *)(v5 + 0x5C) + 4 * i));
    v5 = *(_DWORD *)(a1 + 0x1C); /*0x918d9d*/
  }
  sub_948CD0(v4, a2); /*0x918dab*/
  result = *(_DWORD *)(v4 + 0x10); /*0x918db0*/
  if ( result > 0 ) /*0x918db5*/
  {
    result = *(_DWORD *)(v4 + 0xC); /*0x918db7*/
    if ( result ) /*0x918dbc*/
    {
      if ( *(int *)(v4 + 0x10) <= 0 ) /*0x918dc6*/
        return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x10) + 0x2C))( /*0x918de4*/
                 *(_DWORD *)(a1 + 0x10),
                 0,
                 *(_DWORD *)(a1 + 0x30));
      else
        return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x10) + 0x2C))( /*0x918dd2*/
                 *(_DWORD *)(a1 + 0x10),
                 *(_DWORD *)(v4 + 0xC),
                 *(_DWORD *)(a1 + 0x30));
    }
  }
  return result; /*0x918dd5*/
}
