void __usercall sub_5903E0(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  InterfaceManager *Singleton; // esi
  int menuRoot; // ecx

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5903ea*/
  menuRoot = (int)Singleton->menuRoot; /*0x5903ec*/
  if ( menuRoot ) /*0x5903f4*/
    sub_58FBA0(menuRoot, a1, a3, a2, 0); /*0x5903f8*/
  if ( LOBYTE(Singleton->unk0B8) ) /*0x5903fd*/
  {
    LOBYTE(Singleton->unk0B8) = 0; /*0x590406*/
    sub_4A25F0((_DWORD *)unk_B35300); /*0x590414*/
  }
}
