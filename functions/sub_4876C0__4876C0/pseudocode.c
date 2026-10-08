void __thiscall sub_4876C0(ExtraDataList *****this, int a2)
{
  ExtraDataList ****v2; // ebp
  ExtraDataList ***v3; // ebx
  ExtraDataList **v4; // edi
  ExtraDataList *v5; // esi
  ExtraDataList **i; // [esp+24h] [ebp-8h]

  v2 = *this; /*0x4876c4*/
  while ( v2 ) /*0x4876c4*/
  {
    if ( !v2[1] && !*v2 ) /*0x4876d7*/
      break; /*0x4876db*/
    v3 = *v2; /*0x4876dd*/
    if ( *v2 ) /*0x4876dd*/
    {
      if ( (int)v3[1] > 0 ) /*0x4876e8*/
      {
        v4 = *v3; /*0x4876ea*/
        for ( i = v3[2]; v4; v4 = (ExtraDataList **)v4[1] ) /*0x4876ea*/
        {
          v5 = *v4; /*0x4876f7*/
          if ( !*v4 ) /*0x4876f7*/
            break; /*0x4876f7*/
          if ( sub_41DF50(*v4) ) /*0x4876ff*/
          {
            ExtraDataList_SetCannotWear(v5, 0); /*0x487724*/
            (*(void (__thiscall **)(int, ExtraDataList **, ExtraDataList *, ExtraDataList **, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 0x100))( /*0x48774d*/
              a2,
              i,
              v5,
              v3[1],
              0,
              0,
              0,
              0,
              0,
              1,
              0);
            v2 = *this; /*0x487753*/
            goto LABEL_11; /*0x487755*/
          }
        }
      }
    }
    v2 = (ExtraDataList ****)v2[1]; /*0x48770f*/
LABEL_11:
    ;
  }
}
