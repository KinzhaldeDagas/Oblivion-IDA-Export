// 3DTheft decode: TESPackage procedure-array resolver is a mutator. It writes TESPackage+0x18/procedureArrayIndex directly; callers should not use EAX as the row result.
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

  result = (char)this->members.type; /*0x5672b7*/
  switch ( this->members.type ) /*0x5672c8*/
  {
    case 0u: /*0x5672c8*/
      target = this->members.target; /*0x5672e7*/
      if ( !target ) /*0x5672ec*/
      {
        location = this->members.location; /*0x5672ee*/
        if ( location ) /*0x5672f3*/
        {
          result = TESPackage_LocationData_GetRadius(location); /*0x5672f5*/
          if ( result ) /*0x5672fc*/
          {
            this->members.procedureArrayIndex = 1; /*0x5672fe*/
            goto LABEL_68; /*0x567305*/
          }
        }
        goto LABEL_3; /*0x5672fc*/
      }
      if ( !sub_569E60(target).form && !sub_569E70(this->members.target).form ) /*0x567316*/
      {
        result = (int)sub_569E80(this->members.target).form; /*0x567322*/
        if ( !result ) /*0x567329*/
          goto LABEL_68; /*0x567329*/
      }
      TargetType = TargetData::GetTargetType(this->members.target); /*0x567332*/
      if ( !TargetType ) /*0x56733a*/
      {
        v7.form = sub_569E60(this->members.target).form; /*0x5673ab*/
        result = (unsigned __int8)v7.form->vtbl->GetBaseForm(v7.objectCode)->member.type - 0x12; /*0x5673c0*/
        switch ( result ) /*0x5673cf*/
        {
          case 0: /*0x5673cf*/
          case 5: /*0x5673cf*/
          case 6: /*0x5673cf*/
          case 0xA: /*0x5673cf*/
          case 0xC: /*0x5673cf*/
          case 0xD: /*0x5673cf*/
          case 0xE: /*0x5673cf*/
          case 0x12: /*0x5673cf*/
LABEL_19:
            this->members.procedureArrayIndex = 2; /*0x5673f4*/
            goto LABEL_68; /*0x5673fb*/
          case 0x11: /*0x5673cf*/
            goto LABEL_18;
          default:
            goto LABEL_20;
        }
      }
      v6 = TargetType - 1; /*0x56733c*/
      if ( v6 ) /*0x56733f*/
      {
        result = v6 - 1; /*0x567341*/
        if ( !result ) /*0x567344*/
        {
          result = (int)&sub_569E80(this->members.target).form[0xFFFFFFFF].member.baseExtraList.members.m_presenceBitfield[0xB]; /*0x567352*/
          switch ( result ) /*0x567361*/
          {
            case 0: /*0x567361*/
            case 6: /*0x567361*/
            case 0xA: /*0x567361*/
            case 0xB: /*0x567361*/
            case 0xF: /*0x567361*/
              goto LABEL_19;
            case 0xE: /*0x567361*/
              goto LABEL_18;
            default:
              goto LABEL_16;
          }
        }
LABEL_20:
        this->members.procedureArrayIndex = 3; /*0x567400*/
        goto LABEL_68; /*0x567407*/
      }
      result = (unsigned __int8)sub_569E70(this->members.target).form->member.super.type - kFormType_Activator; /*0x567374*/
      if ( result == 0x11 ) /*0x567383*/
LABEL_18:
        this->members.procedureArrayIndex = 0x16; /*0x5673d6*/
      else
LABEL_16:
        this->members.procedureArrayIndex = 0x1A; /*0x56738a*/
      return result; /*0x5673a7*/
    case 1u: /*0x5672c8*/
      v8 = this->members.target; /*0x567424*/
      if ( !v8 ) /*0x567429*/
        goto LABEL_67; /*0x567429*/
      result = (int)sub_569E60(v8).form; /*0x56742f*/
      if ( !result ) /*0x567436*/
      {
        result = (int)sub_569E70(this->members.target).form; /*0x56743b*/
        if ( !result ) /*0x567442*/
        {
          result = (int)sub_569E80(this->members.target).form; /*0x567447*/
          if ( !result ) /*0x56744e*/
            goto LABEL_67; /*0x56744e*/
        }
      }
      this->members.procedureArrayIndex = 7;    // 3DTheft decode 2026-05-16: direct Follow package with any non-null target data resolves procedureArrayIndex=7. /*0x567454*/
      goto LABEL_68; /*0x56745b*/
    case 2u: /*0x5672c8*/
      v9 = this->members.target; /*0x567460*/
      if ( !v9 ) /*0x567465*/
        goto LABEL_67; /*0x567465*/
      if ( !sub_569E60(v9).form && !sub_569E70(this->members.target).form ) /*0x567477*/
      {
        result = (int)sub_569E80(this->members.target).form; /*0x567483*/
        if ( !result ) /*0x56748a*/
          goto LABEL_67; /*0x56748a*/
      }
      v10 = TargetData::GetTargetType(this->members.target); /*0x567493*/
      if ( v10 ) /*0x56749b*/
      {
        v11 = v10 - 1; /*0x56749d*/
        if ( v11 ) /*0x5674a0*/
        {
          result = v11 - 1; /*0x5674a2*/
          if ( result ) /*0x5674a5*/
            goto LABEL_44; /*0x5674a5*/
          result = (int)sub_569E80(this->members.target).form; /*0x5674aa*/
          if ( result != 0xF ) /*0x5674b2*/
          {
            result = (int)sub_569E80(this->members.target).form; /*0x5674b7*/
            v12 = result == 0x10; /*0x5674bc*/
            goto LABEL_42; /*0x5674bf*/
          }
LABEL_43:
          this->members.procedureArrayIndex = 8; /*0x56750d*/
          goto LABEL_68; /*0x567514*/
        }
        result = (int)sub_569E70(this->members.target).form; /*0x5674c4*/
        if ( *(_BYTE *)(result + 4) == 0x23 ) /*0x5674cd*/
          goto LABEL_43; /*0x5674cd*/
        result = (int)sub_569E70(this->members.target).form; /*0x5674d2*/
      }
      else
      {
        v13.form = sub_569E60(this->members.target).form; /*0x5674dc*/
        result = (int)v13.form->vtbl->GetBaseForm(v13.objectCode); /*0x5674eb*/
        if ( *(_BYTE *)(result + 4) == 0x23 ) /*0x5674f1*/
          goto LABEL_43; /*0x5674f1*/
        v14.form = sub_569E60(this->members.target).form; /*0x5674f6*/
        result = (int)v14.form->vtbl->GetBaseForm(v14.objectCode); /*0x567505*/
      }
      v12 = *(_BYTE *)(result + 4) == 0x24; /*0x567507*/
LABEL_42:
      if ( v12 ) /*0x56750b*/
        goto LABEL_43; /*0x56750b*/
LABEL_44:
      this->members.procedureArrayIndex = 9; /*0x567519*/
LABEL_68:
      if ( this->members.procedureArrayIndex == 0xFFFFFFFF )// 3DTheft decode: resolver exit after package+0x18 has been written; EAX is incidental from branch calculations, not a stable return value. /*0x567609*/
      {
        v15 = this->__vftable->super.GetEditorName(this); /*0x567615*/
        _sprintf( /*0x567622*/
          Format,
          "Package '%s' is not a valid package because it is missing necessary Target Or Location Info.",
          v15);
        return PrintError(Format); /*0x56762c*/
      }
      return result;
    case 3u: /*0x5672c8*/
      this->members.procedureArrayIndex = 5;    // RadiantAI: package type Eat sets procedureArrayIndex=5, whose dispatch row is 0,5,1,44. This makes sub_62DA10 the live Eat-package action boundary. /*0x56740c*/
      goto LABEL_68; /*0x567413*/
    case 4u: /*0x5672c8*/
      this->members.procedureArrayIndex = 4;    // RadiantAI: package type Sleep sets procedureArrayIndex=4, dispatch row 0,4,1,44. Action 4/sub_62D750 is tied to Sleep packages, despite procedure string table naming action 4 PROCEDURE_EAT. /*0x567418*/
      goto LABEL_68; /*0x56741f*/
    case 5u: /*0x5672c8*/
      this->members.procedureArrayIndex = 1;    // 3DTheft decode: example resolver case writes procedureArrayIndex directly to package+0x18. /*0x5672cf*/
      goto LABEL_68; /*0x5672d6*/
    case 6u: /*0x5672c8*/
LABEL_3:
      this->members.procedureArrayIndex = 0; /*0x5672db*/
      goto LABEL_68; /*0x5672e2*/
    case 7u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x1D; /*0x5675a0*/
      goto LABEL_68; /*0x5675a7*/
    case 8u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x1E; /*0x5675a9*/
      goto LABEL_68; /*0x5675b0*/
    case 9u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x20; /*0x5675b2*/
      goto LABEL_68; /*0x5675b9*/
    case 0xAu: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x23; /*0x5675c4*/
      goto LABEL_68; /*0x5675cb*/
    case 0xBu: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x22; /*0x5675cd*/
      goto LABEL_68; /*0x5675d4*/
    case kPackageType_CombatController: /*0x5672c8*/
      this->members.procedureArrayIndex = 0xC; /*0x567525*/
      goto LABEL_68; /*0x56752c*/
    case kPackType_MAX: /*0x5672c8*/
      this->members.procedureArrayIndex = 0xD; /*0x56753d*/
      goto LABEL_68; /*0x567544*/
    case kPackType_MAX|0x1: /*0x5672c8*/
      this->members.procedureArrayIndex = 0xB; /*0x567549*/
      goto LABEL_68; /*0x567550*/
    case 0x11u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x14; /*0x567555*/
      goto LABEL_68; /*0x56755c*/
    case 0x12u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0xA; /*0x567531*/
      goto LABEL_68; /*0x567538*/
    case 0x13u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0xF; /*0x5675d6*/
      goto LABEL_68; /*0x5675dd*/
    case 0x15u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x15; /*0x567561*/
      goto LABEL_68; /*0x567568*/
    case 0x16u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x17; /*0x567585*/
      goto LABEL_68; /*0x56758c*/
    case 0x17u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x18; /*0x567579*/
      goto LABEL_68; /*0x567580*/
    case 0x18u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x19; /*0x56756d*/
      goto LABEL_68; /*0x567574*/
    case 0x19u: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x1B; /*0x56758e*/
      goto LABEL_68; /*0x567595*/
    case 0x1Au: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x1C; /*0x567597*/
      goto LABEL_68; /*0x56759e*/
    case kPackageType_CombatController|0x10: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x21; /*0x5675bb*/
      goto LABEL_68; /*0x5675c2*/
    case kPackType_Unk0D|0x10: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x24; /*0x5675df*/
      goto LABEL_68; /*0x5675e6*/
    case kPackType_MAX|0x10: /*0x5672c8*/
      this->members.procedureArrayIndex = 0x25; /*0x5675e8*/
      goto LABEL_68; /*0x5675ef*/
    case kPackType_MAX|0x11: /*0x5672c8*/
      this->members.procedureArrayIndex = kProcedure_SEARCH; /*0x5675f1*/
      goto LABEL_68; /*0x5675f8*/
    case 0x20u: /*0x5672c8*/
      this->members.procedureArrayIndex = kProcedure_CLEAR_MOUNT_POSITION; /*0x5675fa*/
      goto LABEL_68; /*0x567601*/
    default:
LABEL_67:
      this->members.procedureArrayIndex = 0xFFFFFFFF; /*0x567603*/
      goto LABEL_68; /*0x567603*/
  }
}
