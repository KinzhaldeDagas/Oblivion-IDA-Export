char __thiscall sub_4E94C0(int *this, int **a1, int **a3, BSExtraData *a4)
{
  char result; // al
  signed int v7; // ebp
  signed int v8; // ebx
  TESObjectCELL *CellAtCellCoord; // ebx
  char *v10; // ebx
  int v11; // eax
  char *v12; // ebp
  float *v13; // eax
  float *v14; // eax
  NiDX92DBufferData *v16; // eax
  char *v17; // ebx
  NiSurfaceData *SurfaceData; // ebp
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  BSExtraDataVtbl *v23; // eax
  char v24; // bl
  float *v25; // [esp-4h] [ebp-7Ch]
  float v27; // [esp+1Ch] [ebp-5Ch]
  float v28; // [esp+1Ch] [ebp-5Ch]
  float v29; // [esp+1Ch] [ebp-5Ch]
  float v30; // [esp+20h] [ebp-58h]
  float v31; // [esp+24h] [ebp-54h]
  float v32; // [esp+28h] [ebp-50h] BYREF
  float v33; // [esp+2Ch] [ebp-4Ch]
  float v34; // [esp+30h] [ebp-48h]
  float v35[3]; // [esp+34h] [ebp-44h] BYREF
  _DWORD v36[11]; // [esp+40h] [ebp-38h] BYREF
  unsigned int v37; // [esp+74h] [ebp-4h]
  TESObjectCELL *a1b; // [esp+7Ch] [ebp+4h]
  float a1c; // [esp+7Ch] [ebp+4h]
  float a1d; // [esp+7Ch] [ebp+4h]
  float a1e; // [esp+7Ch] [ebp+4h]
  float a1a; // [esp+7Ch] [ebp+4h]
  float a1f; // [esp+7Ch] [ebp+4h]
  float v44; // [esp+80h] [ebp+8h]
  float v45; // [esp+80h] [ebp+8h]
  float v46; // [esp+80h] [ebp+8h]
  float v47; // [esp+84h] [ebp+Ch]

  result = 0;
  if ( a4 )
  {
    v7 = (int)*(float *)a3 >> 0xC;
    v8 = (int)*((float *)a3 + 1) >> 0xC;
    a1b = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(
                             (TESWorldSpace *)*(this + 0xB),
                             (int)*(float *)a1 >> 0xC,
                             (int)*((float *)a1 + 1) >> 0xC);
    CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)*(this + 0xB), v7, v8);
    if ( TESObjectCELL_IsProcessLevel_LowHigh(a1b, 1) && TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 1) )
      return 0;
    v10 = (char *)sub_4E9150(this, a1);
    v11 = sub_4E9150(this, a3);
    v12 = (char *)v11;
    if ( !v10 )
      return 0;
    if ( !v11 )
      return 0;
    if ( v10 == (char *)v11 )
      return 0;
    v13 = (float *)sub_4BEF40(v10);
    a1c = *(float *)a1 - *v13;
    v44 = *((float *)a1 + 1) - v13[1];
    v27 = *((float *)a1 + 2) - v13[2];
    v32 = a1c;
    v33 = v44;
    v34 = v27;
    v30 = sub_404C90(&v32);
    v14 = (float *)sub_4BEF40(v12);
    a1d = *(float *)a3 - *v14;
    v45 = *((float *)a3 + 1) - v14[1];
    v28 = *((float *)a3 + 2) - v14[2];
    v32 = a1d;
    v33 = v45;
    v34 = v28;
    v31 = sub_404C90(&v32);
    a1e = *(float *)a1 - *(float *)a3;
    v46 = *((float *)a1 + 1) - *((float *)a3 + 1);
    v29 = *((float *)a1 + 2) - *((float *)a3 + 2);
    v32 = a1e;
    v33 = v46;
    v34 = v29;
    a1a = sub_404C90(&v32);
    if ( v30 < dbl_A2FC70 )
      goto LABEL_11;
    if ( a1a <= v30 + v31 )
    {
      return 0;
    }
    else
    {
LABEL_11:
      sub_67D760(v36);
      v37 = 0;
      if ( sub_67E610((float *)v10, v12, (int *)a4) )
      {
        v16 = (NiDX92DBufferData *)sub_42B410(a4);
        v17 = (char *)v16;
        if ( v16 )
        {
          SurfaceData = NiDX92DBufferData::GetSurfaceData(v16);
          if ( SurfaceData )
          {
            v19 = (float *)sub_6899C0(v17);
            v20 = sub_4121A0((float *)a1, &v32, v19);
            v47 = sub_404C90(v20);
            v25 = (float *)sub_6899C0((char *)SurfaceData);
            v21 = (float *)sub_6899C0(v17);
            v22 = sub_4121A0(v21, v35, v25);
            a1f = sub_404C90(v22);
            if ( a1f > (double)v47 )
            {
              v23 = sub_42B410(a4);
              sub_68C170((int *)a4, v23);
            }
          }
        }
        v24 = 1;
      }
      else
      {
        v24 = 0;
      }
      sub_4E8E80(this);
      v37 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(v36);
      return v24;
    }
  }
  return result;
}
