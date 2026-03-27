int sub_5C0FC0()
{
  _DWORD *v0; // esi
  int v1; // ebp
  _DWORD *i; // edi
  _DWORD *v3; // eax
  int result; // eax

  v0 = &quickKeyList_ptr;
  v1 = 8;
  do
  {
    for ( i = (_DWORD *)v0[1]; i; result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v0 + 8))(v0, v3) )
    {
      v3 = i;
      i = (_DWORD *)*i;
    }
    v0[3] = 0;
    v0[1] = 0;
    v0[2] = 0;
    v0 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
