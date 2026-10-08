char __thiscall sub_442E70(_DWORD *this, int a2, float *a3, float *a4, int a5, char a6)
{
  char result; // al
  unsigned int v7; // edi
  int v8; // esi
  TESObjectCELL *currentInteriorCell; // ecx
  unsigned int v10; // eax
  unsigned int i; // esi
  TESObjectCELL *cell; // ecx
  char v13; // [esp+1Fh] [ebp-5h]

  result = 0; /*0x442e79*/
  v7 = 0; /*0x442e7b*/
  v13 = 0; /*0x442e83*/
  if ( a2 ) /*0x442e87*/
  {
    if ( a6 ) /*0x442e94*/
    {
      v8 = *(_DWORD *)(a2 + 0x14); /*0x442e9b*/
      if ( v8 ) /*0x442ea0*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x442ea6*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x442ebc*/
        *(_DWORD *)(a2 + 0x14) = 0; /*0x442ebe*/
      }
      NiPick_ExecuteAndSort((_WORD *)a2, &g_zeroNiPoint3.x, &g_zeroNiPoint3.x, 0); /*0x442ece*/
      currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x442ed9*/
      if ( currentInteriorCell ) /*0x442ede*/
      {
        return sub_4D1BA0(currentInteriorCell, a2, a3, a4, *(float *)&a5, a6); /*0x442ef4*/
      }
      else
      {
        v10 = uGridsToLoad; /*0x442f07*/
        while ( v7 < v10 ) /*0x442f12*/
        {
          for ( i = 0; i < v10; ++i ) /*0x442f14*/
          {
            cell = GetGridEntry((GridCellArray *)*(this + 2), v7, i)->cell; /*0x442f28*/
            if ( cell ) /*0x442f2c*/
            {
              if ( sub_4D1BA0(cell, a2, a3, a4, *(float *)&a5, a6) ) /*0x442f42*/
                v13 = 1; /*0x442f4b*/
            }
            v10 = uGridsToLoad; /*0x442f50*/
          }
          ++v7; /*0x442f5a*/
        }
        return v13; /*0x442f5f*/
      }
    }
  }
  return result; /*0x442efb*/
}
