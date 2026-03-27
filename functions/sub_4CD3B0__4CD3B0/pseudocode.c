void __thiscall sub_4CD3B0(TESObjectCELL *this, Data *a2)
{
  int v3; // esi
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  TESForm::FormFlags flags; // eax
  bool v7; // bl
  Data *OverrideFile; // eax
  int numObjs; // ebp
  NiTexturingProperty_Map *data; // ebx
  NiTexturingProperty_Map_Vtbl *vtbl; // edi
  signed int v12; // esi
  NiTexturingProperty_Map_Vtbl *v13; // ebp
  bool v14; // cf
  TESForm *v15; // ecx
  NiTexturingProperty_Map *v16; // [esp+14h] [ebp-2Ch]
  unsigned int v17; // [esp+18h] [ebp-28h]
  signed int v18; // [esp+1Ch] [ebp-24h] BYREF
  signed int v19; // [esp+20h] [ebp-20h]
  NiTArray_NiTexturingPropertyMap v20; // [esp+24h] [ebp-1Ch] BYREF
  int v21; // [esp+3Ch] [ebp-4h]

  v3 = 0;
  v20._vtbl = &NiTArray<TESObjectREFR *>::`vftable';
  v20.growSize = 1;
  memset(&v20.data, 0, 0xA);
  v21 = 0;
  NiTArray_SetSize((unsigned __int16 *)&v20, 0x32u);
  v20.growSize = 0x32;
  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      if ( !p_objectList->next && !p_objectList->refr )
        break;
      refr = p_objectList->refr;
      p_objectList = p_objectList->next;
      flags = refr->member.super.flags;
      v18 = (signed int)refr;
      v7 = (flags & 0x4000) == 0;
      if ( (flags & 0x20) != 0 )
      {
        OverrideFile = TESForm_GetOverrideFile((TESForm *)refr, 0);
        if ( OverrideFile )
        {
          if ( !TESFile_GetIsMaster(OverrideFile) )
            v7 = 0;
        }
      }
      if ( a2 != TESForm_GetOverrideFile((TESForm *)refr, 0xFFFFFFFF) && (refr->member.super.flags & 2) == 0 )
        v7 = 0;
      if ( ((this->members.flags0 & 1) != 0
         || !TESObjectREFR_IsPersistent_(refr)
         || (this->members.super.flags & 0x400) != 0)
        && v7 )
      {
        sub_4BACA0(&v20, &v18);
      }
      v3 = 0;
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, this);
  sub_521BE0(&v20);
  numObjs = v20.numObjs;
  data = v20.data;
  v18 = v20.numObjs;
  v17 = 0;
  if ( v20.numObjs )
  {
    v16 = v20.data;
    while ( 1 )
    {
      vtbl = v16->vtbl;
      v12 = v17 + 1;
      v19 = v17 + 1;
      if ( (int)(v17 + 1) >= numObjs )
        goto LABEL_36;
      do
      {
        v13 = *(&data->vtbl + v12);
        if ( !(*((unsigned __int8 (__thiscall **)(NiTexturingProperty_Map_Vtbl *, NiTexturingProperty_Map_Vtbl *))v13->Destroy
               + 0xD))(
                v13,
                vtbl) )
          goto LABEL_34;
        if ( v17 >= v20.end )
        {
          v20.end = v17 + 1;
LABEL_24:
          ++v20.numObjs;
          goto LABEL_25;
        }
        if ( !v16->vtbl )
          goto LABEL_24;
LABEL_25:
        v14 = v12 < (unsigned int)v20.end;
        v16->vtbl = v13;
        if ( v14 )
        {
          if ( vtbl )
          {
            if ( !*((_DWORD *)&data->vtbl + v12) )
              ++v20.numObjs;
          }
          else if ( *((_DWORD *)&data->vtbl + v12) )
          {
            --v20.numObjs;
          }
        }
        else
        {
          v20.end = v12 + 1;
          if ( vtbl )
            ++v20.numObjs;
        }
        *((_DWORD *)&data->vtbl + v12) = vtbl;
        vtbl = v13;
LABEL_34:
        ++v12;
      }
      while ( v12 < v18 );
      numObjs = v18;
      v12 = v19;
LABEL_36:
      v16 = (NiTexturingProperty_Map *)((char *)v16 + 4);
      v17 = v12;
      if ( v12 >= numObjs )
      {
        v3 = 0;
        break;
      }
    }
  }
  if ( numObjs > 0 )
  {
    do
    {
      v15 = *((TESForm **)&data->vtbl + v3);
      if ( v15 )
        TESForm_SaveFormRecord(v15, a2);
      ++v3;
    }
    while ( v3 < numObjs );
  }
  FormHeapFree((unsigned int)data);
}
