int __usercall sub_614DB0@<eax>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESSaveLoad *v5; // ecx
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // edx
  unsigned int v9; // esi
  int result; // eax
  size_t v11; // [esp-4h] [ebp-28h]
  size_t v12; // [esp-4h] [ebp-28h]
  int v13; // [esp+4h] [ebp-20h]
  int v14; // [esp+8h] [ebp-1Ch]
  int v15; // [esp+8h] [ebp-1Ch]
  int Dst; // [esp+Ch] [ebp-18h] BYREF
  _DWORD v17[2]; // [esp+10h] [ebp-14h] BYREF
  unsigned int v18; // [esp+20h] [ebp-4h]

  v5 = SaveLoad_CurrentSavegame;
  LODWORD(v11) = 1;
  HIBYTE(Dst) = 0;
  SaveLoad_LoadData((int)v5, (char *)&Dst + 3, v11);
  if ( HIBYTE(Dst) )
  {
    v6 = (_DWORD *)FormHeapAlloc(0xCu);
    v17[1] = v6;
    v18 = 0;
    if ( v6 )
      v7 = sub_4842D0(v6);
    else
      v7 = 0;
    v18 = 0xFFFFFFFF;
    a1[1] = v7;
    ContainerEntryExtraData_LoadModified(v7, a2, a3, a4);
    v9 = a1[1];
    if ( !*(_DWORD *)(v9 + 8) )
    {
      if ( v9 )
      {
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)a1[1], v8);
        FormHeapFree(v9);
      }
      a1[1] = 0;
    }
  }
  LODWORD(v12) = 4;
  result = SaveLoad_LoadFormID(v17, v12, v13, v14, Dst);
  *a1 = v15;
  return result;
}
