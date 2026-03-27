void __thiscall sub_785E00(char **this, unsigned int a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // [esp-18h] [ebp-44h]
  int v6; // [esp-14h] [ebp-40h]
  int v7; // [esp-10h] [ebp-3Ch]
  int v8; // [esp-Ch] [ebp-38h]
  int v9; // [esp-4h] [ebp-30h]
  float v10[6]; // [esp+8h] [ebp-24h] BYREF
  unsigned int v11; // [esp+28h] [ebp-4h]

  v3 = (int *)sub_78E550(v10);
  v5 = *v3;
  v6 = v3[1];
  v7 = v3[2];
  v8 = v3[3];
  v4 = v3[4];
  v9 = v3[5];
  v11 = 0;
  sub_7856B0(this, a2, v5, v6, v7, v8, v4, v9);
  v11 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(v10);
}
