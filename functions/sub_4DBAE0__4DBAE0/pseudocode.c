char __thiscall sub_4DBAE0(TESObjectREFR *this, float *a2, char a3, char a4, NiPoint3 *a5, int *a6)
{
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  TESFurniture *v8; // eax
  TESFurniture *v9; // edi
  unsigned int v10; // ebx
  NiObjectNET *v11; // eax
  BSFurnitureMarker *BSFornitureMarker; // eax
  int *numObjs; // esi
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
  int v31[2]; // [esp+4h] [ebp-6Ch] BYREF
  int v32; // [esp+Ch] [ebp-64h] BYREF
  NiMatrix33 v33; // [esp+10h] [ebp-60h] BYREF
  TESFurniture *v34; // [esp+34h] [ebp-3Ch]
  float v35; // [esp+38h] [ebp-38h]
  float v36; // [esp+3Ch] [ebp-34h]
  float v37; // [esp+40h] [ebp-30h]
  unsigned int number; // [esp+44h] [ebp-2Ch]
  int *v39; // [esp+48h] [ebp-28h]
  int *v40; // [esp+4Ch] [ebp-24h]
  TESObjectREFR *v41; // [esp+50h] [ebp-20h]
  BSFurnitureMarker *v42; // [esp+54h] [ebp-1Ch]
  unsigned int v43; // [esp+58h] [ebp-18h]
  float v44; // [esp+5Ch] [ebp-14h]
  unsigned __int8 v45; // [esp+63h] [ebp-Dh]
  int heading; // [esp+64h] [ebp-Ch]
  char v47; // [esp+6Bh] [ebp-5h]

  GetBaseForm = this->vtbl->GetBaseForm; /*0x4dbaf6*/
  v41 = this; /*0x4dbafd*/
  v47 = 0; /*0x4dbb00*/
  if ( *(_BYTE *)(((int (__fastcall *)(TESObjectREFR *))GetBaseForm)(this) + 4) == 0x20 ) /*0x4dbb0a*/
  {
    if ( !this->vtbl->GetNiNode(this) ) /*0x4dbb20*/
    {
      v25 = this->vtbl->GetPos(this); /*0x4dbd9f*/
      a5->x = *v25; /*0x4dbda8*/
      a5->y = v25[1]; /*0x4dbdad*/
      v26 = v25[2]; /*0x4dbdb0*/
      *(float *)&v30 = 0.0; /*0x4dbdb4*/
      a5->z = v26; /*0x4dbdb7*/
      BYTE2(a5[1].x) = 0; /*0x4dbdba*/
      sub_6FAEE0((Unk128 *)a5, *(float *)&v30); /*0x4dbdbe*/
      *a6 = 0xFFFFFFFF; /*0x4dbdc6*/
      return 1; /*0x4dbdc6*/
    }
    v8 = (TESFurniture *)this->vtbl->GetBaseForm(this); /*0x4dbb2e*/
    v9 = v8; /*0x4dbb30*/
    v10 = 0; /*0x4dbb32*/
    v34 = v8; /*0x4dbb36*/
    if ( v8 ) /*0x4dbb39*/
    {
      if ( a3 && sub_4AE590(v8) || a4 && sub_4AE5A0(v9) ) /*0x4dbb5a*/
      {
        v11 = (NiObjectNET *)this->vtbl->GetNiNode(this); /*0x4dbb71*/
        BSFornitureMarker = NiObjectNET::GetBSFornitureMarker(v11); /*0x4dbb74*/
        v42 = BSFornitureMarker; /*0x4dbb7e*/
        if ( BSFornitureMarker ) /*0x4dbb81*/
        {
          numObjs = (int *)BSFornitureMarker->markers.numObjs; /*0x4dbb87*/
          v40 = numObjs; /*0x4dbb8d*/
          if ( numObjs ) /*0x4dbb90*/
          {
            heading = 0xC * (_DWORD)numObjs; /*0x4dbb9d*/
            _alloca_(v31[0]); /*0x4dbba0*/
            v44 = COERCE_FLOAT(v31); /*0x4dbbac*/
            _alloca_(v31[0]); /*0x4dbbaf*/
            v14 = 0; /*0x4dbbb4*/
            v39 = v31; /*0x4dbbb8*/
            v15 = v44; /*0x4dbbc1*/
            v43 = 0; /*0x4dbbc4*/
            do /*0x4dbc4b*/
            {
              if ( sub_4AE5B0(v34, v10) && !sub_4D72C0(v41, v10) ) /*0x4dbbd8*/
              {
                number = v42->markers.data[v43 / 0x10].number; /*0x4dbbf0*/
                if ( sub_4AE5E0(number) && a3 || sub_4AE5D0(number) && a4 ) /*0x4dbc19*/
                {
                  p_x = (_DWORD *)&v42->markers.data[v43 / 0x10].pos.x; /*0x4dbc21*/
                  ++v14; /*0x4dbc24*/
                  *(_DWORD *)LODWORD(v15) = *p_x; /*0x4dbc29*/
                  *(_DWORD *)(LODWORD(v15) + 4) = p_x[1]; /*0x4dbc2e*/
                  v17 = p_x[2]; /*0x4dbc31*/
                  v39[v14 - 1] = v10; /*0x4dbc37*/
                  *(_DWORD *)(LODWORD(v15) + 8) = v17; /*0x4dbc3b*/
                  LODWORD(v15) += 0xC; /*0x4dbc3e*/
                }
              }
              v43 += 0x10; /*0x4dbc41*/
              ++v10; /*0x4dbc45*/
            }
            while ( v10 < (unsigned int)v40 ); /*0x4dbc4b*/
            if ( v14 ) /*0x4dbc53*/
            {
              _alloca_(v31[0]); /*0x4dbc5c*/
              v18 = (float *)v41; /*0x4dbc64*/
              GetPos = v41->vtbl->GetPos; /*0x4dbc69*/
              *(float *)&v30 = COERCE_FLOAT(v31); /*0x4dbc71*/
              v29 = LODWORD(v44); /*0x4dbc72*/
              v40 = v31; /*0x4dbc76*/
              HIDWORD(v28) = GetPos(v41); /*0x4dbc7b*/
              LODWORD(v28) = sub_4D7AF0(v18, &v33); /*0x4dbc87*/
              sub_710580(v28, v14, v29, v30); /*0x4dbc88*/
              v44 = flt_A32048; /*0x4dbc96*/
              v20 = 0; /*0x4dbc99*/
              v45 = 0x7F; /*0x4dbc9d*/
              v21 = (float *)&v32; /*0x4dbca7*/
              do /*0x4dbd1a*/
              {
                v35 = *a2 - v21[0xFFFFFFFE]; /*0x4dbcb8*/
                v36 = a2[1] - v21[0xFFFFFFFF]; /*0x4dbcc1*/
                v37 = a2[2] - *v21; /*0x4dbcc9*/
                *(float *)&heading = v36 * v36 + v35 * v35 + v37 * v37; /*0x4dbce5*/
                *(float *)&heading = sqrt(*(float *)&heading); /*0x4dbcf0*/
                if ( v44 > (double)*(float *)&heading ) /*0x4dbd06*/
                {
                  v44 = *(float *)&heading; /*0x4dbd08*/
                  v45 = v20; /*0x4dbd0b*/
                }
                ++v20; /*0x4dbd12*/
                v21 += 3; /*0x4dbd15*/
              }
              while ( v20 < v14 ); /*0x4dbd1a*/
              if ( v45 != 0x7F ) /*0x4dbd21*/
              {
                v22 = v42; /*0x4dbd2a*/
                v23 = v45; /*0x4dbd2d*/
                v24 = v39[v45]; /*0x4dbd33*/
                *a6 = v24; /*0x4dbd36*/
                BYTE2(a5[1].x) = v22->markers.data[v24].number; /*0x4dbd45*/
                *a5 = *(NiPoint3 *)&v40[3 * v23]; /*0x4dbd53*/
                heading = (unsigned __int16)v22->markers.data[*a6].heading; /*0x4dbd6e*/
                v30 = (int)a5; /*0x4dbd74*/
                *(float *)&heading = (double)heading / dbl_A2FC70; /*0x4dbd7e*/
                *(float *)&heading = *(float *)&heading + v41->member.rot.z; /*0x4dbd87*/
                sub_6FAEE0((Unk128 *)a5, *(float *)&heading); /*0x4dbd90*/
                return 1; /*0x4dbdcc*/
              }
            }
          }
        }
      }
    }
  }
  return v47; /*0x4dbdd6*/
}
