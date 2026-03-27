void __thiscall LightEffect_Remove(int *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax

  sub_6948B0(this);
  v2 = (MagicTarget *)*(this + 8);
  if ( v2 )
  {
    ParentActor = MagicTarget_GetParentActor(v2);
    if ( ParentActor )
      sub_694980((_EXCEPTION_REGISTRATION_RECORD *)this, (int)&ParentActor->members.magicTarget);
  }
}
