void __thiscall sub_4D1A90(TESObjectCELL *this, float a2, float a3)
{
  char *p_objectList; // ebp
  _DWORD *v5; // edi
  NiObject *v6; // eax
  NiObject *v7; // esi

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = (char *)&this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      v5 = *(_DWORD **)p_objectList;
      if ( *(_DWORD *)p_objectList )
      {
        if ( (*(int (__thiscall **)(_DWORD))(*v5 + 0x170))(*(_DWORD *)p_objectList) )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v5 + 0x170))(v5) + 4) == 0x1E )
          {
            v6 = (NiObject *)(*(int (__thiscall **)(_DWORD *))(*v5 + 0x154))(v5);
            if ( !v6
              || (v7 = NiRTTI_Cast(&BSTreeNode, v6)) == 0
              || !v7->__vftable[2].GetType(v7)
              || !v7->__vftable[2].GetType(v7)[1].parent
              || a2 <= (double)*(float *)&v7->__vftable[2].GetType(v7)[0xA].name
              && a3 > (double)*(float *)&v7->__vftable[2].GetType(v7)[0xA].name )
            {
              (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 0x150))(v5, 0);
              sub_4D7010(v5, 0);
            }
          }
        }
      }
      p_objectList = *((char **)p_objectList + 1);
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, this);
}
