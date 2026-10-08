NiD3DShaderConstantManager *__cdecl sub_780B30(int a1, int a2)
{
  NiD3DShaderConstantManager *v2; // eax

  v2 = (NiD3DShaderConstantManager *)FormHeapAlloc(0x8Cu); /*0x780b35*/
  if ( v2 ) /*0x780b3f*/
    return NiDX9ShaderConstantManager_Construct(v2, a1, a2); /*0x780b4d*/
  else
    return 0; /*0x780b53*/
}
