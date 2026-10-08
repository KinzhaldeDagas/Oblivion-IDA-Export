char *__cdecl sub_6C2590(signed int a1, int size)
{
  int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  char *v6; // ebp
  char *v7; // esi

  v2 = size; /*0x6c25b4*/
  v3 = (unsigned __int64)(unsigned int)size >> 0x1D != 0 ? 0xFFFFFFFF : 8 * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 ) /*0x6c25ed*/
  {
    v5 = v4 + 4; /*0x6c25fa*/
    *(_DWORD *)v4 = size; /*0x6c2600*/
    ArrayConstructor( /*0x6c2602*/
      (char *)(v4 + 4),
      8u,
      size,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v6 = (char *)v5; /*0x6c2607*/
  }
  else
  {
    v6 = 0; /*0x6c260b*/
  }
  if ( size ) /*0x6c2617*/
  {
    v7 = v6; /*0x6c261d*/
    do /*0x6c262e*/
    {
      sub_6BB5E0(v7, a1); /*0x6c2623*/
      v7 += 8; /*0x6c2628*/
      --v2; /*0x6c262b*/
    }
    while ( v2 ); /*0x6c262e*/
  }
  return v6; /*0x6c2632*/
}
