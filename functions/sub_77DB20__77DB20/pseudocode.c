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

  FVF = a2->FVF; /*0x77db2f*/
  v5 = this; /*0x77db32*/
  v6 = a3 < a2->StreamCount; /*0x77db36*/
  v11 = this; /*0x77db39*/
  v10 = 0; /*0x77db3d*/
  if ( v6 ) /*0x77db41*/
    v12 = a2->VertexStride[a3]; /*0x77db49*/
  else
    v12 = 0; /*0x77db4f*/
  if ( !FVF ) /*0x77db55*/
    FVF = v12 | 0x80000000; /*0x77db5b*/
  v13 = 0; /*0x77db64*/
  if ( a2->SoftwareVP ) /*0x77db61*/
  {
    FVF |= 0x40000000u; /*0x77db6a*/
    v13 = 0x80000000; /*0x77db70*/
  }
  v7 = this + 1; /*0x77db7d*/
  if ( !NiTMap_GetAt((_DWORD *)this + 3, FVF, &v10) ) /*0x77db8a*/
    goto LABEL_11; /*0x77db8a*/
  v8 = v10; /*0x77db8c*/
  if ( !v10 ) /*0x77db92*/
  {
    v5 = v11; /*0x77db94*/
LABEL_11:
    v8 = sub_77D900(0x10000, (int)v5->device, FVF, v13, 0); /*0x77db98*/
    NiTMap_SetAt(v7, FVF, (int)v8); /*0x77dbb7*/
  }
  result = sub_77D720(v8, (unsigned int *)(v12 * a2->MaxVertCount), a2->StreamCount > 1); /*0x77dbbc*/
  a2->BaseVertexIndex = result[3] / v12; /*0x77dbe1*/
  return result; /*0x77dbe4*/
}
