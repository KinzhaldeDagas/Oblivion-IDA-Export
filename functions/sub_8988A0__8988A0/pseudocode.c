_DWORD *__userpurge sub_8988A0@<eax>(int a1@<ecx>, int a2@<ebp>, _DWORD *a3)
{
  int v3; // ecx
  char v5[4]; // [esp+0h] [ebp-8h] BYREF
  _DWORD *v6; // [esp+4h] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 0x88) )
    return sub_8CB450(a2, a1, a3, 1);
  v3 = *(_DWORD *)(a1 + 0x80);
  v5[0] = 8;
  v6 = a3;
  sub_8D8830(v3, (int)v5);
  return 0;
}
