int __thiscall sub_7E4800(float *this, float a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  double v6; // st6
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]
  float v9; // [esp+10h] [ebp+4h]
  float v10; // [esp+10h] [ebp+4h]

  result = sub_7E2D60();
  v7 = (*(this + 0x22) + *(this + 0x22)) / *(this + 0x21);
  v8 = (*(this + 0x21) - *(this + 0x22)) / *(this + 0x21);
  *(this + 0x3E) = a2;
  if ( result )
  {
    v4 = 0;
    v5 = result;
    do
    {
      v6 = flt_A32048;
      *(float *)(v4 + *((_DWORD *)this + 0x1B)) = flt_A32048;
      *(float *)(*((_DWORD *)this + 0x1B) + v4 + 4) = v6;
      *(float *)(*((_DWORD *)this + 0x1B) + v4 + 8) = v6;
      *(float *)(*((_DWORD *)this + 0x1B) + v4 + 0xC) = flt_A91F98;
      *(float *)(*((_DWORD *)this + 0x1B) + v4 + 0x10) = 0.0;
      *(float *)(*((_DWORD *)this + 0x1B) + v4 + 0x14) = 0.0;
      *(float *)(*((_DWORD *)this + 0x1B) + v4 + 0x18) = 0.0;
      result = rand();
      v4 += 0x20;
      --v5;
      v9 = (double)result / dbl_A3D5A8;
      v10 = v9 * v7 + v8;
      *(float *)(*((_DWORD *)this + 0x1B) + v4 - 4) = v10;
    }
    while ( v5 );
  }
  *(this + 0x1F) = 0.0;
  return result;
}
