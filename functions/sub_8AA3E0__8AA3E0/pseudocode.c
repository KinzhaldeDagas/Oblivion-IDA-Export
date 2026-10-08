char __thiscall sub_8AA3E0(int this)
{
  Ni2DBuffer **v1; // esi
  Ni2DBuffer *v2; // eax

  if ( *(char *)(this + 8) >= 0 ) /*0x8aa3eb*/
    return 0; /*0x8aa413*/
  v1 = *(Ni2DBuffer ***)(this + 0x30); /*0x8aa3ee*/
  v2 = (Ni2DBuffer *)sub_700010(v1, (int)&MEMORY[0xBA8000]); /*0x8aa3f8*/
  if ( !v2 ) /*0x8aa3ff*/
    return 0; /*0x8aa40f*/
  NiObjectNET_RemoveController(v1, v2); /*0x8aa404*/
  return 1; /*0x8aa40c*/
}
