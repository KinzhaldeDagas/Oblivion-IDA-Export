// BSTreeNode branch LOD child setter: replaces child under Branches and updates branch array. No frond-equivalent setter was found in this node surface.
char __thiscall sub_564730(BSTreeModel_OblivionLayout_058 **this, void *arg0, Ni2DBuffer *a2)
{
  BSTreeModel_OblivionLayout_058 *v4; // ecx
  Ni2DBuffer *v5; // ebp
  unsigned __int16 NumBranchLODLevels; // ax
  unsigned __int16 v7; // si
  int v8; // ebx
  int v9; // esi
  _DWORD *v10; // eax
  unsigned int v12; // [esp+14h] [ebp-14h] BYREF
  __int16 v13; // [esp+18h] [ebp-10h]
  __int16 v14; // [esp+1Ah] [ebp-Eh]
  unsigned int v15; // [esp+24h] [ebp-4h]

  v12 = 0; /*0x56475b*/
  v13 = 0; /*0x56475f*/
  v14 = 0; /*0x564764*/
  v4 = *(this + 0x37); /*0x564769*/
  v15 = 0; /*0x564771*/
  if ( !v4 /*0x5647a3*/
    || !*(this + 0x38)
    || (v5 = a2) == 0
    || (NumBranchLODLevels = BSTreeModel_GetNumBranchLODLevels(v4),
        v7 = (unsigned __int16)arg0,
        (unsigned __int16)arg0 >= NumBranchLODLevels) )
  {
    FormHeapFree(0); /*0x564832*/
    return 0; /*0x564832*/
  }
  v8 = ((int (__thiscall *)(BSTreeModel_OblivionLayout_058 **))(*this)[1].seed)(this); /*0x5647b5*/
  if ( !v8 ) /*0x5647b9*/
  {
    v15 = 0xFFFFFFFF; /*0x5647bf*/
    BSStringT_Clear(&v12); /*0x5647c7*/
    return 0; /*0x56483a*/
  }
  v9 = 4 * v7; /*0x5647d9*/
  v10 = (void **)((char *)&(*(this + 0x38))->vftable + v9); /*0x5647db*/
  if ( *v10 ) /*0x5647dd*/
  {
    (*(void (__thiscall **)(int, void **, _DWORD))(*(_DWORD *)v8 + 0x88))(v8, &arg0, *v10); /*0x5647f4*/
    NiPointerSlot_Release(&arg0); /*0x5647fa*/
  }
  (*(void (__thiscall **)(int, Ni2DBuffer *, int))(*(_DWORD *)v8 + 0x84))(v8, v5, 1); /*0x56480c*/
  NiSmartPointer_Set__((Ni2DBuffer **)((char *)*(this + 0x38) + v9), v5); /*0x564817*/
  v15 = 0xFFFFFFFF; /*0x564820*/
  BSStringT_Clear(&v12); /*0x564828*/
  return 1; /*0x56483c*/
}
