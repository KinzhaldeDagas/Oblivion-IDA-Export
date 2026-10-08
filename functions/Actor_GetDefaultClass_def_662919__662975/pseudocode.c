int __usercall Actor_GetDefaultClass_::def_662919@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  void *v4; // eax
  float v5; // edx

  switch ( a2 ) /*0x66297d*/
  {
    case 3: /*0x66297d*/
      if ( a3 != 2 || a4 != 2 ) /*0x6629bf*/
        goto Actor_GetDefaultClass___def_66297D; /*0x6629bf*/
      v5 = MEMORY[0xB37A58][0xA8]; /*0x6629c1*/
      goto LABEL_12; /*0x6629c1*/
    case 4: /*0x66297d*/
      if ( a4 == 2 ) /*0x6629a5*/
        v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0xA4])); /*0x6629ad*/
      else
        v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0xA6])); /*0x6629b6*/
      goto LABEL_13; /*0x6629ad*/
    case 5: /*0x66297d*/
      if ( a4 == 2 ) /*0x66298f*/
      {
        v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x86])); /*0x662998*/
      }
      else
      {
        v5 = MEMORY[0xB37A58][0xA2]; /*0x66299a*/
LABEL_12:
        v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(v5)); /*0x6629c7*/
      }
LABEL_13:
      *(_DWORD *)(a1 + 0x650) = v4; /*0x6629d3*/
      return Actor_GetDefaultClass_::def_66297D(a1, a2, a3, a4);
    case 6: /*0x66297d*/
      v4 = TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0xA0])); /*0x66298a*/
      goto LABEL_13; /*0x66298a*/
    default:
Actor_GetDefaultClass___def_66297D:
      JUMPOUT(0x6629D9); /*0x6629d9*/
  }
}
