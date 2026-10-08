int __usercall sub_614DB0@<eax>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESSaveLoadGame_SerializationView *v5; // ecx
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // edx
  unsigned int v9; // esi
  int result; // eax
  int v11; // [esp+8h] [ebp-1Ch]
  int Dst; // [esp+Ch] [ebp-18h] BYREF
  unsigned int destination[2]; // [esp+10h] [ebp-14h] BYREF
  unsigned int v14; // [esp+20h] [ebp-4h]

  v5 = g_TESSaveLoadGame; /*0x614dd7*/
  HIBYTE(Dst) = 0; /*0x614de4*/
  SaveLoad_LoadData(v5, (char *)&Dst + 3, 1u); /*0x614de9*/
  if ( HIBYTE(Dst) ) /*0x614df3*/
  {
    v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x614df7*/
    destination[1] = (unsigned int)v6; /*0x614dff*/
    v14 = 0; /*0x614e05*/
    if ( v6 ) /*0x614e0d*/
      v7 = sub_4842D0(v6); /*0x614e11*/
    else
      v7 = 0; /*0x614e18*/
    v14 = 0xFFFFFFFF; /*0x614e1c*/
    a1[1] = v7; /*0x614e24*/
    ContainerEntryExtraData_LoadModified(v7, a2, a3, a4); /*0x614e27*/
    v9 = a1[1]; /*0x614e2c*/
    if ( !*(_DWORD *)(v9 + 8) ) /*0x614e2f*/
    {
      if ( v9 ) /*0x614e37*/
      {
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)a1[1], v8); /*0x614e3b*/
        FormHeapFree(v9); /*0x614e41*/
      }
      a1[1] = 0; /*0x614e49*/
    }
  }
  LOBYTE(result) = SaveLoad_LoadFormID(g_TESSaveLoadGame, destination, 4u); /*0x614e5d*/
  *a1 = v11; /*0x614e66*/
  return result; /*0x614e68*/
}
