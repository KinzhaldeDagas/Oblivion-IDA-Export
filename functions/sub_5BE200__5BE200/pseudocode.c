char __userpurge sub_5BE200@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>, int a4, int a5)
{
  InterfaceManager *Singleton; // eax

  Singleton = InterfaceManager_GetSingleton(0, 1);
  return sub_57DA20((int)Singleton, a1, a2, a3, "Menus\\Misc\\cursor.dds", 1);
}
