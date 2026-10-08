UInt32 __cdecl sub_5966F0(int a1)
{
  InterfaceManager *Singleton; // eax

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5966f4*/
  Singleton->unk08C += a1; /*0x5966fd*/
  return Singleton->unk08C; /*0x59670d*/
}
