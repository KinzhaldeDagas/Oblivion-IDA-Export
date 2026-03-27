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

  v1 = a1;
  v2 = strlen(*(const char **)(a1 + 0xC));
  v3 = (char *)FormHeapAlloc(v2 + 1);
  strcpy_s(v3, v2 + 1, *(const char **)(v1 + 0xC));
  v4 = strstr(v3, "@@");
  if ( !v4 )
    return 0x80000040;
  *v4 = 0;
  v10 = 0;
  if ( !sub_9A55C0(v3, (int)&a1) )
    return 0x80000040;
  FormHeapFree((unsigned int)v3);
  v5 = *(_DWORD *)(v1 + 0x14) & 0xFFFFFF00 | (unsigned __int8)byte_B4294C[sub_9A5610(a1, &v10, &v11)];
  v6 = a1;
  v7 = a1 == 0;
  *(_DWORD *)(v1 + 0x14) = v5;
  if ( v7 )
    return 0x80000040;
  v8 = v10;
  *(_DWORD *)(v1 + 0x10) = v6;
  *(_DWORD *)(v1 + 0x20) = v8;
  return 0;
}
