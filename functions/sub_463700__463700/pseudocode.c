int __usercall sub_463700@<eax>(
        char *a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  OSGlobals *v7; // ecx
  const char *sound; // esi

  sub_67CF00(&dword_B3BDB0);
  if ( dword_B3BF80 )
    sub_683500((_DWORD *)dword_B3BF80);
  if ( dword_B35B90 )
    sub_4BE420((_DWORD *)dword_B35B90);
  if ( dword_B35B8C )
    sub_4BD8C0((_DWORD *)dword_B35B8C);
  sub_65E800(TESDataHandler_g_PlayerRef);
  sub_45C470((int)a1, a4, a5, a6, TESDataHandler + 0x74);
  SaveLoad_ClearCreatedObjList__(a1);
  sub_443300(TES, a4, a5);
  sub_677280((int *)&ActorProcessManager_ptr);
  sub_67AE90((int *)&ActorProcessManager_ptr);
  v7 = OSGlobals;
  dword_B3B90C = 0;
  sound = (const char *)v7->sound;
  if ( sound )
  {
    SoundManager_OpenMusicFile(sound, 0, 0, 0);
    SoundManager_PlayMusic((int)sound, a3);
  }
  sub_5C16D0();
  sub_5A8BA0();
  sub_57C0A0(a2, a4, a5, a6);
  sub_4F9FD0();
  return sub_4F9DD0();
}
