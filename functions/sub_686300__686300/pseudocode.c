void __thiscall sub_686300(NiSurfaceData **this, TESObjectREFR *a2)
{
  float *v4; // eax
  float v5; // eax
  float v6; // edx
  int v7; // ebp
  TESObjectREFR *LinkedDoor; // eax
  NiDX92DBufferData *v9; // edi
  NiSurfaceData *SurfaceData; // esi
  float *Head; // eax
  float *v12; // [esp-4h] [ebp-2Ch]
  float v13; // [esp+0h] [ebp-28h]
  NiSurfaceData **v14; // [esp+Ch] [ebp-1Ch]
  float v15[3]; // [esp+10h] [ebp-18h] BYREF
  float pointXYZ[3]; // [esp+1Ch] [ebp-Ch] BYREF
  float DistanceToPoint; // [esp+2Ch] [ebp+4h]

  if ( a2 ) /*0x68630d*/
  {
    if ( MobileObject_GetCharProxy((MobileObject *)a2) ) /*0x686315*/
    {
      v13 = flt_A2FF44; /*0x68632f*/
      v12 = reference->vtbl->super.super.super.GetPos(reference); /*0x68633c*/
      v4 = a2->vtbl->GetPos(a2); /*0x686347*/
      if ( sub_480520(v4, v12, v13) < 0 ) /*0x686354*/
      {
        v5 = a2->member.pos[0]; /*0x68635d*/
        v6 = a2->member.pos[2]; /*0x686360*/
        v15[1] = a2->member.pos[1]; /*0x686364*/
        v15[0] = v5; /*0x68636b*/
        v7 = 0; /*0x686381*/
        v14 = this + 5; /*0x686387*/
        v15[2] = Actor_GetScaledCollisionHeight(a2) * dbl_A2FAA0 + v6; /*0x68638b*/
        LinkedDoor = TeleportData_GetLinkedDoor((TeleportData *)(this + 5)); /*0x68638f*/
        v9 = (NiDX92DBufferData *)LinkedDoor; /*0x686394*/
        if ( LinkedDoor ) /*0x686398*/
        {
          SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)LinkedDoor); /*0x6863a5*/
          do /*0x686438*/
          {
            if ( !SurfaceData ) /*0x6863a9*/
              break; /*0x6863a9*/
            Head = (float *)EmbeddedList_GetHead((char *)SurfaceData); /*0x6863b1*/
            pointXYZ[0] = *Head; /*0x6863b8*/
            pointXYZ[1] = Head[1]; /*0x6863c3*/
            pointXYZ[2] = Head[2]; /*0x6863cd*/
            DistanceToPoint = TESObjectREFR::GetDistanceToPoint(a2, pointXYZ); /*0x6863d6*/
            if ( DistanceToPoint >= dbl_A6E6F8 ) /*0x6863e9*/
              break; /*0x6863e9*/
            if ( sub_68CA50(v9) ) /*0x6863ed*/
              break; /*0x6863f4*/
            if ( DistanceToPoint >= dbl_A3F3D0 && !sub_6859A0(v15, pointXYZ) ) /*0x686411*/
              break; /*0x68641b*/
            sub_68C170(v14, v9); /*0x686422*/
            v9 = (NiDX92DBufferData *)SurfaceData; /*0x686429*/
            ++v7; /*0x686430*/
            SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData); /*0x686436*/
          }
          while ( v7 < 2 ); /*0x686438*/
        }
      }
    }
  }
}
