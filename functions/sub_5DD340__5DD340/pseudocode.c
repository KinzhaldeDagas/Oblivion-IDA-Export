// Native TrainingMenu close routine.
void __usercall TrainingMenu_Close(double a1@<st2>, double a2@<st1>)
{
  int v2; // esi
  TESTopic *v3; // eax
  Unk1C *DialogueInfo; // eax
  Unk1C *v5; // ebx
  char **v6; // edi
  Tile *OpenMenuTile; // eax
  Tile *v8; // esi
  _DWORD *ParentMenu; // edi
  double v10; // st7
  Tile *v11; // eax
  Tile *v12; // esi
  int v13; // edi
  float v14; // [esp+0h] [ebp-1Ch]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x404); /*0x5dd346*/
  v8 = OpenMenuTile; /*0x5dd34b*/
  if ( OpenMenuTile ) /*0x5dd352*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5dd360*/
    if ( ParentMenu ) /*0x5dd364*/
    {
      v10 = fConstant_2; /*0x5dd366*/
      Tile_SetFloat(v8, (_DWORD *)0x1772, fConstant_2); /*0x5dd377*/
      Menu::StartFadeOut(ParentMenu, a2); /*0x5dd37e*/
      sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x5dd38b*/
      v11 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x5dd395*/
      v12 = v11; /*0x5dd39a*/
      if ( v11 ) /*0x5dd3a1*/
      {
        v13 = Tile_GetParentMenu(v11); /*0x5dd3ae*/
        sub_58FBA0((int)v12, a1, a2, v10, 0); /*0x5dd3b0*/
        Tile_SetFloat(v12, (_DWORD *)0xFA1, fConstant_2); /*0x5dd3c6*/
        *(_BYTE *)(v13 + 0x96) = 1; /*0x5dd3cb*/
        v2 = v13; /*0x59e107*/
        v3 = (TESTopic *)TESTopic::GetTopic(5, 0xD); /*0x59e109*/
        DialogueInfo = TESTopic::CreateDialogueItem(v3, *(Actor **)(v13 + 0x60), (TESObjectREFR *)reference, 0, 0); /*0x59e122*/
        v5 = DialogueInfo; /*0x59e127*/
        if ( DialogueInfo ) /*0x59e12b*/
        {
          if ( DialogueItem::FirstResponse(DialogueInfo) ) /*0x59e133*/
          {
            v6 = (char **)DialogueListCursor::GetCurrent(v5); /*0x59e149*/
            (*(void (__cdecl **)(_DWORD, char **))(**(_DWORD **)(v2 + 0x60) + 0x304))(0.0, v6); /*0x59e158*/
            *(float *)(v2 + 0x84) = fConstant_2; /*0x59e162*/
            *(_DWORD *)(v2 + 0x80) = 2; /*0x59e168*/
            v14 = (float)((byte_B13200 != 0) + 1); /*0x59e18a*/
            Tile_SetFloat(*(Tile **)(v2 + 0x2C), (_DWORD *)0xFA1, v14); /*0x59e192*/
            Tile_SetString(*(_DWORD **)(v2 + 0x2C), (_DWORD *)0xFDE, *v6); /*0x59e1a2*/
            Tile_SetFloat(*(Tile **)(v2 + 0x3C), (_DWORD *)0xFA1, 1.0); /*0x59e1b5*/
          }
          DialogueItem::Destroy((BSSimpleList_VoidPtr *)v5); /*0x59e1bd*/
          FormHeapFree((unsigned int)v5); /*0x59e1c3*/
        }
      }
    }
  }
}
