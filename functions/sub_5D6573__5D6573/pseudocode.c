// Populates all 21 native skill rows, sorted by actor-value name. When invoked from ClassMenu, preselection is delegated to SkillsMenu_PreselectClassMenuValues.
// positive sp value has been detected, the output may be wrong!
int __usercall SkillsMenu_PopulateSkillRows@<eax>(
        Tile *a1@<ebx>,
        BSStringT *a2@<ebp>,
        _DWORD *a3@<esi>,
        double a4@<st1>,
        double a5@<st0>)
{
  double v5; // st5
  int i; // edi
  int AVFromGroupOffset; // eax
  unsigned int *v8; // ebx
  unsigned int v9; // edi
  char *Name; // eax
  BSStringT *SkillRow; // eax
  void (__thiscall **v12)(_DWORD *, int, BSStringT *); // edi
  int v13; // eax
  int v14; // ebx
  Menu *v15; // edi
  int v17; // [esp-20h] [ebp-34h]
  _DWORD *v18; // [esp-1Ch] [ebp-30h]
  int v19; // [esp-18h] [ebp-2Ch]
  int v20; // [esp-14h] [ebp-28h]
  int (__cdecl *v21)(int, _DWORD); // [esp-10h] [ebp-24h]
  signed int v22; // [esp-10h] [ebp-24h]
  _DWORD v23[5]; // [esp-8h] [ebp-1Ch] BYREF
  int v24; // [esp+Ch] [ebp-8h] BYREF

  v5 = 1.0; /*0x5d6573*/
  Tile_SetFloat(a1, 0xFB2u, 1.0); /*0x5d6580*/
  v23[0] = a2; /*0x5d6585*/
  v23[1] = a2; /*0x5d6589*/
  for ( i = 0; i < 0x15; ++i ) /*0x5d658d*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i); /*0x5d6598*/
    BSSimpleList_InsertSorted(v23, AVFromGroupOffset, (int)sub_5D56C0, v17, v18, v19, v20, v21); /*0x5d65a5*/
  }
  v8 = (unsigned int *)&v24; /*0x5d65b2*/
  do /*0x5d65da*/
  {
    v9 = *v8; /*0x5d65b6*/
    v22 = *v8; /*0x5d65b8*/
    Name = (char *)ActorValue_GetName(*v8); /*0x5d65ba*/
    SkillRow = SkillsMenu_CreateSkillRow((int)a3, a5, Name, v22); /*0x5d65c5*/
    if ( !a2 || v9 == a3[0x10] ) /*0x5d65d1*/
      a2 = SkillRow; /*0x5d65d3*/
    v8 = (unsigned int *)v8[1]; /*0x5d65d5*/
  }
  while ( v8 ); /*0x5d65da*/
  if ( a3[0x13] ) /*0x5d65dc*/
  {
    SkillsMenu_PreselectClassMenuValues(a3);    // Preselects rows from the owning ClassMenu. In skill mode, the source is exactly seven staged actor values at ClassMenu+0x68..+0x80. /*0x5d65e3*/
  }
  else if ( a2 ) /*0x5d65ec*/
  {
    v12 = (void (__thiscall **)(_DWORD *, int, BSStringT *))(*a3 + 0xC); /*0x5d65f8*/
    Tile_GetFloat(a2, 0xFA8); /*0x5d65fb*/
    v13 = Double_To_SInt32(a5); /*0x5d6600*/
    (*v12)(a3, v13, a2); /*0x5d660a*/
    v5 = fConstant_2; /*0x5d660c*/
    Tile_SetFloat((Tile *)a2, 0xFF0u, fConstant_2); /*0x5d661d*/
  }
  v14 = v23[3]; /*0x5d6622*/
  v15 = (Menu *)v23[4]; /*0x5d6626*/
  SkillsMenu_UpdateDetails(a3, (void *)0xFFFFFFFF); /*0x5d662e*/
  EnableMenu(v15, v5, a4, a5, 0); /*0x5d6637*/
  return v14; /*0x5d6645*/
}
