void __usercall sub_5A2D30(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edi
  int v15; // edx
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  char *v19; // eax
  _BYTE *v20; // ecx
  TESForm *Dynamic; // edi
  double v22; // st7
  const char *RenderTargetsNum; // ebp
  char *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // ebp
  BSStringT v27[2]; // [esp-8h] [ebp-24h] BYREF
  int v28; // [esp+Ch] [ebp-10h]
  _DWORD v29[3]; // [esp+10h] [ebp-Ch]

  v11 = sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
  v12 = *(_DWORD *)(a1 + 0x28);
  v13 = v11 - *(_DWORD *)(a1 + 0x38);
  if ( v12 )
    v14 = (_DWORD *)(v12 + 0x28);
  else
    v14 = 0;
  v15 = *(_DWORD *)(a1 + 0x30);
  if ( v15 )
  {
    if ( *(_DWORD *)(a1 + 0x2C) )
    {
      if ( v14[1] || *v14 )
      {
        if ( v13 >= 0 )
        {
          if ( !*(_BYTE *)(a1 + 0x9D) && (v20 = *(_BYTE **)(v12 + 0x1C)) != 0 && *v20 )
          {
            Dynamic = TESForm_CreateDynamic(*(_BYTE *)(*(_DWORD *)(v15 + 8) + 4));
            v22 = ((double (__thiscall *)(TESForm *, _DWORD))Dynamic->vtbl->CopyFrom)(
                    Dynamic,
                    *(_DWORD *)(*(_DWORD *)(a1 + 0x30) + 8));
            TESDataHandler_AddForm((TESWorldSpace **)TESDataHandler, a3, a4, v22, *(unsigned __int8 **)(a1 + 0x28));
            RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x98));
            v24 = (char *)OblivionDynamicCast(
                            Dynamic,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESFullName `RTTI Type Descriptor',
                            0);
            BSStringT_Set((BSStringT *)(v24 + 4), RenderTargetsNum, 0);
            v25 = OblivionDynamicCast(
                    Dynamic,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEnchantableForm `RTTI Type Descriptor',
                    0);
            v26 = v25;
            if ( v25 )
            {
              v25[1] = *(_DWORD *)(a1 + 0x28);
              v28 = sub_484D70(*(ExtraDataList ****)(a1 + 0x2C));
              *(double *)v29 = (double)v28;
              v22 = *(float *)GameSetting_GetSafeFloatPointer(dword_B3B2CC) * *(double *)v29;
              v29[0] = (int)v22;
              *((_WORD *)v26 + 4) = (int)v22;
            }
            TESDataHandler_AddForm((TESWorldSpace **)TESDataHandler, a3, a4, v22, (unsigned __int8 *)Dynamic);
            sub_5A2F1B((int)Dynamic, 0, (_DWORD *)a1, a3, a4);
          }
          else
          {
            sub_5A2FFD(a6, a7, a8, a9, a10);
          }
        }
        else
        {
          v19 = (char *)sNotEnoughGold;
          v29[1] = v27;
          BSStringT_constr_str(v27, v19);
          ShowMessageBox__(a1, a2, a3, a4, a5, v27[0].m_data, *(int *)&v27[0].m_dataLen);
        }
      }
      else
      {
        v18 = (const char *)sNoFX;
        v29[1] = v27;
        v27[0].m_data = 0;
        v27[0].m_dataLen = 0;
        v27[0].m_bufLen = 0;
        BSStringT_Set(v27, v18, 0);
        ShowMessageBox__(a1, a2, a3, a4, a5, v27[0].m_data, *(int *)&v27[0].m_dataLen);
      }
    }
    else
    {
      v17 = (const char *)sNoSoul;
      v29[1] = v27;
      v27[0].m_data = 0;
      v27[0].m_dataLen = 0;
      v27[0].m_bufLen = 0;
      BSStringT_Set(v27, v17, 0);
      ShowMessageBox__(a1, a2, a3, a4, a5, v27[0].m_data, *(int *)&v27[0].m_dataLen);
    }
  }
  else
  {
    v16 = (const char *)sNoItem;
    v29[1] = v27;
    v27[0].m_data = 0;
    v27[0].m_dataLen = 0;
    v27[0].m_bufLen = 0;
    BSStringT_Set(v27, v16, 0);
    ShowMessageBox__(a1, a2, a3, a4, a5, v27[0].m_data, *(int *)&v27[0].m_dataLen);
  }
}
