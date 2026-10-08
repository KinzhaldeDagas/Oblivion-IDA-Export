_DWORD *__thiscall sub_90C8D0(_WORD *this, int a2)
{
  int v3; // edx
  int v4; // edi
  _DWORD *v5; // ecx
  int v6; // eax
  bool v7; // zf
  int v8; // ebp
  int v9; // ebp

  sub_929DD0(this, a2); /*0x90c8d9*/
  *(_DWORD *)this = &off_A9C4D4; /*0x90c8e0*/
  if ( a2 ) /*0x90c8e6*/
  {
    v3 = 0; /*0x90c8eb*/
    if ( *((int *)this + 0xA) > 0 ) /*0x90c8ef*/
    {
      v4 = 0; /*0x90c8f3*/
      do /*0x90c935*/
      {
        v5 = *(_DWORD **)(*((_DWORD *)this + 0x10) + 4 * v3); /*0x90c8fd*/
        v6 = v4 + *((_DWORD *)this + 9); /*0x90c902*/
        v7 = *(_BYTE *)(v6 + 0x10) == 1; /*0x90c904*/
        *(_DWORD *)v6 = *v5; /*0x90c907*/
        if ( v7 ) /*0x90c909*/
          v8 = v5[3]; /*0x90c90b*/
        else
          v8 = v5[6]; /*0x90c910*/
        v7 = *(_BYTE *)(v6 + 0x11) == 1; /*0x90c913*/
        *(_DWORD *)(v6 + 0xC) = v8; /*0x90c916*/
        if ( v7 ) /*0x90c919*/
          v9 = v5[9]; /*0x90c91b*/
        else
          v9 = v5[0xF]; /*0x90c920*/
        *(_DWORD *)(v6 + 0x1C) = v9; /*0x90c923*/
        *(_DWORD *)(v6 + 0x24) = v5[0xC]; /*0x90c929*/
        ++v3; /*0x90c92f*/
        v4 += 0x30; /*0x90c930*/
      }
      while ( v3 < *((_DWORD *)this + 0xA) ); /*0x90c935*/
    }
  }
  return this; /*0x90c939*/
}
