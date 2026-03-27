int __thiscall sub_78F720(int *this, int a2, float a3)
{
  double v3; // st7
  int v4; // esi
  int v5; // edx
  float *v6; // edi
  int result; // eax

  if ( *(this + 6) && *(this + 7) >= 2 )
  {
    v3 = a3;
    *(_DWORD *)a2 = 0;
    v4 = *(this + 7);
    v5 = 1;
    if ( v4 > 1 )
    {
      v6 = (float *)(*(this + 6) + 0x88);
      while ( *v6 <= v3 )
      {
        ++v5;
        v6 += 0x12;
        if ( v5 >= v4 )
          goto LABEL_9;
      }
      *(_DWORD *)a2 = v5 - 1;
    }
LABEL_9:
    result = *(this + 6) + 0x48 * *(_DWORD *)a2;
    *(float *)(a2 + 4) = (v3 - *(float *)(result + 0x40)) / (*(float *)(result + 0x88) - *(float *)(result + 0x40));
  }
  return result;
}
