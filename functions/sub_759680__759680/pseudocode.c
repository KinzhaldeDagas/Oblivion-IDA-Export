int __thiscall sub_759680(int *this, unsigned int *a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, unsigned int **, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = (signed int)a2; /*0x759683*/
  sub_75E920((NiRenderer *)this, a2); /*0x75968a*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x7596a3*/
  v4 = *(void (__cdecl **)(int, unsigned int **, int, int *, int))(v6 + 4); /*0x7596a4*/
  v7 = 1; /*0x7596a7*/
  v4(v6, &a2, 1, &v7, 1); /*0x7596af*/
  *((_BYTE *)this + 0x30) = (_BYTE)a2 != 0; /*0x7596bd*/
  return sub_709430((char *)this + 0x34, v2); /*0x7596c8*/
}
