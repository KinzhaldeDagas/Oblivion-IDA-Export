void __thiscall sub_4CCDA0(TESObjectCELL *this)
{
  char *p_objectList; // edi
  TESObjectREFR *v3; // esi

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = (char *)&this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      v3 = *(TESObjectREFR **)p_objectList;
      if ( !*(_DWORD *)p_objectList )
        break;
      if ( v3 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
        && TESObjectREFR_IsPersistent_(*(TESObjectREFR **)p_objectList) )
      {
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))v3->vtbl->Set3D)(v3, 0);
      }
      p_objectList = *((char **)p_objectList + 1);
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, this);
}
