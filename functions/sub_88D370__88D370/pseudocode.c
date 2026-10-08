// hkCharacterContext state id accessor used by controller update; proxy+0x1E0 context stores current state id at +0x0C.
int __thiscall hkCharacterContext_GetStateId(_DWORD *this)
{
  return *(this + 3); /*0x88d373*/
}
