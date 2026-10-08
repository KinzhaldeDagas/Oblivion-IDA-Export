OB_stString28_010201A0 *__thiscall sub_6F5FA0(FILE **this)
{
  OB_stString28_010201A0 *result; // eax

  if ( *(this + 0xF) ) /*0x6f5fa3*/
    fclose(*(this + 0xF)); /*0x6f5fab*/
  result = OB_stString28_AssignBytes_010201A0((OB_stString28_010201A0 *)(this + 1), EmptyString, 0); /*0x6f5fbd*/
  *(this + 0xF) = 0; /*0x6f5fc2*/
  return result; /*0x6f5fc9*/
}
