int __thiscall sub_5672A0(TESPackage *this)
{
  int result; // eax
  TargetData *target; // ecx
  LocationData *location; // ecx
  int TargetType; // eax
  int v6; // eax
  ObjectType v7; // eax
  TargetData *v8; // ecx
  TargetData *v9; // ecx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  ObjectType v13; // eax
  ObjectType v14; // eax
  const char *v15; // eax
  char Format[260]; // [esp+8h] [ebp-108h] BYREF

  result = (char)this->members.type;
  switch ( this->members.type )
  {
    case kPackageType_Find:
      target = this->members.target;
      if ( !target )
      {
        location = this->members.location;
        if ( location )
        {
          result = TESPackage_LocationData_GetRadius(location);
          if ( result )
          {
            this->members.procedureArrayIndex = 1;
            goto LABEL_68;
          }
        }
        goto LABEL_3;
      }
      if ( !sub_569E60(target).form && !sub_569E70(this->members.target).form )
      {
        result = (int)sub_569E80(this->members.target).form;
        if ( !result )
          goto LABEL_68;
      }
      TargetType = TargetData::GetTargetType(this->members.target);
      if ( !TargetType )
      {
        v7.form = sub_569E60(this->members.target).form;
        result = (unsigned __int8)v7.form->vtbl->GetBaseForm(v7.objectCode)->member.type - 0x12;
        switch ( result )
        {
          case 0:
          case 5:
          case 6:
          case 0xA:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0x12:
LABEL_19:
            this->members.procedureArrayIndex = 2;
            goto LABEL_68;
          case 0x11:
            goto LABEL_18;
          default:
            goto LABEL_20;
        }
      }
      v6 = TargetType - 1;
      if ( v6 )
      {
        result = v6 - 1;
        if ( !result )
        {
          result = (int)&sub_569E80(this->members.target).form[0xFFFFFFFF].member.baseExtraList.members.m_presenceBitfield[0xB];
          switch ( result )
          {
            case 0:
            case 6:
            case 0xA:
            case 0xB:
            case 0xF:
              goto LABEL_19;
            case 0xE:
              goto LABEL_18;
            default:
              goto LABEL_16;
          }
        }
LABEL_20:
        this->members.procedureArrayIndex = 3;
        goto LABEL_68;
      }
      result = (unsigned __int8)sub_569E70(this->members.target).form->member.super.type - kFormType_Activator;
      if ( result == 0x11 )
LABEL_18:
        this->members.procedureArrayIndex = 0x16;
      else
LABEL_16:
        this->members.procedureArrayIndex = 0x1A;
      return result;
    case kPackageType_Follow:
      v8 = this->members.target;
      if ( !v8 )
        goto LABEL_67;
      result = (int)sub_569E60(v8).form;
      if ( !result )
      {
        result = (int)sub_569E70(this->members.target).form;
        if ( !result )
        {
          result = (int)sub_569E80(this->members.target).form;
          if ( !result )
            goto LABEL_67;
        }
      }
      this->members.procedureArrayIndex = 7;
      goto LABEL_68;
    case kPackageType_Escort:
      v9 = this->members.target;
      if ( !v9 )
        goto LABEL_67;
      if ( !sub_569E60(v9).form && !sub_569E70(this->members.target).form )
      {
        result = (int)sub_569E80(this->members.target).form;
        if ( !result )
          goto LABEL_67;
      }
      v10 = TargetData::GetTargetType(this->members.target);
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          result = v11 - 1;
          if ( result )
            goto LABEL_44;
          result = (int)sub_569E80(this->members.target).form;
          if ( result != 0xF )
          {
            result = (int)sub_569E80(this->members.target).form;
            v12 = result == 0x10;
            goto LABEL_42;
          }
LABEL_43:
          this->members.procedureArrayIndex = 8;
          goto LABEL_68;
        }
        result = (int)sub_569E70(this->members.target).form;
        if ( *(_BYTE *)(result + 4) == 0x23 )
          goto LABEL_43;
        result = (int)sub_569E70(this->members.target).form;
      }
      else
      {
        v13.form = sub_569E60(this->members.target).form;
        result = (int)v13.form->vtbl->GetBaseForm(v13.objectCode);
        if ( *(_BYTE *)(result + 4) == 0x23 )
          goto LABEL_43;
        v14.form = sub_569E60(this->members.target).form;
        result = (int)v14.form->vtbl->GetBaseForm(v14.objectCode);
      }
      v12 = *(_BYTE *)(result + 4) == 0x24;
