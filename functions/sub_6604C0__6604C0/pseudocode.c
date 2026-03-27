int __thiscall sub_6604C0(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  double v5; // st7
  float v7; // [esp+8h] [ebp-4h]

  if ( *(this + 0x588) || (v2 = CameraP1) == 0 )
  {
    sub_5EE660(this, a2);
    return a2;
  }
  else
  {
    v3 = *(_DWORD *)(v2 + 0x88);
    v4 = *(_DWORD *)(v2 + 0x8C);
    v5 = *(float *)(v2 + 0x90) - dbl_A3F3A0;
    *(_DWORD *)a2 = v3;
    *(_DWORD *)(a2 + 4) = v4;
    v7 = v5;
    *(float *)(a2 + 8) = v7;
    return a2;
  }
}
