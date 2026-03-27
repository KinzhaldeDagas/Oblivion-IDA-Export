char __thiscall sub_70C230(float *this, float *a2)
{
  double v4; // st7
  double v5; // st7
  void (*v7)(void); // edx
  float v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+4h] [ebp-1Ch]
  float v10; // [esp+8h] [ebp-18h]
  float v11; // [esp+Ch] [ebp-14h]
  float v12; // [esp+10h] [ebp-10h]
  float v13; // [esp+24h] [ebp+4h]
  float v14; // [esp+24h] [ebp+4h]

  v10 = *a2 - *(this + 0x22);
  v11 = a2[1] - *(this + 0x23);
  v12 = a2[2] - *(this + 0x24);
  v13 = v10 * *(this + 0x19) + v11 * *(this + 0x1C) + v12 * *(this + 0x1F);
  v4 = v13;
  v14 = v13 - a2[3];
  v8 = v4 + a2[3];
  v5 = v8;
  if ( v8 <= 0.0 )
    return 0;
  v9 = v5 / *(this + 0x43);
  if ( v9 > (double)v14 )
    v14 = v5 / *(this + 0x43);
  if ( *(this + 0x42) > (double)v14 )
    v14 = *(this + 0x42);
  v7 = *(void (**)(void))(*(_DWORD *)this + 0x74);
  *(this + 0x3F) = v14;
  *(this + 0x40) = v5;
  v7();
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 0x78))(this);
  return 1;
}
