void __thiscall sub_4CB6C0(TESObjectCELL *this)
{
  char *p_objectList; // edi
  int v3; // esi
  bool v4; // zf
  BSExtraDataVtbl *v5; // eax
  float *v6; // eax
  float *v7; // [esp-10h] [ebp-14h]

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = (char *)&this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      v3 = *(_DWORD *)p_objectList;
      v4 = *(_DWORD *)p_objectList == 0;
      p_objectList = *((char **)p_objectList + 1);
      if ( !v4 && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x170))(v3) + 4) == 0x1A )
      {
        v5 = sub_41E650((ExtraDataList *)(v3 + 0x44));
        if ( v5 )
        {
          v7 = (float *)v5;
          v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x170))(v3);
          sub_4B22E0(v6, v7, 0);
        }
      }
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, this);
}
