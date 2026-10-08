void __thiscall sub_589980(_DWORD *this, int a2, float a3, float a4, float a5)
{
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // esi
  float *v11; // eax

  v6 = *(this + 0xA); /*0x5899a6*/
  while ( v6 ) /*0x5899af*/
  {
    if ( *(_DWORD *)(v6 + 4) == a2 ) /*0x5899b4*/
    {
      if ( *(float *)(v6 + 0xC) == a4 ) /*0x5899cc*/
        return; /*0x5899cc*/
      v7 = *(_DWORD *)(*(_DWORD *)v6 + 0x28); /*0x5899d7*/
      v8 = 0; /*0x5899d9*/
      if ( v7 ) /*0x5899dd*/
      {
        while ( v7 != v6 ) /*0x5899e2*/
        {
          v8 = v7; /*0x5899e4*/
          v7 = *(_DWORD *)(v7 + 0x14); /*0x5899e6*/
          if ( !v7 ) /*0x5899eb*/
            goto LABEL_7; /*0x5899eb*/
        }
        if ( v8 ) /*0x5899f7*/
        {
          v9 = *(_DWORD *)(v7 + 0x14); /*0x5899f9*/
          *(_DWORD *)(v8 + 0x14) = v9; /*0x5899fd*/
          v10 = v9; /*0x589a00*/
        }
        else
        {
          *(_DWORD *)(*(_DWORD *)v6 + 0x28) = *(_DWORD *)(v7 + 0x14); /*0x589a11*/
          v10 = *(_DWORD *)(*(_DWORD *)v6 + 0x28); /*0x589a16*/
        }
        FormHeapFree(v7); /*0x589a02*/
        v6 = v10; /*0x589a0a*/
      }
      else
      {
LABEL_7:
        v6 = *(_DWORD *)(*(_DWORD *)v6 + 0x28); /*0x5899ed*/
      }
    }
    else
    {
      v6 = *(_DWORD *)(v6 + 0x14); /*0x589a26*/
    }
  }
  if ( a4 != Tile_GetFloat(this, a2) ) /*0x589a40*/
  {
    v11 = (float *)FormHeapAlloc(0x18u); /*0x589a44*/
    if ( v11 ) /*0x589a5a*/
      sub_588A70(v11, (int)this, a2, a3, a4, a5); /*0x589a7a*/
  }
}
