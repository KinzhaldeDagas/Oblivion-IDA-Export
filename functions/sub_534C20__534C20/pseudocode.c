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

  v1 = dword_B34D90;
  v9 = 1;
  v8 = 0;
  v2 = sub_494410(v1, &v8);
  v3 = strlen(a1) + 1;
  v4 = (char *)(v2 + *(_DWORD *)(v2 + 8) + 0xF);
  while ( *++v4 )
    ;
  qmemcpy(v4, a1, v3);
  *(_DWORD *)(v2 + 8) += strlen(a1);
  v6 = sub_494410(v2, &v9);
  result = sub_533D30(4, (char *)(v6 + 0x10));
  *(_BYTE *)(v6 + 0x10) = 0;
  *(_DWORD *)(v6 + 0xC) = result;
  *(_DWORD *)(v6 + 8) = 0;
  return result;
}
