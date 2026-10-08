double __thiscall BaseProcess_Copy_(BaseProcess *a1, BaseProcess *a4)
{
  HighProcess *v3; // ebx
  MiddleHighProcess *v4; // ebp
  HighProcess *v5; // edi
  LowProcess *v6; // esi
  double result; // st7
  MiddleLowProcess *v8; // [esp+10h] [ebp-Ch]
  MiddleLowProcess *v9; // [esp+14h] [ebp-8h]
  LowProcess *a3; // [esp+18h] [ebp-4h]
  MiddleHighProcess *a4a; // [esp+20h] [ebp+4h]

  if ( a4 ) /*0x60cdbd*/
  {
    v3 = (HighProcess *)OblivionDynamicCast( /*0x60cde8*/
                          a4,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                          &HighProcess `RTTI Type Descriptor',
                          0);
    v4 = (MiddleHighProcess *)OblivionDynamicCast( /*0x60cdfe*/
                                a4,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                                &MiddleHighProcess `RTTI Type Descriptor',
                                0);
    v9 = (MiddleLowProcess *)OblivionDynamicCast( /*0x60ce14*/
                               a4,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                               &MiddleLowProcess `RTTI Type Descriptor',
                               0);
    a3 = (LowProcess *)OblivionDynamicCast( /*0x60ce2f*/
                         a4,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                         &LowProcess `RTTI Type Descriptor',
                         0);
    v5 = (HighProcess *)OblivionDynamicCast( /*0x60ce47*/
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                          &HighProcess `RTTI Type Descriptor',
                          0);
    a4a = (MiddleHighProcess *)OblivionDynamicCast( /*0x60ce5d*/
                                 a1,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                                 &MiddleHighProcess `RTTI Type Descriptor',
                                 0);
    v8 = (MiddleLowProcess *)OblivionDynamicCast( /*0x60ce75*/
                               a1,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                               &MiddleLowProcess `RTTI Type Descriptor',
                               0);
    v6 = (LowProcess *)OblivionDynamicCast( /*0x60ce83*/
                         a1,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                         &LowProcess `RTTI Type Descriptor',
                         0);
    if ( v3 ) /*0x60ce85*/
    {
      result = ((double (__thiscall *)(HighProcess *))v3->Unk_56)(v3); /*0x60ce91*/
      if ( result > *(float *)&SrcStr ) /*0x60ce9e*/
      {
        v3->SetCurrentPackage(v3, 0); /*0x60ceac*/
        v3->SetUnk02C(v3, 0); /*0x60ceba*/
      }
    }
    if ( v5 ) /*0x60cebe*/
    {
      result = ((double (__thiscall *)(HighProcess *))v5->Unk_56)(v5); /*0x60ceca*/
      if ( result > *(float *)&SrcStr ) /*0x60ced7*/
      {
        v5->SetCurrentPackage(v5, 0); /*0x60cee5*/
        v5->SetUnk02C(v5, 0); /*0x60cef3*/
      }
      if ( v3 ) /*0x60cef7*/
        HighProcess::CopyFrom(v5, v3); /*0x60cefc*/
    }
    if ( a4a ) /*0x60cf07*/
    {
      if ( v4 ) /*0x60cf0b*/
        MiddleHighProcess_CopyFrom(a4a, v4); /*0x60cf0e*/
    }
    if ( v8 ) /*0x60cf1b*/
    {
      if ( v9 ) /*0x60cf23*/
        MiddleLowProcess::CloneFrom(v8, v9); /*0x60cf26*/
    }
    if ( v6 ) /*0x60cf2d*/
    {
      if ( a3 ) /*0x60cf35*/
        LowProcess::CopyFrom(v6, a3); /*0x60cf3a*/
    }
  }
  return result; /*0x60cf3f*/
}
