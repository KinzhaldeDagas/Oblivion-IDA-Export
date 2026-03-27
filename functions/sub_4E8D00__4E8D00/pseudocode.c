int __thiscall sub_4E8D00(_DWORD *this, float *a2)
{
  int v3; // eax
  int v4; // esi
  float *v5; // eax
  float v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+14h] [ebp-4h] BYREF

  v3 = sub_4EF1D0((int)*a2 >> 0xC, (int)a2[1] >> 0xC);
  v8 = 0;
  NiTMap_GetAt(this + 7, v3, &v8);
  v4 = v8;
  if ( v8 )
  {
    while ( *(_DWORD *)(v4 + 4) || *(_DWORD *)v4 )
    {
      v7 = fConstant_2;
      v5 = (float *)sub_4BEF40(*(char **)v4);
      if ( sub_47D810(v5, a2, v7) )
        return *(_DWORD *)v4;
      v4 = *(_DWORD *)(v4 + 4);
      if ( !v4 )
        return 0;
    }
  }
  return 0;
}
