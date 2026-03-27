TESObjectCELL *__thiscall sub_442A30(TESObjectCELL **this, unsigned int a2, char a3, char a4)
{
  TESObjectCELL *result; // eax
  TESObjectCELL *v5; // ebx
  NiNode *NiNode; // eax
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // edi
  int i; // esi
  NiNode *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  TESObjectCELL *v15; // ebx
  NiNode *v16; // eax
  int v17; // eax
  unsigned int v18; // ebp
  int v19; // edi
  int m; // esi
  NiNode *v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int j; // ebp
  unsigned int v25; // edi
  GridEntry *GridEntry; // eax
  TESObjectCELL *cell; // ebx
  NiNode *v28; // eax
  int v29; // eax
  unsigned int v30; // ebp
  int v31; // edi
  int k; // esi
  NiNode *v33; // eax
  int v34; // eax
  int v35; // eax
  signed int v36; // [esp+4h] [ebp-Ch]
  unsigned int v38; // [esp+8h] [ebp-8h]
  int v39; // [esp+Ch] [ebp-4h]
  int v40; // [esp+1Ch] [ebp+Ch]
  unsigned int v41; // [esp+1Ch] [ebp+Ch]

  if ( a3 )
    dword_B35C00 &= ~(1 << a2);
  else
    dword_B35C00 |= 1 << a2;
  if ( a2 == 3 )
  {
    result = TES->currentInteriorCell;
    if ( !result || (result->members.flags0 & 2) == 0 )
    {
      result = (TESObjectCELL *)sub_49A140();
      if ( a3 )
        LOWORD(result->members.fullName.vtbl) &= ~1u;
      else
        LOWORD(result->members.fullName.vtbl) |= 1u;
    }
  }
  else
  {
    v36 = 0xFFFFFFFF;
    v39 = a4 == 0 ? uInteriorCellBuffer : 0;
    if ( v39 > (int)0xFFFFFFFF )
    {
      do
      {
        if ( v36 == 0xFFFFFFFF )
          v5 = *(this + 0xD);
        else
          v5 = *((TESObjectCELL **)&(*(this + 0xE))->vtbl + v36);
        if ( v5 )
        {
          switch ( a2 )
          {
            case 0u:
            case 1u:
              NiNode = TESObjectCELL_GetNiNode_(v5);
              if ( NiNode && NiNode->members.children.end > a2 )
                v7 = *((_DWORD *)&NiNode->members.children.data->vtbl + a2);
              else
                v7 = 0;
              if ( v7 )
              {
                if ( a3 )
                  *(_WORD *)(v7 + 0x18) &= ~1u;
                else
                  *(_WORD *)(v7 + 0x18) |= 1u;
              }
              break;
            case 2u:
            case 4u:
            case 5u:
              v8 = a2 - 2;
              v9 = 0;
              for ( i = 8; i < 0x18; i += 4 )
              {
                v11 = TESObjectCELL_GetNiNode_(v5);
                if ( v11
                  && v11->members.children.end > (unsigned int)(v9 + 2)
                  && (v12 = *(int *)((char *)&v11->members.children.data->vtbl + i)) != 0
                  && *(unsigned __int16 *)(v12 + 0xB6) > v8 )
                {
                  v13 = *(_DWORD *)(*(_DWORD *)(v12 + 0xB0) + 4 * v8);
                }
                else
                {
                  v13 = 0;
                }
                if ( v13 )
                {
                  if ( a3 )
                    *(_WORD *)(v13 + 0x18) &= ~1u;
                  else
                    *(_WORD *)(v13 + 0x18) |= 1u;
                }
                ++v9;
              }
              break;
            default:
              break;
          }
        }
        ++v36;
      }
      while ( v36 < v39 );
    }
    if ( a4 )
    {
      result = (TESObjectCELL *)uGridsToLoad;
      for ( j = 0; ; ++j )
      {
        v38 = j;
        if ( j >= (unsigned int)result )
          break;
        v25 = 0;
        while ( 1 )
        {
          v41 = v25;
          if ( v25 >= (unsigned int)result )
            break;
          GridEntry = GetGridEntry(TES->gridCellArray, j, v25);
          cell = GridEntry->cell;
          if ( GridEntry->cell )
          {
            switch ( a2 )
            {
              case 0u:
              case 1u:
                v28 = TESObjectCELL_GetNiNode_(GridEntry->cell);
                if ( v28 && v28->members.children.end > a2 )
                  v29 = *((_DWORD *)&v28->members.children.data->vtbl + a2);
                else
                  v29 = 0;
                if ( !v29 )
                  goto LABEL_92;
                if ( a3 )
                  *(_WORD *)(v29 + 0x18) &= ~1u;
                else
                  *(_WORD *)(v29 + 0x18) |= 1u;
                result = (TESObjectCELL *)uGridsToLoad;
                ++v25;
                break;
              case 2u:
              case 4u:
              case 5u:
                v30 = a2 - 2;
                v31 = 0;
                for ( k = 8; k < 0x18; k += 4 )
                {
                  v33 = TESObjectCELL_GetNiNode_(cell);
                  if ( v33
                    && v33->members.children.end > (unsigned int)(v31 + 2)
                    && (v34 = *(int *)((char *)&v33->members.children.data->vtbl + k)) != 0
                    && *(unsigned __int16 *)(v34 + 0xB6) > v30 )
                  {
                    v35 = *(_DWORD *)(*(_DWORD *)(v34 + 0xB0) + 4 * v30);
                  }
                  else
                  {
                    v35 = 0;
                  }
                  if ( v35 )
                  {
                    if ( a3 )
                      *(_WORD *)(v35 + 0x18) &= ~1u;
                    else
                      *(_WORD *)(v35 + 0x18) |= 1u;
                  }
                  ++v31;
                }
                v25 = v41;
                j = v38;
                goto LABEL_92;
              default:
                goto LABEL_92;
            }
          }
          else
          {
LABEL_92:
            result = (TESObjectCELL *)uGridsToLoad;
            ++v25;
          }
        }
      }
    }
    else
    {
      v40 = 0;
      while ( 1 )
      {
        result = (TESObjectCELL *)v40;
        if ( v40 >= uExteriorCellBuffer )
          break;
        v14 = (int)*(this + 0xF);
        v15 = *(TESObjectCELL **)(v14 + 4 * v40);
        if ( v15 )
        {
          switch ( a2 )
          {
            case 0u:
            case 1u:
              v16 = TESObjectCELL_GetNiNode_(*(TESObjectCELL **)(v14 + 4 * v40));
              if ( v16 && v16->members.children.end > a2 )
                v17 = *((_DWORD *)&v16->members.children.data->vtbl + a2);
              else
                v17 = 0;
              if ( !v17 )
                goto LABEL_63;
              if ( a3 )
                *(_WORD *)(v17 + 0x18) &= ~1u;
              else
                *(_WORD *)(v17 + 0x18) |= 1u;
              ++v40;
              break;
            case 2u:
            case 4u:
            case 5u:
              v18 = a2 - 2;
              v19 = 0;
              for ( m = 8; m < 0x18; m += 4 )
              {
                v21 = TESObjectCELL_GetNiNode_(v15);
                if ( v21
                  && v21->members.children.end > (unsigned int)(v19 + 2)
                  && (v22 = *(int *)((char *)&v21->members.children.data->vtbl + m)) != 0
                  && *(unsigned __int16 *)(v22 + 0xB6) > v18 )
                {
                  v23 = *(_DWORD *)(*(_DWORD *)(v22 + 0xB0) + 4 * v18);
                }
                else
                {
                  v23 = 0;
                }
                if ( v23 )
                {
                  if ( a3 )
                    *(_WORD *)(v23 + 0x18) &= ~1u;
                  else
                    *(_WORD *)(v23 + 0x18) |= 1u;
                }
                ++v19;
              }
              goto LABEL_63;
            default:
              goto LABEL_63;
          }
        }
        else
        {
LABEL_63:
          ++v40;
        }
      }
    }
  }
  return result;
}
