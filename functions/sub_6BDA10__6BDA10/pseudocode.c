char *__cdecl sub_6BDA10(signed int a1, int size)
{
  int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  char *v6; // ebp
  char *v7; // esi

  v2 = size; /*0x6bda34*/
  v3 = (0x24 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x24 * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 ) /*0x6bda6d*/
  {
    v5 = v4 + 4; /*0x6bda7a*/
    *(_DWORD *)v4 = size; /*0x6bda80*/
    ArrayConstructor((char *)(v4 + 4), 0x24u, size, (void (__thiscall *)(char *))sub_6C0AD0, Shared_NoOpVirtual_60D0A0); /*0x6bda82*/
    v6 = (char *)v5; /*0x6bda87*/
  }
  else
  {
    v6 = 0; /*0x6bda8b*/
  }
  if ( size ) /*0x6bda97*/
  {
    v7 = v6; /*0x6bda9d*/
    do /*0x6bdaae*/
    {
      sub_6BD510(v7, a1); /*0x6bdaa3*/
      v7 += 0x24; /*0x6bdaa8*/
      --v2; /*0x6bdaab*/
    }
    while ( v2 ); /*0x6bdaae*/
  }
  return v6; /*0x6bdab2*/
}
