_DWORD *__cdecl sub_6BCDA0(signed int a1, int size)
{
  unsigned int v2; // ecx
  int v3; // eax
  int v4; // esi
  int v5; // ebp
  int v6; // ebx
  char *v7; // esi

  v2 = (unsigned __int64)(unsigned int)size >> 0x1A != 0 ? 0xFFFFFFFF : size << 6;
  v3 = FormHeapAlloc(__CFADD__(v2, 4) ? 0xFFFFFFFF : v2 + 4);
  if ( v3 ) /*0x6bcdfd*/
  {
    v4 = v3 + 4; /*0x6bce0a*/
    *(_DWORD *)v3 = size; /*0x6bce10*/
    ArrayConstructor( /*0x6bce12*/
      (char *)(v3 + 4),
      0x40u,
      size,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v5 = v4; /*0x6bce17*/
  }
  else
  {
    v5 = 0; /*0x6bce1b*/
  }
  if ( size ) /*0x6bce27*/
  {
    v6 = size; /*0x6bce29*/
    v7 = (char *)(v5 + 0x1C); /*0x6bce2f*/
    do /*0x6bce52*/
    {
      sub_6BC1C0(v7 + 0xFFFFFFE4, a1); /*0x6bce36*/
      sub_709430(v7 + 0xFFFFFFF4, a1); /*0x6bce3f*/
      sub_709430(v7, a1); /*0x6bce47*/
      v7 += 0x40; /*0x6bce4c*/
      --v6; /*0x6bce4f*/
    }
    while ( v6 ); /*0x6bce52*/
  }
  return (_DWORD *)v5; /*0x6bce56*/
}
