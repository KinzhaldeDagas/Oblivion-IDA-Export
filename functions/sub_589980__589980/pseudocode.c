void __thiscall sub_589980(_DWORD *this, int a2, float a3, float a4, float a5)
{
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // esi
  float *v11; // eax

  v6 = *(this + 0xA);
  while ( v6 )
  {
    if ( *(_DWORD *)(v6 + 4) == a2 )
    {
      if ( *(float *)(v6 + 0xC) == a4 )
        return;
      v7 = *(_DWORD *)(*(_DWORD *)v6 + 0x28);
      v8 = 0;
      if ( v7 )
      {
        while ( v7 != v6 )
        {
          v8 = v7;
          v7 = *(_DWORD *)(v7 + 0x14);
          if ( !v7 )
            goto LABEL_7;
        }
        if ( v8 )
        {
          v9 = *(_DWORD *)(v7 + 0x14);
          *(_DWORD *)(v8 + 0x14) = v9;
          v10 = v9;
        }
        else
        {
          *(_DWORD *)(*(_DWORD *)v6 + 0x28) = *(_DWORD *)(v7 + 0x14);
          v10 = *(_DWORD *)(*(_DWORD *)v6 + 0x28);
        }
        FormHeapFree(v7);
        v6 = v10;
      }
      else
      {
LABEL_7:
        v6 = *(_DWORD *)(*(_DWORD *)v6 + 0x28);
      }
    }
    else
    {
      v6 = *(_DWORD *)(v6 + 0x14);
    }
  }
  if ( a4 != Tile_GetFloat(this, a2) )
  {
    v11 = (float *)FormHeapAlloc(0x18u);
    if ( v11 )
      sub_588A70(v11, (int)this, a2, a3, a4, a5);
  }
}
