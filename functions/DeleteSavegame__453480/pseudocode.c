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
  const char *v12; // esi
  _DWORD *v13; // ecx

  if ( a10 )
  {
    v12 = Savegame_Rename((int)this, st7_0, st4_0, a4, a5, a6, a7, a8, a9, (int)a10, a11, 3);
    if ( !v12 )
      v12 = a10;
    DeleteFileA(v12 + 0x3C);
    v13 = (_DWORD *)*(this + 0x1B);
    if ( v13 )
      BSSimpleList_Remove(v13, (int)v12);
    (**(void (__thiscall ***)(const char *, int))v12)(v12, 1);
  }
}
