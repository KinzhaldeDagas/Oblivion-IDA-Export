int __thiscall sub_901CF0(_DWORD *this, _WORD *a2, int a3, int a4)
{
  int v4; // ebp
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  int result; // eax

  v4 = a3; /*0x901cf2*/
  if ( a3 > 0 ) /*0x901cfc*/
  {
    v6 = a4; /*0x901d05*/
    do /*0x901d59*/
    {
      v7 = HIBYTE(*a2); /*0x901d19*/
      a3 = (unsigned __int8)*a2; /*0x901d23*/
      v8 = *(_DWORD *)(*(this + 4) + 8 * v7); /*0x901d2e*/
      result = (*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)v8 + 0x28))(v8, &a3, 1, v6); /*0x901d38*/
      *(_DWORD *)(v6 + 0xC) = ((v7 << 8) + (*(_DWORD *)(v6 + 0xC) & 0xC0FFFFFF)) | 0x3F000000; /*0x901d4f*/
      ++a2; /*0x901d52*/
      v6 += 0x10; /*0x901d55*/
      --v4; /*0x901d58*/
    }
    while ( v4 ); /*0x901d59*/
  }
  return result; /*0x901d5e*/
}
