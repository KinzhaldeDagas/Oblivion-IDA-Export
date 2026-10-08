void __userpurge Script_CompileAndRun(
        Script *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        void *a5,
        int a6,
        TESObjectREFR *a3)
{
  char **v8; // eax

  if ( sub_500280(a5, st5_0, st6_0, st7_0, this, a3, a6) ) /*0x4fbf14*/
  {
    if ( this->info.dataLength ) /*0x4fbf1d*/
    {
      if ( a6 == 1 ) /*0x4fbf26*/
        MEMORY[0xB361AC] = 1; /*0x4fbf28*/
      v8 = 0; /*0x4fbf2e*/
      if ( a3 ) /*0x4fbf32*/
        v8 = (char **)sub_4D7250(a3); /*0x4fbf36*/
      Script_Run(this, st7_0, st6_0, a3, v8, 0, 1); /*0x4fbf43*/
      MEMORY[0xB361AC] = 0; /*0x4fbf48*/
    }
  }
}
