int __thiscall sub_6FB590(const char **this, unsigned int a2)
{
  signed int v2; // ebp
  int (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // [esp-14h] [ebp-24h]
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x6fb592*/
  sub_6FE000(this, (_DWORD *)a2); /*0x6fb59b*/
  a2 = *((unsigned __int16 *)this + 0xC); /*0x6fb5ab*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x6fb5bc*/
  v4 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v8 + 8); /*0x6fb5bd*/
  v9 = 4; /*0x6fb5c0*/
  result = v4(v8, &a2, 4, &v9, 1); /*0x6fb5c8*/
  v6 = 0; /*0x6fb5ca*/
  if ( a2 ) /*0x6fb5d3*/
  {
    v7 = 0; /*0x6fb5d6*/
    do /*0x6fb5ed*/
    {
      result = sub_6FB460((char *)&(*(this + 4))[v7], v2); /*0x6fb5de*/
      ++v6; /*0x6fb5e3*/
      v7 += 0x10; /*0x6fb5e6*/
    }
    while ( v6 < a2 ); /*0x6fb5ed*/
  }
  return result; /*0x6fb5f0*/
}
