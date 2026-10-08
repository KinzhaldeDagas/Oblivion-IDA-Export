int __thiscall sub_533830(int this, float *a2, float *a3, float a4)
{
  double v5; // st6
  int v6; // eax
  int v7; // eax
  int *v8; // eax
  int v9; // eax
  double v10; // st7
  _DWORD *v11; // esi
  int v12; // edi
  float v14[4]; // [esp+8h] [ebp-40h] BYREF
  float v15[4]; // [esp+18h] [ebp-30h] BYREF
  float v16; // [esp+28h] [ebp-20h]
  float v17; // [esp+2Ch] [ebp-1Ch]

  v5 = hkFactor; /*0x533857*/
  if ( a4 != 0.0
    && (v6 = *(_DWORD *)(this + 0x1A0)) != 0
    && ((v7 = *(_DWORD *)(v6 + 8)) == 0 || (v8 = (int *)(v7 + 0x14)) == 0 ? (v9 = 0) : (v9 = *v8), v9) )
  {
    v10 = v5; /*0x533881*/
    *(float *)(v9 + 0xC) = a4 * v5; /*0x533883*/
  }
  else
  {
    v10 = v5; /*0x533888*/
  }
  v11 = *(_DWORD **)(this + 0x1A0); /*0x53388a*/
  *(float *)(this + 4) = flt_A5613C; /*0x533898*/
  *(_DWORD *)(this + 0x14) = 0; /*0x53389b*/
  if ( v11 ) /*0x5338a2*/
  {
    v16 = flt_A56138; /*0x5338ad*/
    v17 = v16; /*0x5338b1*/
    v14[0] = *a2 * v10; /*0x5338b9*/
    v14[1] = a2[1] * v10; /*0x5338c2*/
    v14[2] = a2[2] * v10; /*0x5338ce*/
    v15[0] = *a3 * v10; /*0x5338d6*/
    v15[1] = a3[1] * v10; /*0x5338df*/
    v15[2] = v10 * a3[2]; /*0x5338e6*/
    v12 = v11[2]; /*0x5338ea*/
    if ( v12 ) /*0x5338ef*/
    {
      bhkRefObject_UpdateHavokObject(v11); /*0x5338f3*/
      (*(void (__thiscall **)(int, float *, float *, int, _DWORD))(*(_DWORD *)v12 + 0x30))(v12, v14, v15, this, 0); /*0x53390c*/
      bhkRefObject_UpdateHavokObject(v11); /*0x533910*/
    }
  }
  return *(_DWORD *)(this + 0x14); /*0x533922*/
}
