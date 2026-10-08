void __usercall sub_578EF0(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  InterfaceManager *v3; // esi

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x578ef4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x578f0c*/
    {
      if ( MEMORY[0xB3A6E0] ) /*0x583e30*/
      {
        v3 = MEMORY[0xB3A6E0]; /*0x583e3b*/
        sub_581A50((unsigned int *)MEMORY[0xB3A6E0], a1, a2, a3); /*0x583e3d*/
        FormHeapFree((unsigned int)v3); /*0x583e43*/
        MEMORY[0xB3A6E0] = 0; /*0x583e4b*/
      }
    }
  }
}
