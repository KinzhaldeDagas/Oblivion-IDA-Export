void __userpurge sub_5D9890(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double Float@<st0>,
        signed int a5,
        _DWORD *a6)
{
  int *v7; // edi
  int v8; // edi
  TESForm::ModReferenceList *v9; // eax
  const char *v10; // eax
  int *v11; // [esp+8h] [ebp-13Ch]
  int v12; // [esp+Ch] [ebp-138h]
  TESForm::ModReferenceList *p_modlist; // [esp+10h] [ebp-134h]
  char v14[300]; // [esp+14h] [ebp-130h] BYREF

  if ( a5 == 2 )
  {
    BSSimpleList_Clear((_DWORD *)(a1 + 0x60));
    sub_5D8980(a2, a3);
  }
  else if ( a5 == 6 )
  {
    sub_5BD080(a2, a3, Float, &TESDataHandler_g_PlayerRef->unk11C, *(TESChildCELL **)(a1 + 0x50), 1);
    (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, 6, a6);
  }
  else if ( (unsigned int)(a5 - 9) > 2 )
  {
    if ( a5 >= 0x3E8 )
    {
      v7 = (int *)(a1 + 0x60);
      v12 = 0x3E8;
      v11 = (int *)(a1 + 0x60);
      p_modlist = &Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0)[3].member.modlist;
      if ( a1 != 0xFFFFFFA0 )
      {
        while ( 1 )
        {
          v8 = *v7;
          if ( !v8 )
            break;
          if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(v8 + 0x18) + 0x18))(v8 + 0x18) )
          {
            v9 = p_modlist;
            if ( p_modlist )
            {
              while ( v9->data != (Data *)v8 )
              {
                v9 = v9->next;
                if ( !v9 )
                  goto LABEL_19;
              }
            }
            else
            {
LABEL_19:
              if ( v12 == a5 )
              {
                Tile_GetFloat(a6, 0xFB7);
                *(_DWORD *)(a1 + 0x58) = Double_To_SInt32(Float);
                if ( sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) < *(_DWORD *)(a1 + 0x58) )
                {
                  ShowUIMessageBox(
                    (char *)sOk,
                    (char)a6,
                    a2,
                    a3,
                    Float,
                    (const char *)sNotEnoughGold,
                    0,
                    1,
                    (const char *)sOk,
                    0);
                  *(_DWORD *)(a1 + 0x54) = 0;
                  *(_DWORD *)(a1 + 0x58) = 0;
                }
                else
                {
                  Float = Tile_GetFloat(a6, 0xFAA);
                  *(_DWORD *)(a1 + 0x4C) = Double_To_SInt32(Float);
                  *(_DWORD *)(a1 + 0x54) = v8;
                  v10 = *(const char **)(v8 + 0x1C);
                  if ( !v10 )
                    v10 = EmptyString;
                  _sprintf(
                    v14,
                    "%s %s %s %d %s?",
                    (const char *)dword_B38A00,
                    v10,
                    (const char *)dword_B38D10,
                    *(_DWORD *)(a1 + 0x58),
                    (const char *)dword_B38D20);
                  ShowUIMessageBox(
                    (char *)MessageButtonTextNo,
                    (char)a6,
                    a2,
                    a3,
                    Float,
                    v14,
                    (int)SpellPurchaseCallback,
                    1,
                    (const char *)MessageButtonTextYes,
                    MessageButtonTextNo);
                }
                (*(void (__thiscall **)(int, signed int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a5, a6);
              }
              ++v12;
            }
          }
          v11 = (int *)v11[1];
          if ( !v11 )
            break;
          v7 = v11;
        }
      }
    }
  }
  else
  {
    if ( (byte_B3B734 & 0x7F) == a5 - 9 )
    {
      sub_597A60(&byte_B3B734);
    }
    else
    {
      sub_597A40(&byte_B3B734, a5 - 9);
      byte_B3B734 &= ~0x80u;
    }
    SpellPurchaseMenu_Update(a1, a2, a3, Float);
  }
}
