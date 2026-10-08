// Strong-own and classify the backing NiLight. When trackBackingPosition is set, seed cached source position from the NiPointLight world translation.
int __thiscall ShadowSceneLight_SetBackingLight(ShadowSceneLight_DecodedLayout *self, void *backingLight)
{
  int result; // eax
  volatile LONG *backingLight_100; // esi

  backingLight_100 = (volatile LONG *)self->backingLight_100; /*0x7d3404*/
  if ( backingLight_100 != backingLight ) /*0x7d3411*/
  {
    if ( backingLight_100 ) /*0x7d3415*/
    {
      result = InterlockedDecrement(backingLight_100 + 1); /*0x7d341b*/
      if ( !result ) /*0x7d3423*/
        result = (**(int (__thiscall ***)(void *, int))backingLight_100)((void *)backingLight_100, 1); /*0x7d3431*/
    }
    self->backingLight_100 = backingLight;      // Store and strong-own the backing NiLight at ShadowSceneLight+0x100 until replacement or destruction. /*0x7d3435*/
    if ( !backingLight ) /*0x7d343b*/
      goto LABEL_11; /*0x7d343b*/
    result = InterlockedIncrement((volatile LONG *)backingLight + 1); /*0x7d3441*/
  }
  if ( !backingLight || (result = (*(int (__thiscall **)(void *))(*(_DWORD *)backingLight + 4))(backingLight)) == 0 ) /*0x7d3456*/
  {
LABEL_11:
    LOBYTE(result) = 0; /*0x7d3466*/
    goto LABEL_12; /*0x7d3466*/
  }
  while ( (char *)result != stru_B3FD80 )       // Walk the backing object's RTTI parent chain looking for RTTI_NiPointLight; this is the producer test for ShadowSceneLight+0xFC. /*0x7d345d*/
  {
    result = *(_DWORD *)(result + 4); /*0x7d345f*/
    if ( !result ) /*0x7d3464*/
      goto LABEL_11; /*0x7d3464*/
  }
  LOBYTE(result) = 1; /*0x7d34a1*/
LABEL_12:
  self->backingIsNiPointLight_FC = result;      // Store backingIsNiPointLight into the byte at ShadowSceneLight+0xFC. /*0x7d3468*/
  if ( (_BYTE)result ) /*0x7d3470*/
  {                                             // trackBackingPosition controls whether SetBackingLight copies backing point-light world translation into +0x108..+0x110.
    if ( self->trackBackingPosition_104 ) /*0x7d3472*/
    {
      self->cachedSourceX_108 = *((float *)backingLight + 0x22); /*0x7d348d*/
      self->cachedSourceY_10C = *((float *)backingLight + 0x23); /*0x7d3493*/
      result = *((_DWORD *)backingLight + 0x24); /*0x7d3496*/
      LODWORD(self->cachedSourceZ_110) = result; /*0x7d349a*/
    }
  }
  else
  {
    self->cullRange_D4 = 1.0; /*0x7d34a7*/
  }
  return result; /*0x7d3492*/
}
