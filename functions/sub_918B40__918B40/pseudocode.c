int __thiscall sub_918B40(char *this)
{
  _DWORD *v1; // edi
  int v2; // esi
  char *v3; // ebp
  int v4; // ebx

  v1 = (_DWORD *)(unk_BA950C + 0xC); /*0x918b4b*/
  v2 = 0; /*0x918b4e*/
  if ( *(int *)(unk_BA950C + 0x10) > 0 ) /*0x918b52*/
  {
    v3 = this + 8; /*0x918b56*/
    v4 = 0; /*0x918b59*/
    do /*0x918b78*/
    {
      (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)v3 + 4))(v3, *(_DWORD *)(*v1 + v4), v2++); /*0x918b6c*/
      v4 += 0xC; /*0x918b73*/
    }
    while ( v2 < v1[1] ); /*0x918b78*/
  }
  return 0; /*0x918b7c*/
}
