void __thiscall sub_4CEE90(TESObjectCELL *this, int a2, float a3)
{
  TESObjectREFR *v5; // esi
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  float *v8; // eax
  float *v9; // eax
  TeleportData *TeleportData; // eax
  TeleportData *v11; // edi
  TESObjectREFR *LinkedDoor; // eax
  char *v13; // eax
  char *v14; // edi
  char *Head; // eax
  bool v16; // zf
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  char *v22; // eax
  float v23; // ecx
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float v27; // eax
  TESObjectLAND *v28; // eax
  double CellWaterHeight; // st7
  double v30; // st7
  char v31; // [esp+13h] [ebp-21h]
  ObjectListEntry *next; // [esp+14h] [ebp-20h]
  TESObjectREFR *v33; // [esp+18h] [ebp-1Ch]
  TESObjectREFR *v34; // [esp+1Ch] [ebp-18h]
  TESObjectREFR *v35; // [esp+20h] [ebp-14h]
  TESObjectREFR *v36; // [esp+24h] [ebp-10h]
  int v37; // [esp+28h] [ebp-Ch] BYREF
  int v38; // [esp+2Ch] [ebp-8h]
  int v39; // [esp+30h] [ebp-4h]
  float v40; // [esp+38h] [ebp+4h]

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cee9f*/
  v5 = 0; /*0x4ceea8*/
  p_objectList = &this->members.objectList; /*0x4ceeaa*/
  v34 = 0; /*0x4ceeaf*/
  v33 = 0; /*0x4ceeb3*/
  v35 = 0; /*0x4ceeb7*/
  v36 = 0; /*0x4ceebb*/
  v31 = 0; /*0x4ceebf*/
  next = &this->members.objectList; /*0x4ceec4*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4ceec8*/
  {
    while ( p_objectList->next || p_objectList->refr ) /*0x4ceed4*/
    {
      refr = p_objectList->refr; /*0x4ceee3*/
      if ( (p_objectList->refr->member.super.flags & 0x20) == 0 ) /*0x4ceeed*/
      {
        if ( !v34 && refr->vtbl->GetBaseForm(refr) == MEMORY[0xB35EAC] ) /*0x4cef0c*/
        {
          if ( (this->members.flags0 & 1) != 0 || (v8 = refr->vtbl->GetPos(refr), sub_4CC540((int)this, v8)) ) /*0x4cef23*/
            v34 = refr; /*0x4cef2c*/
        }
        if ( !v33 && refr->vtbl->GetBaseForm(refr) == (TESForm *)MEMORY[0xB35EB0] ) /*0x4cef49*/
        {
          if ( (this->members.flags0 & 1) != 0 || (v9 = refr->vtbl->GetPos(refr), sub_4CC540((int)this, v9)) ) /*0x4cef60*/
            v33 = refr; /*0x4cef69*/
        }
        if ( !v31 ) /*0x4cef72*/
        {
          TeleportData = TESObjectREFR_GetTeleportData(refr); /*0x4cef7a*/
          v11 = TeleportData; /*0x4cef7f*/
          if ( TeleportData ) /*0x4cef83*/
          {
            if ( TeleportData_GetLinkedDoor(TeleportData) ) /*0x4cef8b*/
            {
              LinkedDoor = TeleportData_GetLinkedDoor(v11); /*0x4cef96*/
              v13 = (char *)TESObjectREFR_GetTeleportData(LinkedDoor); /*0x4cef9d*/
              v14 = v13; /*0x4cefa2*/
              if ( v13 ) /*0x4cefa6*/
              {
                Head = EmbeddedList_GetHead(v13); /*0x4cefaa*/
                v16 = (this->members.flags0 & 1) == 0; /*0x4cefaf*/
                v17 = *(_DWORD *)Head; /*0x4cefb3*/
                v18 = *((_DWORD *)Head + 1); /*0x4cefb5*/
                v19 = *((_DWORD *)Head + 2); /*0x4cefb8*/
                v37 = v17; /*0x4cefbb*/
                v38 = v18; /*0x4cefbf*/
                v39 = v19; /*0x4cefc3*/
                if ( !v16 || sub_4CC540((int)this, (float *)&v37) ) /*0x4cefd0*/
                {
                  v20 = v38; /*0x4cefdd*/
                  v21 = v39; /*0x4cefe1*/
                  *(_DWORD *)a2 = v37; /*0x4cefe5*/
                  *(_DWORD *)(a2 + 4) = v20; /*0x4cefe7*/
                  *(_DWORD *)(a2 + 8) = v21; /*0x4cefea*/
                  v22 = sub_42B430(v14); /*0x4cefef*/
                  v23 = a3; /*0x4ceff6*/
                  *(_DWORD *)LODWORD(a3) = *(_DWORD *)v22; /*0x4ceffa*/
                  *(_DWORD *)(LODWORD(v23) + 4) = *((_DWORD *)v22 + 1); /*0x4cefff*/
                  *(_DWORD *)(LODWORD(v23) + 8) = *((_DWORD *)v22 + 2); /*0x4cf005*/
                  v31 = 1; /*0x4cf008*/
                }
              }
            }
          }
          p_objectList = next; /*0x4cf00d*/
        }
        if ( !v35 && refr->vtbl->GetBaseForm(refr)->member.type == kFormType_Stat ) /*0x4cf028*/
        {
          if ( (this->members.flags0 & 1) != 0 || (v24 = refr->vtbl->GetPos(refr), sub_4CC540((int)this, v24)) ) /*0x4cf03f*/
            v35 = refr; /*0x4cf048*/
        }
        if ( (this->members.flags0 & 1) != 0 || (v25 = refr->vtbl->GetPos(refr), sub_4CC540((int)this, v25)) ) /*0x4cf061*/
          v36 = refr; /*0x4cf06a*/
      }
      v5 = v33; /*0x4cf073*/
      next = p_objectList->next; /*0x4cf077*/
      if ( !next ) /*0x4cf07b*/
        break; /*0x4cf07b*/
      p_objectList = p_objectList->next; /*0x4ceed0*/
    }
  }
  sub_496F50(&unk_B35C80, this); /*0x4cf087*/
  if ( v5 || (v5 = v34) != 0 || !v31 && ((v5 = v35) != 0 || (v5 = v36) != 0) ) /*0x4cf0ad*/
  {
    v26 = v5->vtbl->GetPos(v5); /*0x4cf0b9*/
    *(float *)a2 = *v26; /*0x4cf0bd*/
    *(float *)(a2 + 4) = v26[1]; /*0x4cf0c2*/
    *(float *)(a2 + 8) = v26[2]; /*0x4cf0c8*/
    v27 = a3; /*0x4cf0ce*/
    *(_DWORD *)LODWORD(a3) = LODWORD(v5->member.rot.x); /*0x4cf0d2*/
    *(float *)(LODWORD(v27) + 4) = v5->member.rot.y; /*0x4cf0d7*/
    *(float *)(LODWORD(v27) + 8) = v5->member.rot.z; /*0x4cf0dd*/
  }
  if ( (this->members.flags0 & 1) == 0 ) /*0x4cf0e4*/
  {
    v28 = sub_4CE3C0(this); /*0x4cf0e8*/
    if ( v28 ) /*0x4cf0ef*/
    {
      a3 = 0.0; /*0x4cf0f8*/
      sub_4C5B50(v28, (float *)a2, &a3); /*0x4cf0ff*/
      if ( (this->members.flags0 & 2) != 0 ) /*0x4cf10c*/
        CellWaterHeight = GetCellWaterHeight(&this->members.extraData); /*0x4cf119*/
      else
        CellWaterHeight = flt_A3B888; /*0x4cf10e*/
      v40 = CellWaterHeight; /*0x4cf11e*/
      v30 = a3; /*0x4cf122*/
      if ( v40 > (double)a3 ) /*0x4cf131*/
      {
        a3 = v40; /*0x4cf135*/
        v30 = v40; /*0x4cf139*/
      }
      if ( *(float *)(a2 + 8) < v30 ) /*0x4cf14b*/
        *(float *)(a2 + 8) = v30; /*0x4cf14e*/
    }
  }
}
