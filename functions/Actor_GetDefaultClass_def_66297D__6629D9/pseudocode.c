int __usercall Actor_GetDefaultClass_::def_66297D@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  void *v4; // eax
  float v5; // edx

  switch ( a4 ) /*0x6629e1*/
  {
    case 3: /*0x6629e1*/
      if ( a3 > 3 || a2 > 3 ) /*0x662a24*/
        goto Actor_GetDefaultClass___def_6629E1; /*0x662a24*/
      v5 = MEMORY[0xB37A58][0x8A]; /*0x662a26*/
      goto LABEL_12; /*0x662a26*/
    case 4: /*0x6629e1*/
      if ( a3 == 2 ) /*0x662a09*/
        v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x9E])); /*0x662a11*/
      else
        v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x82])); /*0x662a1a*/
      goto LABEL_13; /*0x662a11*/
    case 5: /*0x6629e1*/
      if ( a3 == 1 ) /*0x6629f3*/
      {
        v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x80])); /*0x6629fc*/
      }
      else
      {
        v5 = MEMORY[0xB37A58][0x7C]; /*0x6629fe*/
LABEL_12:
        v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(v5)); /*0x662a2c*/
      }
LABEL_13:
      *(_DWORD *)(a1 + 0x650) = v4; /*0x662a38*/
      return Actor_GetDefaultClass_::def_6629E1(a1);
    case 6: /*0x6629e1*/
      v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x7E])); /*0x6629ee*/
      goto LABEL_13; /*0x6629ee*/
    default:
Actor_GetDefaultClass___def_6629E1:
      JUMPOUT(0x662A3E); /*0x662a3e*/
  }
}
