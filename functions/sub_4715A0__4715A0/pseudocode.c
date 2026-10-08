// Looks up a NiControllerSequence by name in the controller manager name map at +0x58; returns null on miss.
NiControllerSequence *__thiscall NiControllerManager_FindSequenceByName(NiControllerManager *this, const char *name)
{
  char v2; // al

  v2 = NiTMap_GetAt((_DWORD *)this + 0x16, (int)name, &name); /*0x4715ad*/
  return v2 != 0 ? (NiControllerSequence *)name : 0;
}
