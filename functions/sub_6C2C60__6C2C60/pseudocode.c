char *__cdecl sub_6C2C60(signed int a1, int size)
{
  int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  char *v6; // ebp
  char *v7; // esi

  v2 = size; /*0x6c2c84*/
  v3 = (0x14 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 ) /*0x6c2cbd*/
  {
    v5 = v4 + 4; /*0x6c2cca*/
    *(_DWORD *)v4 = size; /*0x6c2cd0*/
    ArrayConstructor((char *)(v4 + 4), 0x14u, size, (void (__thiscall *)(char *))sub_6C0AD0, Shared_NoOpVirtual_60D0A0); /*0x6c2cd2*/
    v6 = (char *)v5; /*0x6c2cd7*/
  }
  else
  {
    v6 = 0; /*0x6c2cdb*/
  }
  if ( size ) /*0x6c2ce7*/
  {
    v7 = v6; /*0x6c2ced*/
    do /*0x6c2cfe*/
    {
      sub_6BD510(v7, a1); /*0x6c2cf3*/
      v7 += 0x14; /*0x6c2cf8*/
      --v2; /*0x6c2cfb*/
    }
    while ( v2 ); /*0x6c2cfe*/
  }
  return v6; /*0x6c2d02*/
}
