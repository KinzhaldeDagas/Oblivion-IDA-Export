unsigned int __stdcall sub_9A65B0(int a1)
{
  int v1; // ebx
  unsigned int v2; // kr00_4
  char *v3; // esi
  char *v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v1 = a1; /*0x9a65b2*/
  v2 = strlen(*(const char **)(a1 + 0xC)); /*0x9a65ba*/
  v3 = (char *)FormHeapAlloc(v2 + 1); /*0x9a65d5*/
  strcpy_s(v3, v2 + 1, *(const char **)(v1 + 0xC)); /*0x9a65dd*/
  v4 = strstr(v3, "@@"); /*0x9a65e8*/
  if ( !v4 ) /*0x9a65f3*/
    return 0x80000040; /*0x9a65f3*/
  *v4 = 0; /*0x9a65fb*/
  a1 = 0; /*0x9a65fe*/
  if ( !sub_9A55C0(v3, (const char **)&v8) ) /*0x9a6606*/
    return 0x80000040; /*0x9a6606*/
  FormHeapFree((unsigned int)v3); /*0x9a6613*/
  v5 = v8; /*0x9a6618*/
  *(_DWORD *)(v1 + 0x14) = *(_DWORD *)(v1 + 0x14) & 0xFFFFFF00 | (unsigned __int8)unk_B4294C[sub_9A5610(v8, &a1, &v8)]; /*0x9a6643*/
  if ( !v5 ) /*0x9a6646*/
    return 0x80000040; /*0x9a665b*/
  v6 = a1; /*0x9a6648*/
  *(_DWORD *)(v1 + 0x10) = v5; /*0x9a664c*/
  *(_DWORD *)(v1 + 0x20) = v6; /*0x9a664f*/
  return 0; /*0x9a6652*/
}
