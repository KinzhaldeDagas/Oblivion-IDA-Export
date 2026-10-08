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

  v2 = *(_DWORD *)(this + 0x2C); /*0x96dbf6*/
  if ( v2 ) /*0x96dbfc*/
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x30) + 0x14))( /*0x96dc0e*/
      *(_DWORD *)(this + 0x30),
      v2,
      *(_DWORD *)(this + 8) + 0x64);
  if ( unk_BA9AC4 ) /*0x96dc10*/
  {
    v3 = *(_DWORD *)(this + 8); /*0x96dc1d*/
    if ( *(_DWORD *)(v3 + 0x1C) ) /*0x96dc20*/
    {
      v4 = sub_96DBD0(v3); /*0x96dc2e*/
      if ( !v4 || (v6 = *(float **)(v4 + 0xA8)) == 0 ) /*0x96dc3f*/
      {
        v11 = sub_7101F0((NiTransform *)(v5 + 0x64), (NiTransform *)v16, (NiPoint3 *)(this + 0xC)); /*0x96dc89*/
        *(float *)(this + 0x18) = v11->rot.data[0][0]; /*0x96dc90*/
        *(float *)(this + 0x1C) = v11->rot.data[0][1]; /*0x96dc96*/
        *(float *)(this + 0x20) = v11->rot.data[0][2]; /*0x96dc9c*/
        *(_BYTE *)(this + 0x49) = 1; /*0x96dca2*/
        *(_BYTE *)(this + 0x48) = 1; /*0x96dca5*/
        return 1; /*0x96dcac*/
      }
      v7 = sub_7101F0((NiTransform *)(v5 + 0x64), (NiTransform *)v16, (NiPoint3 *)(this + 0xC)); /*0x96dc4d*/
      v13 = v6[6] + v7->rot.data[0][0]; /*0x96dc57*/
      v8 = v13; /*0x96dc5b*/
      v14 = v6[7] + v7->rot.data[0][1]; /*0x96dc65*/
      v9 = v14; /*0x96dc69*/
      v15 = v6[8] + v7->rot.data[0][2]; /*0x96dc73*/
      v10 = v15; /*0x96dc77*/
    }
    else
    {
      v8 = *(float *)(this + 0xC); /*0x96dcad*/
      v9 = *(float *)(this + 0x10); /*0x96dcb0*/
      v10 = *(float *)(this + 0x14); /*0x96dcb3*/
    }
    *(float *)(this + 0x18) = v8; /*0x96dcb6*/
    *(float *)(this + 0x1C) = v9; /*0x96dcb9*/
    *(float *)(this + 0x20) = v10; /*0x96dcbc*/
  }
  *(_BYTE *)(this + 0x49) = 1; /*0x96dcc2*/
  *(_BYTE *)(this + 0x48) = 1; /*0x96dcc5*/
  return 1; /*0x96dca1*/
}
