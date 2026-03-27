double __thiscall TESContainer_GetEncumberance(int this)
{
  double result; // st7
  int **v2; // esi
  int *v3; // edi
  int v4; // eax
  float v5; // [esp+0h] [ebp-8h]

  result = 0.0;
  v5 = 0.0;
  if ( (*(_BYTE *)(this + 4) & 1) != 0 )
  {
    v2 = (int **)(this + 8);
    if ( *(_DWORD *)(this + 8) )
    {
      do
      {
        v3 = *v2;
        v4 = (*v2)[1];
        v2 = (int **)v2[1];
        if ( (*(_DWORD *)(v4 + 8) & 0x20) == 0 )
          v5 = TESWeightForm_GetWeightForForm_Fast(v4) * (double)(int)abs32(*v3) + v5;
      }
      while ( v2 );
    }
    return v5;
  }
  return result;
}
