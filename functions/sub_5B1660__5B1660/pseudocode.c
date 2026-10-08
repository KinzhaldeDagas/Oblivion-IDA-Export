double __userpurge sub_5B1660@<st0>(int a1@<ecx>, double result@<st0>, int a3, _DWORD *a4)
{
  int v8; // ebx
  double v9; // st6
  double v10; // st5
  int v11; // ebx
  _DWORD *v12; // ebp
  double v13; // st6
  int v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // ebx
  int v17; // eax
  int v18; // esi
  int v19; // edx
  int *v20; // ecx
  int v21; // ebx
  int v22; // ebp
  int v23; // esi
  int *v24; // ecx
  int v25; // edx
  int v26; // ebx
  float v27; // [esp+4h] [ebp-30h]
  float v28; // [esp+4h] [ebp-30h]
  float v29; // [esp+8h] [ebp-2Ch]
  double v30; // [esp+24h] [ebp-10h]
  double v31; // [esp+24h] [ebp-10h]
  float v32; // [esp+24h] [ebp-10h]
  float v33; // [esp+24h] [ebp-10h]
  float v34; // [esp+24h] [ebp-10h]
  double VirtualScreenHeight; // [esp+2Ch] [ebp-8h]
  float v36; // [esp+38h] [ebp+4h]
  float v37; // [esp+38h] [ebp+4h]
  float v38; // [esp+38h] [ebp+4h]
  float v39; // [esp+38h] [ebp+4h]
  float v40; // [esp+38h] [ebp+4h]
  float v41; // [esp+38h] [ebp+4h]
  float Float; // [esp+3Ch] [ebp+8h]

  if ( a3 >= 0x3E9 || (unsigned int)(a3 - 0xD) <= 1 )
  {
    if ( a4 )
    {
      *(_DWORD *)(a1 + 0x48) = 0; /*0x5b168c*/
      sub_57BD80(); /*0x5b1693*/
      if ( *(_DWORD *)(a1 + 0x28) )
      {
        sub_57DE50(4); /*0x5b16a5*/
        Tile_GetFloat(a4, 0xFE0); /*0x5b16b4*/
        v8 = Double_To_SInt32(result); /*0x5b16be*/
        v9 = Tile_GetFloat(a4, 0xFD1) == fConstant_2 ? Tile_GetFloat(a4, 0xFCB) * dbl_A2FAA0 : 0.0;
        v36 = sub_588D90(a4, result) - dbl_A2FAA0; /*0x5b1708*/
        Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFABu, v36); /*0x5b1718*/
        v30 = (double)(2 * v8); /*0x5b172f*/
        v37 = Tile_GetFloat(a4, 0xFCB) - v30; /*0x5b1740*/
        Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFCBu, v37); /*0x5b1750*/
        v38 = Tile_GetFloat(a4, 0xFCA) - v30; /*0x5b1769*/
        Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFCAu, v38); /*0x5b1779*/
        v31 = (double)v8; /*0x5b1784*/
        result = sub_588C50(a4); /*0x5b1788*/
        v10 = v9; /*0x5b1791*/
        v39 = v9 + v31 - (double)Double_To_SInt32(result); /*0x5b17a6*/
        Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFADu, v39); /*0x5b17b6*/
        v40 = sub_588CF0(a4) + v31; /*0x5b17ca*/
        Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFACu, v40); /*0x5b17da*/
        Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFA1u, fConstant_2); /*0x5b17f1*/
        *(_DWORD *)(a1 + 0x48) = a4; /*0x5b17fc*/
        if ( a3 >= 0x3E9 ) /*0x5b17ff*/
        {
          Tile_GetFloat(a4, 0xFB5); /*0x5b180c*/
          v11 = Double_To_SInt32(result); /*0x5b181e*/
          Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFB5); /*0x5b1825*/
          InterfaceManager_GetSingleton(0, 1); /*0x5b182d*/
          v12 = *(_DWORD **)(a1 + 4); /*0x5b1832*/
          VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5b183d*/
          v41 = VirtualScreenHeight - Tile_GetFloat(v12, 0xFBA); /*0x5b1858*/
          v13 = Tile_GetFloat(a4, 0xFBB); /*0x5b185c*/
          v14 = Double_To_SInt32(result); /*0x5b1861*/
          if ( v11 != 8 ) /*0x5b1869*/
          {
            if ( v11 == 0x10 ) /*0x5b190e*/
            {
              v19 = *(_DWORD *)(a1 + 0x54); /*0x5b1910*/
              v20 = (int *)(a1 + 0x40); /*0x5b1913*/
              if ( a1 != 0xFFFFFFC0 ) /*0x5b1918*/
              {
                do /*0x5b1930*/
                {
                  v21 = *v20; /*0x5b1920*/
                  v20 = (int *)v20[1]; /*0x5b1922*/
                  v22 = v19++; /*0x5b1925*/
                }
                while ( v22 != v14 && v20 ); /*0x5b1930*/
                if ( v21 ) /*0x5b1934*/
                {
                  v33 = sub_588D90((_DWORD *)*(_DWORD *)(a1 + 4), result); /*0x5b193e*/
                  v23 = *(_DWORD *)(*(_DWORD *)v21 + 0xC); /*0x5b1948*/
                  v29 = sub_588CF0(a4); /*0x5b1963*/
                  sub_57BBF0(v10, v13, Float, v23, Float, v29, v41, v33); /*0x5b196f*/
                  return Float; /*0x5b197e*/
                }
              }
            }
            else
            {
              v24 = (int *)(a1 + 0x38); /*0x5b1981*/
              v25 = 0; /*0x5b1984*/
              if ( a1 != 0xFFFFFFC8 ) /*0x5b1988*/
              {
                do /*0x5b199e*/
                {
                  v26 = *v24; /*0x5b1990*/
                  v24 = (int *)v24[1]; /*0x5b1992*/
                  ++v25; /*0x5b1995*/
                }
                while ( v25 != v14 && v24 ); /*0x5b199e*/
                if ( v26 ) /*0x5b19a2*/
                {
                  v34 = sub_588D90((_DWORD *)*(_DWORD *)(a1 + 4), result); /*0x5b19c3*/
                  v28 = sub_588CF0(a4); /*0x5b19e3*/
                  sub_57BB20(v26 + 0x18, Float, v28, v41, 0, v34); /*0x5b19f2*/
                  return Float; /*0x5b19ea*/
                }
              }
            }
            PrintError("Spell item index did was not in saved list."); /*0x5b19a9*/
            return result; /*0x5b19b8*/
          }
          v15 = (_DWORD *)dword_B14360; /*0x5b186f*/
          if ( dword_B14360 ) /*0x5b186f*/
          {
            while ( 1 ) /*0x5b1880*/
            {
              v16 = (_DWORD *)v15[2]; /*0x5b1880*/
              v15 = (_DWORD *)*v15; /*0x5b1889*/
              if ( v16[1] == v14 ) /*0x5b188b*/
                break; /*0x5b188b*/
              if ( !v15 ) /*0x5b188f*/
                return result; /*0x5b188f*/
            }
            v32 = sub_588D90((_DWORD *)*(_DWORD *)(a1 + 4), result); /*0x5b18a3*/
            v17 = *((_DWORD *)OblivionDynamicCast( /*0x5b18c0*/
                                *(void **)(*v16 + 8),
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESEnchantableForm `RTTI Type Descriptor',
                                0)
                  + 1);
            if ( v17 ) /*0x5b18c8*/
              v18 = v17 + 0x18; /*0x5b18ca*/
            else
              v18 = 0; /*0x5b18cf*/
            v27 = sub_588CF0(a4); /*0x5b18ed*/
            sub_57BB20(v18, Float, v27, v41, 0, v32); /*0x5b18f9*/
            return Float; /*0x5b18f1*/
          }
        }
      }
    }
  }
  return result; /*0x5b1893*/
}
