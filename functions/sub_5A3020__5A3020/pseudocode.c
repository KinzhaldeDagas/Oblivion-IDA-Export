void __userpurge sub_5A3020(
        int a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        _DWORD *a8)
{
  int *v9; // esi
  int v10; // edi
  double Float; // st5
  int v12; // eax
  int v13; // esi
  unsigned int *v14; // edi
  int v15; // eax
  BSStringT v16; // [esp-8h] [ebp-28h] BYREF
  int v17; // [esp+0h] [ebp-20h]
  int v18; // [esp+4h] [ebp-1Ch]
  int v19; // [esp+8h] [ebp-18h]
  int v20; // [esp+Ch] [ebp-14h]
  int v21; // [esp+10h] [ebp-10h]
  int v22; // [esp+14h] [ebp-Ch]
  int v23; // [esp+18h] [ebp-8h]
  unsigned int v24; // [esp+1Ch] [ebp-4h]

  v9 = *(int **)(a1 + 0x90); /*0x5a304a*/
  v10 = 0; /*0x5a3057*/
  Float = Tile_GetFloat(a8, 0xFAE); /*0x5a3059*/
  v12 = Double_To_SInt32(a3); /*0x5a305e*/
  if ( v9 ) /*0x5a3065*/
  {
    while ( v10 != v12 ) /*0x5a3072*/
    {
      v9 = (int *)v9[1]; /*0x5a3074*/
      ++v10; /*0x5a3077*/
      if ( !v9 ) /*0x5a307c*/
        return; /*0x5a307c*/
    }
    v13 = *v9; /*0x5a3083*/
    if ( v13 ) /*0x5a3087*/
    {
      if ( EffectItemList_HasEffect((_DWORD *)(*(_DWORD *)(a1 + 0x28) + 0x24), *(_DWORD *)(v13 + 0x98), 0x48) /*0x5a30ac*/
        && (*(_DWORD *)(v13 + 0x58) & 0x180000) == 0 )
      {
        v16.m_data = 0; /*0x5a3132*/
        v16.m_dataLen = 0; /*0x5a3134*/
        v16.m_bufLen = 0; /*0x5a3138*/
        BSStringT_Set(&v16, "That effect has already been added.  Edit the effect instead.", 0); /*0x5a313c*/
        ShowMessageBox__((char *)a1, 0, Float, a2, a3, v16.m_data, *(int *)&v16.m_dataLen); /*0x5a3143*/
      }
      else
      {
        v24 = 0; /*0x5a30be*/
        if ( FormHeapAlloc(0x24u) ) /*0x5a30b0*/
          v14 = (unsigned int *)EffectItem_constr(v13); /*0x5a30cc*/
        else
          v14 = 0; /*0x5a30d0*/
        v15 = *(_DWORD *)(v13 + 0x58); /*0x5a30d2*/
        v24 = 0xFFFFFFFF; /*0x5a30dd*/
        if ( (v15 & 0x80000) != 0 ) /*0x5a30e5*/
        {
          v14[5] = 0xC; /*0x5a30e7*/
        }
        else if ( (v15 & 0x100000) != 0 ) /*0x5a30f5*/
        {
          v14[5] = 0; /*0x5a30f7*/
        }
        EffectItem_SetEffectSetting(v14, v13, v17, v18, v19, v20, v21, v22, v23, v24); /*0x5a30fd*/
        EffectSettingsMenu_Create(Float, a2, a3, a4, a5, a6, a7, v14, 1); /*0x5a3105*/
        if ( v14 ) /*0x5a310f*/
        {
          EffectItem_destr(v14); /*0x5a3113*/
          FormHeapFree((unsigned int)v14); /*0x5a3119*/
        }
      }
    }
  }
}
