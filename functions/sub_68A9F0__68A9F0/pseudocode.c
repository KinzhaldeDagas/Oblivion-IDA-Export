// Verified PathLow constructor: installs the PathLow vtable at +0, initializes the BSSimpleList at +4/+8 to empty, copies unk_B3A458 to +0x0C, and sets byte +0x10 to 1. +0x0C and byte +0x10 semantics remain Unknown.
TravelPath *__thiscall PathLow_ctor(TravelPath *this)
{
  this->vtable = (unsigned int)&PathLow::`vftable'; /*0x68a9f2*/
  this->nodes.firstNode.data = 0; /*0x68a9fa*/
  this->nodes.firstNode.next = 0; /*0x68a9fd*/
  *(float *)&this->unknown0C = unk_B3A458; /*0x68aa06*/
  this->initializedByte10 = 1; /*0x68aa09*/
  return this; /*0x68aa0d*/
}
