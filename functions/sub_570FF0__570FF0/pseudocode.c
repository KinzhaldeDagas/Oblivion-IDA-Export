char __usercall sub_570FF0@<al>(Ni2DBuffer **this@<ecx>, int ebp0@<ebp>)
{
  UInt32 *v4; // esi
  TESForm *v5; // eax
  const char *v6; // eax
  TESSaveLoad *v7; // ecx
  void *v8; // eax
  NiAVObject **v9; // ebp
  Ni2DBuffer *v10; // eax
  int v11; // edx
  Ni2DBuffer *v12; // edx
  float *v13; // eax
  float v14; // ecx
  NiTransform *p_m_localTransform; // edi
  int p_pos; // edi
  signed int a2; // eax
  int v18; // eax
  double v19; // st7
  NiAVObject *v20; // ecx
  NiObject *v21; // eax
  TESSaveLoad *v22; // ecx
  UInt32 *v23; // edi
  UInt32 v24; // esi
  TESForm *v25; // eax
  UInt32 v26; // ebx
  UInt32 v27; // ecx
  const char *v28; // eax
  const char *v29; // eax
  UInt32 v30; // edi
  int v32; // [esp+Ch] [ebp-178h]
  size_t v33; // [esp+Ch] [ebp-178h]
  size_t v34; // [esp+Ch] [ebp-178h]
  size_t v35; // [esp+Ch] [ebp-178h]
  size_t v36; // [esp+Ch] [ebp-178h]
  size_t v37; // [esp+Ch] [ebp-178h]
  size_t v38; // [esp+Ch] [ebp-178h]
  int v39; // [esp+Ch] [ebp-178h]
  int v40; // [esp+Ch] [ebp-178h]
  size_t v41; // [esp+10h] [ebp-174h]
  size_t v42; // [esp+10h] [ebp-174h]
  int v43; // [esp+10h] [ebp-174h]
  int v44; // [esp+10h] [ebp-174h]
  int v45; // [esp+10h] [ebp-174h]
  char v46; // [esp+22h] [ebp-162h]
  unsigned __int8 v47; // [esp+23h] [ebp-161h] BYREF
  float v48; // [esp+24h] [ebp-160h] BYREF
  int v49; // [esp+28h] [ebp-15Ch] BYREF
  float v50; // [esp+2Ch] [ebp-158h]
  UInt32 v51; // [esp+30h] [ebp-154h]
  int Dst; // [esp+34h] [ebp-150h] BYREF
  float v53; // [esp+38h] [ebp-14Ch] BYREF
  float v54[3]; // [esp+3Ch] [ebp-148h] BYREF
  NiTransform v55; // [esp+48h] [ebp-13Ch] BYREF
  char v56[260]; // [esp+7Ch] [ebp-108h] BYREF

  v49 = 0;
  v51 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v41) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v41);
    if ( Dst != 0x4B4F4C42 )
    {
      v4 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v4 )
      {
        v5 = TESForm_LookupByFormID(*v4);
        v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v5->vtbl->GetEditorName)(
                             v5,
                             *((unsigned __int8 *)v4 + 9),
                             *(UInt32 *)((char *)v4 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
          0x134,
          *v4,
          v6,
          v32,
          v43);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
          0x134,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v42) = 2;
    v51 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)v7, &v49, v42);
  }
  HIDWORD(v33) = ebp0;
  v46 = sub_56BCA0(this);
  LODWORD(v33) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v47, v33);
  _memset(v56, 0, sizeof(v56));
  LODWORD(v34) = v47;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v56, v34);
  LODWORD(v35) = 0x10;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v55, v35);
  sub_47C600(&v55, (NiTransform *)&v55.rot.data[1][1]);
  LODWORD(v36) = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v54, v36);
  LODWORD(v37) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v53, v37);
  LODWORD(v38) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v48, v38);
  if ( !v46 )
    goto LABEL_16;
  v8 = (void *)sub_439EB0((int *)ModelLoaderPtr, v56, 0, 0, 1);
  if ( !v8
    || (v9 = (NiAVObject **)(this + 6),
        v10 = (Ni2DBuffer *)sub_700900(v8),
        NiSmartPointer_Set__(this + 6, v10),
        !*(this + 6)) )
  {
LABEL_15:
    v46 = 0;
LABEL_16:
    if ( LOWORD(v48) )
      SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, LOWORD(v48));
    goto LABEL_18;
  }
  v12 = *(Ni2DBuffer **)ModelLoader_IsModelLoaded__(ModelLoaderPtr, v11, (int)v56);
  v13 = (float *)*v9;
  v14 = v54[0];
  *(this + 7) = v12;
  v13[0x15] = v14;
  v13 += 0x15;
  v13[1] = v54[1];
  v13[2] = v54[2];
  p_m_localTransform = &(*v9)->members.m_localTransform;
  qmemcpy(p_m_localTransform, &v55.rot.data[1][1], 0x24u);
  p_pos = (int)&p_m_localTransform->pos;
  v50 = fabs(v53);
  (*v9)->members.m_localTransform.scale = v50;
  a2 = sub_4C9C80(*(this + 3), v54);
  v18 = sub_441800((TESObjectCELL *)*(this + 3), a2, 3u);
  (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v18 + 0x84))(v18, *v9, 1);
  NiAVObject_InitializePropertyState(*v9);
  v19 = (double)(int)Seed;
  if ( (int)Seed < 0 )
    v19 = v19 + flt_A2FC78;
  v20 = *v9;
  v50 = v19 / dbl_A2FC70;
  NiAVObject_UpdateNiAVObject(v20, v50, 1);
  sub_715B40((int)*v9);
  if ( LOWORD(v48) )
  {
    v21 = NiRTTI_Cast(&stru_B3CAC0, (NiObject *)(*v9)->members.super.m_controller);
    if ( v21 )
    {
      sub_4DA8F0(p_pos, (int)v56, (int)v21, *v9, flt_A30634);
      goto LABEL_18;
    }
    goto LABEL_15;
  }
LABEL_18:
  if ( sub_45A170() )
  {
    v22 = SaveLoad_CurrentSavegame;
    v23 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v24 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v23 )
    {
      v25 = TESForm_LookupByFormID(*v23);
      v26 = v51;
      v27 = v51 + (unsigned __int16)v49;
      if ( v24 <= v27 )
      {
        if ( v24 < v27 )
        {
          v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v25->vtbl->GetEditorName)(
                                v25,
                                *((unsigned __int8 *)v23 + 9),
                                *(UInt32 *)((char *)v23 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v26 + (unsigned __int16)v49 - v24,
            "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
            0x17A,
            *v23,
            v29,
            v40,
            v45);
        }
      }
      else
      {
        v28 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v25->vtbl->GetEditorName)(
                              v25,
                              *((unsigned __int8 *)v23 + 9),
                              *(UInt32 *)((char *)v23 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v24 - (unsigned __int16)v49 - v26,
          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
          0x17A,
          *v23,
          v28,
          v39,
          v44);
      }
    }
    else
    {
      v30 = (unsigned __int16)v49 + v51;
      if ( v24 <= v30 )
      {
        if ( v24 < v30 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v51 + (unsigned __int16)v49 - v24,
            "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
            0x17A,
            LOBYTE(v22[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v24 - (unsigned __int16)v49 - v51,
          "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp",
          0x17A,
          LOBYTE(v22[1].createdObjectList.next));
      }
    }
  }
  return v46;
}
