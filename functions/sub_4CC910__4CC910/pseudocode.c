int __thiscall sub_4CC910(TESObjectCELL *this)
{
  int v2; // ebp
  char *p_objectList; // esi
  int v4; // edi

  v2 = 0;
  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = (char *)&this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)p_objectList;
      if ( *(_DWORD *)p_objectList )
      {
        if ( (TESForm *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 0x170))(*(_DWORD *)p_objectList) == TESDataHandler_g_LootBag )
          break;
      }
      p_objectList = *((char **)p_objectList + 1);
      if ( !p_objectList )
      {
        sub_496F50(&stru_B35C80, this);
        return 0;
      }
    }
    v2 = v4;
  }
  sub_496F50(&stru_B35C80, this);
  return v2;
}
