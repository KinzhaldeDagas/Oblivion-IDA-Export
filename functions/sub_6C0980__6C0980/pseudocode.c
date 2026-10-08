char *__cdecl sub_6C0980(signed int a1, int size)
{
  int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  char *v6; // ebp
  char *v7; // esi

  v2 = size; /*0x6c09a4*/
  v3 = (0x4C * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 ) /*0x6c09dd*/
  {
    v5 = v4 + 4; /*0x6c09ea*/
    *(_DWORD *)v4 = size; /*0x6c09f0*/
    ArrayConstructor( /*0x6c09f2*/
      (char *)(v4 + 4),
      0x4Cu,
      size,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v6 = (char *)v5; /*0x6c09f7*/
  }
  else
  {
    v6 = 0; /*0x6c09fb*/
  }
  if ( size ) /*0x6c0a07*/
  {
    v7 = v6; /*0x6c0a0d*/
    do /*0x6c0a1e*/
    {
      sub_6C0880(v7, a1); /*0x6c0a13*/
      v7 += 0x4C; /*0x6c0a18*/
      --v2; /*0x6c0a1b*/
    }
    while ( v2 ); /*0x6c0a1e*/
  }
  return v6; /*0x6c0a22*/
}
