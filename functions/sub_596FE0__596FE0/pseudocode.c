void __userpurge ClassMenu_HandleButton(
        TESChildCELL **a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        Tile *a6)
{
  CHAR *vtbl; // esi
  const char *v8; // eax
  char v9; // al
  bool v10; // zf
  char *m_data; // esi
  TESChildCELL *v12; // ebx
  BSStringT v13; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+24h] [ebp-4h]

  switch ( a5 ) /*0x59700f*/
  {
    case 4: /*0x59700f*/
      v13.m_data = 0; /*0x597015*/
      v13.m_dataLen = 0; /*0x59701d*/
      v13.m_bufLen = 0; /*0x597024*/
      vtbl = (CHAR *)a1[0xF][7].vtbl; /*0x597031*/
      v14 = 0; /*0x597036*/
      if ( !vtbl ) /*0x59703e*/
        vtbl = EmptyString; /*0x597040*/
      v8 = 0; /*0x597045*/
      if ( vtbl ) /*0x597049*/
      {
        v9 = *vtbl; /*0x59704b*/
        if ( *vtbl == 0x61 /*0x597078*/
          || v9 == 0x65
          || v9 == 0x69
          || v9 == 0x6F
          || v9 == 0x75
          || v9 == 0x41
          || v9 == 0x45
          || v9 == 0x49
          || v9 == 0x4F
          || (v10 = v9 == 0x55, v8 = *(const char **)stru_B38660, v10) )
        {
          v8 = (const char *)stru_B38668; /*0x59707a*/
        }
      }
      BSStringT_Static_Format(&v13, "%s %s?", v8, vtbl); /*0x59708b*/
      m_data = v13.m_data; /*0x59709c*/
      ShowUIMessageBox( /*0x5970ac*/
        (char *)MEMORY[0xB38CF8],
        a2,
        a3,
        a4,
        v13.m_data,
        (int)ClassMenu_ApplyChosenClass,
        1,
        (char *)MEMORY[0xB38D00],
        MEMORY[0xB38CF8]);
      FormHeapFree((unsigned int)m_data); /*0x5970b2*/
      break;
    case 0x63: /*0x59700f*/
      Tile_SetFloat(a6, (_DWORD *)0xFB0, fConstant_2); /*0x5970e9*/
      v12 = (TESChildCELL *)sub_596BC0(a6); /*0x5970f6*/
      if ( v12 ) /*0x5970fa*/
      {
        sub_57DE50(0xB); /*0x5970fe*/
        Tile_GetFloat(a6, 0xFAA); /*0x59710d*/
        a1[0x11] = (TESChildCELL *)Double_To_SInt32(a4); /*0x59711b*/
        a1[0xF] = v12; /*0x59711e*/
        ClassMenu_RefreshClassDetails(a1, 0);   // Morrowind Leveling hook: refresh extended ClassMenu minor skill traits after vanilla class display update. /*0x597121*/
      }
      break;
    case 5: /*0x59700f*/
      sub_57DE50(1); /*0x597142*/
      a1[0x16] = (TESChildCELL *)1; /*0x59714c*/
      Menu::StartFadeOut(a1, a3);               // ClassMenu button 5 overall-cancel path: request native menu close. Eventual deletion dispatches through ClassMenu::~ClassMenu at 0x596C70. /*0x597153*/
      break;
  }
}
