double __thiscall TimeGlobals_GetGameDay(_DWORD *this)
{
  int v1; // eax
  double result; // st7

  v1 = *(this + 2);
  if ( v1 )
    result = *(float *)(v1 + 0x24);
  else
    result = (float)17.0;
  Double_To_SInt32(result);
  return result;
}
