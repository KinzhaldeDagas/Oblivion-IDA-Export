int __thiscall sub_51F760(char *this)
{
  int v2; // edi
  _WORD *v3; // eax
  _WORD *v4; // eax
  char *v5; // ebx
  char *v6; // edx
  char *v7; // ecx
  int v8; // esi

  v2 = 0; /*0x51f788*/
  v3 = (_WORD *)FormHeapAlloc(0x1Cu); /*0x51f78a*/
  if ( v3 ) /*0x51f79c*/
    v4 = sub_51F570(v3); /*0x51f7a0*/
  else
    v4 = 0; /*0x51f7a7*/
  v5 = this + 0x3C; /*0x51f7a9*/
  v6 = this + 0x3C; /*0x51f7ac*/
  v7 = 0; /*0x51f7ae*/
  if ( this == (char *)0xFFFFFFC4 ) /*0x51f7ba*/
    goto LABEL_10; /*0x51f7ba*/
  do /*0x51f7d4*/
  {
    v8 = *((_DWORD *)v6 + 1); /*0x51f7c0*/
    if ( !v8 && !*(_DWORD *)v6 ) /*0x51f7c7*/
      break; /*0x51f7c9*/
    v7 = v6; /*0x51f7cb*/
    v6 = *((char **)v6 + 1); /*0x51f7cd*/
    ++v2; /*0x51f7cf*/
  }
  while ( v8 ); /*0x51f7d4*/
  if ( !v7 ) /*0x51f7d8*/
  {
LABEL_10:
    BSSimpleList_PushFront(v5, (int)v4); /*0x51f7f8*/
    return v2; /*0x51f7fd*/
  }
  else
  {
    BSSimpleList_PushBack(v7, (int)v4); /*0x51f7db*/
    return v2; /*0x51f7e0*/
  }
}
