void __thiscall sub_6C6A50(_DWORD *this, char a2)
{
  int v2; // ebp
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // edx
  unsigned int i; // [esp+1Ch] [ebp-4h]

  v2 = 0; /*0x6c6a53*/
  for ( i = 0; i < *(this + 3); ++i ) /*0x6c6a57*/
  {
    v4 = *(this + 5); /*0x6c6a62*/
    v5 = *(_DWORD *)(v4 + v2); /*0x6c6a65*/
    v6 = v2 + v4; /*0x6c6a68*/
    if ( v5 ) /*0x6c6a6c*/
    {
      v7 = *(_DWORD *)(v6 + 8); /*0x6c6a6e*/
      if ( v7 ) /*0x6c6a73*/
      {
        LOBYTE(v8) = *(_BYTE *)(v6 + 0xD); /*0x6c6a75*/
        if ( (_BYTE)v8 == 0xFF ) /*0x6c6a7b*/
          v8 = a2; /*0x6c6a7d*/
        else
          v8 = (unsigned __int8)v8; /*0x6c6a84*/
        *(_BYTE *)(v6 + 0xC) = (*(int (__thiscall **)(int, int, _DWORD, int, _DWORD))(*(_DWORD *)v7 + 0x98))( /*0x6c6a9f*/
                                 v7,
                                 v5,
                                 0.0,
                                 v8,
                                 1.0);
      }
    }
    v2 += 0x10; /*0x6c6aa9*/
  }
}
