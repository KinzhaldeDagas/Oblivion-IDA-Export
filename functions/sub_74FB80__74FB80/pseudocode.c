char __stdcall sub_74FB80(NiObject *a1, __int16 a2)
{
  NiRTTI *v2; // eax
  NiRTTI *v3; // eax
  NiRTTI *v5; // eax

  if ( a2 ) /*0x74fb89*/
  {
    if ( a2 == 1 ) /*0x74fbde*/
    {
      if ( a1 ) /*0x74fbe6*/
      {
        v5 = a1->__vftable->GetType(a1); /*0x74fbef*/
        if ( v5 ) /*0x74fbf3*/
        {
          while ( v5 != &stru_B3E7E8 ) /*0x74fbfa*/
          {
            v5 = v5->parent; /*0x74fbfc*/
            if ( !v5 ) /*0x74fc01*/
              goto LABEL_16; /*0x74fc01*/
          }
          return 1; /*0x74fbfa*/
        }
      }
LABEL_16:
      if ( NiRTTI::IsObjectOfRTTIType(&stru_B3EA50, a1) ) /*0x74fc09*/
        return 1; /*0x74fbd7*/
    }
  }
  else if ( a1 ) /*0x74fb91*/
  {
    v2 = a1->__vftable->GetType(a1); /*0x74fb9e*/
    if ( v2 ) /*0x74fba2*/
    {
      while ( v2 != &stru_B3CFBC ) /*0x74fba9*/
      {
        v2 = v2->parent; /*0x74fbab*/
        if ( !v2 ) /*0x74fbb0*/
          goto LABEL_6; /*0x74fbb0*/
      }
      return 1; /*0x74fba9*/
    }
LABEL_6:
    v3 = a1->__vftable->GetType(a1); /*0x74fbb9*/
    if ( v3 ) /*0x74fbbd*/
    {
      while ( v3 != &stru_B3CF5C ) /*0x74fbc5*/
      {
        v3 = v3->parent; /*0x74fbc7*/
        if ( !v3 ) /*0x74fbcc*/
          return 0; /*0x74fbd1*/
      }
      return 1; /*0x74fbc5*/
    }
  }
  return 0; /*0x74fbd0*/
}
