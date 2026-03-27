char __thiscall sub_96DBF0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edx
  float *v6; // edi
  NiTransform *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  NiTransform *v11; // eax
  float v13; // [esp+8h] [ebp-18h]
  float v14; // [esp+Ch] [ebp-14h]
  float v15; // [esp+10h] [ebp-10h]
  _BYTE v16[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 0x2C);
  if ( v2 )
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x30) + 0x14))(
      *(_DWORD *)(this + 0x30),
      v2,
      *(_DWORD *)(this + 8) + 0x64);
  if ( byte_BA9AC4 )
  {
    v3 = *(_DWORD *)(this + 8);
    if ( *(_DWORD *)(v3 + 0x1C) )
    {
      v4 = sub_96DBD0(v3);
      if ( !v4 || (v6 = *(float **)(v4 + 0xA8)) == 0 )
      {
        v11 = sub_7101F0((NiTransform *)(v5 + 0x64), (NiTransform *)v16, (NiPoint3 *)(this + 0xC));
        *(float *)(this + 0x18) = v11->rot.data[0][0];
        *(float *)(this + 0x1C) = v11->rot.data[0][1];
        *(float *)(this + 0x20) = v11->rot.data[0][2];
        *(_BYTE *)(this + 0x49) = 1;
        *(_BYTE *)(this + 0x48) = 1;
        return 1;
      }
      v7 = sub_7101F0((NiTransform *)(v5 + 0x64), (NiTransform *)v16, (NiPoint3 *)(this + 0xC));
      v13 = v6[6] + v7->rot.data[0][0];
      v8 = v13;
      v14 = v6[7] + v7->rot.data[0][1];
      v9 = v14;
      v15 = v6[8] + v7->rot.data[0][2];
      v10 = v15;
    }
    else
    {
      v8 = *(float *)(this + 0xC);
      v9 = *(float *)(this + 0x10);
      v10 = *(float *)(this + 0x14);
    }
    *(float *)(this + 0x18) = v8;
    *(float *)(this + 0x1C) = v9;
    *(float *)(this + 0x20) = v10;
  }
  *(_BYTE *)(this + 0x49) = 1;
  *(_BYTE *)(this + 0x48) = 1;
  return 1;
}
