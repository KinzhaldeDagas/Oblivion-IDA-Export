void __thiscall sub_684F40(int this, TESObjectREFR *a2)
{
  Sky *v6; // esi
  NiSurfaceData *SurfaceData; // eax
  void *v8; // ebx
  int *v9; // eax
  char *Health; // eax
  int *v11; // eax
  int *v12; // eax
  char *v13; // eax
  int *v14; // eax
  const char *v15; // eax
  char v16; // dl
  void *v17; // [esp+14h] [ebp-160h] BYREF
  char *v18; // [esp+18h] [ebp-15Ch] BYREF
  int v19; // [esp+1Ch] [ebp-158h] BYREF
  int v20; // [esp+20h] [ebp-154h]
  int v21; // [esp+24h] [ebp-150h]
  int v22; // [esp+28h] [ebp-14Ch] BYREF
  int v23; // [esp+2Ch] [ebp-148h]
  int v24; // [esp+30h] [ebp-144h]
  float v25[6]; // [esp+34h] [ebp-140h] BYREF
  char v26; // [esp+4Ch] [ebp-128h]
  char Format[260]; // [esp+60h] [ebp-114h] BYREF
  unsigned int v28; // [esp+170h] [ebp-4h]

  v6 = (Sky *)(this + 0x14);
  if ( sub_68BFB0((_DWORD *)(this + 0x14), &v18, &v17) )
  {
    if ( v18 )
    {
      SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v17);
      sub_6A2FD0(v18, (int)SurfaceData);
      v8 = v17;
      if ( v17 )
      {
        TESTexture::ClearComponentReferences(v17);
        FormHeapFree((unsigned int)v8);
      }
      v17 = 0;
      v9 = (int *)sub_6899C0(v18);
      v19 = *v9;
      v20 = v9[1];
      v21 = v9[2];
      Health = (char *)TESHealthForm_GetHealth(v6);
      v11 = (int *)sub_6899C0(Health);
      v22 = *v11;
      v23 = v11[1];
      v24 = v11[2];
    }
    else
    {
      sub_68C170((int *)v6, v17);
      v12 = (int *)a2->vtbl->GetPos(a2);
      v19 = *v12;
      v20 = v12[1];
      v21 = v12[2];
      sub_68C280((int *)v6, &v19, 0);
      v13 = (char *)TESHealthForm_GetHealth(v6);
      v14 = (int *)sub_6899C0(v13);
      v22 = *v14;
      v23 = v14[1];
      v24 = v14[2];
    }
    if ( srcObj == (TESChildCELL *)a2 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || byte_B3B908) )
    {
      v15 = a2->vtbl->super.GetEditorName(a2);
      _sprintf(Format, "Actor '%s' expanding high level path for new cells.", v15);
      Interface_ConsolePrint(Format);
    }
    sub_67D760(v25);
    v16 = *(_BYTE *)(this + 0x10);
    v28 = 0;
    v26 = v16;
    sub_67EB60(v25, (float *)&v19, (float *)&v22, a2, 0.0);
    sub_67E000((char **)v25, v6);
    sub_684000((int *)this, (Actor *)a2);
    v28 = 0xFFFFFFFF;
    TESTexture::ClearComponentReferences(v25);
  }
}
