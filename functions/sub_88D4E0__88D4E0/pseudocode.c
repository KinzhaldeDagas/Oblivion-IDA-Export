char __stdcall sub_88D4E0(int a1)
{
  char result; // al

  result = sub_88D3D0(*(__m128 ***)a1, a1);
  if ( result || (result = sub_88D3D0(*(__m128 ***)(a1 + 4), a1)) != 0 )
    *(_DWORD *)(a1 + 0x1C) = 1;
  return result;
}
