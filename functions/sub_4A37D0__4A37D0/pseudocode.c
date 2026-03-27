void __thiscall sub_4A37D0(_BYTE *this)
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

  v2 = 0;
  v3 = (NiDX92DBufferData *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x24))(this);
  SurfaceData = NiDX92DBufferData::GetSurfaceData(v3);
  v12 = SurfaceData;
  sub_4A3560(this);
  if ( SurfaceData )
  {
    v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x24))(this);
    if ( v5 )
      v6 = (_DWORD *)(v5 + 4);
    else
      v6 = 0;
    v7 = FormHeapAlloc((unsigned __int64)(unsigned int)SurfaceData >> 0x1D != 0 ? 0xFFFFFFFF : 8 * (_DWORD)SurfaceData);
    v2 = (void *)v7;
    if ( v6 )
    {
      v8 = (_DWORD *)v7;
      do
      {
        v9 = *v6;
        if ( *v6 )
        {
          *v8 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 4))(*v6) + 0xC);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0xC))(v9) )
            v10 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0xC))(v9) + 0xC);
          else
            v10 = 0;
          v8[1] = v10;
          v8 += 2;
        }
        v6 = (_DWORD *)v6[1];
      }
      while ( v6 );
      SurfaceData = v12;
    }
  }
  LODWORD(v11) = 8 * (_DWORD)SurfaceData;
  TESForm_PutFormRecordChunkData(0x53474452, v2, v11);
  if ( SurfaceData )
    FormHeapFree((unsigned int)v2);
}
