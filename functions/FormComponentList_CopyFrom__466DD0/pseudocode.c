int __thiscall FormComponentList_CopyFrom(char *this, int a2)
{
  char *v2; // esi
  int v3; // edi
  int v4; // ebx
  int result; // eax

  if ( a2 ) /*0x466dd7*/
  {
    v2 = this; /*0x466ddb*/
    v3 = a2 - (_DWORD)this; /*0x466ddd*/
    v4 = 0x1A; /*0x466ddf*/
    do /*0x466e00*/
    {
      if ( *(_DWORD *)v2 ) /*0x466de4*/
      {
        result = *(_DWORD *)&v2[v3]; /*0x466de9*/
        if ( result ) /*0x466dee*/
          result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)v2 + 8))(*(_DWORD *)v2, *(_DWORD *)&v2[v3]); /*0x466df8*/
      }
      v2 += 4; /*0x466dfa*/
      --v4; /*0x466dfd*/
    }
    while ( v4 ); /*0x466e00*/
  }
  return result; /*0x466e04*/
}
