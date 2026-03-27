NiD3DShaderConstantManager *__cdecl sub_780B30(int a1, int a2)
{
  NiD3DShaderConstantManager *v2; // eax

  v2 = (NiD3DShaderConstantManager *)FormHeapAlloc(0x8Cu);
  if ( v2 )
    return sub_780A40(v2, a1, a2);
  else
    return 0;
}
