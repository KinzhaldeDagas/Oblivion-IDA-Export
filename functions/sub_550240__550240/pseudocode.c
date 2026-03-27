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

  _sprintf(Str1, "%08X", a1);
  v1 = dword_A647A8;
  v2 = dword_A647A4;
  v14 = dword_A647A0;
  v3 = dword_A647AC;
  v16 = v1;
  LOBYTE(v1) = byte_A647B2;
  v17 = v3;
  v15 = (void *)v2;
  LOWORD(v2) = word_A647B0;
  v19 = v1;
  v4 = (_DWORD **)dword_B35300;
  v18 = v2;
  sub_4A1A10(v4, Str1);
  v5 = dword_A64794;
  v6 = dword_A6478C;
  v15 = (void *)dword_A64790;
  v7 = byte_A6479C;
  v16 = v5;
  v14 = v6;
  v8 = dword_A64798;
  LOBYTE(v18) = v7;
  v9 = (_DWORD **)dword_B35300;
  v17 = v8;
  sub_4A1A10(v9, Str1);
  v10 = dword_A64784;
  v15 = off_A64788;
  v11 = (_DWORD **)dword_B35300;
  v14 = v10;
  return sub_4A1A10(v11, Str1);
}
