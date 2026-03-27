char __userpurge BSFile_OpenFile@<al>(int this@<ecx>, int a2@<ebx>, int a3, char a4)
{
  bool v6; // zf
  const char *v7; // ebx
  FILE *v8; // eax
  const char *v9; // eax
  FILE *v10; // eax
  int v11; // eax
  bool v12; // bl
  void *v13; // eax
  size_t v14; // [esp-8h] [ebp-10h]

  if ( *(_DWORD *)(this + 0x1C) )
    return 1;
  v6 = *(_DWORD *)(this + 0x20) == 0;
  HIDWORD(v14) = a2;
  *(_DWORD *)(this + 0x14) = 0;
  *(_DWORD *)(this + 0x10) = 0;
  *(_DWORD *)(this + 0x18) = 0;
  if ( v6 )
  {
    if ( a4 )
      v7 = "rt";
    else
      v7 = "rb";
  }
  else
  {
    v7 = (const char *)&off_A36344;
    if ( !a4 )
      v7 = (const char *)&off_A36340;
  }
  v8 = fopen((const char *)(this + 0x3C), v7);
  *(_DWORD *)(this + 0x1C) = v8;
  if ( !v8 && *(_DWORD *)(this + 0x20) == 1 )
  {
    v9 = "wt";
    if ( !a4 )
      v9 = "wb";
    v10 = fopen((const char *)(this + 0x3C), v9);
    *(_DWORD *)(this + 0x1C) = v10;
    if ( v10 )
      fclose(v10);
    *(_DWORD *)(this + 0x1C) = fopen((const char *)(this + 0x3C), v7);
  }
  if ( !*(_DWORD *)(this + 0x1C) )
    goto LABEL_23;
  v11 = *(_DWORD *)(this + 0xC);
  *(_BYTE *)(this + 0x24) = 1;
  if ( v11 )
  {
    if ( !*(_DWORD *)(this + 0x18) )
    {
      v12 = v11 == 0xFFFFFFFF;
      if ( v11 == 0xFFFFFFFF )
        *(_DWORD *)(this + 0xC) = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x10))(this);
      v13 = (void *)FormHeapAlloc(*(_DWORD *)(this + 0xC));
      *(_DWORD *)(this + 0x18) = v13;
      if ( v12 )
      {
        LODWORD(v14) = *(_DWORD *)(this + 0xC);
        *(_DWORD *)(this + 0x10) = v14;
        *(_DWORD *)(this + 0x14) = 0;
        if ( (unsigned int)sub_747D10((FILE **)this, v13, v14) != *(_DWORD *)(this + 0xC) )
LABEL_23:
          *(_BYTE *)(this + 0x24) = 0;
      }
    }
  }
  return *(_BYTE *)(this + 0x24);
}
