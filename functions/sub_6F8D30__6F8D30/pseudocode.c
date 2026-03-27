int __usercall sub_6F8D30@<eax>(int a1@<ebp>, int a2, _DWORD *a3, char *Src)
{
  unsigned int *v4; // eax
  rsize_t v6; // [esp-4h] [ebp-3Ch]
  int v7; // [esp+10h] [ebp-28h] BYREF
  unsigned int v8; // [esp+14h] [ebp-24h]
  int v9; // [esp+24h] [ebp-14h]
  unsigned int v10; // [esp+28h] [ebp-10h]
  int v11; // [esp+34h] [ebp-4h]

  v10 = 0xF;
  v9 = 0;
  LOBYTE(v8) = 0;
  sub_414420((int)&v7, a3, 0, 0xFFFFFFFF);
  v11 = 0;
  LODWORD(v6) = strlen(Src);
  v4 = sub_6F6CA0((unsigned int *)&v7, a1, Src, v6);
  *(_DWORD *)(a2 + 0x18) = 0xF;
  *(_DWORD *)(a2 + 0x14) = 0;
  *(_BYTE *)(a2 + 4) = 0;
  sub_414420(a2, v4, 0, 0xFFFFFFFF);
  if ( v10 >= 0x10 )
    FormHeapFree(v8);
  return a2;
}
