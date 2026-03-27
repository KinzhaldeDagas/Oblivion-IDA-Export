bool sub_578FA0()
{
  return InterfaceManager_GetSingleton(0, 1)
      && InterfaceManager_GetSingleton(0, 1)->cursor
      && LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) == 3;
}
