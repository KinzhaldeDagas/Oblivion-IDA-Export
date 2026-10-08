// EnginePatch v2: byte-checked SaveLoad_AdvanceBufferOffset hook. Clamps save cursor movement to active tracked record buffer.
int __thiscall SaveLoad_AdvanceBufferOffset(_DWORD *this, int a2)
{
  *(this + 5) += a2; /*0x452174*/
  return a2; /*0x452177*/
}
