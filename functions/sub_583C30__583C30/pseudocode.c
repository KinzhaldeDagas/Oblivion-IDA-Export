void __thiscall sub_583C30(_DWORD *this)
{
  unsigned int v1; // ecx
  double v2; // st7
  unsigned int v3; // esi
  float v4; // [esp+0h] [ebp-4h]

  v1 = *(_DWORD *)(*(this + 0x4C) + 0x10);
  if ( v1 )
  {
    v2 = 1.0;
    do
    {
      v4 = *(float *)(v1 + 4) + flt_B33E9C;
      *(float *)(v1 + 4) = v4;
      if ( v4 / *(float *)(v1 + 8) <= v2 && v4 / *(float *)(v1 + 8) < dbl_A2FC68
        || *(float *)(v1 + 4) / *(float *)(v1 + 8) < v2 )
      {
        v1 = *(_DWORD *)(v1 + 0x10);
      }
      else
      {
        v3 = *(_DWORD *)(v1 + 0x10);
        *(_DWORD *)(*(_DWORD *)(v1 + 0xC) + 0x10) = v3;
        if ( v3 )
        {
          *(_DWORD *)(v3 + 0xC) = *(_DWORD *)(v1 + 0xC);
          FormHeapFree(v1);
          v2 = 1.0;
          v1 = v3;
        }
        else
        {
          *(_DWORD *)(InterfaceManagerPtr->unk0C0[0x1C] + 0xC) = *(_DWORD *)(v1 + 0xC);
          FormHeapFree(v1);
          v2 = 1.0;
          v1 = 0;
        }
      }
    }
    while ( v1 );
  }
}
