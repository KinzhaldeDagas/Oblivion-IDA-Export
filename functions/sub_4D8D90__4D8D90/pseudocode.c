float *__thiscall sub_4D8D90(void *this, float *a2)
{
  float *v3; // edi
  float *v4; // eax
  double v5; // rt0
  float *v6; // eax
  double v7; // st7
  float v9; // [esp+8h] [ebp-30h]
  float v10; // [esp+Ch] [ebp-2Ch]
  float v11; // [esp+10h] [ebp-28h]
  float v12; // [esp+14h] [ebp-24h]
  float v13; // [esp+18h] [ebp-20h]
  float v14; // [esp+1Ch] [ebp-1Ch]
  _BYTE v15[12]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v16[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v3 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x15C))(this, v15);
  v4 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x158))(this, v16);
  v9 = *v4 + *v3;
  v10 = v3[1] + v4[1];
  v11 = v3[2] + v4[2];
  v5 = dbl_A2FAA0;
  v12 = v9 * v5;
  v13 = v10 * v5;
  v14 = v5 * v11;
  v6 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this);
  *a2 = *v6 + v12;
  a2[1] = v6[1] + v13;
  v7 = v6[2];
  a2[2] = v7 + v14;
  return a2;
}
