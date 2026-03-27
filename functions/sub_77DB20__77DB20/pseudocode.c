unsigned int *__thiscall sub_77DB20(NiGeometryGroup *this, NiGeometryBufferData *a2, UInt32 a3)
{
  UInt32 FVF; // esi
  NiGeometryGroup *v5; // ebx
  bool v6; // cf
  NiGeometryGroup *v7; // ebp
  _DWORD *v8; // ebx
  unsigned int *result; // eax
  _DWORD *v10; // [esp+10h] [ebp-8h] BYREF
  NiGeometryGroup *v11; // [esp+14h] [ebp-4h]
  UInt32 v12; // [esp+1Ch] [ebp+4h]
  int v13; // [esp+20h] [ebp+8h]

  FVF = a2->FVF;
  v5 = this;
  v6 = a3 < a2->StreamCount;
  v11 = this;
  v10 = 0;
  if ( v6 )
    v12 = a2->VertexStride[a3];
  else
    v12 = 0;
  if ( !FVF )
    FVF = v12 | 0x80000000;
  v13 = 0;
  if ( a2->SoftwareVP )
  {
    FVF |= 0x40000000u;
    v13 = 0x80000000;
  }
  v7 = this + 1;
  if ( !NiTMap_GetAt((_DWORD *)this + 3, FVF, &v10) )
    goto LABEL_11;
  v8 = v10;
  if ( !v10 )
  {
    v5 = v11;
LABEL_11:
    v8 = sub_77D900(0x10000, (int)v5->device, FVF, v13, 0);
    NiTMap_SetAt(v7, FVF, (int)v8);
  }
  result = sub_77D720(v8, (unsigned int *)(v12 * a2->MaxVertCount), a2->StreamCount > 1);
  a2->BaseVertexIndex = result[3] / v12;
  return result;
}
