int __thiscall sub_51F760(char *this)
{
  int v2; // edi
  _WORD *v3; // eax
  _WORD *v4; // eax
  char *v5; // ebx
  char *v6; // edx
  char *v7; // ecx
  int v8; // esi

  v2 = 0;
  v3 = (_WORD *)FormHeapAlloc(0x1Cu);
  if ( v3 )
    v4 = sub_51F570(v3);
  else
    v4 = 0;
  v5 = this + 0x3C;
  v6 = this + 0x3C;
  v7 = 0;
  if ( this == (char *)0xFFFFFFC4 )
    goto LABEL_10;
  do
  {
    v8 = *((_DWORD *)v6 + 1);
    if ( !v8 && !*(_DWORD *)v6 )
      break;
    v7 = v6;
    v6 = *((char **)v6 + 1);
    ++v2;
  }
  while ( v8 );
  if ( !v7 )
  {
LABEL_10:
    BSSimpleList_PushFront(v5, (int)v4);
    return v2;
  }
  else
  {
    BSSimpleList_PushBack(v7, (int)v4);
    return v2;
  }
}
