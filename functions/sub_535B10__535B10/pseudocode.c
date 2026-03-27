void __stdcall sub_535B10(int a1)
{
  NiObject *v1; // eax
  NiObject *v2; // eax
  NiObject *v3; // esi
  int *v4; // edi
  int *v5; // eax
  int *v6; // eax
  Atmosphere *v7; // eax
  NiAVObject *v8; // eax

  if ( dword_B36598 || dword_B36594 )
  {
    if ( a1 )
      v1 = *(NiObject **)(a1 + 0xC);
    else
      v1 = 0;
    v2 = NiRTTI_Cast((BSStringT *)dword_BA7D84, v1);
    v3 = v2;
    if ( v2 )
    {
      if ( sub_535AC0(v2) > *(float *)&SrcStr && (dword_B36598 || dword_B36594) )
      {
        v4 = &dword_B36594;
        v5 = &dword_B36594;
        do
        {
          if ( !v5[1] && !*v5 )
            break;
          if ( *v5 && *(NiObject **)*v5 == v3 )
          {
            BSSimpleList_Remove(&dword_B36594, *v5);
            v6 = (int *)sub_47DE20(v3);
            v7 = (Atmosphere *)sub_47FA60(v6);
            if ( v7 )
            {
              v8 = sub_452A60(v7);
              if ( v8 )
                sub_607E90((int)v8, 1);
            }
            v5 = (int *)v4[1];
          }
          else
          {
            v4 = v5;
            v5 = (int *)v5[1];
          }
        }
        while ( v5 );
      }
    }
  }
}
