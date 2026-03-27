void __userpurge sub_5B1660(int a1@<ecx>, double a2@<st2>, int a3, _DWORD *a4)
{
  double Float; // st7
  int v8; // ebx
  double v9; // st7
  double v10; // st7
  double v11; // st6
  double v12; // st7
  int v13; // ebx
  _DWORD *v14; // ebp
  double v15; // st7
  int v16; // eax
  _DWORD *v17; // ecx
  _DWORD *v18; // ebx
  int v19; // eax
  int v20; // esi
  int v21; // edx
  int *v22; // ecx
  int v23; // ebx
  int v24; // ebp
  int v25; // esi
  int *v26; // ecx
  int v27; // edx
  int v28; // ebx
  float v29; // [esp+4h] [ebp-30h]
  float v30; // [esp+4h] [ebp-30h]
  float v31; // [esp+8h] [ebp-2Ch]
  double v32; // [esp+24h] [ebp-10h]
  double v33; // [esp+24h] [ebp-10h]
  float v34; // [esp+24h] [ebp-10h]
  float v35; // [esp+24h] [ebp-10h]
  float v36; // [esp+24h] [ebp-10h]
  double v37; // [esp+2Ch] [ebp-8h]
  double v38; // [esp+2Ch] [ebp-8h]
  float v39; // [esp+38h] [ebp+4h]
  float v40; // [esp+38h] [ebp+4h]
  float v41; // [esp+38h] [ebp+4h]
  float v42; // [esp+38h] [ebp+4h]
  float v43; // [esp+38h] [ebp+4h]
  float v44; // [esp+38h] [ebp+4h]
  float v45; // [esp+3Ch] [ebp+8h]

  if ( a3 >= 0x3E9 || (unsigned int)(a3 - 0xD) <= 1 )
  {
    if ( a4 )
    {
      *(_DWORD *)(a1 + 0x48) = 0;
      sub_57BD80();
      if ( *(_DWORD *)(a1 + 0x28) )
      {
        sub_57DE50(4);
        Float = Tile_GetFloat(a4, 0xFE0);
        v8 = Double_To_SInt32(Float);
        v9 = Tile_GetFloat(a4, 0xFD1) == fConstant_2 ? Tile_GetFloat(a4, 0xFCB) * dbl_A2FAA0 : 0.0;
        v37 = v9;
        v39 = sub_588D90(a4, v9) - dbl_A2FAA0;
        Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAB, v39);
        v32 = (double)(2 * v8);
        v40 = Tile_GetFloat(a4, 0xFCB) - v32;
        Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFCB, v40);
        v41 = Tile_GetFloat(a4, 0xFCA) - v32;
        Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFCA, v41);
        v33 = (double)v8;
        v10 = sub_588C50(a4) + v33;
        v11 = v37;
        v42 = v10 - (double)Double_To_SInt32(v10);
        Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAD, v42);
        v43 = sub_588CF0(a4) + v33;
        Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAC, v43);
        Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFA1, fConstant_2);
        *(_DWORD *)(a1 + 0x48) = a4;
        if ( a3 >= 0x3E9 )
        {
          v12 = Tile_GetFloat(a4, 0xFB5);
          v13 = Double_To_SInt32(v12);
          v45 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFB5);
          InterfaceManager_GetSingleton(0, 1);
          v14 = *(_DWORD **)(a1 + 4);
          v38 = sub_57D7F0();
          v44 = v38 - Tile_GetFloat(v14, 0xFBA);
          v15 = Tile_GetFloat(a4, 0xFBB);
          v16 = Double_To_SInt32(v15);
          if ( v13 != 8 )
          {
            if ( v13 == 0x10 )
            {
              v21 = *(_DWORD *)(a1 + 0x54);
              v22 = (int *)(a1 + 0x40);
              if ( a1 != 0xFFFFFFC0 )
              {
                do
                {
                  v23 = *v22;
                  v22 = (int *)v22[1];
                  v24 = v21++;
                }
                while ( v24 != v16 && v22 );
                if ( v23 )
                {
                  v35 = sub_588D90((_DWORD *)*(_DWORD *)(a1 + 4), v15);
                  v25 = *(_DWORD *)(*(_DWORD *)v23 + 0xC);
                  v31 = sub_588CF0(a4);
                  sub_57BBF0(v24, a2, v11, v25, v45, v31, v44, v35);
                  return;
                }
              }
            }
            else
            {
              v26 = (int *)(a1 + 0x38);
              v27 = 0;
              if ( a1 != 0xFFFFFFC8 )
              {
                do
                {
                  v28 = *v26;
                  v26 = (int *)v26[1];
                  ++v27;
                }
                while ( v27 != v16 && v26 );
                if ( v28 )
                {
                  v36 = sub_588D90((_DWORD *)*(_DWORD *)(a1 + 4), v15);
                  v30 = sub_588CF0(a4);
                  sub_57BB20(v28 + 0x18, v45, v30, v44, 0, v36);
                  return;
                }
              }
            }
            PrintError("Spell item index did was not in saved list.");
            return;
          }
          v17 = (_DWORD *)dword_B14360;
          if ( dword_B14360 )
          {
            while ( 1 )
            {
              v18 = (_DWORD *)v17[2];
              v17 = (_DWORD *)*v17;
              if ( v18[1] == v16 )
                break;
              if ( !v17 )
                return;
            }
            v34 = sub_588D90((_DWORD *)*(_DWORD *)(a1 + 4), v15);
            v19 = *((_DWORD *)OblivionDynamicCast(
                                *(void **)(*v18 + 8),
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESEnchantableForm `RTTI Type Descriptor',
                                0)
                  + 1);
            if ( v19 )
              v20 = v19 + 0x18;
            else
              v20 = 0;
            v29 = sub_588CF0(a4);
            sub_57BB20(v20, v45, v29, v44, 0, v34);
          }
        }
      }
    }
  }
}
