char __usercall sub_5EB400@<al>(Actor *this@<ecx>, double a2@<st1>, double a3@<st2>)
{
  LowProcess *process; // eax
  TESPackage *editorPackage; // edi
  char v6; // al
  int v7; // eax
  char *location; // ecx
  int v9; // eax
  float *v10; // eax
  float v11; // edi
  float v12; // ebx
  float v13; // ebp
  TESObjectCELL *DwordAtOffset40; // eax
  float *v15; // eax
  NiPoint3 v17; // [esp-18h] [ebp-38h]
  int v18[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !IsWeaponReady(this) ) /*0x5eb40b*/
    return 0; /*0x5eb40b*/
  if ( sub_5E1E90(this) ) /*0x5eb41a*/
    return 0; /*0x5eb41a*/
  process = this->members.super.process; /*0x5eb427*/
  if ( process ) /*0x5eb42c*/
  {
    editorPackage = process->editorPackage; /*0x5eb42e*/
    if ( editorPackage ) /*0x5eb433*/
    {
      sub_566DC0(editorPackage, kTerrainLODQuadRayDirectionZ, a2, a3, this, 0, kTerrainLODQuadRayDirectionZ); /*0x5eb444*/
      if ( v6 ) /*0x5eb44b*/
      {
        if ( editorPackage->members.type == kPackageType_Travel ) /*0x5eb451*/
        {
          if ( sub_566D00((char **)editorPackage, (int)this) ) /*0x5eb456*/
          {
            v7 = sub_566D00((char **)editorPackage, (int)this); /*0x5eb462*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x170))(v7) == MEMORY[0xB35EB0] ) /*0x5eb479*/
              return 0; /*0x5eb479*/
          }
        }
        location = (char *)editorPackage->members.location; /*0x5eb47f*/
        if ( location ) /*0x5eb484*/
        {
          if ( sub_569740(location) == 3 ) /*0x5eb48e*/
          {
            sub_566DB0(editorPackage); /*0x5eb492*/
            if ( !v9 ) /*0x5eb499*/
              return 0; /*0x5eb50a*/
          }
        }
      }
    }
  }
  v10 = this->vtbl->super.super.GetPos(this); /*0x5eb4a5*/
  v11 = *v10; /*0x5eb4a7*/
  v12 = v10[1]; /*0x5eb4a9*/
  v13 = v10[2]; /*0x5eb4ac*/
  if ( Shared_GetDwordAtOffset40(this) ) /*0x5eb4b1*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5eb4c2*/
    v17.x = v11; /*0x5eb4d1*/
    *(_QWORD *)&v17.y = __PAIR64__(LODWORD(v13), LODWORD(v12)); /*0x5eb4d4*/
    v15 = Actor_ChoosePathGridSteeringPosition((TESObjectREFR *)this, (float *)v18, v17, DwordAtOffset40, 0.0, 0.0, 0); /*0x5eb4dc*/
    v11 = *v15; /*0x5eb4e1*/
    v12 = v15[1]; /*0x5eb4e3*/
    v13 = v15[2]; /*0x5eb4e6*/
  }
  TESObjectREFR_SetPosition((TESObjectREFR *)this, v11, v12, v13); /*0x5eb4f8*/
  return 1; /*0x5eb4ff*/
}
