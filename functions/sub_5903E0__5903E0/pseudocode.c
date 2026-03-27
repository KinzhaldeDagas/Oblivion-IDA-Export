void __usercall sub_5903E0(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  InterfaceManager *Singleton; // esi
  int menuRoot; // ecx

  Singleton = InterfaceManager_GetSingleton(0, 1);
  menuRoot = (int)Singleton->menuRoot;
  if ( menuRoot )
    sub_58FBA0(menuRoot, a1, a3, a2, 0);
  if ( LOBYTE(Singleton->unk0B8) )
  {
    LOBYTE(Singleton->unk0B8) = 0;
    sub_4A25F0((_DWORD *)dword_B35300);
  }
}
