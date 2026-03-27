int __thiscall sub_918B40(char *this)
{
  _DWORD *v1; // edi
  int v2; // esi
  char *v3; // ebp
  int v4; // ebx

  v1 = (_DWORD *)(dword_BA950C + 0xC);
  v2 = 0;
  if ( *(int *)(dword_BA950C + 0x10) > 0 )
  {
    v3 = this + 8;
    v4 = 0;
    do
    {
      (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)v3 + 4))(v3, *(_DWORD *)(*v1 + v4), v2++);
      v4 += 0xC;
    }
    while ( v2 < v1[1] );
  }
  return 0;
}
