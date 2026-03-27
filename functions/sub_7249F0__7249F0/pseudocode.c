int __thiscall sub_7249F0(float *this, int a2)
{
  NiTransform *v2; // edi
  NiTransform *v4; // eax
  double v5; // st7
  int result; // eax
  unsigned int v7; // edx
  bool v8; // zf
  int v9; // ecx
  double v10; // st7
  int v11; // ecx
  float v12; // [esp+8h] [ebp-24h]
  float v13; // [esp+Ch] [ebp-20h]
  float v14; // [esp+10h] [ebp-1Ch]
  NiPoint3 v15; // [esp+14h] [ebp-18h] BYREF
  char v16; // [esp+20h] [ebp-Ch] BYREF
  float v17; // [esp+30h] [ebp+4h]

  v2 = (NiTransform *)(a2 + 0x64);
  v17 = *(float *)(a2 + 0x94);
  v15.x = v17 * *(this + 2);
  v15.y = *(this + 3) * v17;
  v15.z = v17 * *(this + 4);
  v4 = sub_7101F0(v2, (NiTransform *)&v16, &v15);
  v12 = v2->pos.x + v4->rot.data[0][0];
  v13 = v2->pos.y + v4->rot.data[0][1];
  v5 = v2->pos.z + v4->rot.data[0][2];
  result = LODWORD(v13);
  *(this + 5) = v12;
  v7 = 0;
  v8 = *((_DWORD *)this + 8) == 0;
  v14 = v5;
  *(this + 6) = v13;
  *(this + 7) = v14;
  if ( !v8 )
  {
    result = 0;
    do
    {
      ++v7;
      *(float *)(result + *((_DWORD *)this + 9) + 8) = v2->scale * *(float *)(*((_DWORD *)this + 9) + result);
      v9 = *((_DWORD *)this + 9);
      v10 = *(float *)(v9 + result + 4);
      v11 = result + v9;
      result += 0x10;
      *(float *)(v11 + 0xC) = v10 * v2->scale;
    }
    while ( v7 < *((_DWORD *)this + 8) );
  }
  return result;
}
