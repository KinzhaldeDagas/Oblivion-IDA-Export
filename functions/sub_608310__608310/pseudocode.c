unsigned __int16 __userpurge sub_608310@<ax>(TESObjectREFR *this@<ecx>, double st7_0@<st0>, int a3)
{
  __int16 v4; // si
  unsigned __int16 v5; // bx
  _DWORD *v6; // edi
  TESSaveLoad *v7; // ecx
  unsigned __int16 v8; // si
  unsigned __int8 next; // al
  UInt32 *v10; // edi
  TESForm *v11; // eax
  const char *v12; // eax
  int v14; // [esp-Ch] [ebp-18h]
  int v15; // [esp-8h] [ebp-14h]
  const char *v16; // [esp-4h] [ebp-10h]

  v4 = MobileObject_ModifiedFormSize(this, st7_0, a3);
  v5 = v4;
  if ( sub_45A170() )
    v4 += 6;
  v6 = *((_DWORD **)this + 0x17);
  v7 = SaveLoad_CurrentSavegame;
  v8 = v4 + 0x31;
  if ( v6 )
  {
    v8 += 0x28;
    if ( LOBYTE(v7[1].createdObjectList.next) >= 0x50u )
      v8 += 0x10;
    if ( *v6 <= 1u )
      v8 += 8;
  }
  next = (unsigned __int8)v7[1].createdObjectList.next;
  if ( next >= 0x54u )
    ++v8;
  if ( next >= 0x55u )
    ++v8;
  if ( Global_DebugSaveBuffer )
  {
    v10 = (UInt32 *)v7[1].unk030[1];
    if ( v10 )
    {
      v11 = TESForm_LookupByFormID(*v10);
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)(
                            v11,
                            *(UInt32 *)((char *)v10 + 5),
                            0x87A,
                            ".\\AI\\ArrowProjectile.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v8 - v5,
        *v10,
        v12,
        v14,
        v15,
        v16);
      return v8;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v8 - v5, 0x87A, ".\\AI\\ArrowProjectile.cpp");
  }
  return v8;
}