LABEL_42:
      if ( v12 )
        goto LABEL_43;
LABEL_44:
      this->members.procedureArrayIndex = 9;
LABEL_68:
      if ( this->members.procedureArrayIndex == 0xFFFFFFFF )
      {
        v15 = this->__vftable->super.GetEditorName(this);
        _sprintf(
          Format,
          "Package '%s' is not a valid package because it is missing necessary Target Or Location Info.",
          v15);
        return PrintError(Format);
      }
      return result;
    case kPackageType_Eat:
      this->members.procedureArrayIndex = 5;
      goto LABEL_68;
    case kPackageType_Sleep:
      this->members.procedureArrayIndex = 4;
      goto LABEL_68;
    case kPackageType_Wander:
      this->members.procedureArrayIndex = 1;
      goto LABEL_68;
    case kPackageType_Travel:
LABEL_3:
      this->members.procedureArrayIndex = 0;
      goto LABEL_68;
    case kPackageType_Accompany:
      this->members.procedureArrayIndex = 0x1D;
      goto LABEL_68;
    case kPackageType_UseItemAt:
      this->members.procedureArrayIndex = 0x1E;
      goto LABEL_68;
    case kPackageType_Ambush:
      this->members.procedureArrayIndex = 0x20;
      goto LABEL_68;
    case kPackageType_FleeNotCombat:
      this->members.procedureArrayIndex = 0x23;
      goto LABEL_68;
    case kPackageType_CastMagic:
      this->members.procedureArrayIndex = 0x22;
      goto LABEL_68;
    case kPackageType_CombatController:
      this->members.procedureArrayIndex = 0xC;
      goto LABEL_68;
    case kPackType_MAX:
      this->members.procedureArrayIndex = 0xD;
      goto LABEL_68;
    case kPackType_MAX|kPackageType_Follow:
      this->members.procedureArrayIndex = 0xB;
      goto LABEL_68;
    case 0x11u:
      this->members.procedureArrayIndex = 0x14;
      goto LABEL_68;
    case 0x12u:
      this->members.procedureArrayIndex = 0xA;
      goto LABEL_68;
    case kPackageType_Eat|0x10:
      this->members.procedureArrayIndex = 0xF;
      goto LABEL_68;
    case kPackageType_Wander|0x10:
      this->members.procedureArrayIndex = 0x15;
      goto LABEL_68;
    case kPackageType_Travel|0x10:
      this->members.procedureArrayIndex = 0x17;
      goto LABEL_68;
    case kPackageType_Accompany|0x10:
      this->members.procedureArrayIndex = 0x18;
      goto LABEL_68;
    case 0x18u:
      this->members.procedureArrayIndex = 0x19;
      goto LABEL_68;
    case kPackageType_Ambush|0x10:
      this->members.procedureArrayIndex = 0x1B;
      goto LABEL_68;
    case kPackageType_FleeNotCombat|0x10:
      this->members.procedureArrayIndex = 0x1C;
      goto LABEL_68;
    case kPackageType_CombatController|0x10:
      this->members.procedureArrayIndex = 0x21;
      goto LABEL_68;
    case kPackType_Unk0D|0x10:
      this->members.procedureArrayIndex = 0x24;
      goto LABEL_68;
    case kPackType_MAX|0x10:
      this->members.procedureArrayIndex = 0x25;
      goto LABEL_68;
    case kPackType_MAX|kPackageType_Follow|0x10:
      this->members.procedureArrayIndex = kProcedure_SEARCH;
      goto LABEL_68;
    case 0x20u:
      this->members.procedureArrayIndex = kProcedure_CLEAR_MOUNT_POSITION;
      goto LABEL_68;
    default:
LABEL_67:
      this->members.procedureArrayIndex = 0xFFFFFFFF;
      goto LABEL_68;
  }
}
