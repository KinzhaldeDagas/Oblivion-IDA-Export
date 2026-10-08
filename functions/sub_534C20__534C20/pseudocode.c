int __stdcall sub_534C20(const char *a1)
{
  int v1; // ecx
  int v2; // eax
  unsigned int v3; // edx
  char *v4; // edi
  int v6; // esi
  int result; // eax
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  v1 = *(_DWORD *)&MEMORY[0xB33E90][0xF00]; /*0x534c23*/
  v9 = 1; /*0x534c31*/
  v8 = 0; /*0x534c39*/
  v2 = sub_494410(v1, &v8); /*0x534c41*/
  v3 = strlen(a1) + 1; /*0x534c57*/
  v4 = (char *)(v2 + *(_DWORD *)(v2 + 8) + 0xF); /*0x534c64*/
  while ( *++v4 ) /*0x534c6f*/
    ; /*0x534c67*/
  qmemcpy(v4, a1, v3); /*0x534c76*/
  *(_DWORD *)(v2 + 8) += strlen(a1); /*0x534c8f*/
  v6 = sub_494410(v2, &v9); /*0x534c9e*/
  result = sub_533D30(4, (char *)(v6 + 0x10)); /*0x534ca6*/
  *(_BYTE *)(v6 + 0x10) = 0; /*0x534cae*/
  *(_DWORD *)(v6 + 0xC) = result; /*0x534cb2*/
  *(_DWORD *)(v6 + 8) = 0; /*0x534cb5*/
  return result; /*0x534cb1*/
}
