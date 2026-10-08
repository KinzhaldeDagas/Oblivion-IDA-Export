void __stdcall sub_535B10(int a1)
{
  NiObject *v1; // eax
  NiObject *v2; // eax
  NiObject *v3; // esi
  int *v4; // edi
  int *v5; // eax
  int *v6; // eax
  Atmosphere *v7; // eax
  NiAVObject *PointerAtOffset08; // eax

  if ( dword_B36590[2] || dword_B36590[1] ) /*0x535b19*/
  {
    if ( a1 ) /*0x535b2c*/
      v1 = *(NiObject **)(a1 + 0xC); /*0x535b2e*/
    else
      v1 = 0; /*0x535b33*/
    v2 = NiRTTI_Cast((BSStringT *)&stru_BA7D84, v1); /*0x535b3c*/
    v3 = v2; /*0x535b41*/
    if ( v2 ) /*0x535b48*/
    {
      if ( sub_535AC0(v2) > *(float *)&SrcStr && (dword_B36590[2] || dword_B36590[1]) ) /*0x535b6b*/
      {
        v4 = &dword_B36590[1]; /*0x535b75*/
        v5 = &dword_B36590[1]; /*0x535b7a*/
        do /*0x535bd5*/
        {
          if ( !v5[1] && !*v5 ) /*0x535b87*/
            break; /*0x535b89*/
          if ( *v5 && *(NiObject **)*v5 == v3 ) /*0x535b93*/
          {
            BSSimpleList_Remove(&dword_B36590[1], *v5); /*0x535b9b*/
            v6 = (int *)sub_47DE20(v3); /*0x535ba2*/
            v7 = (Atmosphere *)sub_47FA60(v6); /*0x535ba8*/
            if ( v7 ) /*0x535bb2*/
            {
              PointerAtOffset08 = Shared_GetPointerAtOffset08(v7); /*0x535bb6*/
              if ( PointerAtOffset08 ) /*0x535bbd*/
                sub_607E90((int)PointerAtOffset08, 1); /*0x535bc2*/
            }
            v5 = (int *)v4[1]; /*0x535bca*/
          }
          else
          {
            v4 = v5; /*0x535bcf*/
            v5 = (int *)v5[1]; /*0x535bd1*/
          }
        }
        while ( v5 ); /*0x535bd5*/
      }
    }
  }
}
