__int16 __thiscall sub_77E2D0(NiGeometryGroup *this, int a2, int a3, int a4)
{
  __int16 result; // ax
  NiGeometryBufferData *v6; // eax
  NiGeometryBufferData *v7; // edi
  NiGeometryBufferData *v8; // eax
  int v9; // eax
  int v10; // ecx

  result = *(_WORD *)(a2 + 0x2E) & 0xFFF | 0x8000;
  *(_WORD *)(a2 + 0x2E) = result;
  if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 0x28) )
      return result;
    v6 = (NiGeometryBufferData *)FormHeapAlloc(0x50u);
    if ( v6 )
      v7 = NiGeometryBufferData::NiGeometryBufferData(v6);
    else
      v7 = 0;
    v7->PrimitiveType = (*(_WORD *)(a4 + 0x22) != 0) + 4;
    *(_DWORD *)(a4 + 0x28) = v7;
  }
  else
  {
    if ( *(_DWORD *)(a2 + 0x38) )
      return result;
    v8 = (NiGeometryBufferData *)FormHeapAlloc(0x50u);
    if ( v8 )
      v7 = NiGeometryBufferData::NiGeometryBufferData(v8);
    else
      v7 = 0;
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v9 )
    {
      while ( (char *)v9 != dword_B3FD2C )
      {
        v9 = *(_DWORD *)(v9 + 4);
        if ( !v9 )
          goto LABEL_14;
      }
      v7->PrimitiveType = D3DPT_TRIANGLELIST;
    }
    else
    {
LABEL_14:
      if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FD0C, (NiObject *)a2) )
        v7->PrimitiveType = D3DPT_TRIANGLESTRIP;
    }
    *(_DWORD *)(a2 + 0x38) = v7;
  }
  v10 = 0;
  if ( *(_DWORD *)(a2 + 0x24) )
    v10 = 0x400000;
  if ( *(_DWORD *)(a2 + 0x20) )
    v10 |= (unsigned int)&loc_800000;
  v7->Flags = v10 | ((*(_BYTE *)(a2 + 0x2C) & 0x3F) << 0x18);
  result = sub_782910(this, v7);
  *(_WORD *)(a2 + 0x2E) |= 0xFFFu;
  return result;
}
