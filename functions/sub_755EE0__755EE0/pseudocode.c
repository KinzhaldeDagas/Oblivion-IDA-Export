float *__thiscall sub_755EE0(char *this)
{
  float *v2; // ecx
  float *result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  NiTransform *v7; // eax
  double v8; // st7
  double v9; // st6
  int v10; // ebx
  float v11; // [esp+8h] [ebp-F4h]
  float v12; // [esp+8h] [ebp-F4h]
  float v13; // [esp+Ch] [ebp-F0h]
  float v14; // [esp+Ch] [ebp-F0h]
  NiPoint3 v15; // [esp+10h] [ebp-ECh] BYREF
  NiTransform v16; // [esp+1Ch] [ebp-E0h] BYREF
  int v17; // [esp+50h] [ebp-ACh]
  int v18; // [esp+54h] [ebp-A8h]
  int v19; // [esp+58h] [ebp-A4h]
  float v20; // [esp+5Ch] [ebp-A0h]
  NiTransform v21; // [esp+60h] [ebp-9Ch] BYREF
  float v22[13]; // [esp+94h] [ebp-68h] BYREF
  NiTransform v23; // [esp+C8h] [ebp-34h] BYREF

  v2 = sub_716DE0((float *)&v16, (int)&Vector3_InitValue_, 0.0);
  if ( *v2 == *((float *)this + 0x16)
    && v2[1] == *((float *)this + 0x17)
    && v2[2] == *((float *)this + 0x18)
    && v2[3] == *((float *)this + 0x19)
    || (result = *((float **)this + 0xB)) != 0
    && (sub_718B20((float *)this + 0x26, result + 0x19)
     || (result = (float *)sub_718B20((float *)this + 0x33, (float *)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x10) + 0x64)),
         (_BYTE)result)) )
  {
    *((float *)this + 0x1A) = Vector3_InitValue_;
    *((float *)this + 0x1B) = *(&Vector3_InitValue_ + 1);
    *((float *)this + 0x1C) = dword_B3F9B0;
    qmemcpy(this + 0x74, &stru_B26AF0[0xA].unk2C, 0x24u);
    v15.x = *((float *)this + 0x13) * *((float *)this + 0xF) - *((float *)this + 0x12) * *((float *)this + 0x10);
    v15.y = *((float *)this + 0x11) * *((float *)this + 0x10) - *((float *)this + 0x13) * *((float *)this + 0xE);
    v15.z = *((float *)this + 0xE) * *((float *)this + 0x12) - *((float *)this + 0xF) * *((float *)this + 0x11);
    sub_43F350(&v15.x);
    v4 = *((_DWORD *)this + 0xB);
    v13 = *((float *)this + 0xC);
    v11 = *((float *)this + 0xD);
    if ( v4 )
    {
      qmemcpy(&v21, (const void *)(v4 + 0x64), sizeof(v21));
      qmemcpy(v22, (const void *)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x10) + 0x64), sizeof(v22));
      sub_718A80(v22, &v23);
      sub_53D7A0(&v23, (NiTransform *)&v16.rot.data[1][1], &v21);
      v5 = v18;
      v6 = v19;
      *((_DWORD *)this + 0x1A) = v17;
      *((_DWORD *)this + 0x1B) = v5;
      *((_DWORD *)this + 0x1C) = v6;
      qmemcpy(this + 0x74, &v16.rot.data[1][1], 0x24u);
      v7 = sub_7101F0((NiTransform *)(this + 0x74), &v16, &v15);
      v15.x = v7->rot.data[0][0];
      v15.y = v7->rot.data[0][1];
      v15.z = v7->rot.data[0][2];
      sub_43F350(&v15.x);
      v8 = v20;
      v9 = v20 * v13;
      qmemcpy(this + 0x98, &v21, 0x34u);
      v13 = v9;
      v11 = v8 * v11;
      qmemcpy(this + 0xCC, v22, 0x34u);
    }
    v14 = v13 * dbl_A2FAA0;
    v12 = dbl_A2FAA0 * v11;
    *((float *)this + 0x14) = v14 * v14;
    *((float *)this + 0x15) = v12 * v12;
    result = sub_716E00((float *)&v16, &v15.x, (float *)this + 0x1A);
    *((float *)this + 0x16) = *result;
    *((float *)this + 0x17) = result[1];
    *((float *)this + 0x18) = result[2];
    *((float *)this + 0x19) = result[3];
  }
  v10 = *((_DWORD *)this + 0xA);
  if ( v10 )
    return (*(float *(__thiscall **)(int))(*(_DWORD *)v10 + 0x54))(v10);
  return result;
}
