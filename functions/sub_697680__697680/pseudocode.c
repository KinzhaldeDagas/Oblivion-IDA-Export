void __userpurge sub_697680(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        float a7)
{
  bhkCharacterProxy *CharProxy; // edi
  int v9; // ecx
  int v10; // esi
  MobileObject *v11; // ecx
  signed int vtbl_high; // esi
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  PlayerCharacter *v26; // eax
  unsigned int v27; // ebp
  _DWORD *v28; // eax
  float *v29; // eax
  void *v30; // ecx
  void *v31; // ecx
  float *v32; // eax
  bhkCharacterProxy *v33; // eax
  bhkCharacterProxy *v34; // eax
  unsigned int v35; // esi
  unsigned __int16 *v36; // eax
  unsigned __int16 v37; // ax
  unsigned int v38; // edi
  int v39; // eax
  float v40; // [esp+8h] [ebp-5Ch]
  float v41; // [esp+8h] [ebp-5Ch]
  float v42; // [esp+Ch] [ebp-58h]
  float v43; // [esp+Ch] [ebp-58h]
  float v44; // [esp+Ch] [ebp-58h]
  int v45; // [esp+Ch] [ebp-58h]
  double v46; // [esp+20h] [ebp-44h]
  float v47; // [esp+28h] [ebp-3Ch]
  float v48; // [esp+2Ch] [ebp-38h]
  float v49; // [esp+30h] [ebp-34h]
  float v50; // [esp+34h] [ebp-30h]
  float v51; // [esp+38h] [ebp-2Ch]
  float v52; // [esp+3Ch] [ebp-28h]
  float v53[9]; // [esp+40h] [ebp-24h] BYREF

  MobilObject_PostLinkModifiedForm(a1, a2, a3, a4, a5, a6, SLODWORD(a7));
  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
  if ( CharProxy )
  {
    v9 = *(_DWORD *)(a1 + 0x68);
    if ( v9 && (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x20))(v9) )
    {
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x68) + 0x20))(*(_DWORD *)(a1 + 0x68));
      v11 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x190))(v10) != 0 ? (MobileObject *)v10 : 0;
      if ( v11 )
      {
        vtbl_high = HIWORD(sub_65ABE0(v11, (TESObjectREFR *)&a7)->vtbl);
      }
      else
      {
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x154))(v10);
        v14 = sub_480340(v13);
        if ( v14 && (v15 = *(_DWORD **)(v14 + 0x10)) != 0 )
          vtbl_high = *((unsigned __int16 *)sub_497340(v15, &a7) + 1);
        else
          vtbl_high = sub_531D80();
      }
    }
    else
    {
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1);
      v17 = sub_480340(v16);
      if ( v17 && (v18 = *(_DWORD *)(v17 + 0x10)) != 0 )
      {
        v19 = *(_DWORD *)(v18 + 8);
        if ( v19 && (v20 = v19 + 0x14) != 0 )
          vtbl_high = HIWORD(*(_DWORD *)(v20 + 0x1C));
        else
          vtbl_high = 0;
      }
      else
      {
        vtbl_high = (unsigned __int16)(dword_B2EB3C + 1);
        dword_B2EB3C = vtbl_high;
        if ( !vtbl_high )
        {
          vtbl_high = 0xA;
          dword_B2EB3C = 0xA;
        }
      }
    }
    sub_57E270(CharProxy, &a7);
    v21 = *((_DWORD **)CharProxy + 0xD9);
    v22 = LOWORD(a7) & 0xFFC0 | 7 | (vtbl_high << 0x10);
    if ( v21 )
    {
      v23 = v21[2];
      if ( v23 )
      {
        v24 = v23 + 0x14;
        if ( v24 )
          *(_DWORD *)(v24 + 0x1C) = v22;
      }
      (*(void (__thiscall **)(_DWORD *))(*v21 + 0x80))(v21);
    }
  }
  v25 = *(_DWORD *)(a1 + 0x68);
  if ( v25 )
    v26 = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x20))(v25);
  else
    v26 = 0;
  if ( v26 != TESDataHandler_g_PlayerRef )
    fNumberOfWeightedProjectileExisting = fMagicTrackingMultBolt + fNumberOfWeightedProjectileExisting;
  v27 = *(_DWORD *)(a1 + 0x84);
  if ( v27 )
  {
    v28 = *(_DWORD **)(a1 + 0x88);
    if ( v28 )
    {
      v28[0x15] = *(_DWORD *)v27;
      v28[0x16] = *(_DWORD *)(v27 + 4);
      v28[0x17] = *(_DWORD *)(v27 + 8);
      sub_47C600((NiTransform *)(v27 + 0xC), (NiTransform *)(*(_DWORD *)(a1 + 0x88) + 0x30));
      LOBYTE(a7) = *(_DWORD *)(a1 + 0x80) != 0;
      v29 = *(float **)(a1 + 0x90);
      if ( v29 )
      {
        v42 = a7;
        v50 = v29[0x22] - *(float *)v27;
        v51 = v29[0x23] - *(float *)(v27 + 4);
        v52 = v29[0x24] - *(float *)(v27 + 8);
        v46 = v50 * v50 + v51 * v51;
        v40 = *(float *)(a1 + 0x5C);
        a7 = v46 + v52 * v52;
        a7 = sqrt(a7);
        sub_7F3530(*(_DWORD *)(a1 + 0x7C), *(float *)(v27 + 0x1C), a7, v40, v42);
        a7 = 0.0 * 0.0 + v46;
        a7 = sqrt(a7);
        sub_98598A(v30);
        a7 = v52;
        v43 = -v52;
        sub_98598A(v31);
        a7 = v50;
        sub_7118E0(v53, v50, 0.0, v43);
        qmemcpy((void *)(*(_DWORD *)(a1 + 0x88) + 0x30), v53, 0x24u);
      }
      else
      {
        v32 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1);
        v47 = *(float *)v27 - *v32;
        v44 = a7;
        v48 = *(float *)(v27 + 4) - v32[1];
        v49 = *(float *)(v27 + 8) - v32[2];
        v41 = *(float *)(a1 + 0x5C);
        a7 = v48 * v48 + v47 * v47 + v49 * v49;
        a7 = sqrt(a7);
        sub_7F3530(*(_DWORD *)(a1 + 0x7C), *(float *)(v27 + 0x1C), a7, v41, v44);
        if ( nullsub_returnFalse_0arg() || *(_DWORD *)(a1 + 0x80) == 2 )
        {
          *(_DWORD *)(a1 + 0x80) = 2;
          v33 = MobileObject_GetCharProxy((MobileObject *)a1);
          sub_57E270(v33, &a7);
          v45 = LODWORD(a7) | 0x4000;
          v34 = MobileObject_GetCharProxy((MobileObject *)a1);
          sub_694FC0(v34, v45);
        }
      }
    }
    v35 = 0;
    *(_DWORD *)(a1 + 0x84) = 0;
    v36 = *(unsigned __int16 **)(v27 + 0x20);
    if ( v36 )
    {
      v37 = *v36;
      v38 = v37;
      if ( v37 )
      {
        do
        {
          v39 = MagicTarget_LookupByFormID(*(_DWORD *)(*(_DWORD *)(v27 + 0x20) + 4 * v35 + 4));
          if ( v39 )
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 0x20C))(a1, v39, 0);
          ++v35;
        }
        while ( v35 < v38 );
      }
    }
    FormHeapFree(v27);
  }
}
