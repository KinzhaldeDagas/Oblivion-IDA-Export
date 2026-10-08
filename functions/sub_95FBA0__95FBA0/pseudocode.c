char __cdecl sub_95FBA0(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // esi

  v5 = a2; /*0x95fba0*/
  v6 = 0; /*0x95fba6*/
  if ( !*(_WORD *)(a2 + 0xE) ) /*0x95fba8*/
    return 0; /*0x95fc02*/
  while ( 1 ) /*0x95fbb7*/
  {
    v7 = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * v6); /*0x95fbb7*/
    v8 = 0; /*0x95fbba*/
    if ( *(_WORD *)(a4 + 0xE) ) /*0x95fbbc*/
      break; /*0x95fbbc*/
LABEL_6:
    if ( ++v6 >= (unsigned int)*(unsigned __int16 *)(v5 + 0xE) ) /*0x95fc00*/
      return 0; /*0x95fc00*/
  }
  while ( !(unsigned __int8)sub_95D920(a1, v7, a3, *(_DWORD *)(*(_DWORD *)(a4 + 8) + 4 * v8), a5) ) /*0x95fbe6*/
  {
    if ( ++v8 >= (unsigned int)*(unsigned __int16 *)(a4 + 0xE) ) /*0x95fbf1*/
    {
      v5 = a2; /*0x95fbf3*/
      goto LABEL_6; /*0x95fbf3*/
    }
  }
  *(_DWORD *)(a2 + 0x14) = v6; /*0x95fc0d*/
  *(_DWORD *)(a4 + 0x14) = v8; /*0x95fc10*/
  return 1; /*0x95fc02*/
}
