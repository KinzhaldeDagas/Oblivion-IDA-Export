// Non-player base vampirism reconstruction: skips formID 7; scans NPC and race spell lists, selects spell-type 4 and VAMP effect code 0x504D4156, sums EffectItem magnitudes, converts to integer, sets base AV 0x45 via virtual+0x134. Supports identifying FaceGen bank selector 0x45 as vampirism, not sex.
void __thiscall TESNPC_RecomputeBaseVampirismFromSpells(int *this)
{
  int *v2; // edi
  int v3; // esi
  int i; // esi
  _DWORD *v5; // ecx
  int v6; // esi
  int v7; // eax
  int *v8; // edi
  int v9; // esi
  int j; // esi
  _DWORD *v11; // ecx
  int v12; // esi
  int v13; // esi
  int v14; // eax
  float v15; // [esp+4h] [ebp-8h]

  if ( *(this + 3) != 7 ) /*0x5239ca*/
  {
    v15 = 0.0; /*0x5239d4*/
    v2 = this + 0x16; /*0x5239d8*/
    if ( this != (int *)0xFFFFFFA8 ) /*0x5239dd*/
    {
      do /*0x523a47*/
      {
        if ( !v2[1] && !*v2 ) /*0x5239e6*/
          break; /*0x5239e9*/
        v3 = *v2; /*0x5239eb*/
        if ( *v2 ) /*0x5239eb*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 0x18) + 0x18))(v3 + 0x18) == 4 ) /*0x5239ff*/
          {
            for ( i = v3 + 0x24; i; i = v6 - 4 ) /*0x523a04*/
            {
              if ( !*(_DWORD *)(i + 8) && !*(_DWORD *)(i + 4) ) /*0x523a0c*/
                break; /*0x523a10*/
              v5 = *(_DWORD **)(i + 4); /*0x523a12*/
              if ( v5 ) /*0x523a17*/
              {
                if ( *v5 == 0x504D4156 ) /*0x523a1f*/
                  v15 = (double)EffectItem_GetMagnitude(v5) + v15; /*0x523a32*/
              }
              v6 = *(_DWORD *)(i + 8); /*0x523a36*/
              if ( !v6 ) /*0x523a3b*/
                break; /*0x523a3b*/
            }
          }
        }
        v2 = (int *)v2[1]; /*0x523a42*/
      }
      while ( v2 ); /*0x523a47*/
    }
    v7 = *(this + 0x3A); /*0x523a49*/
    if ( v7 ) /*0x523a51*/
    {
      v8 = (int *)(v7 + 0x30); /*0x523a53*/
      if ( v7 != 0xFFFFFFD0 ) /*0x523a58*/
      {
        do /*0x523ac7*/
        {
          if ( !v8[1] && !*v8 ) /*0x523a66*/
            break; /*0x523a69*/
          v9 = *v8; /*0x523a6b*/
          if ( *v8 ) /*0x523a6b*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 0x18) + 0x18))(v9 + 0x18) == 4 ) /*0x523a7f*/
            {
              for ( j = v9 + 0x24; j; j = v12 - 4 ) /*0x523a84*/
              {
                if ( !*(_DWORD *)(j + 8) && !*(_DWORD *)(j + 4) ) /*0x523a8c*/
                  break; /*0x523a90*/
                v11 = *(_DWORD **)(j + 4); /*0x523a92*/
                if ( v11 ) /*0x523a97*/
                {
                  if ( *v11 == 0x504D4156 ) /*0x523a9f*/
                    v15 = (double)EffectItem_GetMagnitude(v11) + v15; /*0x523ab2*/
                }
                v12 = *(_DWORD *)(j + 8); /*0x523ab6*/
                if ( !v12 ) /*0x523abb*/
                  break; /*0x523abb*/
              }
            }
          }
          v8 = (int *)v8[1]; /*0x523ac2*/
        }
        while ( v8 ); /*0x523ac7*/
      }
    }
    v13 = *this; /*0x523acd*/
    v14 = Double_To_SInt32(v15); /*0x523acf*/
    (*(void (__thiscall **)(int *, int, int))(v13 + 0x134))(this, 0x45, v14); /*0x523adf*/
  }
}
