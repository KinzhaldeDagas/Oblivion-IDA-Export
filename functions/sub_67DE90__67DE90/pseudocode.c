void __thiscall sub_67DE90(char *this, Sky *a2)
{
  Sky *v2; // edi
  char *v4; // ecx
  NiNode *Health; // eax
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  float *v9; // esi
  NiNode *v10; // eax
  int v11; // [esp+Ch] [ebp-30h] BYREF
  float v12; // [esp+10h] [ebp-2Ch]
  float v13; // [esp+14h] [ebp-28h]
  float v14; // [esp+18h] [ebp-24h] BYREF
  float v15; // [esp+1Ch] [ebp-20h]
  float v16; // [esp+20h] [ebp-1Ch]
  int v17; // [esp+24h] [ebp-18h] BYREF
  float v18; // [esp+28h] [ebp-14h]
  float v19; // [esp+2Ch] [ebp-10h]
  float v20[3]; // [esp+30h] [ebp-Ch] BYREF

  v2 = a2;
  if ( a2 && sub_42B410((BSExtraData *)a2) && !TES->currentInteriorCell )
  {
    v4 = *((char **)this + 9);
    if ( v4 )
    {
      v8 = sub_4BEF40(v4);
    }
    else
    {
      a2 = 0;
      Health = TESHealthForm_GetHealth(v2);
      if ( sub_68BF60(v2, Health, &a2) && a2 )
      {
        v6 = sub_6899C0((char *)a2);
        v11 = *(int *)v6;
        v12 = *(float *)(v6 + 4);
        v13 = *(float *)(v6 + 8);
        goto LABEL_11;
      }
      v7 = (char *)sub_42B410((BSExtraData *)v2);
      v8 = (char *)sub_6899C0(v7);
    }
    v11 = *(int *)v8;
    v12 = *((float *)v8 + 1);
    v13 = *((float *)v8 + 2);
LABEL_11:
    v9 = (float *)(this + 0xC);
    if ( sub_43F7C0((int *)TES, (float *)&v11, v9, (float *)&v17, 1.0) )
    {
      v14 = *v9 - *(float *)&v11;
      v15 = v9[1] - v12;
      v16 = v9[2] - v13;
      sub_43F350(&v14);
      v19 = v13;
      v20[0] = *(float *)&v17 + v14;
      v20[1] = v18 + v15;
      v20[2] = v16 + v13;
      v14 = *(float *)&v17 - v14;
      v15 = v18 - v15;
      v16 = v13 - v16;
      v10 = TESHealthForm_GetHealth(v2);
      sub_68C3A0(v2, &v14, v20, v10);
    }
  }
}
