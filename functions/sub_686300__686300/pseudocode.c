void __thiscall sub_686300(char *this, MobileObject *a2)
{
  float *v4; // eax
  float v5; // eax
  float v6; // edx
  int v7; // ebp
  NiDX92DBufferData *v8; // eax
  _BYTE *p_unk00; // edi
  NiSurfaceData *SurfaceData; // esi
  float *v11; // eax
  float *v12; // [esp-4h] [ebp-2Ch]
  float v13; // [esp+0h] [ebp-28h]
  int *v14; // [esp+Ch] [ebp-1Ch]
  float v15[3]; // [esp+10h] [ebp-18h] BYREF
  float v16[3]; // [esp+1Ch] [ebp-Ch] BYREF
  float v17; // [esp+2Ch] [ebp+4h]

  if ( a2 )
  {
    if ( MobileObject_GetCharProxy(a2) )
    {
      v13 = flt_A2FF44;
      v12 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      v4 = a2->vtbl->super.GetPos((TESObjectREFR *)a2);
      if ( sub_480520(v4, v12, v13) < 0 )
      {
        v5 = a2->super.pos[0];
        v6 = a2->super.pos[2];
        v15[1] = a2->super.pos[1];
        v15[0] = v5;
        v7 = 0;
        v14 = (int *)(this + 0x14);
        v15[2] = sub_5E0660(a2) * dbl_A2FAA0 + v6;
        v8 = (NiDX92DBufferData *)sub_42B410((BSExtraData *)(this + 0x14));
        p_unk00 = v8;
        if ( v8 )
        {
          SurfaceData = NiDX92DBufferData::GetSurfaceData(v8);
          do
          {
            if ( !SurfaceData )
              break;
            v11 = (float *)sub_6899C0((char *)SurfaceData);
            v16[0] = *v11;
            v16[1] = v11[1];
            v16[2] = v11[2];
            v17 = sub_4D7E30((float *)a2, v16);
            if ( v17 >= dbl_A6E6F8 )
              break;
            if ( sub_68CA50(p_unk00) )
              break;
            if ( v17 >= dbl_A3F3D0 && !sub_6859A0(v15, v16) )
              break;
            sub_68C170(v14, p_unk00);
            p_unk00 = &SurfaceData->unk00;
            ++v7;
            SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData);
          }
          while ( v7 < 2 );
        }
      }
    }
  }
}
