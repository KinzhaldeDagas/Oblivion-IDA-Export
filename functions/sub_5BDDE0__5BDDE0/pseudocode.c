void __usercall sub_5BDDE0(double a1@<st2>, double a2@<st1>)
{
  unsigned __int8 v2; // al
  int *Singleton; // eax
  float v4[4]; // [esp+0h] [ebp-10h] BYREF

  v2 = InterfaceManager_ConsumeMessageButton(); /*0x5bdde3*/
  if ( v2 == 2 ) /*0x5bddea*/
  {
    v4[0] = 1.0; /*0x5bddf1*/
    v4[1] = 0.0; /*0x5bddf7*/
    v4[2] = 0.0; /*0x5bddfb*/
    v4[3] = 0.0; /*0x5bddff*/
    sub_578E90(v4); /*0x5bde03*/
    sub_57CCC0(0); /*0x5bde0a*/
    sub_440AF0((int)MEMORY[0xB333A0], a1, a2, 0.0, 1, 0, 0); /*0x5bde1e*/
    MEMORY[0xB33398]->exitToMainMenu = 1; /*0x5bde29*/
  }
  else if ( v2 == 3 ) /*0x5bde33*/
  {
    Singleton = (int *)InterfaceManager_GetSingleton(0, 1); /*0x5bde39*/
    *(_WORD *)(*(_DWORD *)(Singleton[0x1A] + 0x24) + 0x18) |= 1u; /*0x5bde44*/
    *(_WORD *)(*(_DWORD *)(Singleton[7] + 0x24) + 0x18) |= 1u; /*0x5bde4f*/
    MiscPass(Singleton, a1, a2, 0); /*0x5bde5b*/
    MEMORY[0xB33398]->quitGame = 1; /*0x5bde66*/
  }
}
