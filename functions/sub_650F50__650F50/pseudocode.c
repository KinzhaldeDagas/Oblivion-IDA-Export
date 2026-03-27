unsigned __int16 __userpurge sub_650F50@<ax>(char *this@<ecx>, double st7_0@<st0>, int a3, void *a4)
{
  __int16 v7; // di
  unsigned __int8 next; // al
  __int16 v9; // di
  __int16 AEListSaveSize; // ax
  unsigned __int8 v11; // dl
  char *v12; // eax
  __int16 v13; // cx
  UInt32 *v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  int v18; // [esp-Ch] [ebp-20h]
  int v19; // [esp-8h] [ebp-1Ch]
  const char *v20; // [esp-4h] [ebp-18h]
  void *v21; // [esp+10h] [ebp-4h]
  unsigned __int16 v22; // [esp+18h] [ebp+4h]
  __int16 v23; // [esp+1Ch] [ebp+8h]
  unsigned __int16 v24; // [esp+1Ch] [ebp+8h]

  v21 = OblivionDynamicCast(
          a4,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  v7 = sub_658BC0(this, st7_0, a3, (int)a4);
  v22 = v7;
  if ( sub_45A170() )
    v7 += 6;
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  v9 = v7 + 2;
  if ( next >= 0x34u )
    v9 += 5;
  if ( next >= 0x4Du )
    v9 += 4;
  if ( (a3 & 0x80000) != 0 )
  {
    v9 += 4;
    if ( *((_DWORD *)this + 0x30) )
      v9 += (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x30) + 0xDC))(*((_DWORD *)this + 0x30)) + 5;
  }
  v23 = v9 + 0x33;
  if ( (a3 & 0x2000000) != 0 )
    v23 += sub_473BF0((int)a4, *((_DWORD **)this + 0x5F));
  AEListSaveSize = ActiveEffect_Base_GetAEListSaveSize_(*((_DWORD **)this + 0x5D), (int)v21);
  v11 = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  v24 = AEListSaveSize + 8 + v23;
  if ( v11 >= 0x45u )
    ++v24;
  if ( v11 >= 0x49u )
    v24 += 2;
  if ( v11 >= 0x65u )
  {
    v12 = this + 0xA8;
    v13 = 0;
    if ( this != (char *)0xFFFFFF58 )
    {
      do
      {
        if ( *(_DWORD *)v12 )
          ++v13;
        v12 = *((char **)v12 + 1);
      }
      while ( v12 );
    }
    v24 += 0xA + 4 * v13;
  }
  if ( v11 >= 0x6Du )
    ++v24;
  if ( v11 >= 0x71u )
    v24 += 4;
  if ( !Global_DebugSaveBuffer )
    return v24;
  v14 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
  if ( v14 )
  {
    v15 = TESForm_LookupByFormID(*v14);
    v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)(
                          v15,
                          *(UInt32 *)((char *)v14 + 5),
                          0x19AB,
                          ".\\AI\\MiddleHighProcess.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v24 - v22,
      *v14,
      v16,
      v18,
      v19,
      v20);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v24 - v22, 0x19AB, ".\\AI\\MiddleHighProcess.cpp");
  }
  return v24;
}
