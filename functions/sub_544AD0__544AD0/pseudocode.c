void __thiscall sub_544AD0(_BYTE *this)
{
  BSShaderAccumulator *inited; // eax

  *(this + 0x24) = 1; /*0x544ad0*/
  inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x544ad4*/
  if ( inited ) /*0x544adb*/
    sub_7AA280(inited); /*0x544adf*/
}
