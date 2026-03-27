int __thiscall sub_90D240(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  int v3; // ecx

  v1 = *(this + 1);
  for ( result = *(this + 7); v1; result += v3 )
  {
    v3 = *(_DWORD *)(v1 + 0x1C);
    v1 = *(_DWORD *)(v1 + 4);
  }
  return result;
}
