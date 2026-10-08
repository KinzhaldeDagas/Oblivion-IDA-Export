void __thiscall sub_4464F0(char *this)
{
  char *v1; // esi
  int **v2; // edi
  _DWORD *v3; // eax

  v1 = this + 0xA0; /*0x4464f1*/
  if ( this != (char *)0xFFFFFF60 ) /*0x4464f9*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) ) /*0x446509*/
    {
      v2 = *(int ***)v1; /*0x44650b*/
      if ( *(_DWORD *)v1 ) /*0x44650b*/
      {
        sub_4440E0(*(int ***)v1); /*0x446513*/
        FormHeapFree((unsigned int)v2); /*0x446519*/
      }
      v3 = *((_DWORD **)v1 + 1); /*0x446521*/
      if ( v3 ) /*0x446526*/
      {
        *((_DWORD *)v1 + 1) = v3[1]; /*0x44652b*/
        *(_DWORD *)v1 = *v3; /*0x446531*/
        FormHeapFree((unsigned int)v3); /*0x446533*/
      }
      else
      {
        *(_DWORD *)v1 = 0; /*0x44653d*/
      }
    }
  }
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x11E]) ) /*0x44654b*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x11E]), 1, 1); /*0x44655c*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x120]) ) /*0x446566*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x120]), 1, 1); /*0x446576*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x122]) ) /*0x446580*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x122]), 1, 1); /*0x446590*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x124]) ) /*0x44659a*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x124]), 1, 1); /*0x4465aa*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x126]) ) /*0x4465b4*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x126]), 1, 1); /*0x4465c4*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x128]) ) /*0x4465ce*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x128]), 1, 1); /*0x4465de*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x12A]) ) /*0x4465e8*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x12A]), 1, 1); /*0x4465f8*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x12C]) ) /*0x446602*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x12C]), 1, 1); /*0x446612*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x12E]) ) /*0x44661c*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x12E]), 1, 1); /*0x44662c*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x130]) ) /*0x446636*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x130]), 1, 1); /*0x446646*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x132]) ) /*0x446650*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x132]), 1, 1); /*0x446660*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x134]) ) /*0x44666a*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x134]), 1, 1); /*0x44667a*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x136]) ) /*0x446684*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x136]), 1, 1); /*0x446694*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x138]) ) /*0x44669e*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x138]), 1, 1); /*0x4466ae*/
  if ( *(_BYTE *)LODWORD(flt_B36CD8[0x13A]) ) /*0x4466b8*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(flt_B36CD8[0x13A]), 1, 1); /*0x4466c8*/
  if ( *(_BYTE *)LODWORD(MEMORY[0xB37A58][0x38]) ) /*0x4466d2*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(MEMORY[0xB37A58][0x38]), 1, 1); /*0x4466e2*/
}
