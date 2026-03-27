NiCullingProcess *__thiscall NiCullingProcess::`scalar deleting destructor'(NiCullingProcess *this, char a2)
{
  this->vtbl = (NiCullingProcessVtbl *)&NiCullingProcess::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
