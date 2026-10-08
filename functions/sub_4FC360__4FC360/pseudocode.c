void __usercall sub_4FC360(double a1@<st0>, int a2, int *a3, int *a4)
{
  int v4; // eax
  bool v5; // zf
  NiPointerList_Node_BSImageSpaceShader *start; // ecx
  int v7; // edi
  int v8; // esi
  double v9; // st6
  double v10; // st5
  double v11; // st6
  NiPointerList_Node_BSImageSpaceShader *v12; // eax
  double v13; // st6
  double v14; // st6
  double v15; // st5
  double v16; // st7
  NiPointerList_Node_BSImageSpaceShader *i; // ebx
  BSImageSpaceShader *data; // ecx
  const char *v19; // esi
  UInt8 (__thiscall *SetRenderer)(NiD3DShaderInterface *, NiDX9Renderer); // eax
  const char *v21; // eax
  double v22; // st7
  int v23; // ecx
  float v24; // [esp+0h] [ebp-254h]
  float v25; // [esp+0h] [ebp-254h]
  double v26; // [esp+0h] [ebp-254h]
  float v27; // [esp+0h] [ebp-254h]
  float v28; // [esp+4h] [ebp-250h]
  float v29; // [esp+4h] [ebp-250h]
  float v30; // [esp+4h] [ebp-250h]
  double v31; // [esp+8h] [ebp-24Ch]
  double v32; // [esp+8h] [ebp-24Ch]
  int v33; // [esp+44h] [ebp-210h]
  int v34; // [esp+44h] [ebp-210h]
  int v35; // [esp+44h] [ebp-210h]
  float v36; // [esp+48h] [ebp-20Ch]
  NiTPointerList__BSImageSpaceShader v37; // [esp+4Ch] [ebp-208h] BYREF
  int v38; // [esp+68h] [ebp-1ECh]
  int v39; // [esp+6Ch] [ebp-1E8h]
  int *v40; // [esp+70h] [ebp-1E4h]
  int v41; // [esp+74h] [ebp-1E0h]
  int *v42; // [esp+78h] [ebp-1DCh]
  char v43[404]; // [esp+7Ch] [ebp-1D8h] BYREF
  unsigned int v44; // [esp+250h] [ebp-4h]
  int savedregs; // [esp+254h] [ebp+0h] BYREF

  *(float *)&v37.renderTarget = 0.0; /*0x4fc3a8*/
  v40 = a3; /*0x4fc3ac*/
  v33 = *a3; /*0x4fc3b4*/
  v4 = g_TESDataHandler; /*0x4fc3b8*/
  v5 = g_TESDataHandler == 0; /*0x4fc3bd*/
  v42 = a4; /*0x4fc3bf*/
  v41 = *a4; /*0x4fc3c5*/
  v39 = 0; /*0x4fc3c9*/
  v38 = 0; /*0x4fc3cd*/
  v37.unk18 = 0; /*0x4fc3d1*/
  if ( !v5 )
  {
    start = 0; /*0x4fc3db*/
    v7 = v4 + 0x64; /*0x4fc3dd*/
    memset(&v37.start, 0, 0xC); /*0x4fc3e4*/
    v37.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerList<Script *>::`vftable'; /*0x4fc3ec*/
    v44 = 0; /*0x4fc3f6*/
    if ( v4 != 0xFFFFFF9C && (*(_DWORD *)(v4 + 0x68) || *(_DWORD *)v7) )
    {
      while ( 1 ) /*0x4fc416*/
      {
        v8 = *(_DWORD *)v7; /*0x4fc416*/
        v9 = *(float *)(*(_DWORD *)v7 + 0x34); /*0x4fc418*/
        v37.unk10 = *(NiGeometry **)v7; /*0x4fc41b*/
        v36 = v9; /*0x4fc41f*/
        v10 = v36; /*0x4fc425*/
        v11 = v36; /*0x4fc42d*/
        if ( v36 > 0.0 ) /*0x4fc432*/
        {
          v10 = v11 + *(float *)&v37.renderTarget; /*0x4fc43f*/
          ++v39; /*0x4fc443*/
          v5 = *(_BYTE *)(v8 + 0x28) == 0; /*0x4fc447*/
          *(float *)&v37.renderTarget = v10; /*0x4fc44b*/
          if ( v5 ) /*0x4fc44f*/
          {
            if ( *(_BYTE *)(v8 + 0x29) ) /*0x4fc457*/
              ++v37.unk18; /*0x4fc45d*/
          }
          else
          {
            ++v38; /*0x4fc451*/
          }
          if ( v37.numItems ) /*0x4fc465*/
          {
            if ( start ) /*0x4fc47b*/
            {
              do /*0x4fc498*/
              {
                v10 = *(float *)&start->data->member.super.super.CurrentPassIndex; /*0x4fc487*/
                if ( v10 < v11 ) /*0x4fc492*/
                {
                  NiTPointerList__InsertBeforePosition(&v37, (int)start, &v37.unk10); /*0x4fc4e5*/
                  goto LABEL_22; /*0x4fc4e5*/
                }
                start = start->next; /*0x4fc494*/
              }
              while ( start ); /*0x4fc498*/
              v12 = v37.__vftable->AllocateNode(&v37); /*0x4fc4a7*/
              v12->data = (BSImageSpaceShader *)v8; /*0x4fc4a9*/
              v12->next = 0; /*0x4fc4ac*/
              v12->prev = v37.end; /*0x4fc4b2*/
              if ( v37.end ) /*0x4fc4bb*/
              {
                v37.end->next = v12; /*0x4fc4bd*/
                ++v37.numItems; /*0x4fc4bf*/
              }
              else
              {
                ++v37.numItems; /*0x4fc4ca*/
                v37.start = v12; /*0x4fc4cf*/
              }
              v37.end = v12; /*0x4fc4c4*/
            }
          }
          else
          {
            NiTList_AddHead(&v37, &v37.unk10); /*0x4fc472*/
          }
        }
LABEL_22:
        v7 = *(_DWORD *)(v7 + 4); /*0x4fc4ee*/
        if ( !v7 ) /*0x4fc4f3*/
          break; /*0x4fc4f3*/
        start = v37.start; /*0x4fc412*/
      }
      v28 = (float)v33; /*0x4fc504*/
      v13 = (double)iDebugTextLeftRightOffset; /*0x4fc508*/
      v24 = v13; /*0x4fc50e*/
      InterfaceMgr_DebugTextLine((char)&savedregs, v10, v13, a1, "Script Profiler", v24, v28, 1, 0xFFFFFFFF); /*0x4fc516*/
      v34 = a2 + v33; /*0x4fc51e*/
      if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 )
      {
        v14 = *(float *)&v37.renderTarget; /*0x4fc536*/
        v15 = *(float *)&v37.renderTarget / *(float *)&MEMORY[0xB33E90][0xC] * fCostant_100; /*0x4fc551*/
        _sprintf(
          v43,
          "Active: %d (Quest: %d, Magic: %d)Seconds: %0.4f Percentage: %0.2f%%",
          v39,
          v38,
          v37.unk18,
          *(float *)&v37.renderTarget,
          v15);
        v29 = (float)v34; /*0x4fc581*/
        v16 = (double)iDebugTextLeftRightOffset; /*0x4fc589*/
        v25 = v16; /*0x4fc58f*/
        InterfaceMgr_DebugTextLine((char)&savedregs, v15, v14, v16, v43, v25, v29, 1, 0xFFFFFFFF); /*0x4fc593*/
        v35 = a2 + v34; /*0x4fc59c*/
        for ( i = v37.start; i; i = i->next )
        {
          data = i->data; /*0x4fc5b0*/
          if ( LOBYTE(data->member.super.super.RenderStateGroup) )
          {
            v19 = "Quest: ";
          }
          else
          {
            v19 = "Magic: ";
            if ( !BYTE1(data->member.super.super.RenderStateGroup) ) /*0x4fc5c0*/
              v19 = EmptyString; /*0x4fc5cb*/
          }
          SetRenderer = data->__vftable[1].super.super.super.SetRenderer; /*0x4fc5d9*/
          v37.unk10 = (NiGeometry *)data->member.super.super.CurrentPassIndex; /*0x4fc5e5*/
          v31 = *(float *)&v37.unk10 / *(float *)&MEMORY[0xB33E90][0xC] * fCostant_100; /*0x4fc5f9*/
          v21 = (const char *)((int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))SetRenderer)( /*0x4fc604*/
                                COERCE_UNSIGNED_INT64(*(float *)&v37.unk10),
                                HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v37.unk10)),
                                LODWORD(v31),
                                HIDWORD(v31));
          _sprintf(v43, "%s%s -> Seconds: %0.6f Percentage: %0.3f%%", v19, v21, v26, v32);
          v30 = (float)v35; /*0x4fc628*/
          v22 = (double)iDebugTextLeftRightOffset; /*0x4fc630*/
          v27 = v22; /*0x4fc636*/
          InterfaceMgr_DebugTextLine((char)&savedregs, v15, v14, v22, v43, v27, v30, 1, 0xFFFFFFFF); /*0x4fc63a*/
          v35 += a2; /*0x4fc653*/
          if ( v35 > nHeight - 0xA ) /*0x4fc657*/
            break; /*0x4fc657*/
        }
        NiTPointerList::FreeAllNodes(&v37); /*0x4fc667*/
        v23 = v41; /*0x4fc674*/
        *v40 = v35; /*0x4fc678*/
        *v42 = v23; /*0x4fc67e*/
      }
    }
    v44 = 0xFFFFFFFF; /*0x4fc684*/
    NiTPointerList<Script *>::~NiTPointerList<Script *>(&v37); /*0x4fc68f*/
  }
}
