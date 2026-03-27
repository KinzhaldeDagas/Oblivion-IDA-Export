char __thiscall sub_442E70(_DWORD *this, int a2, int a3, int a4, int a5, char a6)
{
  char result; // al
  unsigned int v7; // edi
  int v8; // esi
  TESObjectCELL *currentInteriorCell; // ecx
  unsigned int v10; // eax
  unsigned int i; // esi
  TESObjectCELL *cell; // ecx
  char v13; // [esp+1Fh] [ebp-5h]

  result = 0;
  v7 = 0;
  v13 = 0;
  if ( a2 )
  {
    if ( a6 )
    {
      v8 = *(_DWORD *)(a2 + 0x14);
      if ( v8 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
        *(_DWORD *)(a2 + 0x14) = 0;
      }
      sub_959D60((_WORD *)a2, &Vector3_InitValue_, &Vector3_InitValue_, 0);
      currentInteriorCell = TES->currentInteriorCell;
      if ( currentInteriorCell )
      {
        return sub_4D1BA0(currentInteriorCell, a2, a3, a4, *(float *)&a5, a6);
      }
      else
      {
        v10 = uGridsToLoad;
        while ( v7 < v10 )
        {
          for ( i = 0; i < v10; ++i )
          {
            cell = GetGridEntry((GridCellArray *)*(this + 2), v7, i)->cell;
            if ( cell )
            {
              if ( sub_4D1BA0(cell, a2, a3, a4, *(float *)&a5, a6) )
                v13 = 1;
            }
            v10 = uGridsToLoad;
          }
          ++v7;
        }
        return v13;
      }
    }
  }
  return result;
}
