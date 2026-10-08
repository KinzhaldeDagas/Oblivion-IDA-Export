void __userpurge sub_5D9890(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double Float@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        signed int a9,
        _DWORD *a10)
{
  int *v11; // edi
  int v12; // edi
  TESForm::ModReferenceList *v13; // eax
  const char *v14; // eax
  int *v15; // [esp+8h] [ebp-13Ch]
  int v16; // [esp+Ch] [ebp-138h]
  TESForm::ModReferenceList *p_modlist; // [esp+10h] [ebp-134h]
  char v18[300]; // [esp+14h] [ebp-130h] BYREF

  if ( a9 == 2 ) /*0x5d98b9*/
  {
    BSSimpleList_Clear((_DWORD *)(a1 + 0x60)); /*0x5d98be*/
    sub_5D8980(a2, a3, a5, a6, a7, a8, Float); /*0x5d98c3*/
  }
  else if ( a9 == 6 ) /*0x5d98d0*/
  {
    sub_5BD080(a2, a3, Float, &reference->unk11C, *(TESChildCELL **)(a1 + 0x50), 1); /*0x5d98e5*/
    (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, 6, a10); /*0x5d98f7*/
  }
  else if ( (unsigned int)(a9 - 9) > 2 ) /*0x5d9904*/
  {
    if ( a9 >= 0x3E8 ) /*0x5d994b*/
    {
      v11 = (int *)(a1 + 0x60); /*0x5d9958*/
      v16 = 0x3E8; /*0x5d995d*/
      v15 = (int *)(a1 + 0x60); /*0x5d9965*/
      p_modlist = &Actor_GetActorBaseForm((Actor *)reference, 0)[3].member.modlist; /*0x5d9973*/
      if ( a1 != 0xFFFFFFA0 ) /*0x5d9977*/
      {
        while ( 1 ) /*0x5d9984*/
        {
          v12 = *v11; /*0x5d9984*/
          if ( !v12 ) /*0x5d9988*/
            break; /*0x5d9988*/
          if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(v12 + 0x18) + 0x18))(v12 + 0x18) ) /*0x5d9999*/
          {
            v13 = p_modlist; /*0x5d99a3*/
            if ( p_modlist ) /*0x5d99a9*/
            {
              while ( v13->data != (Data *)v12 ) /*0x5d99b2*/
              {
                v13 = v13->next; /*0x5d99b8*/
                if ( !v13 ) /*0x5d99bd*/
                  goto LABEL_19; /*0x5d99bd*/
              }
            }
            else
            {
LABEL_19:
              if ( v16 == a9 ) /*0x5d99ca*/
              {
                Tile_GetFloat(a10, 0xFB7); /*0x5d99d7*/
                *(_DWORD *)(a1 + 0x58) = Double_To_SInt32(Float); /*0x5d99e1*/
                if ( sub_5E4420((Actor *)reference) < *(_DWORD *)(a1 + 0x58) ) /*0x5d99f2*/
                {
                  ShowUIMessageBox( /*0x5d9a7a*/
                    (char *)MEMORY[0xB38CF0].value,
                    a2,
                    a3,
                    Float,
                    (char *)MEMORY[0xB38DB0].value,
                    0,
                    1,
                    (char *)MEMORY[0xB38CF0].value,
                    0);
                  *(_DWORD *)(a1 + 0x54) = 0; /*0x5d9a82*/
                  *(_DWORD *)(a1 + 0x58) = 0; /*0x5d9a85*/
                }
                else
                {
                  Float = Tile_GetFloat(a10, 0xFAA); /*0x5d99fb*/
                  *(_DWORD *)(a1 + 0x4C) = Double_To_SInt32(Float); /*0x5d9a05*/
                  *(_DWORD *)(a1 + 0x54) = v12; /*0x5d9a08*/
                  v14 = *(const char **)(v12 + 0x1C); /*0x5d9a0b*/
                  if ( !v14 ) /*0x5d9a1c*/
                    v14 = EmptyString; /*0x5d9a1e*/
                  _sprintf( /*0x5d9a3b*/
                    v18,
                    "%s %s %s %d %s?",
                    stru_B38A00.value,
                    v14,
                    stru_B38D10.value,
                    *(_DWORD *)(a1 + 0x58),
                    stru_B38D20.value);
                  ShowUIMessageBox( /*0x5d9a5c*/
                    (char *)MEMORY[0xB38D00].value,
                    a2,
                    a3,
                    Float,
                    v18,
                    (int)SpellPurchaseCallback,
                    1,
                    (char *)MEMORY[0xB38CF8].value,
                    (char)MEMORY[0xB38D00].value);
                }
                (*(void (__thiscall **)(int, signed int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a9, a10); /*0x5d9a98*/
              }
              ++v16; /*0x5d9a9a*/
            }
          }
          v15 = (int *)v15[1]; /*0x5d9aa8*/
          if ( !v15 ) /*0x5d9aac*/
            break; /*0x5d9aac*/
          v11 = v15; /*0x5d9980*/
        }
      }
    }
  }
  else
  {
    if ( (byte_B3B734[0] & 0x7F) == a9 - 9 ) /*0x5d991a*/
    {
      sub_597A60(byte_B3B734); /*0x5d991c*/
    }
    else
    {
      sub_597A40(byte_B3B734, a9 - 9); /*0x5d992e*/
      byte_B3B734[0] &= ~0x80u; /*0x5d9933*/
    }
    SpellPurchaseMenu_Update(a1); /*0x5d9923*/
  }
}
