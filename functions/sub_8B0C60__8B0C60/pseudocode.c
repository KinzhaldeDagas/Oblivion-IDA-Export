void __thiscall sub_8B0C60(int this)
{
  int v1; // esi
  int v2; // edi
  int v3; // edx
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v1 = *(_DWORD *)(this + 0x20);
  if ( v1 )
  {
    v5 = flt_A32048;
    v4 = flt_A3B888;
    if ( *(int *)(this + 0x10) > 0 )
    {
      v2 = *(_DWORD *)(this + 0x10);
      do
      {
        if ( *(int *)(this + 0x14) > 0 )
        {
          v3 = *(_DWORD *)(this + 0x14);
          do
          {
            v6 = *(float *)(v1 + 8);
            if ( v5 > (double)v6 )
              v5 = v6;
            if ( v4 < (double)v6 )
              v4 = v6;
            v1 += 0xC;
            --v3;
          }
          while ( v3 );
        }
        --v2;
      }
      while ( v2 );
    }
    *(float *)(this + 0x1C) = v4;
    *(float *)(this + 0x18) = v5;
  }
}
