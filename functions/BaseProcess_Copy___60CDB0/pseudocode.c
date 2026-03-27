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

  if ( a4 )
  {
    v3 = (HighProcess *)OblivionDynamicCast(
                          a4,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                          &HighProcess `RTTI Type Descriptor',
                          0);
    v4 = (MiddleHighProcess *)OblivionDynamicCast(
                                a4,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                                &MiddleHighProcess `RTTI Type Descriptor',
                                0);
    v9 = (MiddleLowProcess *)OblivionDynamicCast(
                               a4,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                               &MiddleLowProcess `RTTI Type Descriptor',
                               0);
    a3 = (LowProcess *)OblivionDynamicCast(
                         a4,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                         &LowProcess `RTTI Type Descriptor',
                         0);
    v5 = (HighProcess *)OblivionDynamicCast(
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                          &HighProcess `RTTI Type Descriptor',
                          0);
    a4a = (MiddleHighProcess *)OblivionDynamicCast(
                                 a1,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                                 &MiddleHighProcess `RTTI Type Descriptor',
                                 0);
    v8 = (MiddleLowProcess *)OblivionDynamicCast(
                               a1,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                               &MiddleLowProcess `RTTI Type Descriptor',
                               0);
    v6 = (LowProcess *)OblivionDynamicCast(
                         a1,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                         &LowProcess `RTTI Type Descriptor',
                         0);
    if ( v3 )
    {
      result = ((double (__thiscall *)(HighProcess *))v3->Unk_56)(v3);
      if ( result > *(float *)&SrcStr )
      {
        v3->SetCurrentPackage(v3, 0);
        v3->SetUnk02C(v3, 0);
      }
    }
    if ( v5 )
    {
      result = ((double (__thiscall *)(HighProcess *))v5->Unk_56)(v5);
      if ( result > *(float *)&SrcStr )
      {
        v5->SetCurrentPackage(v5, 0);
        v5->SetUnk02C(v5, 0);
      }
      if ( v3 )
        HighProcess::CopyFrom(v5, v3);
    }
    if ( a4a )
    {
      if ( v4 )
        MiddleHighProcess_CopyFrom(a4a, v4);
    }
    if ( v8 )
    {
      if ( v9 )
        MiddleLowProcess::CloneFrom(v8, v9);
    }
    if ( v6 )
    {
      if ( a3 )
        LowProcess::CopyFrom(v6, a3);
    }
  }
  return result;
}
