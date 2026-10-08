Creature *__thiscall sub_65A450(Actor *this, float a2)
{
  Creature *result; // eax
  Actor *v4; // eax
  double v5; // st7
  double v6; // st6
  float radians; // [esp+Ch] [ebp+4h]

  if ( this->members.super.process ) /*0x65a453*/
  {
    result = (Creature *)((int (__thiscall *)(Actor *))this->vtbl->super.super.GetKnockedState)(this); /*0x65a461*/
    if ( !(_BYTE)result ) /*0x65a465*/
    {
      switch ( ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process) ) /*0x65a487*/
      {
        case 4: /*0x65a487*/
        case 5: /*0x65a487*/
        case 9: /*0x65a487*/
        case 0xA: /*0x65a487*/
          if ( !this->members.super.process->GetFurniture(this->members.super.process) ) /*0x65a499*/
            goto LABEL_7; /*0x65a499*/
          v4 = (Actor *)OblivionDynamicCast( /*0x65a4ae*/
                          this,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
          if ( !v4 ) /*0x65a4b8*/
            goto LABEL_7; /*0x65a4b8*/
          result = v4->vtbl->GetMountedHorse(v4); /*0x65a4c4*/
          if ( result ) /*0x65a4c8*/
            goto LABEL_7; /*0x65a4c8*/
          break; /*0x65a4c8*/
        default:
          goto LABEL_7;
      }
    }
  }
  else
  {
LABEL_7:
    v5 = a2; /*0x65a4ca*/
    v6 = dbl_A3D5B0; /*0x65a4d9*/
    if ( a2 >= 0.0 ) /*0x65a4df*/
    {
      if ( v6 < v5 ) /*0x65a512*/
        unknown_libname_14(v6, v5); /*0x65a514*/
      return (Creature *)TESObjectREFR_SetRotationZ((TESObjectREFR *)this, a2); /*0x65a527*/
    }
    else
    {
      radians = v5 + v6; /*0x65a4e5*/
      unknown_libname_14(v6, radians); /*0x65a4ef*/
      return (Creature *)TESObjectREFR_SetRotationZ((TESObjectREFR *)this, radians); /*0x65a502*/
    }
  }
  return result; /*0x65a507*/
}
