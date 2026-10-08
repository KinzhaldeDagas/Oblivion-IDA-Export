void __usercall sub_5A2D30(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // edx
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  char *value; // eax
  _BYTE *v15; // ecx
  TESForm *Dynamic; // edi
  double v17; // st7
  const char *RenderTargetsNum; // ebp
  char *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // ebp
  BSStringT v22[2]; // [esp-8h] [ebp-24h] BYREF
  int v23; // [esp+Ch] [ebp-10h]
  _DWORD v24[3]; // [esp+10h] [ebp-Ch]

  v6 = sub_5E4420((Actor *)reference); /*0x5a2d3f*/
  v7 = *(_DWORD *)(a1 + 0x28); /*0x5a2d44*/
  v8 = v6 - *(_DWORD *)(a1 + 0x38); /*0x5a2d47*/
  if ( v7 ) /*0x5a2d4e*/
    v9 = (_DWORD *)(v7 + 0x28); /*0x5a2d50*/
  else
    v9 = 0; /*0x5a2d55*/
  v10 = *(_DWORD *)(a1 + 0x30); /*0x5a2d57*/
  if ( v10 ) /*0x5a2d5c*/
  {
    if ( *(_DWORD *)(a1 + 0x2C) ) /*0x5a2d8c*/
    {
      if ( v9[1] || *v9 ) /*0x5a2dc4*/
      {
        if ( v8 >= 0 ) /*0x5a2df8*/
        {
          if ( *(_BYTE *)(a1 + 0x9D) ) /*0x5a2e1d*/
          {
            sub_5A2FFD((char *)MEMORY[0xB389C8].value, a2, a1, a3, a4, a5); /*0x5a2e2b*/
          }
          else
          {
            v15 = *(_BYTE **)(v7 + 0x1C); /*0x5a2e30*/
            if ( v15 && *v15 ) /*0x5a2e3b*/
            {
              Dynamic = (TESForm *)TESForm_CreateDynamic(*(_BYTE *)(*(_DWORD *)(v10 + 8) + 4)); /*0x5a2e50*/
              v17 = ((double (__thiscall *)(TESForm *, _DWORD))Dynamic->vtbl->CopyFrom)( /*0x5a2e66*/
                      Dynamic,
                      *(_DWORD *)(*(_DWORD *)(a1 + 0x30) + 8));
              TESDataHandler_AddForm(g_TESDataHandler, a3, a4, v17, *(TESForm **)(a1 + 0x28)); /*0x5a2e72*/
              RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x98)); /*0x5a2e8f*/
              v19 = (char *)OblivionDynamicCast( /*0x5a2e91*/
                              Dynamic,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESFullName `RTTI Type Descriptor',
                              0);
              BSStringT_Set((BSStringT *)(v19 + 4), RenderTargetsNum, 0); /*0x5a2e9e*/
              v20 = OblivionDynamicCast( /*0x5a2eb0*/
                      Dynamic,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESEnchantableForm `RTTI Type Descriptor',
                      0);
              v21 = v20; /*0x5a2eb5*/
              if ( v20 ) /*0x5a2ebc*/
              {
                v20[1] = *(_DWORD *)(a1 + 0x28); /*0x5a2ec1*/
                v23 = sub_484D70(*(ExtraDataList ****)(a1 + 0x2C)); /*0x5a2ecc*/
                v17 = (double)v23; /*0x5a2ed0*/
                *(double *)v24 = v17; /*0x5a2ed9*/
                v24[0] = (int)(*GameSetting_GetSafeFloatPointer((float *)&dword_B3B0B4[0x86]) * v17); /*0x5a2efe*/
                *((_WORD *)v21 + 4) = v24[0]; /*0x5a2f07*/
              }
              TESDataHandler_AddForm(g_TESDataHandler, a3, a4, v17, Dynamic); /*0x5a2f16*/
              sub_5A2F1B((int)Dynamic, 0, (_DWORD *)a1, a3, a4); /*0x5a2f17*/
            }
            else
            {
              sub_5A2FFD((char *)MEMORY[0xB389D0].value, a2, a1, a3, a4, a5); /*0x5a2ff8*/
            }
          }
        }
        else
        {
          value = (char *)MEMORY[0xB38DB0].value; /*0x5a2dfa*/
          v24[1] = v22; /*0x5a2e04*/
          BSStringT_constr_str(v22, value); /*0x5a2e09*/
          ShowMessageBox__((char *)a1, a2, a3, a4, a5, v22[0].m_data, *(int *)&v22[0].m_dataLen); /*0x5a2e10*/
        }
      }
      else
      {
        v13 = MEMORY[0xB389C0].value; /*0x5a2dc8*/
        v24[1] = v22; /*0x5a2dd2*/
        v22[0].m_data = 0; /*0x5a2dd8*/
        v22[0].m_dataLen = 0; /*0x5a2dda*/
        v22[0].m_bufLen = 0; /*0x5a2dde*/
        BSStringT_Set(v22, v13, 0); /*0x5a2de2*/
        ShowMessageBox__((char *)a1, a2, a3, a4, a5, v22[0].m_data, *(int *)&v22[0].m_dataLen); /*0x5a2de9*/
      }
    }
    else
    {
      v12 = MEMORY[0xB389B8].value; /*0x5a2d91*/
      v24[1] = v22; /*0x5a2d9b*/
      v22[0].m_data = 0; /*0x5a2da1*/
      v22[0].m_dataLen = 0; /*0x5a2da3*/
      v22[0].m_bufLen = 0; /*0x5a2da7*/
      BSStringT_Set(v22, v12, 0); /*0x5a2dab*/
      ShowMessageBox__((char *)a1, a2, a3, a4, a5, v22[0].m_data, *(int *)&v22[0].m_dataLen); /*0x5a2db2*/
    }
  }
  else
  {
    v11 = MEMORY[0xB389B0].value; /*0x5a2d5e*/
    v24[1] = v22; /*0x5a2d68*/
    v22[0].m_data = 0; /*0x5a2d6e*/
    v22[0].m_dataLen = 0; /*0x5a2d70*/
    v22[0].m_bufLen = 0; /*0x5a2d74*/
    BSStringT_Set(v22, v11, 0); /*0x5a2d78*/
    ShowMessageBox__((char *)a1, a2, a3, a4, a5, v22[0].m_data, *(int *)&v22[0].m_dataLen); /*0x5a2d7f*/
  }
}
