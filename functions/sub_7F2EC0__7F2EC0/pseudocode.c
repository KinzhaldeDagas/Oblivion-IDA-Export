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

  v2 = sub_7F3760(); /*0x7f2ec9*/
  v3 = 0.0; /*0x7f2ece*/
  v4 = *((_DWORD *)this + 0x53); /*0x7f2ed0*/
  *(this + 0x1F) = 0.0; /*0x7f2ed6*/
  v5 = v4 * *((_DWORD *)this + 0x4D); /*0x7f2edf*/
  *((_BYTE *)this + 0x180) = 0; /*0x7f2ee6*/
  if ( v2 < v5 ) /*0x7f2ef0*/
  {
    v10 = (double)(v5 - v2) / (double)v4; /*0x7f2f05*/
    v11 = ceil(v10); /*0x7f2f15*/
    v3 = 0.0; /*0x7f2f33*/
    *((_DWORD *)this + 0x4D) = Double_To_SInt32((double)*((int *)this + 0x4D) - v11); /*0x7f2f35*/
  }
  v6 = 4; /*0x7f2f44*/
  if ( *((int *)this + 0x53) <= 4 ) /*0x7f2f49*/
    v6 = *((_DWORD *)this + 0x53); /*0x7f2f4b*/
  v7 = *((_DWORD *)this + 0x4D); /*0x7f2f4d*/
  *((_DWORD *)this + 0x20) = v6; /*0x7f2f53*/
  v8 = 0; /*0x7f2f6b*/
  *((_DWORD *)this + 0x23) = Double_To_SInt32(v3); /*0x7f2f6f*/
  if ( v7 > 0 ) /*0x7f2f75*/
  {
    v9 = 0; /*0x7f2f7b*/
    do /*0x7f3067*/
    {
      if ( *((_BYTE *)this + 0x183) ) /*0x7f2f7d*/
      {
        *(float *)(v9 + *((_DWORD *)this + 0x1B)) = v3; /*0x7f2f88*/
        *(float *)(*((_DWORD *)this + 0x1B) + v9 + 4) = v3; /*0x7f2f8e*/
        *(float *)(*((_DWORD *)this + 0x1B) + v9 + 8) = v3; /*0x7f2f95*/
      }
      else
      {
        v12 = (double)rand() / dbl_A3D5A8; /*0x7f2fb6*/
        v13 = v12 * *(this + 0x4F) - *(this + 0x4F) * dbl_A2FAA0; /*0x7f2fd2*/
        *(float *)(v9 + *((_DWORD *)this + 0x1B)) = v13; /*0x7f2fda*/
        v14 = (double)rand() / dbl_A3D5A8; /*0x7f2ff3*/
        v15 = v14 * *(this + 0x4F) - *(this + 0x4F) * dbl_A2FAA0; /*0x7f300f*/
        *(float *)(*((_DWORD *)this + 0x1B) + v9 + 4) = v15; /*0x7f3017*/
        v16 = (double)rand() / dbl_A3D5A8; /*0x7f3031*/
        v17 = v16 * *(this + 0x4F) - *(this + 0x4F) * dbl_A2FAA0; /*0x7f304d*/
        *(float *)(*((_DWORD *)this + 0x1B) + v9 + 8) = v17; /*0x7f3055*/
        v3 = 0.0; /*0x7f3059*/
      }
      ++v8; /*0x7f305b*/
      v9 += 0x10; /*0x7f305e*/
    }
    while ( v8 < *((_DWORD *)this + 0x4D) ); /*0x7f3067*/
  }
  *(this + 0x22) = 0.0; /*0x7f3070*/
  *(this + 0x21) = 0.0; /*0x7f3076*/
}
