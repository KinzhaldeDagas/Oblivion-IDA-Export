unsigned int __stdcall sub_9A26F0(int a1)
{
  char *v1; // eax
  int v2; // ecx
  char *v3; // eax

  v1 = sub_9A2640(*(char **)(a1 + 0xC)); /*0x9a26f9*/
  if ( !v1 ) /*0x9a2705*/
    return 0x80000040; /*0x9a2780*/
  *(_DWORD *)(a1 + 0x10) = v1; /*0x9a270d*/
  if ( (unsigned int)(v1 + 0xFFFFFFFF) > 0xB ) /*0x9a2710*/
    v2 = 0; /*0x9a2727*/
  else
    v2 = 7; /*0x9a2720*/
  v3 = v1 + 0xFFFFFFFF; /*0x9a273c*/
  *(_DWORD *)(a1 + 0x14) = *(_DWORD *)(a1 + 0x14) & 0xFFFFFF00 | (unsigned __int8)unk_B4294C[v2]; /*0x9a273f*/
  if ( v3 ) /*0x9a2743*/
  {
    if ( v3 == (char *)1 ) /*0x9a2748*/
    {
      *(_DWORD *)(a1 + 0x28) = 0x10; /*0x9a274f*/
      *(_DWORD *)(a1 + 0x2C) = 0x10; /*0x9a2752*/
      *(_BYTE *)(a1 + 0x34) = 0; /*0x9a2755*/
      *(_DWORD *)(a1 + 0x30) = &unk_B329D4; /*0x9a2758*/
    }
    return 0; /*0x9a275f*/
  }
  else
  {
    *(_DWORD *)(a1 + 0x28) = 0x10; /*0x9a276a*/
    *(_DWORD *)(a1 + 0x2C) = 0x10; /*0x9a276d*/
    *(_BYTE *)(a1 + 0x34) = 0; /*0x9a2770*/
    *(_DWORD *)(a1 + 0x30) = &unk_B329C4; /*0x9a2773*/
    return 0; /*0x9a277a*/
  }
}
