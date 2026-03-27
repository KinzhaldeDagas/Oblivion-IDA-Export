void __thiscall sub_7F2AB0(int this, float a2)
{
  char v2; // bl
  int v3; // esi
  int i; // edx
  float *v5; // eax

  v2 = *(_BYTE *)(this + 0x180);
  v3 = *(_DWORD *)(this + 0x84);
  while ( v2 && v3 < *(_DWORD *)(this + 0x14C) )
  {
LABEL_5:
    for ( i = 0; i < *(_DWORD *)(this + 0x134); *v5 = a2 + *v5 )
    {
      v5 = (float *)(0x10 * (v3 + i * *(_DWORD *)(this + 0x14C)) + *(_DWORD *)(this + 0x6C) + 4);
      ++i;
    }
    if ( ++v3 >= *(_DWORD *)(this + 0x14C) )
    {
      if ( !v2 )
        break;
      v3 = 0;
      v2 = 0;
    }
  }
  if ( v3 <= *(_DWORD *)(this + 0x88) )
    goto LABEL_5;
}
