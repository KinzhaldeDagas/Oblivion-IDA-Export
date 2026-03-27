int __cdecl sub_917820(int *a1, int a2, int *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v10[3]; // [esp+4h] [ebp-30h] BYREF
  int v11; // [esp+10h] [ebp-24h] BYREF
  int v12; // [esp+14h] [ebp-20h]
  unsigned int v13; // [esp+18h] [ebp-1Ch]
  int v14; // [esp+1Ch] [ebp-18h]
  int v15; // [esp+20h] [ebp-14h]
  unsigned int v16; // [esp+24h] [ebp-10h]
  unsigned int v17; // [esp+30h] [ebp-4h]

  v3 = a1[1];
  v10[0] = *a1;
  v10[1] = v3;
  v10[2] = 0x10;
  v11 = 0;
  v12 = 0;
  v13 = 0x80000000;
  v14 = 0;
  v15 = 0;
  v16 = 0x80000000;
  v17 = 0;
  sub_8F2010(v10, &v11, a2, 1);
  v4 = v11;
  v11 = *a3;
  v5 = a3[1];
  *a3 = v4;
  v6 = v12;
  v12 = v5;
  v7 = a3[2];
  a3[1] = v6;
  v8 = v13;
  v13 = v7;
  a3[2] = v8;
  v17 = 0xFFFFFFFF;
  return sub_8B44C0(&v11);
}
