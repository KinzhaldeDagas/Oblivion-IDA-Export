// Oblivion TES cell-node visibility controller. Updates the six-bit node mask and applies AppCulled to loaded interior/exterior cell categories. Categories are identified by Oblivion's own console command as Actor, Marker, Land Quad, Water Quad, Static Quad, and Active Quad. ShadowPass temporarily hides Actor (0) and Water Quad (3), then restores their prior mask states. Fallout was consulted only afterward and corroborates the conventional TES::ShowCellNode name.
void __thiscall TES__ShowCellNode(TES *this, unsigned int nodeCategory, bool show, bool activeExteriorCellsOnly)
{
  TESObjectCELL *currentInteriorCell; // eax
  int v5; // eax
  TESObjectCELL *v6; // ebx
  NiNode *NiNode; // eax
  int v8; // eax
  unsigned int v9; // ebp
  int v10; // edi
  int i; // esi
  NiNode *v12; // eax
  int v13; // eax
  int v14; // eax
  TESObjectCELL **exteriorCellBufferArray; // edx
  TESObjectCELL *v16; // ebx
  NiNode *v17; // eax
  int v18; // eax
  unsigned int v19; // ebp
  int v20; // edi
  int m; // esi
  NiNode *v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  unsigned int j; // ebp
  unsigned int v27; // edi
  GridEntry *GridEntry; // eax
  TESObjectCELL *cell; // ebx
  NiNode *v30; // eax
  int v31; // eax
  unsigned int v32; // ebp
  int v33; // edi
  int k; // esi
  NiNode *v35; // eax
  int v36; // eax
  int v37; // eax
  signed int v38; // [esp+4h] [ebp-Ch]
  unsigned int v40; // [esp+8h] [ebp-8h]
  int v41; // [esp+Ch] [ebp-4h]
  int activeExteriorCellsOnlya; // [esp+1Ch] [ebp+Ch]
  unsigned int activeExteriorCellsOnlyb; // [esp+1Ch] [ebp+Ch]

  if ( show ) /*0x442a42*/
    unk_B35C00 &= ~(1 << nodeCategory); /*0x442a5c*/
  else
    unk_B35C00 |= 1 << nodeCategory; /*0x442a4b*/
  if ( nodeCategory == 3 )
  {
    currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x442a6c*/
    if ( !currentInteriorCell || (currentInteriorCell->members.flags0 & 2) == 0 ) /*0x442a7c*/
    {
      v5 = sub_49A140(); /*0x442a82*/
      if ( show ) /*0x442a89*/
        *(_WORD *)(v5 + 0x18) &= ~1u; /*0x442a97*/
      else
        *(_WORD *)(v5 + 0x18) |= 1u; /*0x442a8b*/
    }
  }
  else
  {
    v38 = 0xFFFFFFFF; /*0x442aad*/
    v41 = !activeExteriorCellsOnly ? uInteriorCellBuffer : 0;
    if ( v41 > (int)0xFFFFFFFF ) /*0x442ac6*/
    {
      do /*0x442bd0*/
      {
        if ( v38 == 0xFFFFFFFF ) /*0x442ad7*/
          v6 = this->currentInteriorCell; /*0x442add*/
        else
          v6 = this->interiorCellBufferArray[v38]; /*0x442ae9*/
        if ( v6 ) /*0x442aee*/
        {
          switch ( nodeCategory ) /*0x442b03*/
          {
            case 0u: /*0x442b03*/
            case 1u: /*0x442b03*/
              NiNode = GetObjectPointerAt_054(v6); /*0x442b0c*/
              if ( NiNode && NiNode->members.children.end > nodeCategory ) /*0x442b22*/
                v8 = *((_DWORD *)&NiNode->members.children.data->vtbl + nodeCategory); /*0x442b2a*/
              else
                v8 = 0; /*0x442b2f*/
              if ( v8 ) /*0x442b33*/
              {
                if ( show ) /*0x442b3e*/
                  *(_WORD *)(v8 + 0x18) &= ~1u; /*0x442b47*/
                else
                  *(_WORD *)(v8 + 0x18) |= 1u; /*0x442b40*/
              }
              break; /*0x442b45*/
            case 2u: /*0x442b03*/
            case 4u: /*0x442b03*/
            case 5u: /*0x442b03*/
              v9 = nodeCategory - 2; /*0x442b51*/
              v10 = 0; /*0x442b54*/
              for ( i = 8; i < 0x18; i += 4 ) /*0x442b56*/
              {
                v12 = GetObjectPointerAt_054(v6); /*0x442b62*/
                if ( v12 /*0x442b8f*/
                  && v12->members.children.end > (unsigned int)(v10 + 2)
                  && (v13 = *(int *)((char *)&v12->members.children.data->vtbl + i)) != 0
                  && *(unsigned __int16 *)(v13 + 0xB6) > v9 )
                {
                  v14 = *(_DWORD *)(*(_DWORD *)(v13 + 0xB0) + 4 * v9); /*0x442b97*/
                }
                else
                {
                  v14 = 0; /*0x442b9c*/
                }
                if ( v14 ) /*0x442ba0*/
                {
                  if ( show ) /*0x442ba7*/
                    *(_WORD *)(v14 + 0x18) &= ~1u; /*0x442bb0*/
                  else
                    *(_WORD *)(v14 + 0x18) |= 1u; /*0x442ba9*/
                }
                ++v10; /*0x442bb9*/
              }
              break; /*0x442bbf*/
            default:
              break;
          }
        }
        ++v38; /*0x442bc1*/
      }
      while ( v38 < v41 ); /*0x442bd0*/
    }
    if ( activeExteriorCellsOnly ) /*0x442bdb*/
    {
      v25 = uGridsToLoad; /*0x442ceb*/
      for ( j = 0; ; ++j ) /*0x442cf0*/
      {
        v40 = j; /*0x442cf4*/
        if ( j >= v25 ) /*0x442cf8*/
          break; /*0x442cf8*/
        v27 = 0; /*0x442cfe*/
        while ( 1 ) /*0x442d02*/
        {
          activeExteriorCellsOnlyb = v27; /*0x442d02*/
          if ( v27 >= v25 ) /*0x442d06*/
            break; /*0x442d06*/
          GridEntry = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, j, v27); /*0x442d16*/
          cell = GridEntry->cell; /*0x442d1b*/
          if ( GridEntry->cell ) /*0x442d1b*/
          {
            switch ( nodeCategory ) /*0x442d32*/
            {
              case 0u: /*0x442d32*/
              case 1u: /*0x442d32*/
                v30 = GetObjectPointerAt_054(GridEntry->cell); /*0x442d3b*/
                if ( v30 && v30->members.children.end > nodeCategory ) /*0x442d4d*/
                  v31 = *((_DWORD *)&v30->members.children.data->vtbl + nodeCategory); /*0x442d55*/
                else
                  v31 = 0; /*0x442d5a*/
                if ( !v31 ) /*0x442d5e*/
                  goto LABEL_92; /*0x442d5e*/
                if ( show ) /*0x442d69*/
                  *(_WORD *)(v31 + 0x18) &= ~1u; /*0x442d7a*/
                else
                  *(_WORD *)(v31 + 0x18) |= 1u; /*0x442d6b*/
                v25 = uGridsToLoad; /*0x442d70*/
                ++v27; /*0x442d75*/
                break; /*0x442d78*/
              case 2u: /*0x442d32*/
              case 4u: /*0x442d32*/
              case 5u: /*0x442d32*/
                v32 = nodeCategory - 2; /*0x442d8d*/
                v33 = 0; /*0x442d90*/
                for ( k = 8; k < 0x18; k += 4 ) /*0x442d92*/
                {
                  v35 = GetObjectPointerAt_054(cell); /*0x442d99*/
                  if ( v35 /*0x442dc6*/
                    && v35->members.children.end > (unsigned int)(v33 + 2)
                    && (v36 = *(int *)((char *)&v35->members.children.data->vtbl + k)) != 0
                    && *(unsigned __int16 *)(v36 + 0xB6) > v32 )
                  {
                    v37 = *(_DWORD *)(*(_DWORD *)(v36 + 0xB0) + 4 * v32); /*0x442dce*/
                  }
                  else
                  {
                    v37 = 0; /*0x442dd3*/
                  }
                  if ( v37 ) /*0x442dd7*/
                  {
                    if ( show ) /*0x442dde*/
                      *(_WORD *)(v37 + 0x18) &= ~1u; /*0x442de7*/
                    else
                      *(_WORD *)(v37 + 0x18) |= 1u; /*0x442de0*/
                  }
                  ++v33; /*0x442df0*/
                }
                v27 = activeExteriorCellsOnlyb; /*0x442df8*/
                j = v40; /*0x442dfc*/
                goto LABEL_92; /*0x442dfc*/
              default:
                goto LABEL_92;
            }
          }
          else
          {
LABEL_92:
            v25 = uGridsToLoad; /*0x442e00*/
            ++v27; /*0x442e05*/
          }
        }
      }
    }
    else
    {
      activeExteriorCellsOnlya = 0; /*0x442be1*/
      while ( activeExteriorCellsOnlya < uExteriorCellBuffer ) /*0x442bfa*/
      {
        exteriorCellBufferArray = this->exteriorCellBufferArray; /*0x442c04*/
        v16 = exteriorCellBufferArray[activeExteriorCellsOnlya]; /*0x442c07*/
        if ( v16 ) /*0x442c0c*/
        {
          switch ( nodeCategory ) /*0x442c1f*/
          {
            case 0u: /*0x442c1f*/
            case 1u: /*0x442c1f*/
              v17 = GetObjectPointerAt_054(exteriorCellBufferArray[activeExteriorCellsOnlya]); /*0x442c28*/
              if ( v17 && v17->members.children.end > nodeCategory ) /*0x442c3a*/
                v18 = *((_DWORD *)&v17->members.children.data->vtbl + nodeCategory); /*0x442c42*/
              else
                v18 = 0; /*0x442c47*/
              if ( !v18 ) /*0x442c4b*/
                goto LABEL_63; /*0x442c4b*/
              if ( show ) /*0x442c56*/
                *(_WORD *)(v18 + 0x18) &= ~1u; /*0x442c64*/
              else
                *(_WORD *)(v18 + 0x18) |= 1u; /*0x442c58*/
              ++activeExteriorCellsOnlya; /*0x442c5d*/
              break; /*0x442c62*/
            case 2u: /*0x442c1f*/
            case 4u: /*0x442c1f*/
            case 5u: /*0x442c1f*/
              v19 = nodeCategory - 2; /*0x442c76*/
              v20 = 0; /*0x442c79*/
              for ( m = 8; m < 0x18; m += 4 ) /*0x442c7b*/
              {
                v22 = GetObjectPointerAt_054(v16); /*0x442c82*/
                if ( v22 /*0x442caf*/
                  && v22->members.children.end > (unsigned int)(v20 + 2)
                  && (v23 = *(int *)((char *)&v22->members.children.data->vtbl + m)) != 0
                  && *(unsigned __int16 *)(v23 + 0xB6) > v19 )
                {
                  v24 = *(_DWORD *)(*(_DWORD *)(v23 + 0xB0) + 4 * v19); /*0x442cb7*/
                }
                else
                {
                  v24 = 0; /*0x442cbc*/
                }
                if ( v24 ) /*0x442cc0*/
                {
                  if ( show ) /*0x442cc7*/
                    *(_WORD *)(v24 + 0x18) &= ~1u; /*0x442cd0*/
                  else
                    *(_WORD *)(v24 + 0x18) |= 1u; /*0x442cc9*/
                }
                ++v20; /*0x442cd9*/
              }
              goto LABEL_63; /*0x442cdf*/
            default:
              goto LABEL_63;
          }
        }
        else
        {
LABEL_63:
          ++activeExteriorCellsOnlya; /*0x442ce1*/
        }
      }
    }
  }
}
