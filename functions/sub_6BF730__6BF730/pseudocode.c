char *__cdecl sub_6BF730(signed int a1, int size)
{
  int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  char *v6; // ebp
  char *v7; // esi

  v2 = size; /*0x6bf754*/
  v3 = (unsigned __int64)(unsigned int)size >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 ) /*0x6bf78d*/
  {
    v5 = v4 + 4; /*0x6bf79a*/
    *(_DWORD *)v4 = size; /*0x6bf7a0*/
    ArrayConstructor( /*0x6bf7a2*/
      (char *)(v4 + 4),
      0x10u,
      size,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v6 = (char *)v5; /*0x6bf7a7*/
  }
  else
  {
    v6 = 0; /*0x6bf7ab*/
  }
  if ( size ) /*0x6bf7b7*/
  {
    v7 = v6; /*0x6bf7bd*/
    do /*0x6bf7ce*/
    {
      sub_6BC1C0(v7, a1); /*0x6bf7c3*/
      v7 += 0x10; /*0x6bf7c8*/
      --v2; /*0x6bf7cb*/
    }
    while ( v2 ); /*0x6bf7ce*/
  }
  return v6; /*0x6bf7d2*/
}
