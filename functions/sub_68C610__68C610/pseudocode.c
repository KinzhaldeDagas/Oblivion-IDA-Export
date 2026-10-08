double __thiscall sub_68C610(char **this, TESObjectREFR *a2)
{
  char *v2; // edi
  char *Head; // eax
  NiDX92DBufferData *i; // esi
  float *v5; // edi
  float *v6; // eax
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]
  float v12; // [esp+18h] [ebp+4h]
  float v13; // [esp+18h] [ebp+4h]

  v2 = *this; /*0x68c616*/
  v8 = 0.0; /*0x68c618*/
  if ( *this ) /*0x68c616*/
  {
    if ( a2 ) /*0x68c62b*/
    {
      Head = EmbeddedList_GetHead(v2); /*0x68c633*/
      v8 = TESObjectREFR::GetDistanceToPoint(a2, (const float *)Head) + dbl_A2FC68; /*0x68c648*/
      for ( i = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v2); /*0x68c655*/
            i;
            i = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(i) )
      {
        v5 = (float *)EmbeddedList_GetHead(v2); /*0x68c660*/
        v6 = (float *)EmbeddedList_GetHead((char *)i); /*0x68c662*/
        v9 = *v6 - *v5; /*0x68c66b*/
        v10 = v6[1] - v5[1]; /*0x68c675*/
        v11 = v6[2] - v5[2]; /*0x68c67f*/
        v12 = v9 * v9 + v10 * v10 + v11 * v11; /*0x68c69f*/
        v13 = sqrt(v12); /*0x68c6ac*/
        v2 = (char *)i; /*0x68c6ba*/
        v8 = v13 + v8; /*0x68c6bc*/
      }
    }
  }
  return v8; /*0x68c6d0*/
}
