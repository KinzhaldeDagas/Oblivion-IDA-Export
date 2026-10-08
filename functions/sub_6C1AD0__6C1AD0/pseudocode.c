char *__cdecl sub_6C1AD0(signed int a1, int size)
{
  int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  char *v6; // ebp
  char *v7; // esi

  v2 = size; /*0x6c1af4*/
  v3 = (0x1C * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 ) /*0x6c1b2d*/
  {
    v5 = v4 + 4; /*0x6c1b3a*/
    *(_DWORD *)v4 = size; /*0x6c1b40*/
    ArrayConstructor( /*0x6c1b42*/
      (char *)(v4 + 4),
      0x1Cu,
      size,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v6 = (char *)v5; /*0x6c1b47*/
  }
  else
  {
    v6 = 0; /*0x6c1b4b*/
  }
  if ( size ) /*0x6c1b57*/
  {
    v7 = v6; /*0x6c1b5d*/
    do /*0x6c1b6e*/
    {
      sub_6C19D0(v7, a1); /*0x6c1b63*/
      v7 += 0x1C; /*0x6c1b68*/
      --v2; /*0x6c1b6b*/
    }
    while ( v2 ); /*0x6c1b6e*/
  }
  return v6; /*0x6c1b72*/
}
