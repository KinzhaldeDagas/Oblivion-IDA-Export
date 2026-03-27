void __thiscall sub_7F2EC0(float *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // edi
  int v8; // ebp
  int v9; // edi
  float v10; // [esp+1Ch] [ebp-4h]
  float v11; // [esp+1Ch] [ebp-4h]
  float v12; // [esp+1Ch] [ebp-4h]
  float v13; // [esp+1Ch] [ebp-4h]
  float v14; // [esp+1Ch] [ebp-4h]
  float v15; // [esp+1Ch] [ebp-4h]
  float v16; // [esp+1Ch] [ebp-4h]
  float v17; // [esp+1Ch] [ebp-4h]

  v2 = sub_7F3760();
  v3 = 0.0;
  v4 = *((_DWORD *)this + 0x53);
  *(this + 0x1F) = 0.0;
  v5 = v4 * *((_DWORD *)this + 0x4D);
  *((_BYTE *)this + 0x180) = 0;
  if ( v2 < v5 )
  {
    v10 = (double)(v5 - v2) / (double)v4;
    v11 = ceil(v10);
    v3 = 0.0;
    *((_DWORD *)this + 0x4D) = Double_To_SInt32((double)*((int *)this + 0x4D) - v11);
  }
  v6 = 4;
  if ( *((int *)this + 0x53) <= 4 )
    v6 = *((_DWORD *)this + 0x53);
  v7 = *((_DWORD *)this + 0x4D);
  *((_DWORD *)this + 0x20) = v6;
  v8 = 0;
  *((_DWORD *)this + 0x23) = Double_To_SInt32(v3);
  if ( v7 > 0 )
  {
    v9 = 0;
    do
    {
      if ( *((_BYTE *)this + 0x183) )
      {
        *(float *)(v9 + *((_DWORD *)this + 0x1B)) = v3;
        *(float *)(*((_DWORD *)this + 0x1B) + v9 + 4) = v3;
        *(float *)(*((_DWORD *)this + 0x1B) + v9 + 8) = v3;
      }
      else
      {
        v12 = (double)rand() / dbl_A3D5A8;
        v13 = v12 * *(this + 0x4F) - *(this + 0x4F) * dbl_A2FAA0;
        *(float *)(v9 + *((_DWORD *)this + 0x1B)) = v13;
        v14 = (double)rand() / dbl_A3D5A8;
        v15 = v14 * *(this + 0x4F) - *(this + 0x4F) * dbl_A2FAA0;
        *(float *)(*((_DWORD *)this + 0x1B) + v9 + 4) = v15;
        v16 = (double)rand() / dbl_A3D5A8;
        v17 = v16 * *(this + 0x4F) - *(this + 0x4F) * dbl_A2FAA0;
        *(float *)(*((_DWORD *)this + 0x1B) + v9 + 8) = v17;
        v3 = 0.0;
      }
      ++v8;
      v9 += 0x10;
    }
    while ( v8 < *((_DWORD *)this + 0x4D) );
  }
  *(this + 0x22) = 0.0;
  *(this + 0x21) = 0.0;
}
