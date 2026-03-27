char __userpurge sub_4B28E0@<al>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        int a5,
        void *a6,
        int a7,
        int a8,
        int a9)
{
  PlayerCharacter *v10; // edi
  signed __int16 ExtraCount; // ax
  bool v12; // zf

  v10 = (PlayerCharacter *)OblivionDynamicCast(
                             a6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  if ( !v10 || !a5 )
    return 0;
  ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)(a5 + 0x44));
  v12 = *(_BYTE *)(a1 + 4) == 0x19;
  a6 = (void *)ExtraCount;
  if ( v12 && v10 == TESDataHandler_g_PlayerRef && ExtraCount > 1 )
    return sub_5C05D0(a2, (char)v10, a3, a4, (int)&a6, 0xFFFFFFFF, 0, ExtraCount, a5);
  ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, int))v10->vtbl->super.Unk_B3)(v10, a5, ExtraCount, a7);
  return 1;
}
