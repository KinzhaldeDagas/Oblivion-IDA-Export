void __thiscall sub_7403B0(_WORD *this)
{
  int v2; // ebp
  unsigned int v3; // edi
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]
  float v12; // [esp+10h] [ebp-4h]

  v2 = 0;
  v3 = 0;
  if ( *(this + 0x24) )
  {
    v10 = 0;
    do
    {
      v4 = *((_DWORD *)this + 0x17);
      if ( *(unsigned __int16 *)(v4 + 0xB6) > v3 )
      {
        v5 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v3);
        if ( v5 )
        {
          v6 = *((_DWORD *)this + 7);
          v7 = *(_DWORD *)(v6 + v2);
          v8 = v2 + v6;
          *(_DWORD *)(v5 + 0x54) = v7;
          *(_DWORD *)(v5 + 0x58) = *(_DWORD *)(v8 + 4);
          *(_DWORD *)(v5 + 0x5C) = *(_DWORD *)(v8 + 8);
          v9 = *((_DWORD *)this + 0x14);
          if ( v9 )
            sub_47C600((NiTransform *)(v10 + v9), (NiTransform *)(v5 + 0x30));
          v11 = *(float *)(*((_DWORD *)this + 0x13) + 4 * v3) * *(float *)(*((_DWORD *)this + 0x11) + 4 * v3);
          v12 = fabs(v11);
          *(float *)(v5 + 0x60) = v12;
        }
      }
      v10 += 0x10;
      ++v3;
      v2 += 0xC;
    }
    while ( v3 < (unsigned __int16)*(this + 0x24) );
  }
}
