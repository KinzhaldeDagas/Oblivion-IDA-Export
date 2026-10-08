NiCullingProcess *__thiscall NiCullingProcess::`scalar deleting destructor'(NiCullingProcess *this, char a2)
{
  this->vtbl = (NiCullingProcessVtbl *)&NiCullingProcess::`vftable'; /*0x70e088*/
  if ( (a2 & 1) != 0 ) /*0x70e08e*/
    FormHeapFree((unsigned int)this); /*0x70e091*/
  return this; /*0x70e09b*/
}
