// Lighting/leaf property virtual +0x7C. Ref-counts and stores texture/ref pointer at property +0x9C.
void __thiscall OB_SpeedTreeShaderLightingProperty_SetTextureRef_010201A0(
        OB_SpeedTreeShaderLightingProperty_010201A0 *this,
        int textureRef)
{
  int v3; // esi

  v3 = this->textureRef; /*0x7f1ae4*/
  if ( v3 != textureRef ) /*0x7f1af1*/
  {
    if ( v3 ) /*0x7f1af5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7f1afb*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7f1b11*/
    }
    this->textureRef = textureRef; /*0x7f1b15*/
    if ( textureRef ) /*0x7f1b1b*/
      InterlockedIncrement((volatile LONG *)(textureRef + 4)); /*0x7f1b21*/
  }
}
