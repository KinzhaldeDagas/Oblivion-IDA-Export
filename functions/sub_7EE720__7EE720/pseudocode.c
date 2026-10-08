// Remove the paired ShadowSceneLight association from BSShaderProperty+0x6C.
void *__thiscall sub_7EE720(_DWORD *this, int a2)
{
  void *result; // eax

  result = sub_776690((BSTextureManager *)(this + 0x1B), &a2); /*0x7ee72b*/
  *(this + 9) = 0; /*0x7ee730*/
  return result; /*0x7ee737*/
}
