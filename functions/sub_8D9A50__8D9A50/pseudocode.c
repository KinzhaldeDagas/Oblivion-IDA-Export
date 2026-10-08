void __thiscall sub_8D9A50(_DWORD *this)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  _WORD *v7; // ecx

  v2 = this + 4; /*0x8d9a56*/
  v3 = this + 4; /*0x8d9a59*/
  v4 = 2; /*0x8d9a5b*/
  do /*0x8d9a84*/
  {
    if ( !*v3 ) /*0x8d9a60*/
    {
      v5 = *v2 ^ *(this + 5); /*0x8d9a6b*/
      if ( v5 ) /*0x8d9a6d*/
      {
        v6 = *(_DWORD *)(v5 + 8); /*0x8d9a6f*/
        if ( v6 ) /*0x8d9a74*/
        {
          v7 = *(_WORD **)(v6 + 0x34); /*0x8d9a76*/
          *v3 = v7; /*0x8d9a79*/
          sub_8BC720(v7); /*0x8d9a7b*/
        }
      }
    }
    ++v3; /*0x8d9a80*/
    --v4; /*0x8d9a83*/
  }
  while ( v4 ); /*0x8d9a84*/
}
