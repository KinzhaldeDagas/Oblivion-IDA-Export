void __userpurge sub_60F250(
        Actor *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        _DWORD *a4,
        char a5,
        int a6,
        int a7,
        int a8,
        int a9,
        PlayerCharacter *a10)
{
  LowProcess *process; // eax
  TESPackage *editorPackage; // eax
  ExtraDataList *v13; // ebp
  double v14; // st7
  ExtraDataList *v15; // ebp
  ExtraDataList *p_baseExtraList; // ebp
  ExtraDataList *v17; // ebp
  ExtraDataList *v18; // ebp
  ExtraDataList *v19; // ebp

  process = this->members.super.process; /*0x60f276*/
  if ( process ) /*0x60f27b*/
  {
    editorPackage = process->editorPackage; /*0x60f27d*/
    if ( editorPackage ) /*0x60f282*/
    {
      if ( editorPackage->members.type == kPackageType_Alarm ) /*0x60f288*/
        JUMPOUT(0x60FB86); /*0x60fb86*/
    }
  }
  if ( a4 ) /*0x60f294*/
  {
    switch ( a4[1] ) /*0x60f2a6*/
    {
      case 0: /*0x60f2a6*/
        p_baseExtraList = &this->members.super.super.baseExtraList; /*0x60f2e7*/
        Script_AddEventToExtraScript(a4[3], &this->members.super.super.baseExtraList, 0x10000); /*0x60f2ec*/
        v14 = Script_AddEventToExtraScript(a4[2], p_baseExtraList, 0x400000); /*0x60f2f6*/
        goto LABEL_12; /*0x60f2f6*/
      case 1: /*0x60f2a6*/
        v19 = &this->members.super.super.baseExtraList; /*0x60f332*/
        Script_AddEventToExtraScript(a4[3], &this->members.super.super.baseExtraList, 0x20000); /*0x60f337*/
        v14 = Script_AddEventToExtraScript(a4[2], v19, &loc_800000); /*0x60f346*/
        goto LABEL_12; /*0x60f346*/
      case 2: /*0x60f2a6*/
        v17 = &this->members.super.super.baseExtraList; /*0x60f300*/
        Script_AddEventToExtraScript(a4[3], &this->members.super.super.baseExtraList, 0x40000); /*0x60f305*/
        v14 = Script_AddEventToExtraScript(a4[2], v17, 0x1000000); /*0x60f30f*/
        goto LABEL_12; /*0x60f30f*/
      case 3: /*0x60f2a6*/
        v13 = &this->members.super.super.baseExtraList; /*0x60f2b5*/
        Script_AddEventToExtraScript(a4[3], &this->members.super.super.baseExtraList, 0x80000); /*0x60f2ba*/
        v14 = Script_AddEventToExtraScript(a4[2], v13, 0x2000000); /*0x60f2c4*/
        goto LABEL_12; /*0x60f2c4*/
      case 4: /*0x60f2a6*/
        v15 = &this->members.super.super.baseExtraList; /*0x60f2ce*/
        Script_AddEventToExtraScript(a4[3], &this->members.super.super.baseExtraList, 0x100000); /*0x60f2d3*/
        v14 = Script_AddEventToExtraScript(a4[2], v15, 0x4000000); /*0x60f2dd*/
        goto LABEL_12; /*0x60f2dd*/
      case 5: /*0x60f2a6*/
        v18 = &this->members.super.super.baseExtraList; /*0x60f319*/
        Script_AddEventToExtraScript(a4[3], &this->members.super.super.baseExtraList, 0x200000); /*0x60f31e*/
        v14 = Script_AddEventToExtraScript(a4[2], v18, 0x8000000); /*0x60f328*/
LABEL_12:
        def_60F2A6(this, (int)a4, a2, a3, v14, (int)a4, a5, a6, a7, a8, a9, a10); /*0x60f34b*/
        return;
      default:
        break;
    }
  }
  JUMPOUT(0x60F34E); /*0x60f34e*/
}
