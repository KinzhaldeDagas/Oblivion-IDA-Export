_BYTE *__cdecl sub_6C1E10(int a1, int size)
{
  int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  _BYTE *v6; // ebp
  _BYTE *v7; // esi

  v2 = size; /*0x6c1e34*/
  v3 = (unsigned __int64)(unsigned int)size >> 0x1D != 0 ? 0xFFFFFFFF : 8 * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 ) /*0x6c1e6d*/
  {
    v5 = v4 + 4; /*0x6c1e7a*/
    *(_DWORD *)v4 = size; /*0x6c1e80*/
    ArrayConstructor( /*0x6c1e82*/
      (char *)(v4 + 4),
      8u,
      size,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v6 = (_BYTE *)v5; /*0x6c1e87*/
  }
  else
  {
    v6 = 0; /*0x6c1e8b*/
  }
  if ( size ) /*0x6c1e97*/
  {
    v7 = v6; /*0x6c1e9d*/
    do /*0x6c1eae*/
    {
      sub_6BDF60(v7, a1); /*0x6c1ea3*/
      v7 += 8; /*0x6c1ea8*/
      --v2; /*0x6c1eab*/
    }
    while ( v2 ); /*0x6c1eae*/
  }
  return v6; /*0x6c1eb2*/
}
