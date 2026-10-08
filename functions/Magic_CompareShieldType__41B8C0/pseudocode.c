bool __cdecl Magic_CompareShieldType(int a1, int a2)
{
  bool result; // al

  switch ( a1 ) /*0x41b8cc*/
  {
    case 1: /*0x41b8cc*/
      result = a2 == 0x48534946; /*0x41b8dd*/
      break; /*0x41b8e0*/
    case 2: /*0x41b8cc*/
      result = a2 == 0x48535246; /*0x41b8eb*/
      break; /*0x41b8ee*/
    case 4: /*0x41b8cc*/
      result = a2 == 0x4853494C; /*0x41b8f9*/
      break; /*0x41b8fc*/
    case 8: /*0x41b8cc*/
      result = a2 == 0x444C4853 || a2 == 0x574E5352 || a2 == 0x47444552; /*0x41b919*/
      break; /*0x41b918*/
    default:
      result = 0; /*0x41b91f*/
      break; /*0x41b91f*/
  }
  return result; /*0x41b8e0*/
}
