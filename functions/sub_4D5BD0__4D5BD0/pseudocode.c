void __userpurge sub_4D5BD0(
        TESObjectCELL *a1@<ecx>,
        double st6_0@<st1>,
        double a3@<st0>,
        double st5_0@<st2>,
        double a5@<st3>,
        double a6@<st4>,
        double a7@<st5>,
        double a8@<st6>,
        double a9@<st7>,
        char a10@<bpl>,
        char a11)
{
  NiAVObject *v12; // esi
  double v13; // st7
  TES *v14; // ecx
  char IsInteriorCellPreloaded; // al
  int *p_objectList; // ebp
  int v17; // esi
  bool v18; // zf
  int v19; // eax
  TESForm *v20; // edi
  signed int v21; // [esp+10h] [ebp-4h]

  v12 = (NiAVObject *)sub_4D58B0(a1); /*0x4d5be0*/
  sub_4CB8C0(a1, st5_0, st6_0, a3, 0, 0); /*0x4d5be2*/
  v13 = sub_4CFAF0((ExtraDataList *)a1, a3, st6_0, st5_0, a5, a6, a7, a8, a9); /*0x4d5be9*/
  if ( a1
    && ((v14 = MEMORY[0xB333A0], (a1->members.flags0 & 1) == 0)
      ? (IsInteriorCellPreloaded = sub_43FEA0(v14, (int)a1))
      : (IsInteriorCellPreloaded = TES::IsInteriorCellPreloaded(v14, a1)),
        IsInteriorCellPreloaded) )
  {
    if ( v12 ) /*0x4d5c11*/
    {
      v13 = 0.0; /*0x4d5c13*/
      NiAVObject_UpdateNiAVObject(v12, 0.0, 0); /*0x4d5c1d*/
    }
    sub_4CB790((int)a1, v13, st5_0, st6_0, a10); /*0x4d5c24*/
  }
  else
  {
    sub_496EA0((char *)&unk_B35C80, a1); /*0x4d5c35*/
    p_objectList = (int *)&a1->members.objectList; /*0x4d5c48*/
    v21 = sub_440C80(MEMORY[0xB333A0], a1, 0); /*0x4d5c4d*/
    if ( a1 != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4d5c51*/
    {
      do /*0x4d5d39*/
      {
        v17 = *p_objectList; /*0x4d5c58*/
        v18 = *p_objectList == 0; /*0x4d5c5b*/
        p_objectList = (int *)p_objectList[1]; /*0x4d5c5d*/
        if ( !v18 ) /*0x4d5c60*/
        {
          if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x4d5c6c*/
          {
            sub_4F9EC0(v13, st5_0, st6_0, v17, (ExtraDataList *)(v17 + 0x44)); /*0x4d5c7a*/
            v13 = Script_AddEventToExtraScript(v17, v17 + 0x44, 0x1000); /*0x4d5c86*/
          }
          v19 = *(_DWORD *)(v17 + 8); /*0x4d5c8e*/
          if ( (v19 & 0x800) == 0 && (v19 & 0x20) == 0 ) /*0x4d5ca4*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x190))(v17) ) /*0x4d5cb4*/
            {
              if ( !sub_45A500(g_TESSaveLoadGame) || (g_TESSaveLoadGame->flags & 0x10) != 0 ) /*0x4d5cd8*/
              {
                v20 = (TESForm *)OblivionDynamicCast( /*0x4d5cee*/
                                   (void *)v17,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
                if ( v20 ) /*0x4d5cf5*/
                {
                  v20->vtbl[1].Unk_32(v20); /*0x4d5d01*/
                  sub_674E10((int *)&qword_B3BB2C[0x75], v20); /*0x4d5d09*/
                }
              }
            }
            sub_438060((_DWORD **)MEMORY[0xB33A1C], (char)p_objectList, st5_0, st6_0, v13, (TESObjectREFR *)v17, v21); /*0x4d5d1a*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x154))(v17) ) /*0x4d5d29*/
              TESObjectCELL::AttachReference3DToQuad(a1, (TESObjectREFR *)v17); /*0x4d5d32*/
          }
        }
      }
      while ( p_objectList ); /*0x4d5d39*/
    }
    sub_496F50(&unk_B35C80, a1); /*0x4d5d46*/
  }
  if ( a11 ) /*0x4d5d51*/
    sub_4D4D00((ExtraDataList *)a1); /*0x4d5d55*/
  a1->members.cellProcessLevel = 6; /*0x4d5d5b*/
}
