char *__cdecl sub_6C12C0(signed int a1, int size)
{
  int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  char *v6; // ebp
  char *v7; // esi

  v2 = size; /*0x6c12e4*/
  v3 = (unsigned __int64)(unsigned int)size >> 0x1A != 0 ? 0xFFFFFFFF : size << 6;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 ) /*0x6c131d*/
  {
    v5 = v4 + 4; /*0x6c132a*/
    *(_DWORD *)v4 = size; /*0x6c1330*/
    ArrayConstructor((char *)(v4 + 4), 0x40u, size, (void (__thiscall *)(char *))sub_6C0AD0, Shared_NoOpVirtual_60D0A0); /*0x6c1332*/
    v6 = (char *)v5; /*0x6c1337*/
  }
  else
  {
    v6 = 0; /*0x6c133b*/
  }
  if ( size ) /*0x6c1347*/
  {
    v7 = v6; /*0x6c134d*/
    do /*0x6c135e*/
    {
      sub_6C11C0(v7, a1); /*0x6c1353*/
      v7 += 0x40; /*0x6c1358*/
      --v2; /*0x6c135b*/
    }
    while ( v2 ); /*0x6c135e*/
  }
  return v6; /*0x6c1362*/
}
