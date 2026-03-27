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

  v12 = sub_4D58B0(a1);
  sub_4CB8C0(a1, st5_0, st6_0, a3, 0, 0);
  v13 = sub_4CFAF0((ExtraDataList *)a1, a3, st6_0, st5_0, a5, a6, a7, a8, a9);
  if ( a1
    && ((v14 = TES, (a1->members.flags0 & 1) == 0)
      ? (IsInteriorCellPreloaded = sub_43FEA0(v14, (int)a1))
      : (IsInteriorCellPreloaded = TES::IsInteriorCellPreloaded(v14, a1)),
        IsInteriorCellPreloaded) )
  {
    if ( v12 )
    {
      v13 = 0.0;
      NiAVObject_UpdateNiAVObject(v12, 0.0, 0);
    }
    sub_4CB790((int)a1, v13, st5_0, st6_0, a10);
  }
  else
  {
    sub_496EA0((char *)&stru_B35C80, a1);
    p_objectList = (int *)&a1->members.objectList;
    v21 = sub_440C80(TES, a1, 0);
    if ( a1 != (TESObjectCELL *)0xFFFFFFB8 )
    {
      do
      {
        v17 = *p_objectList;
        v18 = *p_objectList == 0;
        p_objectList = (int *)p_objectList[1];
        if ( !v18 )
        {
          if ( !sub_45A500(SaveLoad_CurrentSavegame) )
          {
            sub_4F9EC0(v13, st5_0, st6_0, v17, (_BYTE *)(v17 + 0x44));
            v13 = Script_AddEventToExtraScript(v17, v17 + 0x44, 0x1000);
          }
          v19 = *(_DWORD *)(v17 + 8);
          if ( (v19 & 0x800) == 0 && (v19 & 0x20) == 0 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x190))(v17) )
            {
              if ( !sub_45A500(SaveLoad_CurrentSavegame) || (SaveLoad_CurrentSavegame->flags & 0x10) != 0 )
              {
                v20 = (TESForm *)OblivionDynamicCast(
                                   (void *)v17,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
                if ( v20 )
                {
                  v20->vtbl[1].Unk_32(v20);
                  sub_674E10(&ActorProcessManager_ptr, v20);
                }
              }
            }
            sub_438060((_DWORD **)ModelLoaderPtr, (char)p_objectList, st5_0, st6_0, v13, (TESObjectREFR *)v17, v21);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x154))(v17) )
              TESObjectCELL::AttachReference3DToQuad(a1, (TESObjectREFR *)v17);
          }
        }
      }
      while ( p_objectList );
    }
    sub_496F50(&stru_B35C80, a1);
  }
  if ( a11 )
    sub_4D4D00((ExtraDataList *)a1);
  a1->members.cellProcessLevel = 6;
}
