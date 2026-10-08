int sub_5C0FC0()
{
  char *v0; // esi
  int v1; // ebp
  _DWORD *i; // edi
  _DWORD *v3; // eax
  int result; // eax

  v0 = MEMORY[0xB3B440]; /*0x5c0fc4*/
  v1 = 8; /*0x5c0fc9*/
  do /*0x5c0ff8*/
  {
    for ( i = *((_DWORD **)v0 + 1); i; result = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v0 + 8))(v0, v3) ) /*0x5c0fd5*/
    {
      v3 = i; /*0x5c0fd9*/
      i = (_DWORD *)*i; /*0x5c0fdb*/
    }
    *((_DWORD *)v0 + 3) = 0; /*0x5c0fe9*/
    *((_DWORD *)v0 + 1) = 0; /*0x5c0fec*/
    *((_DWORD *)v0 + 2) = 0; /*0x5c0fef*/
    v0 += 0x10; /*0x5c0ff2*/
    --v1; /*0x5c0ff5*/
  }
  while ( v1 ); /*0x5c0ff8*/
  return result; /*0x5c0ffa*/
}
