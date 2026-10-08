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

  if ( *(_DWORD *)(this + 0x1C) ) /*0x42fe86*/
    return 1; /*0x42fe8c*/
  v6 = *(_DWORD *)(this + 0x20) == 0; /*0x42fe92*/
  HIDWORD(v14) = a2; /*0x42fe95*/
  *(_DWORD *)(this + 0x14) = 0; /*0x42fe96*/
  *(_DWORD *)(this + 0x10) = 0; /*0x42fe99*/
  *(_DWORD *)(this + 0x18) = 0; /*0x42fe9c*/
  if ( v6 ) /*0x42fe9f*/
  {
    if ( a4 ) /*0x42fea6*/
      v7 = "rt"; /*0x42fea8*/
    else
      v7 = "rb"; /*0x42feaf*/
  }
  else
  {
    v7 = (const char *)&off_A36344; /*0x42febb*/
    if ( !a4 ) /*0x42fec0*/
      v7 = (const char *)&off_A36340; /*0x42fec2*/
  }
  v8 = fopen((const char *)(this + 0x3C), v7); /*0x42fecd*/
  *(_DWORD *)(this + 0x1C) = v8; /*0x42fed7*/
  if ( !v8 && *(_DWORD *)(this + 0x20) == 1 ) /*0x42fee0*/
  {
    v9 = "wt"; /*0x42fee7*/
    if ( !a4 ) /*0x42feec*/
      v9 = "wb"; /*0x42feee*/
    v10 = fopen((const char *)(this + 0x3C), v9); /*0x42fef5*/
    *(_DWORD *)(this + 0x1C) = v10; /*0x42feff*/
    if ( v10 ) /*0x42ff02*/
      fclose(v10); /*0x42ff05*/
    *(_DWORD *)(this + 0x1C) = fopen((const char *)(this + 0x3C), v7); /*0x42ff17*/
  }
  if ( !*(_DWORD *)(this + 0x1C) ) /*0x42ff1a*/
    goto LABEL_23; /*0x42ff1a*/
  v11 = *(_DWORD *)(this + 0xC); /*0x42ff20*/
  *(_BYTE *)(this + 0x24) = 1; /*0x42ff25*/
  if ( v11 ) /*0x42ff29*/
  {
    if ( !*(_DWORD *)(this + 0x18) ) /*0x42ff2b*/
    {
      v12 = v11 == 0xFFFFFFFF; /*0x42ff33*/
      if ( v11 == 0xFFFFFFFF ) /*0x42ff38*/
        *(_DWORD *)(this + 0xC) = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x10))(this); /*0x42ff43*/
      v13 = (void *)FormHeapAlloc(*(_DWORD *)(this + 0xC)); /*0x42ff4a*/
      *(_DWORD *)(this + 0x18) = v13;           // MEF v41 verified BSFile open-buffer OOM guard: success replays test BL and stores buffer; failure stores null at +0x18, clears open-success byte +0x24, and returns through 0x42FF74 before preload/later buffered I/O can use null. /*0x42ff54*/
      if ( v12 ) /*0x42ff57*/
      {
        LODWORD(v14) = *(_DWORD *)(this + 0xC); /*0x42ff5c*/
        *(_DWORD *)(this + 0x10) = v14; /*0x42ff5d*/
        *(_DWORD *)(this + 0x14) = 0; /*0x42ff63*/
        if ( (unsigned int)sub_747D10((FILE **)this, v13, v14) != *(_DWORD *)(this + 0xC) ) /*0x42ff6e*/
LABEL_23:
          *(_BYTE *)(this + 0x24) = 0; /*0x42ff70*/
      }
    }
  }
  return *(_BYTE *)(this + 0x24);               // MEF v41 allocation-failure continuation returns BSFile +0x24 status through the normal EBX/ESI/EBP epilogue. /*0x42fe8b*/
}
