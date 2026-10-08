int __thiscall sub_4A2850(_DWORD *this)
{
  unsigned int v2; // edi
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  _DWORD *v7; // esi
  unsigned int *v8; // eax
  char v9; // bl
  int v10; // esi
  int v11; // eax
  unsigned int v13; // [esp+14h] [ebp-18h] BYREF
  unsigned int *v14; // [esp+18h] [ebp-14h] BYREF
  char ArgList[4]; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v16; // [esp+28h] [ebp-4h]

  sub_4A25F0(this); /*0x4a2879*/
  v2 = 0; /*0x4a287e*/
  v13 = 0; /*0x4a2880*/
  v3 = *(this + 3); /*0x4a2884*/
  v4 = *(_DWORD *)(v3 + 4); /*0x4a2887*/
  v5 = 0; /*0x4a288a*/
  v16 = 0; /*0x4a288e*/
  if ( v4 ) /*0x4a2892*/
  {
    v6 = *(_DWORD **)(v3 + 8); /*0x4a2894*/
    v7 = v6; /*0x4a2897*/
    while ( !*v7 ) /*0x4a28a2*/
    {
      ++v5; /*0x4a28a8*/
      ++v7; /*0x4a28ab*/
      if ( v5 >= v4 ) /*0x4a28b0*/
        goto LABEL_5; /*0x4a28b0*/
    }
    v8 = (unsigned int *)v6[v5]; /*0x4a295b*/
  }
  else
  {
LABEL_5:
    v8 = 0; /*0x4a28b2*/
  }
  v9 = bDisableWarning_MESSAGES; /*0x4a28b4*/
  v10 = 0; /*0x4a28ba*/
  v14 = v8; /*0x4a28be*/
  bDisableWarning_MESSAGES = 1; /*0x4a28c2*/
  while ( v14 ) /*0x4a28c9*/
  {
    sub_7B2600((unsigned int **)*(this + 3), &v14, ArgList, &v13); /*0x4a28e2*/
    v2 = v13; /*0x4a28e7*/
    if ( v13 ) /*0x4a28ed*/
    {
      v11 = *(_DWORD *)(v13 + 4); /*0x4a28ef*/
      if ( v11 ) /*0x4a28f4*/
      {
        if ( v11 != 2 ) /*0x4a28f9*/
        {
          PrintError("Texture \"%s\" count %d.\r\n", *(const char **)ArgList, v11 - 2); /*0x4a2909*/
          ++v10; /*0x4a2911*/
        }
      }
    }
  }
  bDisableWarning_MESSAGES = v9; /*0x4a291d*/
  v16 = 0xFFFFFFFF; /*0x4a2923*/
  if ( v2 ) /*0x4a292b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4a2931*/
      (**(void (__thiscall ***)(unsigned int, int))v2)(v2, 1); /*0x4a2943*/
  }
  return v10; /*0x4a2947*/
}
