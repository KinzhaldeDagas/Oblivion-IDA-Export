int __thiscall sub_7E61C0(float *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  float *v7; // esi
  void (__thiscall ***v8)(_DWORD, int); // ebx
  float v9; // edx
  float v10; // eax
  float v11; // ecx
  float v12; // eax
  float v13; // ecx
  int result; // eax
  float v15; // [esp+10h] [ebp-2Ch] BYREF
  float v16; // [esp+14h] [ebp-28h]
  float v17; // [esp+18h] [ebp-24h]
  _BYTE v18[12]; // [esp+1Ch] [ebp-20h] BYREF
  float v19; // [esp+28h] [ebp-14h]
  float v20; // [esp+2Ch] [ebp-10h]
  float v21; // [esp+30h] [ebp-Ch]
  float v22; // [esp+34h] [ebp-8h]
  float v23; // [esp+38h] [ebp-4h]
  void *retaddr; // [esp+3Ch] [ebp+0h]

  v6 = sub_7ED2A0((_DWORD *)a2);
  v7 = (float *)*sub_405AD0(v6, &a2);
  if ( a2 )
  {
    v8 = (void (__thiscall ***)(_DWORD, int))a2;
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
      (**v8)(v8, 1);
  }
  v9 = v7[0x3C];
  v10 = v7[0x3D];
  v19 = v7[0x3B];
  v20 = v9;
  v21 = v10;
  *(this + 0x59) = v19;
  v22 = 1.0;
  *(this + 0x5A) = v9;
  v11 = v22;
  *(this + 0x5B) = v10;
  *(this + 0x5C) = v11;
  v12 = v7[0x23];
  v13 = v7[0x24];
  v15 = v7[0x22];
  v16 = v12;
  v17 = v13;
  result = D3DXVec3TransformCoord_0(v18, &v15, a2);
  v21 = v7[0x3E];
  if ( retaddr != (void *)0x197 )
    v21 = v21 / v23;
  flt_B460A0 = v15;
  flt_B460A4 = v16;
  flt_B460A8 = v17;
  flt_B460AC = v21;
  return result;
}
