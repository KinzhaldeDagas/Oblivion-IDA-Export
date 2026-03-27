void __userpurge sub_5BCDD0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, signed int a4, int a5)
{
  InterfaceManager *Singleton; // eax

  if ( a4 == 2 )
  {
    sub_5BCCB0(a1);
  }
  else if ( a4 >= 4 )
  {
    sub_57DE50(1);
    Singleton = InterfaceManager_GetSingleton(0, 1);
    Singleton->activeTile = 0;
    Singleton->activeMenu = 0;
    Singleton->unk0A0 = 0;
    Singleton->unk0A4 = 0;
    Singleton->msgBoxButtonPressed = a4 + *(_BYTE *)(a1 + 0x60) - 4;
    sub_5BC6B0(a2, a3);
  }
}
