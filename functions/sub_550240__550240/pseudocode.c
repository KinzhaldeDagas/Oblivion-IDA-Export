char __cdecl sub_550240(int a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // edx
  _DWORD **v4; // ecx
  int v5; // edx
  int v6; // eax
  char v7; // cl
  int v8; // eax
  _DWORD **v9; // ecx
  int v10; // eax
  _DWORD **v11; // ecx
  char Str1[8]; // [esp+0h] [ebp-44h] BYREF
  int v14; // [esp+8h] [ebp-3Ch]
  void *v15; // [esp+Ch] [ebp-38h]
  int v16; // [esp+10h] [ebp-34h]
  int v17; // [esp+14h] [ebp-30h]
  __int16 v18; // [esp+18h] [ebp-2Ch]
  char v19; // [esp+1Ah] [ebp-2Ah]

  _sprintf(Str1, "%08X", a1); /*0x55025d*/
  v1 = dword_A647A8; /*0x550268*/
  v2 = dword_A647A4; /*0x55026e*/
  v14 = dword_A647A0; /*0x550273*/
  v3 = dword_A647AC; /*0x550277*/
  v16 = v1; /*0x55027d*/
  LOBYTE(v1) = byte_A647B2; /*0x550281*/
  v17 = v3; /*0x550288*/
  v15 = (void *)v2; /*0x55028f*/
  LOWORD(v2) = word_A647B0; /*0x550293*/
  v19 = v1; /*0x55029c*/
  v4 = (_DWORD **)unk_B35300; /*0x5502a0*/
  v18 = v2; /*0x5502a7*/
  sub_4A1A10(v4, Str1); /*0x5502ac*/
  v5 = dword_A64794; /*0x5502b7*/
  v6 = dword_A6478C; /*0x5502bd*/
  v15 = (void *)dword_A64790; /*0x5502c2*/
  v7 = byte_A6479C; /*0x5502c6*/
  v16 = v5; /*0x5502cd*/
  v14 = v6; /*0x5502d1*/
  v8 = dword_A64798; /*0x5502d5*/
  LOBYTE(v18) = v7; /*0x5502dd*/
  v9 = (_DWORD **)unk_B35300; /*0x5502e1*/
  v17 = v8; /*0x5502e8*/
  sub_4A1A10(v9, Str1); /*0x5502ec*/
  v10 = dword_A64784; /*0x5502f7*/
  v15 = off_A64788; /*0x5502ff*/
  v11 = (_DWORD **)unk_B35300; /*0x550303*/
  v14 = v10; /*0x55030a*/
  return sub_4A1A10(v11, Str1); /*0x550313*/
}
