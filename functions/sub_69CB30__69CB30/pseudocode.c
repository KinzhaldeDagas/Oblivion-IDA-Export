void __thiscall sub_69CB30(float *this)
{
  int v2; // eax
  int v3; // ebx
  _DWORD *v4; // eax
  NiControllerSequence *v5; // ecx
  float v6; // eax
  int v7; // eax
  NiObject *v8; // eax
  NiControllerManager *v9; // esi
  float *v10; // edi
  NiControllerSequence *a2[2]; // [esp+24h] [ebp-34h] BYREF
  float v12; // [esp+2Ch] [ebp-2Ch]
  float v13; // [esp+30h] [ebp-28h]
  NiMatrix33 v14; // [esp+34h] [ebp-24h] BYREF

  v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this); /*0x69cb40*/
  v3 = v2; /*0x69cb42*/
  if ( v2 ) /*0x69cb46*/
  {
    *(float *)a2 = fabs(*(this + 0x23)); /*0x69cb56*/
    *(float *)(v2 + 0x60) = *(float *)a2; /*0x69cb60*/
    v4 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x174))(this); /*0x69cb6c*/
    *(_DWORD *)(v3 + 0x54) = *v4; /*0x69cb70*/
    *(_DWORD *)(v3 + 0x58) = v4[1]; /*0x69cb76*/
    *(_DWORD *)(v3 + 0x5C) = v4[2]; /*0x69cb7c*/
    v5 = *((NiControllerSequence **)this + 8); /*0x69cb82*/
    v6 = *(this + 0xA); /*0x69cb85*/
    v12 = *(this + 9); /*0x69cb8b*/
    a2[1] = v5; /*0x69cb97*/
    v13 = v6; /*0x69cb9f*/
    NiMatrix33_SetEulerZXY(&v14, v6, *(float *)&v5, v12); /*0x69cbb2*/
    qmemcpy((void *)(v3 + 0x30), &v14, 0x24u); /*0x69cbc4*/
    sub_6F94E0((int *)v3); /*0x69cbc6*/
    v7 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 0x58))(v3, "AreaEffect"); /*0x69cbda*/
    if ( v7 ) /*0x69cbde*/
      sub_69C9A0(this, v7); /*0x69cbe3*/
    v8 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(v3 + 0xC)); /*0x69cbf1*/
    v9 = (NiControllerManager *)v8; /*0x69cbf6*/
    if ( v8 ) /*0x69cbfd*/
    {
      if ( NiTMap_GetAt(&v8[0xB].__vftable, (int)"SpecialIdle_Projectile", a2) ) /*0x69cc0c*/
      {
        v10 = (float *)a2[0]; /*0x69cc15*/
        if ( a2[0] ) /*0x69cc1b*/
        {
          NiControllerManager_DeactivateAllSequences(v9, 0.0); /*0x69cc25*/
          NiControllerSequence_Activate((NiControllerSequence *)v10, 0, 0, 1.0, 0.0, 0, 0); /*0x69cc42*/
          *((_WORD *)v9 + 4) |= 8u; /*0x69cc47*/
          v10[0x12] = -flt_A7DEB4; /*0x69cc56*/
          *(float *)a2 = source - dbl_A2FC80; /*0x69cc68*/
          NiAVObject_UpdateNiAVObject((NiAVObject *)v3, *(float *)a2, 1); /*0x69cc73*/
        }
      }
    }
  }
}
