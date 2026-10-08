// Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
void __thiscall PathLow_dtor(TravelPath *this)
{
  this->vtable = (unsigned int)&PathLow::`vftable'; /*0x68aa10*/
  TravelPath_ClearNodes(this); /*0x68aa16*/
}
