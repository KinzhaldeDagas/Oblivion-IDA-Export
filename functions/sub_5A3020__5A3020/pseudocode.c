void __userpurge sub_5A3020(int a1@<ecx>, double a2@<st1>, double a3@<st0>, _DWORD *a4)
{
  int *v6; // esi
  int v7; // edi
  double Float; // st5
  int v9; // eax
  int v10; // esi
  unsigned int *v11; // edi
  int v12; // eax
  BSStringT v13; // [esp-8h] [ebp-28h] BYREF
  int v14; // [esp+0h] [ebp-20h]
  int v15; // [esp+4h] [ebp-1Ch]
  int v16; // [esp+8h] [ebp-18h]
  int v17; // [esp+Ch] [ebp-14h]
  int v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]

  v6 = *(int **)(a1 + 0x90);
  v7 = 0;
  Float = Tile_GetFloat(a4, 0xFAE);
  v9 = Double_To_SInt32(a3);
  if ( v6 )
  {
    while ( v7 != v9 )
    {
      v6 = (int *)v6[1];
      ++v7;
      if ( !v6 )
        return;
    }
    v10 = *v6;
    if ( v10 )
    {
      if ( EffectItemList_HasEffect((_DWORD *)(*(_DWORD *)(a1 + 0x28) + 0x24), *(_DWORD *)(v10 + 0x98), 0x48)
        && (*(_DWORD *)(v10 + 0x58) & 0x180000) == 0 )
      {
        v13.m_data = 0;
        v13.m_dataLen = 0;
        v13.m_bufLen = 0;
        BSStringT_Set(&v13, "That effect has already been added.  Edit the effect instead.", 0);
        ShowMessageBox__(a1, 0, Float, a2, a3, v13.m_data, *(int *)&v13.m_dataLen);
      }
      else
      {
        v21 = 0;
        if ( FormHeapAlloc(0x24u) )
          v11 = (unsigned int *)EffectItem_constr(v10);
        else
          v11 = 0;
        v12 = *(_DWORD *)(v10 + 0x58);
        v21 = 0xFFFFFFFF;
        if ( (v12 & 0x80000) != 0 )
        {
          v11[5] = 0xC;
        }
        else if ( (v12 & 0x100000) != 0 )
        {
          v11[5] = 0;
        }
        EffectItem_SetEffectSetting(v11, v10, v14, v15, v16, v17, v18, v19, v20, v21);
        EffectSettingsMenu_Create(Float, a2, a3, v11, 1);
        if ( v11 )
        {
          EffectItem_destr(v11);
          FormHeapFree((unsigned int)v11);
        }
      }
    }
  }
}
