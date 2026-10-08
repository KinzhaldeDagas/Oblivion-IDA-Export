unsigned int __stdcall sub_6AAAA0(int a1, int ArgList, char *destination, unsigned int byteCount)
{
  void (__thiscall ***v4)(void *, int); // eax
  unsigned int result; // eax
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void *v7; // ecx
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // eax

  switch ( ArgList ) /*0x6aaaae*/
  {
    case 0: /*0x6aaaae*/
      v7 = *(void **)(a1 + 0x30); /*0x6aab22*/
      if ( v7 ) /*0x6aab27*/
      {
        result = Archive_ReadBytes(v7, destination, byteCount); /*0x6aab3c*/
        *(_DWORD *)(a1 + 0x2C) += result; /*0x6aab41*/
      }
      else
      {
        result = 0x105; /*0x6aab29*/
      }
      break; /*0x6aab2f*/
    case 2: /*0x6aaaae*/
      v8 = BSFile_FilePos_Cur; /*0x6aab4e*/
      if ( byteCount ) /*0x6aab53*/
      {
        if ( byteCount == 2 ) /*0x6aab5f*/
          v8 = BSFile_FilePos_End; /*0x6aab61*/
      }
      else
      {
        v8 = BSFile_FilePos_Beg; /*0x6aab55*/
      }
      v9 = *(_DWORD **)(a1 + 0x30); /*0x6aab6b*/
      if ( v9 ) /*0x6aab70*/
      {
        (*(void (__thiscall **)(_DWORD *, char *, int))(*v9 + 0xC))(v9, destination, v8); /*0x6aab89*/
        v10 = v9[0xC]; /*0x6aab8b*/
        if ( v10 == 0xFFFFFFFF ) /*0x6aab91*/
          v10 = v9[0x52]; /*0x6aab93*/
        *(_DWORD *)(a1 + 0x2C) = v10; /*0x6aab99*/
        result = 0; /*0x6aab9d*/
      }
      else
      {
        result = 0x107; /*0x6aab73*/
      }
      break; /*0x6aab79*/
    case 3: /*0x6aaaae*/
      v4 = (void (__thiscall ***)(void *, int))sub_431130(destination, 0, 0x2800, 8); /*0x6aaac3*/
      if ( v4 ) /*0x6aaacd*/
      {
        if ( *((_BYTE *)v4 + 0x24) ) /*0x6aaacf*/
        {
          *(_DWORD *)(a1 + 0x30) = v4; /*0x6aaad9*/
          *(_DWORD *)(a1 + 0x2C) = 0; /*0x6aaadc*/
          return 0; /*0x6aaae6*/
        }
        (**v4)(v4, 1); /*0x6aaaf1*/
      }
      result = 0x101; /*0x6aaaf3*/
      break; /*0x6aaaf9*/
    case 4: /*0x6aaaae*/
      v6 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x30); /*0x6aab00*/
      if ( v6 ) /*0x6aab05*/
      {
        (**v6)(v6, 1); /*0x6aab16*/
        result = 0; /*0x6aab18*/
      }
      else
      {
        result = 0x104; /*0x6aab07*/
      }
      break; /*0x6aab0d*/
    default:
      PrintError("Unhandled message %i in MMIOReadBSFileProc.", ArgList); /*0x6aaba9*/
      result = 0x10C; /*0x6aabb1*/
      break; /*0x6aabb1*/
  }
  return result; /*0x6aaae5*/
}
