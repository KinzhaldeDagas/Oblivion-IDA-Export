double __usercall sub_4BC2E0@<st0>(double result@<st0>, float *a2, float *a3)
{
  int v4; // edi
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float v8; // [esp+8h] [ebp-44h]
  float v9; // [esp+Ch] [ebp-40h]
  float v10; // [esp+Ch] [ebp-40h]
  float v11; // [esp+Ch] [ebp-40h]
  float v12; // [esp+10h] [ebp-3Ch] BYREF
  float v13; // [esp+14h] [ebp-38h]
  float v14; // [esp+18h] [ebp-34h]
  float v15; // [esp+1Ch] [ebp-30h] BYREF
  float v16[9]; // [esp+28h] [ebp-24h] BYREF
  float v17; // [esp+54h] [ebp+8h]

  if ( a3 )
  {
    if ( ((_DWORD)a3[2] & 0x20) == 0
      && *(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x170))(a3) + 4) == 0x29 )
    {
      v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x170))(a3);
      if ( v4 )
      {
        (*(void (__thiscall **)(float *))(*(_DWORD *)a3 + 0xEC))(a3);
        v17 = result;
        v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x174))(a3);
        v8 = a2[1] - v5[1];
        v9 = a2[2] - v5[2];
        v12 = *a2 - *v5;
        v13 = v8;
        v14 = v9;
        v10 = v8 * v8 + v12 * v12 + v9 * v9;
        v11 = sqrt(v10);
        if ( *(float *)(v4 + 0x2C) * v17 > v11 )
        {
          v6 = sub_4D7AF0(a3, v16);
          v7 = sub_710250(&v15, &v12, v6);
          v12 = *v7;
          v13 = v7[1];
          v14 = v7[2];
          sub_4BC290((unsigned __int16 *)v4, &v15);
        }
      }
    }
  }
  return result;
}
