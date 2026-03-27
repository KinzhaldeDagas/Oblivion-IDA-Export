unsigned __int16 __usercall sub_6176C0@<ax>(_DWORD *this@<ecx>, double a2@<st0>)
{
  unsigned __int16 v3; // si
  unsigned __int16 v4; // bx
  unsigned __int8 next; // dl
  _DWORD *v6; // eax
  __int16 j; // cx
  __int16 v8; // si
  _DWORD *v9; // eax
  __int16 i; // cx
  unsigned __int16 v11; // si
  __int16 v12; // si
  __int16 v13; // si
  __int16 v14; // si
  int v15; // eax
  int *v16; // ecx
  __int16 v17; // dx
  int v18; // eax
  __int16 v19; // si
  int *v20; // eax
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // si
  int *v24; // eax
  __int16 v25; // cx
  int v26; // eax
  __int16 v27; // si
  int *v28; // eax
  __int16 v29; // cx
  int v30; // eax
  unsigned __int16 v31; // si
  int *v32; // eax
  __int16 v33; // cx
  unsigned __int16 v34; // di
  UInt32 *v35; // esi
  TESForm *v36; // eax
  const char *v37; // eax
  int v39; // [esp-Ch] [ebp-1Ch]
  int v40; // [esp-8h] [ebp-18h]
  const char *v41; // [esp-4h] [ebp-14h]
  unsigned __int16 v42; // [esp+Ch] [ebp-4h]

  v3 = sub_567D20(this);
  v4 = v3;
  if ( sub_45A170() )
    v3 += 6;
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( next < 0x29u )
  {
    v9 = (_DWORD *)*(this + 0x10);
    for ( i = 0; v9; v9 = (_DWORD *)v9[1] )
    {
      if ( *v9 )
        ++i;
    }
    v8 = i + v3 + 8 * i + 2;
  }
  else
  {
    v6 = (_DWORD *)*(this + 0x10);
    for ( j = 0; v6; v6 = (_DWORD *)v6[1] )
    {
      if ( *v6 )
        ++j;
    }
    v8 = v3 + 0x10 * j + j + 2;
  }
  v11 = v8 + 0x7F;
  v42 = v11;
  if ( next >= 0x3Au )
  {
    v11 += 4;
    v42 = v11;
  }
  if ( next >= 0x3Du )
    v42 = v11 + 1;
  if ( next >= 0x5Fu )
  {
    v12 = sub_614BE0(a2, (int *)*(this + 0x17)) + v42;
    v13 = sub_614BE0(a2, (int *)*(this + 0x18)) + v12;
    v14 = sub_614BE0(a2, (int *)*(this + 0x19)) + 0x15 + v13;
    v15 = *(this + 0x24);
    if ( v15 )
    {
      v16 = *(int **)(v15 + 4);
      v17 = 1;
      if ( v16 )
        v17 = sub_485660(v16, a2) + 1;
      v14 += v17 + 4;
    }
    v18 = *(this + 0x25);
    v19 = v14 + 1;
    if ( v18 )
    {
      v20 = *(int **)(v18 + 4);
      v21 = 1;
      if ( v20 )
        v21 = sub_485660(v20, a2) + 1;
      v19 += v21 + 4;
    }
    v22 = *(this + 0x26);
    v23 = v19 + 1;
    if ( v22 )
    {
      v24 = *(int **)(v22 + 4);
      v25 = 1;
      if ( v24 )
        v25 = sub_485660(v24, a2) + 1;
      v23 += v25 + 4;
    }
    v26 = *(this + 0x27);
    v27 = v23 + 1;
    if ( v26 )
    {
      v28 = *(int **)(v26 + 4);
      v29 = 1;
      if ( v28 )
        v29 = sub_485660(v28, a2) + 1;
      v27 += v29 + 4;
    }
    v30 = *(this + 0x28);
    v31 = v27 + 1;
    v42 = v31;
    if ( v30 )
    {
      v32 = *(int **)(v30 + 4);
      v33 = 1;
      if ( v32 )
        v33 = sub_485660(v32, a2) + 1;
      v42 = v31 + v33 + 4;
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x66u )
    v34 = v42;
  else
    v34 = sub_614BE0(a2, (int *)*(this + 0x1A)) + v42;
  if ( Global_DebugSaveBuffer )
  {
    v35 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v35 )
    {
      v36 = TESForm_LookupByFormID(*v35);
      v37 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v36->vtbl->GetEditorName)(
                            v36,
                            *(UInt32 *)((char *)v35 + 5),
                            0x2844,
                            ".\\AI\\CombatController.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v34 - v4,
        *v35,
        v37,
        v39,
        v40,
        v41);
      return v34;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v34 - v4, 0x2844, ".\\AI\\CombatController.cpp");
  }
  return v34;
}
