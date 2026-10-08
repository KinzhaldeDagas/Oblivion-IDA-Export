// Verified TogglePathLineState flips BYTE2(qword_B3BB2C[0x157]) and returns the new value. Its only direct caller is ScriptCommand_TogglePathLine; exact semantics of the packed manager field remain Unknown.
bool __cdecl TogglePathLineState()
{
  bool result; // al

  result = BYTE2(qword_B3BB2C[0x157]) == 0; /*0x683be7*/
  BYTE2(qword_B3BB2C[0x157]) = result; /*0x683bea*/
  return result; /*0x683bef*/
}
