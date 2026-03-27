int __stdcall sub_6AAAA0(int a1, int ArgList, const char *a3, int a4)
{
  void (__thiscall ***v4)(void *, int); // eax
  int result; // eax
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int (__cdecl **v7)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // ecx
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // eax

  switch ( ArgList )
  {
    case 0:
      v7 = *(int (__cdecl ***)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 0x30);
      if ( v7 )
      {
        result = ReadFile__(v7, (int)a3, a4);
        *(_DWORD *)(a1 + 0x2C) += result;
      }
      else
      {
        result = 0x105;
      }
      break;
    case 2:
      v8 = BSFile_FilePos_Cur;
      if ( a4 )
      {
        if ( a4 == 2 )
          v8 = BSFile_FilePos_End;
      }
      else
      {
        v8 = BSFile_FilePos_Beg;
      }
      v9 = *(_DWORD **)(a1 + 0x30);
      if ( v9 )
      {
        (*(void (__thiscall **)(_DWORD *, const char *, int))(*v9 + 0xC))(v9, a3, v8);
        v10 = v9[0xC];
        if ( v10 == 0xFFFFFFFF )
          v10 = v9[0x52];
        *(_DWORD *)(a1 + 0x2C) = v10;
        result = 0;
      }
      else
      {
        result = 0x107;
      }
      break;
    case 3:
      v4 = (void (__thiscall ***)(void *, int))sub_431130(a3, 0, 0x2800, 8);
      if ( v4 )
      {
        if ( *((_BYTE *)v4 + 0x24) )
        {
          *(_DWORD *)(a1 + 0x30) = v4;
          *(_DWORD *)(a1 + 0x2C) = 0;
          return 0;
        }
        (**v4)(v4, 1);
      }
      result = 0x101;
      break;
    case 4:
      v6 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x30);
      if ( v6 )
      {
        (**v6)(v6, 1);
        result = 0;
      }
      else
      {
        result = 0x104;
      }
      break;
    default:
      PrintError("Unhandled message %i in MMIOReadBSFileProc.", ArgList);
      result = 0x10C;
      break;
  }
  return result;
}
