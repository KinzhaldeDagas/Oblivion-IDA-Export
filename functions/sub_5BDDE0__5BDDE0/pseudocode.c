void __usercall sub_5BDDE0(char a1@<bpl>, double a2@<st2>, double a3@<st1>)
{
  UInt8 v4; // al
  int *Singleton; // eax
  float v6[4]; // [esp+0h] [ebp-10h] BYREF

  v4 = sub_578D70();
  if ( v4 == 2 )
  {
    v6[0] = 1.0;
    v6[1] = 0.0;
    v6[2] = 0.0;
    v6[3] = 0.0;
    sub_578E90(v6);
    sub_57CCC0(0);
    sub_440AF0((int)TES, a2, a3, a1, 1, 0, 0);
    OSGlobals->exitToMainMenu = 1;
  }
  else if ( v4 == 3 )
  {
    Singleton = (int *)InterfaceManager_GetSingleton(0, 1);
    *(_WORD *)(*(_DWORD *)(Singleton[0x1A] + 0x24) + 0x18) |= 1u;
    *(_WORD *)(*(_DWORD *)(Singleton[7] + 0x24) + 0x18) |= 1u;
    MiscPass(Singleton, a2, a3, 0);
    OSGlobals->quitGame = 1;
  }
}
