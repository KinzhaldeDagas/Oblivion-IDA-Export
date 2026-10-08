double **__thiscall sub_4FA910(char *this)
{
  int *v2; // eax
  int *v3; // ebp
  char *v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int *v9; // edi
  bool v10; // zf
  int *v11; // eax

  v2 = (int *)FormHeapAlloc(8u);                // Hot Reload OBSE decode: event-list variable builder allocates a 0x8 list head before scanning script->varList; zero-local scripts keep this empty head. /*0x4fa917*/
  if ( v2 ) /*0x4fa921*/
  {
    *v2 = 0; /*0x4fa923*/
    v2[1] = 0; /*0x4fa929*/
    v3 = v2; /*0x4fa930*/
  }
  else
  {
    v3 = 0; /*0x4fa934*/
  }
  v4 = this + 0x48; /*0x4fa936*/
  if ( this != (char *)0xFFFFFFB8 ) /*0x4fa93b*/
  {
    do /*0x4fa9aa*/
    {
      v5 = *(_DWORD *)v4; /*0x4fa940*/
      if ( !*(_DWORD *)v4 ) /*0x4fa940*/
        break; /*0x4fa944*/
      v4 = *((char **)v4 + 1); /*0x4fa946*/
      v6 = FormHeapAlloc(0x18u);                // Hot Reload OBSE decode: each Script::VariableInfo becomes a 0x18 event-list var payload; fields copied are id +0, data +8, type +0x10. /*0x4fa94b*/
      v7 = v6; /*0x4fa950*/
      if ( v6 ) /*0x4fa957*/
      {
        *(_BYTE *)(v6 + 0x10) = *(_BYTE *)(v5 + 0x10); /*0x4fa95c*/
        *(_DWORD *)v6 = *(_DWORD *)v5; /*0x4fa961*/
        v8 = (int)(v3 + 1); /*0x4fa966*/
        *(double *)(v7 + 8) = *(double *)(v5 + 8); /*0x4fa969*/
        v9 = v3; /*0x4fa96f*/
        if ( v3[1] ) /*0x4fa96c*/
        {
          do /*0x4fa97c*/
          {
            v9 = *(int **)v8; /*0x4fa973*/
            v10 = *(_DWORD *)(*(_DWORD *)v8 + 4) == 0; /*0x4fa975*/
            v8 = *(_DWORD *)v8 + 4; /*0x4fa979*/
          }
          while ( !v10 ); /*0x4fa97c*/
        }
        if ( *v9 ) /*0x4fa97e*/
        {
          v11 = (int *)FormHeapAlloc(8u);       // Hot Reload OBSE decode: additional event-list var nodes are 0x8 list entries appended after the allocated head. /*0x4fa985*/
          if ( v11 ) /*0x4fa98f*/
          {
            *v11 = v7; /*0x4fa991*/
            v11[1] = 0; /*0x4fa993*/
            v9[1] = (int)v11; /*0x4fa99a*/
          }
          else
          {
            v9[1] = 0; /*0x4fa9a1*/
          }
        }
        else
        {
          *v9 = v7; /*0x4fa9a6*/
        }
      }
    }
    while ( v4 ); /*0x4fa9aa*/
  }
  return (double **)v3; /*0x4fa9ad*/
}
