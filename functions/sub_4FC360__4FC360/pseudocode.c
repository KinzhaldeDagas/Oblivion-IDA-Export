void __usercall sub_4FC360(double a1@<st0>, int a2, int *a3, int *a4)
{
  int v5; // eax
  bool v6; // zf
  NiPointerList_Node_BSImageSpaceShader *start; // ecx
  int v8; // edi
  int v9; // esi
  double v10; // st6
  double v11; // st5
  double v12; // st6
  NiPointerList_Node_BSImageSpaceShader *v13; // eax
  double v14; // st6
  double v15; // st6
  double v16; // st5
  double v17; // st7
  NiPointerList_Node_BSImageSpaceShader *i; // ebx
  BSImageSpaceShader *data; // ecx
  const char *v20; // esi
  UInt8 (__thiscall *SetRenderer)(NiD3DShaderInterface *, NiDX9Renderer); // eax
  const char *v22; // eax
  double v23; // st7
  int v24; // ecx
  float v25; // [esp+0h] [ebp-254h]
  float v26; // [esp+0h] [ebp-254h]
  double v27; // [esp+0h] [ebp-254h]
  float v28; // [esp+0h] [ebp-254h]
  float v29; // [esp+4h] [ebp-250h]
  float v30; // [esp+4h] [ebp-250h]
  float v31; // [esp+4h] [ebp-250h]
  double v32; // [esp+8h] [ebp-24Ch]
  double v33; // [esp+8h] [ebp-24Ch]
  int v34; // [esp+44h] [ebp-210h]
  int v35; // [esp+44h] [ebp-210h]
  int v36; // [esp+44h] [ebp-210h]
  float v37; // [esp+48h] [ebp-20Ch]
  NiTPointerList__BSImageSpaceShader v38; // [esp+4Ch] [ebp-208h] BYREF
  int v39; // [esp+68h] [ebp-1ECh]
  int v40; // [esp+6Ch] [ebp-1E8h]
  int *v41; // [esp+70h] [ebp-1E4h]
  int v42; // [esp+74h] [ebp-1E0h]
  int *v43; // [esp+78h] [ebp-1DCh]
  char v44[404]; // [esp+7Ch] [ebp-1D8h] BYREF
  unsigned int v45; // [esp+250h] [ebp-4h]
  int savedregs; // [esp+254h] [ebp+0h] BYREF

  *(float *)&v38.renderTarget = 0.0;
  v41 = a3;
  v34 = *a3;
  v5 = TESDataHandler;
  v6 = TESDataHandler == 0;
  v43 = a4;
  v42 = *a4;
  v40 = 0;
  v39 = 0;
  v38.unk18 = 0;
  if ( !v6 )
  {
    start = 0;
    v8 = v5 + 0x64;
    memset(&v38.start, 0, 0xC);
    v38.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerList<Script *>::`vftable';
    v45 = 0;
    if ( v5 != 0xFFFFFF9C && (*(_DWORD *)(v5 + 0x68) || *(_DWORD *)v8) )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)v8;
        v10 = *(float *)(*(_DWORD *)v8 + 0x34);
        v38.unk10 = *(NiGeometry **)v8;
        v37 = v10;
        v11 = v37;
        v12 = v37;
        if ( v37 > 0.0 )
        {
          v11 = v12 + *(float *)&v38.renderTarget;
          ++v40;
          v6 = *(_BYTE *)(v9 + 0x28) == 0;
          *(float *)&v38.renderTarget = v11;
          if ( v6 )
          {
            if ( *(_BYTE *)(v9 + 0x29) )
              ++v38.unk18;
          }
          else
          {
            ++v39;
          }
          if ( v38.numItems )
          {
            if ( start )
            {
              do
              {
                v11 = *(float *)&start->data->member.super.super.CurrentPassIndex;
                if ( v11 < v12 )
                {
                  sub_589640(&v38, (int)start, &v38.unk10);
                  goto LABEL_22;
                }
                start = start->next;
              }
              while ( start );
              v13 = v38.__vftable->AllocateNode(&v38);
              v13->data = (BSImageSpaceShader *)v9;
              v13->next = 0;
              v13->prev = v38.end;
              if ( v38.end )
              {
                v38.end->next = v13;
                ++v38.numItems;
              }
              else
              {
                ++v38.numItems;
                v38.start = v13;
              }
              v38.end = v13;
            }
          }
          else
          {
            sub_6AA320(&v38, &v38.unk10);
          }
        }
LABEL_22:
        v8 = *(_DWORD *)(v8 + 4);
        if ( !v8 )
          break;
        start = v38.start;
      }
      v29 = (float)v34;
      v14 = (double)iDebugTextLeftRightOffset;
      v25 = v14;
      InterfaceMgr_DebugTextLine((char)&savedregs, v11, v14, a1, (int)"Script Profiler", v25, v29, 1, 0xFFFFFFFF);
      v35 = a2 + v34;
      if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 )
      {
        v15 = *(float *)&v38.renderTarget;
        v16 = *(float *)&v38.renderTarget / flt_B33E9C * fCostant_100;
        _sprintf(
          v44,
          "Active: %d (Quest: %d, Magic: %d)Seconds: %0.4f Percentage: %0.2f%%",
          v40,
          v39,
          v38.unk18,
          *(float *)&v38.renderTarget,
          v16);
        v30 = (float)v35;
        v17 = (double)iDebugTextLeftRightOffset;
        v26 = v17;
        InterfaceMgr_DebugTextLine((char)&savedregs, v16, v15, v17, (int)v44, v26, v30, 1, 0xFFFFFFFF);
        v36 = a2 + v35;
        for ( i = v38.start; i; i = i->next )
        {
          data = i->data;
          if ( LOBYTE(data->member.super.super.RenderStateGroup) )
          {
            v20 = "Quest: ";
          }
          else
          {
            v20 = "Magic: ";
            if ( !BYTE1(data->member.super.super.RenderStateGroup) )
              v20 = EmptyString;
          }
          SetRenderer = data->__vftable[1].super.super.super.SetRenderer;
          v38.unk10 = (NiGeometry *)data->member.super.super.CurrentPassIndex;
          v32 = *(float *)&v38.unk10 / flt_B33E9C * fCostant_100;
          v22 = (const char *)((int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))SetRenderer)(
                                COERCE_UNSIGNED_INT64(*(float *)&v38.unk10),
                                HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v38.unk10)),
                                LODWORD(v32),
                                HIDWORD(v32));
          _sprintf(v44, "%s%s -> Seconds: %0.6f Percentage: %0.3f%%", v20, v22, v27, v33);
          v31 = (float)v36;
          v23 = (double)iDebugTextLeftRightOffset;
          v28 = v23;
          InterfaceMgr_DebugTextLine((char)&savedregs, v16, v15, v23, (int)v44, v28, v31, 1, 0xFFFFFFFF);
          v36 += a2;
          if ( v36 > nHeight - 0xA )
            break;
        }
        NiTPointerList::FreeAllNodes(&v38);
        v24 = v42;
        *v41 = v36;
        *v43 = v24;
      }
    }
    v45 = 0xFFFFFFFF;
    NiTPointerList<Script *>::~NiTPointerList<Script *>(&v38);
  }
}
