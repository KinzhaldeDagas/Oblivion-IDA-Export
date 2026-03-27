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

  v3 = 0;
  if ( dword_B34D90 )
  {
    v4 = _vsprintf(DstBuf, Format, ArgList);
    if ( v4 >= 0 )
    {
      v5 = v12[v4] == 0xD;
      v6 = &DstBuf[v4];
      if ( !v5 || v6[0xFFFFFFFF] != 0xA )
      {
        v7 = &v12[1];
        while ( *++v7 )
          ;
        v9 = byte_A3D9B2;
        *(_WORD *)v7 = *(_WORD *)word_A3D9B0;
        v7[2] = v9;
      }
      switch ( a1 )
      {
        case 0:
          (**(void (__thiscall ***)(int, char *))dword_B34D90)(dword_B34D90, DstBuf);
          return 0;
        case 2:
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_B34D90 + 8))(dword_B34D90, DstBuf);
          return 0;
        case 3:
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_B34D90 + 0xC))(dword_B34D90, DstBuf);
          return 0;
        case 4:
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_B34D90 + 0x10))(dword_B34D90, DstBuf);
          return 0;
        case 5:
          v11 = (*(int (__stdcall **)(char *))(*(_DWORD *)dword_B34D90 + 0x20))(DstBuf);
          goto LABEL_18;
        case 6:
          v11 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_B34D90 + 0x1C))(dword_B34D90, DstBuf);
          goto LABEL_18;
        case 7:
          v11 = (*(int (__stdcall **)(char *))(*(_DWORD *)dword_B34D90 + 0x18))(DstBuf);
          goto LABEL_18;
        case 8:
          return v3;
        case 9:
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_B34D90 + 0x14))(dword_B34D90, DstBuf);
          return 0;
        default:
          v11 = (*(int (__stdcall **)(char *))(*(_DWORD *)dword_B34D90 + 4))(DstBuf);
LABEL_18:
          v3 = v11;
          break;
      }
    }
  }
  return v3;
}
