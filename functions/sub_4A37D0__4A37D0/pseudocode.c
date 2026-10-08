void __thiscall sub_4A37D0(TESRegionData *this)
{
  void *v2; // ebp
  NiDX92DBufferData *v3; // eax
  NiSurfaceData *SurfaceData; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // eax
  _DWORD *v8; // ebx
  int v9; // esi
  int v10; // eax
  size_t v11; // [esp-4h] [ebp-14h]
  NiSurfaceData *v12; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x4a37db*/
  v3 = (NiDX92DBufferData *)((int (__thiscall *)(TESRegionData *))this->vtable[1].saveRegionDataHeader)(this); /*0x4a37dd*/
  SurfaceData = NiDX92DBufferData::GetSurfaceData(v3); /*0x4a37e6*/
  v12 = SurfaceData; /*0x4a37ea*/
  TESRegionData_SaveHeader(this); /*0x4a37ee*/
  if ( SurfaceData )
  {
    v5 = ((int (__thiscall *)(TESRegionData *))this->vtable[1].saveRegionDataHeader)(this); /*0x4a37ff*/
    if ( v5 ) /*0x4a3803*/
      v6 = (_DWORD *)(v5 + 4); /*0x4a3805*/
    else
      v6 = 0; /*0x4a380a*/
    v7 = FormHeapAlloc((unsigned __int64)(unsigned int)SurfaceData >> 0x1D != 0 ? 0xFFFFFFFF : 8 * (_DWORD)SurfaceData);
    v2 = (void *)v7; /*0x4a3829*/
    if ( v6 ) /*0x4a382b*/
    {
      v8 = (_DWORD *)v7; /*0x4a382d*/
      do /*0x4a386c*/
      {
        v9 = *v6; /*0x4a3830*/
        if ( *v6 ) /*0x4a3830*/
        {
          *v8 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 4))(*v6) + 0xC); /*0x4a3842*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0xC))(v9) ) /*0x4a384b*/
            v10 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0xC))(v9) + 0xC); /*0x4a385a*/
          else
            v10 = 0; /*0x4a385f*/
          v8[1] = v10; /*0x4a3861*/
          v8 += 2; /*0x4a3864*/
        }
        v6 = (_DWORD *)v6[1]; /*0x4a3867*/
      }
      while ( v6 ); /*0x4a386c*/
      SurfaceData = v12; /*0x4a386e*/
    }
  }
  LODWORD(v11) = 8 * (_DWORD)SurfaceData; /*0x4a387a*/
  TESForm_PutFormRecordChunkData(0x53474452, v2, v11); /*0x4a3881*/
  if ( SurfaceData ) /*0x4a388b*/
    FormHeapFree((unsigned int)v2); /*0x4a388e*/
}
