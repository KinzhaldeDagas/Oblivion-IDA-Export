Ni2DBuffer **__thiscall sub_4B7F70(_BYTE *this, int a2)
{
  Ni2DBuffer **result; // eax
  Ni2DBuffer **v4; // esi
  Ni2DBuffer *v5; // eax
  float *v6; // edi
  NiTimeController *v7; // eax
  NiExtraData *ExtraData; // edi
  unsigned int *v9; // eax
  unsigned int *v10; // eax

  result = (Ni2DBuffer **)sub_4B2320(this, a2);
  v4 = result;
  if ( result )
  {
    v5 = (Ni2DBuffer *)sub_700010(result, (int)&unk_B3B900);
    if ( (*(this + 0x64) & 2) == 0 || a2 && (*(_DWORD *)(a2 + 8) & 0x2000) != 0 )
    {
      if ( v5 )
        sub_6FFE90(v4, v5);
    }
    else
    {
      v6 = 0;
      if ( !v5 )
      {
        v7 = (NiTimeController *)FormHeapAlloc(0x44u);
        if ( v7 )
          v6 = (float *)sub_60E0A0(v7);
        sub_60E0C0(v6, flt_B35B2C[0]);
        sub_60E0D0(v6, (int)sub_4B76A0);
        (*(void (__thiscall **)(float *, Ni2DBuffer **))(*(_DWORD *)v6 + 0x58))(v6, v4);
      }
      ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)v4, dword_A7D0EC);
      if ( !ExtraData )
      {
        v9 = (unsigned int *)FormHeapAlloc(0x10u);
        if ( v9 )
          v10 = BSXFlags_constr(v9);
        else
          v10 = 0;
        ExtraData = (NiExtraData *)v10;
        sub_6FF820((const void **)v4, dword_A7D0EC, v10);
      }
      ExtraData[1].__vftable = (NiExtraDataVtbl *)((int)ExtraData[1].__vftable | 1);
    }
    return v4;
  }
  return result;
}
