void __thiscall sub_78C370(int *this)
{
  float *v1; // eax
  double v2; // st6
  int v3; // eax
  int v4; // ecx
  int v5; // [esp+0h] [ebp-68h] BYREF
  float v6; // [esp+30h] [ebp-38h]
  float v7; // [esp+34h] [ebp-34h]
  float v8; // [esp+38h] [ebp-30h]
  float v9; // [esp+3Ch] [ebp-2Ch] BYREF
  float v10; // [esp+40h] [ebp-28h]
  float v11; // [esp+44h] [ebp-24h]
  float v12; // [esp+4Ch] [ebp-1Ch]
  float v13; // [esp+50h] [ebp-18h]
  float v14; // [esp+54h] [ebp-14h]
  int *v15; // [esp+58h] [ebp-10h]
  int v16; // [esp+64h] [ebp-4h]

  v15 = &v5;
  v1 = (float *)*(this + 0x10);
  v6 = *v1;
  v7 = v1[1];
  v8 = v1[2];
  v9 = v1[3];
  v2 = dbl_A2FAA0;
  v10 = v1[4];
  v11 = v1[5];
  v3 = *this;
  v14 = (v9 + v6) * v2;
  v4 = *(this + 3);
  v16 = 0;
  v13 = (v10 + v7) * v2;
  v12 = v2 * (v11 + v8);
  v9 = v14;
  v10 = v13;
  v11 = v12;
  sub_793E10(v4, (int)&v9, (int)&v9, *(_DWORD *)(v3 + 0xD4), *(unsigned __int16 *)(v3 + 0xC0));
}
