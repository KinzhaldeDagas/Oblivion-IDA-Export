char __cdecl sub_95FD10(float a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ebx
  int v13; // esi
  unsigned int v15; // [esp+38h] [ebp-4h]

  v10 = a2; /*0x95fd11*/
  v11 = 0; /*0x95fd17*/
  v15 = 0; /*0x95fd1f*/
  if ( !*(_WORD *)(a2 + 0xE) ) /*0x95fd19*/
    return 0; /*0x95fd9d*/
  while ( 1 ) /*0x95fd33*/
  {
    v12 = *(_DWORD *)(*(_DWORD *)(v10 + 8) + 4 * v11); /*0x95fd33*/
    v13 = 0; /*0x95fd36*/
    if ( *(_WORD *)(a4 + 0xE) ) /*0x95fd38*/
      break; /*0x95fd38*/
LABEL_6:
    v15 = ++v11; /*0x95fd97*/
    if ( v11 >= *(unsigned __int16 *)(v10 + 0xE) ) /*0x95fd9b*/
      return 0; /*0x95fd9b*/
  }
  while ( !(unsigned __int8)sub_95D9B0(a1, v12, a3, *(_DWORD *)(*(_DWORD *)(a4 + 8) + 4 * v13), a5, a6, a7, a8, a9, a10) ) /*0x95fd79*/
  {
    if ( ++v13 >= (unsigned int)*(unsigned __int16 *)(a4 + 0xE) ) /*0x95fd84*/
    {
      v11 = v15; /*0x95fd86*/
      v10 = a2; /*0x95fd8a*/
      goto LABEL_6; /*0x95fd8a*/
    }
  }
  *(_DWORD *)(a2 + 0x14) = v15; /*0x95fdad*/
  *(_DWORD *)(a4 + 0x14) = v13; /*0x95fdb0*/
  return 1; /*0x95fd9d*/
}
