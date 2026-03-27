int __thiscall sub_4CB730(TESObjectCELL *this)
{
  char *p_objectList; // esi
  int v3; // ebp
  int v4; // ecx
  bool v5; // zf

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = (char *)&this->members.objectList;
  v3 = 0;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      v4 = *(_DWORD *)p_objectList;
      v5 = *(_DWORD *)p_objectList == 0;
      p_objectList = *((char **)p_objectList + 1);
      if ( !v5 && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x170))(v4) + 4) == 0x1A )
        ++v3;
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, this);
  return v3;
}
