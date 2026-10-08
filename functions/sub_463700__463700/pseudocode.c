int __usercall sub_463700@<eax>(char *a1@<ecx>, int a2@<edi>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  OSGlobals *v7; // ecx
  char *sound; // esi

  sub_67CF00((int *)&qword_B3BB2C[0xA1]); /*0x463708*/
  if ( LODWORD(qword_B3BB2C[0x115]) ) /*0x46370d*/
    sub_683500((NiTMap_TESCELL *)LODWORD(qword_B3BB2C[0x115])); /*0x463717*/
  if ( unk_B35B90 ) /*0x46371c*/
    sub_4BE420((_DWORD *)unk_B35B90); /*0x463726*/
  if ( unk_B35B8C ) /*0x46372b*/
    sub_4BD8C0((_DWORD *)unk_B35B8C); /*0x463735*/
  sub_65E800(reference); /*0x463740*/
  sub_45C470((int)a1, a3, a4, a5, MEMORY[0xB33A98] + 0x74); /*0x463750*/
  SaveLoad_ClearCreatedObjList__(a1); /*0x463757*/
  sub_443300(MEMORY[0xB333A0], a3, a4); /*0x463762*/
  ActorProcessManager_ClearCrimes((ActorProcessManager *)&qword_B3BB2C[0x75]); /*0x46376c*/
  sub_67AE90((int *)&qword_B3BB2C[0x75]); /*0x463776*/
  v7 = MEMORY[0xB33398]; /*0x46377b*/
  unk_B3B90C = 0; /*0x463781*/
  sound = (char *)v7->sound; /*0x46378b*/
  if ( sound ) /*0x463790*/
  {
    SoundManager_OpenMusicFile(sound, 0, 0, 0); /*0x46379a*/
    SoundManager_PlayMusic((int)sound, a2); /*0x4637a1*/
  }
  sub_5C16D0(); /*0x4637a6*/
  sub_5A8BA0(); /*0x4637ab*/
  sub_57C0A0(); /*0x4637b0*/
  sub_4F9FD0(); /*0x4637b5*/
  return sub_4F9DD0(); /*0x4637ba*/
}
