void __thiscall sub_544AD0(_BYTE *this)
{
  BSShaderAccumulator *inited; // eax

  *(this + 0x24) = 1;
  inited = InitBSShaderAccumulator();
  if ( inited )
    sub_7AA280(inited);
}
