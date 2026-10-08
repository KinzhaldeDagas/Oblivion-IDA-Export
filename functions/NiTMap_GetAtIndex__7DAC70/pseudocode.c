// [Verified] Map lookup wrapper used by both CreateVertexShader and CreatePixelShader. It delegates the supplied program key to NiTMap_GetAt and returns the associated ShaderBufferEntry pointer, or null when absent.
int __thiscall NiTMap_GetAtIndex(_DWORD *this, int a2)
{
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = 0; /*0x7dac7d*/
  NiTMap_GetAt(this + 2, a2, &v3); /*0x7dac85*/
  return v3; /*0x7dac8e*/
}
