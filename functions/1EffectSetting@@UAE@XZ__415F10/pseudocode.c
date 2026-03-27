void __cdecl EffectSetting::~EffectSetting(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  TESModel *v9; // ecx
  TESModel *v10; // esi
  TESModel *v11; // edi
  void **p_unk14; // ebp
  float editorSize; // eax

  v10 = v9;
  v11 = v9 + 1;
  p_unk14 = &v9[2].unk14;
  v9->vtbl = (TESModelVtbl *)&EffectSetting::`vftable'{for `EffectSetting'};
  v9[1].vtbl = (TESModelVtbl *)&EffectSetting::`vftable'{for `TESModel'};
  v9[2].vtbl = (TESModelVtbl *)&EffectSetting::`vftable'{for `TESDescription'};
  *(_DWORD *)&v9[2].nifModel.m_dataLen = &EffectSetting::`vftable'{for `TESFullName'};
  v9[2].unk14 = &EffectSetting::`vftable'{for `TESIcon'};
  editorSize = v9[6].editorSize;
  if ( editorSize != 0.0 )
    MemoryHeap_Free_checked((void *)LODWORD(editorSize));
  j_TESForm_ClearComponentReferences((TESForm *)v10);
  TESTexture_destr(p_unk14);
  FormHeapFree(LODWORD(v10[2].editorSize));
  v10[2].editorSize = 0.0;
  *(_WORD *)&v10[2].pad11[1] = 0;
  *(_WORD *)&v10[2].unk10 = 0;
  TESModel::~TESModel(v11);
  TESForm_destr((TESForm *)v10);
  EffectSetting::~EffectSetting(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
