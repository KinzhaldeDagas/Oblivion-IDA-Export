char __thiscall sub_6CF630(int this, float a2, int a3, float *a4)
{
  NiPoint3 *v6; // ebp
  float v7; // eax
  float v8; // ecx
  float v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  NiPoint3 *v14; // esi
  NiPoint3 v15; // [esp+18h] [ebp-40h] BYREF
  int v16; // [esp+24h] [ebp-34h]
  int v17; // [esp+28h] [ebp-30h]
  int v18; // [esp+2Ch] [ebp-2Ch]
  int v19; // [esp+30h] [ebp-28h]
  float v20; // [esp+34h] [ebp-24h]
  _BYTE v21[32]; // [esp+38h] [ebp-20h] BYREF

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
    a2 = *(float *)(this + 0x20);
  if ( flt_A79F00 == a2 )
    return 0;
  sub_6CEE20(this, a2, a3);
  if ( *(_BYTE *)(this + 0x54) || (v6 = (NiPoint3 *)(this + 0x30), sub_6CBC10((float *)(this + 0x30))) )
  {
    v7 = *(float *)&dword_B24268;
    v8 = *(float *)&dword_B24260;
    v20 = flt_A79E10;
    v9 = *(float *)&dword_B24264;
    v15.z = v7;
    v18 = dword_B3CBAC;
    v10 = *(unsigned __int8 *)(this + 0xF);
    v15.x = v8;
    v16 = dword_B3CBA4;
    v11 = dword_B3CBB0;
    v15.y = v9;
    v12 = dword_B3CBA8;
    v19 = v11;
    v13 = *(_DWORD *)(this + 0x50);
    v17 = v12;
    sub_6CB4D0((float *)(0x68 * v10 + v13 + 4), (int)&v15);
    v6 = (NiPoint3 *)(this + 0x30);
    if ( sub_6CBC10((float *)(this + 0x30)) )
      v14 = &v15;
    else
      v14 = (NiPoint3 *)sub_6CB640((float *)(this + 0x30), (int)v21, &v15);
    qmemcpy(v6, v14, 0x20u);
    *(_BYTE *)(this + 0x54) = 0;
  }
  if ( sub_6CBC10(&v6->x) )
    return 0;
  qmemcpy(
    a4,
    sub_6CB640(&v6->x, (int)v21, (NiPoint3 *)(0x68 * *(unsigned __int8 *)(this + 0xF) + *(_DWORD *)(this + 0x50) + 4)),
    0x20u);
  return 1;
}
