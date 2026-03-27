Creature *__thiscall sub_65A450(Actor *this, float a2)
{
  Creature *result; // eax
  Actor *v4; // eax
  double v5; // st7
  double v6; // st6
  float v7; // [esp+Ch] [ebp+4h]

  if ( this->members.super.process )
  {
    result = (Creature *)((int (__thiscall *)(Actor *))this->vtbl->super.super.GetKnockedState)(this);
    if ( !(_BYTE)result )
    {
      switch ( ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process) )
      {
        case 4:
        case 5:
        case 9:
        case 0xA:
          if ( !this->members.super.process->GetFurniture(this->members.super.process) )
            goto LABEL_7;
          v4 = (Actor *)OblivionDynamicCast(
                          this,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
          if ( !v4 )
            goto LABEL_7;
          result = v4->vtbl->GetMountedHorse(v4);
          if ( result )
            goto LABEL_7;
          break;
        default:
          goto LABEL_7;
      }
    }
  }
  else
  {
LABEL_7:
    v5 = a2;
    v6 = dbl_A3D5B0;
    if ( a2 >= 0.0 )
    {
      if ( v6 < v5 )
        unknown_libname_14(v6, v5);
      return (Creature *)sub_4D8A10(a2);
    }
    else
    {
      v7 = v5 + v6;
      unknown_libname_14(v6, v7);
      return (Creature *)sub_4D8A10(v7);
    }
  }
  return result;
}
