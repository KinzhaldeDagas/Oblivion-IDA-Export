unsigned int __stdcall sub_9A27E0(int a1)
{
  int v1; // ebx
  unsigned int v2; // kr00_4
  char *v3; // esi
  char *v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  bool v7; // zf
  int v8; // ecx
  int v10; // [esp+8h] [ebp-8h] BYREF
  int v11; // [esp+Ch] [ebp-4h] BYREF

  v1 = a1; /*0x9a27e4*/
  v2 = strlen(*(const char **)(a1 + 0xC)); /*0x9a27ec*/
  v3 = (char *)FormHeapAlloc(v2 + 1); /*0x9a2805*/
  strcpy_s(v3, v2 + 1, *(const char **)(v1 + 0xC)); /*0x9a280d*/
  v4 = strstr(v3, "@@"); /*0x9a2818*/
  if ( !v4 ) /*0x9a2823*/
    return 0x80000040; /*0x9a2823*/
  *v4 = 0; /*0x9a282a*/
  v10 = 0; /*0x9a282e*/
  if ( !sub_9A55C0(v3, (unsigned __int8 **)&a1) ) /*0x9a2836*/
    return 0x80000040; /*0x9a2836*/
  FormHeapFree((unsigned int)v3); /*0x9a2843*/
  v5 = *(_DWORD *)(v1 + 0x14) & 0xFFFFFF00 | (unsigned __int8)unk_B4294C[sub_9A5610(a1, &v10, &v11)]; /*0x9a286b*/
  v6 = a1; /*0x9a286d*/
  v7 = a1 == 0; /*0x9a2874*/
  *(_DWORD *)(v1 + 0x14) = v5; /*0x9a2876*/
  if ( v7 ) /*0x9a2879*/
    return 0x80000040; /*0x9a2890*/
  v8 = v10; /*0x9a287b*/
  *(_DWORD *)(v1 + 0x10) = v6; /*0x9a287f*/
  *(_DWORD *)(v1 + 0x20) = v8; /*0x9a2883*/
  return 0; /*0x9a2882*/
}
