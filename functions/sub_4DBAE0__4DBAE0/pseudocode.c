char __thiscall sub_4DBAE0(TESObjectREFR *this, float *a2, char a3, char a4, NiPoint3 *a5, _DWORD *a6)
{
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  TESFurniture *v8; // eax
  TESFurniture *v9; // edi
  unsigned int v10; // ebx
  NiObjectNET *v11; // eax
  BSFurnitureMarker *BSFornitureMarker; // eax
  _BYTE *numObjs; // esi
  unsigned int v14; // edi
  float v15; // esi
  _DWORD *p_x; // eax
  int v17; // edx
  float *v18; // ebx
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  unsigned int v20; // ebx
  float *v21; // esi
  BSFurnitureMarker *v22; // esi
  int v23; // edx
  int v24; // eax
  float *v25; // eax
  float v26; // eax
  __int64 v28; // [esp-10h] [ebp-80h]
  int v29; // [esp-4h] [ebp-74h]
  int v30; // [esp+0h] [ebp-70h]
  _BYTE v31[8]; // [esp+4h] [ebp-6Ch] BYREF
  int v32; // [esp+Ch] [ebp-64h] BYREF
  float v33[9]; // [esp+10h] [ebp-60h] BYREF
  TESFurniture *v34; // [esp+34h] [ebp-3Ch]
  float v35; // [esp+38h] [ebp-38h]
  float v36; // [esp+3Ch] [ebp-34h]
  float v37; // [esp+40h] [ebp-30h]
  unsigned int number; // [esp+44h] [ebp-2Ch]
  _BYTE *v39; // [esp+48h] [ebp-28h]
  _BYTE *v40; // [esp+4Ch] [ebp-24h]
  TESObjectREFR *v41; // [esp+50h] [ebp-20h]
  BSFurnitureMarker *v42; // [esp+54h] [ebp-1Ch]
  unsigned int v43; // [esp+58h] [ebp-18h]
  float v44; // [esp+5Ch] [ebp-14h]
  unsigned __int8 v45; // [esp+63h] [ebp-Dh]
  int heading; // [esp+64h] [ebp-Ch]
  char v47; // [esp+6Bh] [ebp-5h]

  GetBaseForm = this->vtbl->GetBaseForm;
  v41 = this;
  v47 = 0;
  if ( *(_BYTE *)(((int (__fastcall *)(TESObjectREFR *))GetBaseForm)(this) + 4) == 0x20 )
  {
    if ( !this->vtbl->GetNiNode(this) )
    {
      v25 = this->vtbl->GetPos(this);
      a5->x = *v25;
      a5->y = v25[1];
      v26 = v25[2];
      *(float *)&v30 = 0.0;
      a5->z = v26;
      BYTE2(a5[1].x) = 0;
      sub_6FAEE0((Unk128 *)a5, *(float *)&v30);
      *a6 = 0xFFFFFFFF;
      return 1;
    }
    v8 = (TESFurniture *)this->vtbl->GetBaseForm(this);
    v9 = v8;
    v10 = 0;
    v34 = v8;
    if ( v8 )
    {
      if ( a3 && sub_4AE590(v8) || a4 && sub_4AE5A0(v9) )
      {
        v11 = (NiObjectNET *)this->vtbl->GetNiNode(this);
        BSFornitureMarker = NiObjectNET::GetBSFornitureMarker(v11);
        v42 = BSFornitureMarker;
        if ( BSFornitureMarker )
        {
          numObjs = (_BYTE *)BSFornitureMarker->markers.numObjs;
          v40 = numObjs;
          if ( numObjs )
          {
            heading = 0xC * (_DWORD)numObjs;
            _alloca_();
            v44 = COERCE_FLOAT(v31);
            _alloca_();
            v14 = 0;
            v39 = v31;
            v15 = v44;
            v43 = 0;
            do
            {
              if ( sub_4AE5B0(v34, v10) && !sub_4D72C0(v41, v10) )
              {
                number = v42->markers.data[v43 / 0x10].number;
                if ( sub_4AE5E0(number) && a3 || sub_4AE5D0(number) && a4 )
                {
                  p_x = (_DWORD *)&v42->markers.data[v43 / 0x10].pos.x;
                  ++v14;
                  *(_DWORD *)LODWORD(v15) = *p_x;
                  *(_DWORD *)(LODWORD(v15) + 4) = p_x[1];
                  v17 = p_x[2];
                  *(_DWORD *)&v39[4 * v14 - 4] = v10;
                  *(_DWORD *)(LODWORD(v15) + 8) = v17;
                  LODWORD(v15) += 0xC;
                }
              }
              v43 += 0x10;
              ++v10;
            }
            while ( v10 < (unsigned int)v40 );
            if ( v14 )
            {
              _alloca_();
              v18 = (float *)v41;
              GetPos = v41->vtbl->GetPos;
              *(float *)&v30 = COERCE_FLOAT(v31);
              v29 = LODWORD(v44);
              v40 = v31;
              HIDWORD(v28) = GetPos(v41);
              LODWORD(v28) = sub_4D7AF0(v18, v33);
              sub_710580(v28, v14, v29, v30);
              v44 = flt_A32048;
              v20 = 0;
              v45 = 0x7F;
              v21 = (float *)&v32;
              do
              {
                v35 = *a2 - v21[0xFFFFFFFE];
                v36 = a2[1] - v21[0xFFFFFFFF];
                v37 = a2[2] - *v21;
                *(float *)&heading = v36 * v36 + v35 * v35 + v37 * v37;
                *(float *)&heading = sqrt(*(float *)&heading);
                if ( v44 > (double)*(float *)&heading )
                {
                  v44 = *(float *)&heading;
                  v45 = v20;
                }
                ++v20;
                v21 += 3;
              }
              while ( v20 < v14 );
              if ( v45 != 0x7F )
              {
                v22 = v42;
                v23 = v45;
                v24 = *(_DWORD *)&v39[4 * v45];
                *a6 = v24;
                BYTE2(a5[1].x) = v22->markers.data[v24].number;
                *a5 = *(NiPoint3 *)&v40[0xC * v23];
                heading = (unsigned __int16)v22->markers.data[*a6].heading;
                v30 = (int)a5;
                *(float *)&heading = (double)heading / dbl_A2FC70;
                *(float *)&heading = *(float *)&heading + v41->member.rot.z;
                sub_6FAEE0((Unk128 *)a5, *(float *)&heading);
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return v47;
}
