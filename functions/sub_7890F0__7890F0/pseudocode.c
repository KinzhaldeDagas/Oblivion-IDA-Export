_BYTE *__stdcall sub_7890F0(_BYTE *a1, int a2, _BYTE *a3)
{
  int v3; // eax
  _BYTE *i; // ecx

  v3 = a2;
  for ( i = a1; v3; ++i )
  {
    *i = *a3;
    --v3;
  }
  return &a1[a2];
}
