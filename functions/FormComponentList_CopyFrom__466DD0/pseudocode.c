int __thiscall FormComponentList_CopyFrom(char *this, int a2)
{
  char *v2; // esi
  int v3; // edi
  int v4; // ebx
  int result; // eax

  if ( a2 )
  {
    v2 = this;
    v3 = a2 - (_DWORD)this;
    v4 = 0x1A;
    do
    {
      if ( *(_DWORD *)v2 )
      {
        result = *(_DWORD *)&v2[v3];
        if ( result )
          result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)v2 + 8))(*(_DWORD *)v2, *(_DWORD *)&v2[v3]);
      }
      v2 += 4;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
