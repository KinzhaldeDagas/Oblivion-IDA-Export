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

  v3 = 0; /*0x4cd3d9*/
  v20._vtbl = &NiTArray<TESObjectREFR *>::`vftable'; /*0x4cd3db*/
  v20.growSize = 1; /*0x4cd3e8*/
  memset(&v20.data, 0, 0xA); /*0x4cd3f9*/
  v21 = 0; /*0x4cd403*/
  NiTArray_SetSize((unsigned __int16 *)&v20, 0x32u); /*0x4cd407*/
  v20.growSize = 0x32; /*0x4cd412*/
  sub_496EA0((char *)&unk_B35C80, this); /*0x4cd419*/
  p_objectList = &this->members.objectList; /*0x4cd41e*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cd423*/
  {
    do /*0x4cd4c3*/
    {
      if ( !p_objectList->next && !p_objectList->refr ) /*0x4cd437*/
        break; /*0x4cd439*/
      refr = p_objectList->refr; /*0x4cd43f*/
      p_objectList = p_objectList->next; /*0x4cd441*/
      flags = refr->member.super.flags; /*0x4cd443*/
      v18 = (signed int)refr; /*0x4cd44f*/
      v7 = (flags & 0x4000) == 0; /*0x4cd455*/
      if ( (flags & 0x20) != 0 ) /*0x4cd45c*/
      {
        OverrideFile = TESForm_GetOverrideFile((TESForm *)refr, 0); /*0x4cd462*/
        if ( OverrideFile ) /*0x4cd469*/
        {
          if ( !TESFile_GetIsMaster(OverrideFile) ) /*0x4cd46d*/
            v7 = 0; /*0x4cd476*/
        }
      }
      if ( a2 != TESForm_GetOverrideFile((TESForm *)refr, 0xFFFFFFFF) && (refr->member.super.flags & 2) == 0 ) /*0x4cd48f*/
        v7 = 0; /*0x4cd491*/
      if ( ((this->members.flags0 & 1) != 0 /*0x4cd4af*/
         || !TESObjectREFR_IsPersistent(refr)
         || (this->members.super.flags & 0x400) != 0)
        && v7 )
      {
        sub_4BACA0(&v20, &v18); /*0x4cd4ba*/
      }
      v3 = 0; /*0x4cd4bf*/
    }
    while ( p_objectList ); /*0x4cd4c3*/
  }
  sub_496F50(&unk_B35C80, this); /*0x4cd4cf*/
  sub_521BE0(&v20); /*0x4cd4d8*/
  numObjs = v20.numObjs; /*0x4cd4dd*/
  data = v20.data; /*0x4cd4e4*/
  v18 = v20.numObjs; /*0x4cd4e8*/
  v17 = 0; /*0x4cd4ec*/
  if ( v20.numObjs ) /*0x4cd4f0*/
  {
    v16 = v20.data; /*0x4cd4f6*/
    while ( 1 ) /*0x4cd502*/
    {
      vtbl = v16->vtbl; /*0x4cd502*/
      v12 = v17 + 1; /*0x4cd504*/
      v19 = v17 + 1; /*0x4cd509*/
      if ( (int)(v17 + 1) >= numObjs ) /*0x4cd50d*/
        goto LABEL_36; /*0x4cd50d*/
      do /*0x4cd599*/
      {
        v13 = *(&data->vtbl + v12); /*0x4cd513*/
        if ( !(*((unsigned __int8 (__thiscall **)(NiTexturingProperty_Map_Vtbl *, NiTexturingProperty_Map_Vtbl *))v13->Destroy /*0x4cd523*/
               + 0xD))(
                v13,
                vtbl) )
          goto LABEL_34; /*0x4cd523*/
        if ( v17 >= v20.end ) /*0x4cd530*/
        {
          v20.end = v17 + 1; /*0x4cd535*/
LABEL_24:
          ++v20.numObjs; /*0x4cd545*/
          goto LABEL_25; /*0x4cd545*/
        }
        if ( !v16->vtbl ) /*0x4cd540*/
          goto LABEL_24; /*0x4cd543*/
LABEL_25:
        v14 = v12 < (unsigned int)v20.end; /*0x4cd54b*/
        v16->vtbl = v13; /*0x4cd556*/
        if ( v14 ) /*0x4cd558*/
        {
          if ( vtbl ) /*0x4cd570*/
          {
            if ( !*((_DWORD *)&data->vtbl + v12) ) /*0x4cd572*/
              ++v20.numObjs; /*0x4cd578*/
          }
          else if ( *((_DWORD *)&data->vtbl + v12) ) /*0x4cd580*/
          {
            --v20.numObjs; /*0x4cd586*/
          }
        }
        else
        {
          v20.end = v12 + 1; /*0x4cd55f*/
          if ( vtbl ) /*0x4cd564*/
            ++v20.numObjs; /*0x4cd566*/
        }
        *((_DWORD *)&data->vtbl + v12) = vtbl; /*0x4cd58d*/
        vtbl = v13; /*0x4cd590*/
LABEL_34:
        ++v12; /*0x4cd592*/
      }
      while ( v12 < v18 ); /*0x4cd599*/
      numObjs = v18; /*0x4cd59f*/
      v12 = v19; /*0x4cd5a3*/
LABEL_36:
      v16 = (NiTexturingProperty_Map *)((char *)v16 + 4); /*0x4cd5a7*/
      v17 = v12; /*0x4cd5ae*/
      if ( v12 >= numObjs ) /*0x4cd5b2*/
      {
        v3 = 0; /*0x4cd5b8*/
        break; /*0x4cd5b8*/
      }
    }
  }
  if ( numObjs > 0 ) /*0x4cd5bc*/
  {
    do /*0x4cd5d6*/
    {
      v15 = *((TESForm **)&data->vtbl + v3); /*0x4cd5c0*/
      if ( v15 ) /*0x4cd5c5*/
        TESForm_SaveFormRecord(v15, a2); /*0x4cd5cc*/
      ++v3; /*0x4cd5d1*/
    }
    while ( v3 < numObjs ); /*0x4cd5d6*/
  }
  FormHeapFree((unsigned int)data); /*0x4cd5d9*/
}
