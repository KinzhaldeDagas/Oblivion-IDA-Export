unsigned int __stdcall sub_9A65B0(int a1)
{
  int v1; // ebx
  unsigned int v2; // kr00_4
  char *v3; // esi
  char *v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v1 = a1;
  v2 = strlen(*(const char **)(a1 + 0xC));
  v3 = (char *)FormHeapAlloc(v2 + 1);
  strcpy_s(v3, v2 + 1, *(const char **)(v1 + 0xC));
  v4 = strstr(v3, "@@");
  if ( !v4 )
    return 0x80000040;
  *v4 = 0;
  a1 = 0;
  if ( !sub_9A55C0(v3, (unsigned __int8 **)&v8) )
    return 0x80000040;
  FormHeapFree((unsigned int)v3);
  v5 = v8;
  *(_DWORD *)(v1 + 0x14) = *(_DWORD *)(v1 + 0x14) & 0xFFFFFF00 | (unsigned __int8)byte_B4294C[sub_9A5610(v8, &a1, &v8)];
  if ( !v5 )
    return 0x80000040;
  v6 = a1;
  *(_DWORD *)(v1 + 0x10) = v5;
  *(_DWORD *)(v1 + 0x20) = v6;
  return 0;
}
