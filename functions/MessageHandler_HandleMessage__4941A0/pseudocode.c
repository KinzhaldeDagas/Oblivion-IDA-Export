int __cdecl MessageHandler_HandleMessage(int a1, char *Format, va_list ArgList)
{
  int v3; // esi
  int v4; // eax
  bool v5; // zf
  char *v6; // eax
  char *v7; // eax
  char v9; // dl
  int v11; // eax
  char v12[2]; // [esp+2h] [ebp-32CEh] BYREF
  char DstBuf[13000]; // [esp+4h] [ebp-32CCh] BYREF

  v3 = 0; /*0x4941c7*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0xF00] ) /*0x4941c9*/
  {
    v4 = _vsprintf(DstBuf, Format, ArgList); /*0x4941dc*/
    if ( v4 >= 0 ) /*0x4941e6*/
    {
      v5 = v12[v4] == 0xD; /*0x4941ec*/
      v6 = &DstBuf[v4]; /*0x4941f1*/
      if ( !v5 || v6[0xFFFFFFFF] != 0xA ) /*0x4941fb*/
      {
        v7 = &v12[1]; /*0x494201*/
        while ( *++v7 ) /*0x49420c*/
          ; /*0x494204*/
        v9 = byte_A3D9B2; /*0x494215*/
        *(_WORD *)v7 = *(_WORD *)word_A3D9B0; /*0x49421b*/
        v7[2] = v9; /*0x49421e*/
      }
      switch ( a1 ) /*0x494231*/
      {
        case 0: /*0x494231*/
          (***(void (__thiscall ****)(_DWORD, char *))&MEMORY[0xB33E90][0xF00])( /*0x494247*/
            *(_DWORD *)&MEMORY[0xB33E90][0xF00],
            DstBuf);
          return 0; /*0x494260*/
        case 2: /*0x494231*/
          (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 8))( /*0x494271*/
            *(_DWORD *)&MEMORY[0xB33E90][0xF00],
            DstBuf);
          return 0; /*0x49428a*/
        case 3: /*0x494231*/
          (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0xC))( /*0x49429b*/
            *(_DWORD *)&MEMORY[0xB33E90][0xF00],
            DstBuf);
          return 0; /*0x4942b4*/
        case 4: /*0x494231*/
          (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x10))( /*0x4942c5*/
            *(_DWORD *)&MEMORY[0xB33E90][0xF00],
            DstBuf);
          return 0; /*0x4942de*/
        case 5: /*0x494231*/
          v11 = (*(int (__stdcall **)(char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x20))(DstBuf); /*0x4942ea*/
          goto LABEL_18; /*0x4942ea*/
        case 6: /*0x494231*/
          v11 = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x1C))( /*0x4942fc*/
                  *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                  DstBuf);
          goto LABEL_18; /*0x4942fe*/
        case 7: /*0x494231*/
          v11 = (*(int (__stdcall **)(char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))(DstBuf); /*0x49430b*/
          goto LABEL_18; /*0x49430b*/
        case 8: /*0x494231*/
          return v3;
        case 9: /*0x494231*/
          (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x14))( /*0x49431d*/
            *(_DWORD *)&MEMORY[0xB33E90][0xF00],
            DstBuf);
          return 0; /*0x494336*/
        default:
          v11 = (*(int (__stdcall **)(char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 4))(DstBuf); /*0x494347*/
LABEL_18:
          v3 = v11; /*0x494349*/
          break; /*0x494349*/
      }
    }
  }
  return v3; /*0x49424b*/
}
