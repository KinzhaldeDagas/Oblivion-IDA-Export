bool __thiscall sub_61C6E0(int this)
{
  bool result; // al
  int v3; // eax
  char *v4; // eax
  char *v5; // ebp
  int v6; // edi
  float *v7; // esi
  float *v8; // eax
  TESObjectREFR *v9; // esi
  float *v10; // eax
  BSSimpleList_VoidPtr *v11; // eax
  BSSimpleList_VoidPtr *v12; // edi
  _DWORD *v13; // eax
  char **v14; // ebp
  float *v15; // esi
  char *v16; // edi
  char *v17; // eax
  double v18; // st7
  TESObjectREFR *v19; // [esp-4h] [ebp-3Ch]
  float *v20; // [esp+4h] [ebp-34h]
  float v21; // [esp+1Ch] [ebp-1Ch]
  BSSimpleList_VoidPtr *v22; // [esp+1Ch] [ebp-1Ch]
  float v23; // [esp+1Ch] [ebp-1Ch]
  float v24; // [esp+20h] [ebp-18h]
  float v25; // [esp+20h] [ebp-18h]
  float v26; // [esp+24h] [ebp-14h]
  float v27; // [esp+24h] [ebp-14h]
  float v28; // [esp+24h] [ebp-14h]
  float v29; // [esp+24h] [ebp-14h]
  float v30; // [esp+28h] [ebp-10h]

  result = 0;
  if ( *(_BYTE *)(this + 0x115) )
  {
    if ( *(_DWORD *)(this + 0x118) )
      goto LABEL_29;
    v19 = *(TESObjectREFR **)(this + 0x3C);
    v3 = ((int (__fastcall *)(TESObjectREFR *))v19->vtbl->GetPos)(v19);
    v4 = sub_67D820(v3, v19, 1, 0);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_DWORD *)(this + 0x3C);
      v7 = (float *)sub_4BEF40(v4);
      v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x174))(v6);
      v24 = *v8 - *v7;
      v21 = v8[1] - v7[1];
      v26 = v8[2] - v7[2];
      v27 = v21 * v21 + v24 * v24 + v26 * v26;
      v28 = sqrt(v27);
      if ( v28 <= dbl_A2FC70 )
      {
        v9 = *(TESObjectREFR **)(this + 0x3C);
        v20 = (float *)sub_4BEF40(v5);
        v10 = v9->vtbl->GetPos(v9);
        if ( sub_687C30(v9, v10, v20) )
        {
          v11 = (BSSimpleList_VoidPtr *)FormHeapAlloc(8u);
          if ( v11 )
          {
            v12 = v11;
            v11->firstNode.data = 0;
            v11->firstNode.next = 0;
            v22 = v11;
          }
          else
          {
            v22 = 0;
            v12 = 0;
          }
          sub_4E80B0(v5, flt_A342A4, v12);
          if ( v12 )
          {
            if ( !BSSimpleList_IsEmpty(v12) )
            {
              v13 = (_DWORD *)FormHeapAlloc(8u);
              if ( v13 )
              {
                *v13 = 0;
                v13[1] = 0;
              }
              else
              {
                v13 = 0;
              }
              *(_DWORD *)(this + 0x118) = v13;
            }
            v14 = (char **)v12;
            do
            {
              if ( !v14[1] && !*v14 )
                break;
              if ( *v14 )
              {
                if ( !sub_67ED70(*v14) )
                {
                  v15 = (float *)FormHeapAlloc(0xCu);
                  if ( v15 )
                  {
                    v16 = *v14;
                    v29 = *(float *)sub_4BEF40(*v14);
                    v25 = *((float *)sub_4BEF40(v16) + 1);
                    v17 = sub_4BEF40(v16);
                    v12 = v22;
                    v30 = *((float *)v17 + 2);
                    *v15 = v29;
                    v15[1] = v25;
                    v15[2] = v30;
                  }
                  else
                  {
                    v15 = 0;
                  }
                  BSSimpleList_PushFront(*(_DWORD **)(this + 0x118), (int)v15);
                }
              }
              v14 = (char **)v14[1];
            }
            while ( v14 );
            BSSimpleList_Clear(v12);
            FormHeapFree((unsigned int)v12);
          }
        }
      }
    }
    if ( *(_DWORD *)(this + 0x118) || (result = sub_5E1E90(*(void **)(this + 0x3C))) )
    {
LABEL_29:
      sub_6160B0((Actor **)this);
      sub_619920(this, 0xB);
      if ( sub_5E1E90(*(void **)(this + 0x3C)) )
        v18 = flt_A31E2C;
      else
        v18 = *(float *)&dword_A46C30;
      v23 = v18;
      *(float *)(this + 0xD4) = *(float *)(this + 0x44);
      *(float *)(this + 0xD8) = v23;
      *(float *)(this + 0xDC) = flt_A30634;
      return 1;
    }
    else
    {
      *(_BYTE *)(this + 0x115) = 0;
    }
  }
  return result;
}
