UInt32 __cdecl sub_5966F0(int a1)
{
  InterfaceManager *Singleton; // eax

  Singleton = InterfaceManager_GetSingleton(0, 1);
  Singleton->unk08C += a1;
  return Singleton->unk08C;
}
