__int16 __thiscall sub_77E2D0(NiGeometryGroup *this, int a2, int a3, int a4)
{
  __int16 result; // ax
  NiGeometryBufferData *v6; // eax
  NiGeometryBufferData *v7; // edi
  NiGeometryBufferData *v8; // eax
  NiRTTI *v9; // eax
  int v10; // ecx

  result = *(_WORD *)(a2 + 0x2E) & 0xFFF | 0x8000; /*0x77e2e3*/
  *(_WORD *)(a2 + 0x2E) = result; /*0x77e2ec*/
  if ( a4 ) /*0x77e2f0*/
  {
    if ( *(_DWORD *)(a4 + 0x28) ) /*0x77e2f2*/
      return result; /*0x77e2f6*/
    v6 = (NiGeometryBufferData *)FormHeapAlloc(0x50u); /*0x77e2fe*/
    if ( v6 ) /*0x77e308*/
      v7 = NiGeometryBufferData::NiGeometryBufferData(v6); /*0x77e311*/
    else
      v7 = 0; /*0x77e315*/
    v7->PrimitiveType = (*(_WORD *)(a4 + 0x22) != 0) + 4; /*0x77e323*/
    *(_DWORD *)(a4 + 0x28) = v7; /*0x77e326*/
  }
  else
  {
    if ( *(_DWORD *)(a2 + 0x38) ) /*0x77e32b*/
      return result; /*0x77e32f*/
    v8 = (NiGeometryBufferData *)FormHeapAlloc(0x50u); /*0x77e337*/
    if ( v8 ) /*0x77e341*/
      v7 = NiGeometryBufferData::NiGeometryBufferData(v8); /*0x77e34a*/
    else
      v7 = 0; /*0x77e34e*/
    v9 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x77e357*/
    if ( v9 ) /*0x77e35b*/
    {
      while ( v9 != &stru_B3FD2C ) /*0x77e365*/
      {
        v9 = v9->parent; /*0x77e367*/
        if ( !v9 ) /*0x77e36c*/
          goto LABEL_14; /*0x77e36c*/
      }
      v7->PrimitiveType = D3DPT_TRIANGLELIST; /*0x77e3ca*/
    }
    else
    {
LABEL_14:
      if ( NiRTTI::IsObjectOfRTTIType(&stru_B3FD0C, (NiObject *)a2) ) /*0x77e374*/
        v7->PrimitiveType = D3DPT_TRIANGLESTRIP; /*0x77e380*/
    }
    *(_DWORD *)(a2 + 0x38) = v7; /*0x77e387*/
  }
  v10 = 0; /*0x77e395*/
  if ( *(_DWORD *)(a2 + 0x24) ) /*0x77e39a*/
    v10 = 0x400000; /*0x77e39f*/
  if ( *(_DWORD *)(a2 + 0x20) ) /*0x77e38a*/
    v10 |= (unsigned int)&loc_800000; /*0x77e3a8*/
  v7->Flags = v10 | ((*(_BYTE *)(a2 + 0x2C) & 0x3F) << 0x18); /*0x77e3b6*/
  result = sub_782910(this, v7); /*0x77e3b8*/
  *(_WORD *)(a2 + 0x2E) |= 0xFFFu; /*0x77e3bd*/
  return result; /*0x77e3c3*/
}
