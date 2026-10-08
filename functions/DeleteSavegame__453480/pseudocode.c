void __userpurge DeleteSavegame(
        _DWORD *this@<ecx>,
        double st7_0@<st0>,
        double st4_0@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st4>,
        double a7@<st7>,
        double a8@<st6>,
        double a9@<st5>,
        const char *a10,
        char *a11)
{
  const char *Game_ResolveSaveFile; // esi
  int *v13; // ecx

  if ( a10 ) /*0x45348a*/
  {
    Game_ResolveSaveFile = TESSaveLoadGame_ResolveSaveFile(this, st7_0, st4_0, a4, a5, a6, a7, a8, a9, (int)a10, a11, 3); /*0x45349a*/
    if ( !Game_ResolveSaveFile ) /*0x45349e*/
      Game_ResolveSaveFile = a10; /*0x4534a0*/
    DeleteFileA(Game_ResolveSaveFile + 0x3C); /*0x4534a6*/
    v13 = (int *)*(this + 0x1B); /*0x4534b0*/
    if ( v13 ) /*0x4534b5*/
      BSSimpleList_Remove(v13, (int)Game_ResolveSaveFile); /*0x4534b8*/
    (**(void (__thiscall ***)(const char *, int))Game_ResolveSaveFile)(Game_ResolveSaveFile, 1); /*0x4534c5*/
  }
}
