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

  v4 = MobileObject_ModifiedFormSize(this, st7_0, a3); /*0x608325*/
  v5 = v4; /*0x608328*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x60832b*/
    v4 += 6; /*0x608334*/
  v6 = *((_DWORD **)this + 0x17); /*0x608337*/
  v7 = g_TESSaveLoadGame; /*0x608345*/
  v8 = v4 + 0x31; /*0x60834b*/
  if ( v6 ) /*0x608350*/
  {
    v8 += 0x28; /*0x608352*/
    if ( LOBYTE(v7[1].createdObjectList.next) >= 0x50u ) /*0x608359*/
      v8 += 0x10; /*0x60835b*/
    if ( *v6 <= 1u ) /*0x608363*/
      v8 += 8; /*0x608369*/
  }
  next = (unsigned __int8)v7[1].createdObjectList.next; /*0x60836c*/
  if ( next >= 0x54u ) /*0x608371*/
    ++v8; /*0x608373*/
  if ( next >= 0x55u ) /*0x608378*/
    ++v8; /*0x60837a*/
  if ( Global_DebugSaveBuffer )
  {
    v10 = (UInt32 *)v7[1].unk030[1]; /*0x608386*/
    if ( v10 )
    {
      v11 = TESForm_LookupByFormID(*v10); /*0x608393*/
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)( /*0x6083b3*/
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
      return v8; /*0x6083d5*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v8 - v5, 0x87A, ".\\AI\\ArrowProjectile.cpp");
  }
  return v8; /*0x6083cf*/
}
