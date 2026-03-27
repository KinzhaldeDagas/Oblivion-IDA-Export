void __usercall LightEffect_Apply(int a1@<ecx>, _EXCEPTION_REGISTRATION_RECORD *a2@<esi>)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax

  v2 = *(MagicTarget **)(a1 + 0x20);
  if ( v2 )
  {
    ParentActor = MagicTarget_GetParentActor(v2);
    if ( ParentActor )
      sub_694980(a2, (int)&ParentActor->members.magicTarget);
  }
}
