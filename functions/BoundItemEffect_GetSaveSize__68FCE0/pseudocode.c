unsigned __int16 __userpurge BoundItemEffect_GetSaveSize@<ax>(int a1@<ecx>, double a2@<st0>, int a3)
{
  unsigned __int16 SaveSize; // di
  unsigned __int16 v5; // bx
  int *v6; // ecx
  int **v7; // esi
  int v8; // edi
  UInt32 *v9; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  unsigned __int8 next; // al
  int v14; // [esp-Ch] [ebp-18h]
  int v15; // [esp-8h] [ebp-14h]
  const char *v16; // [esp-4h] [ebp-10h]
  unsigned __int16 v17; // [esp+10h] [ebp+4h]

  SaveSize = AssociatedItemEffect_GetSaveSize(a3);
  v5 = SaveSize;
  if ( sub_45A170() )
    SaveSize += 6;
  v6 = *(int **)(a1 + 0x3C);
  v17 = SaveSize + 1;
  if ( v6 )
    v17 += sub_485660(v6, a2);
  v7 = (int **)(a1 + 0x40);
  v8 = 0x10;
  do
  {
    ++v17;
    if ( *v7 )
      v17 += sub_485660(*v7, a2);
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( Global_DebugSaveBuffer )
  {
    v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v9 )
    {
      v10 = TESForm_LookupByFormID(*v9);
      v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)(
                            v10,
                            *(UInt32 *)((char *)v9 + 5),
                            0x2A5,
                            ".\\Magic\\BoundItemEffect.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v17 - v5,
        *v9,
        v11,
        v14,
        v15,
        v16);
    }
    else
    {
      sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v17 - v5, 0x2A5, ".\\Magic\\BoundItemEffect.cpp");
    }
  }
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( next >= 0x41u )
    v17 += 5;
  if ( next >= 0x6Bu )
    ++v17;
  return v17;
}
