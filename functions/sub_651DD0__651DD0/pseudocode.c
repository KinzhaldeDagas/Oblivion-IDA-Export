void __thiscall sub_651DD0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  float v7; // [esp+0h] [ebp-4h]
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+0h] [ebp-4h]
  float v11; // [esp+0h] [ebp-4h]
  float v12; // [esp+0h] [ebp-4h]

  if ( !MEMORY[0xB33D80] ) /*0x651dd1*/
  {
    v1 = *(this + 0x3F); /*0x651dde*/
    if ( v1 ) /*0x651de8*/
    {
      v7 = fabs(1.0); /*0x651dee*/
      *(float *)(v1 + 0x60) = v7; /*0x651df4*/
    }
    v2 = *(this + 0x40); /*0x651df7*/
    if ( v2 ) /*0x651dff*/
    {
      v8 = fabs(1.0); /*0x651e05*/
      *(float *)(v2 + 0x60) = v8; /*0x651e0b*/
    }
    v3 = *(this + 0x41); /*0x651e0e*/
    if ( v3 ) /*0x651e16*/
    {
      v9 = fabs(1.0); /*0x651e1c*/
      *(float *)(v3 + 0x60) = v9; /*0x651e22*/
    }
    v4 = *(this + 0x42); /*0x651e25*/
    if ( v4 ) /*0x651e2d*/
    {
      v10 = fabs(1.0); /*0x651e33*/
      *(float *)(v4 + 0x60) = v10; /*0x651e39*/
    }
    v5 = *(this + 0x43); /*0x651e3c*/
    if ( v5 ) /*0x651e44*/
    {
      v11 = fabs(1.0); /*0x651e4a*/
      *(float *)(v5 + 0x60) = v11; /*0x651e50*/
    }
    v6 = *(this + 0x44); /*0x651e53*/
    if ( v6 ) /*0x651e5b*/
    {
      v12 = fabs(1.0); /*0x651e5f*/
      *(float *)(v6 + 0x60) = v12; /*0x651e65*/
    }
  }
}
