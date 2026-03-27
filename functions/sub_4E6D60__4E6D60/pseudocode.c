char *__thiscall sub_4E6D60(_DWORD *this, float *a2)
{
  float *v3; // ebx
  int v4; // eax
  float *v5; // esi
  char *v6; // edi
  float *v7; // eax
  float v9; // [esp+0h] [ebp-14h]

  if ( !*(this + 9) )
    return 0;
  v3 = a2;
  v4 = sub_4E5320(a2);
  a2 = 0;
  NiTMap_GetAt(this + 0x11, v4, &a2);
  v5 = a2;
  if ( !a2 )
    return 0;
  while ( 1 )
  {
    if ( !*((_DWORD *)v5 + 1) && !*(_DWORD *)v5 )
      return 0;
    v6 = *(char **)v5;
    v9 = fConstant_2;
    v7 = (float *)sub_4BEF40(*(char **)v5);
    if ( sub_47D810(v7, v3, v9) )
      break;
    v5 = *((float **)v5 + 1);
    if ( !v5 )
      return 0;
  }
  return v6;
}
