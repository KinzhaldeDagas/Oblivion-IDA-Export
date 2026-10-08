void __thiscall sub_539B80(Atmosphere *this, NiAVObject *a2)
{
  NiNode *m_parent; // esi
  int *unk10; // edi
  NiObjectVtbl *vftable; // eax
  bhkRefObject *v6; // eax
  bhkRefObject *v7; // eax
  NiObjectVtbl *v8; // esi
  NiObject *(__thiscall *v9)(NiObject *); // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  NiObjectVtbl *v16; // eax
  NiObjectVtbl *v17; // ecx
  NiObject *v18; // eax
  void **v19; // [esp+1Ch] [ebp-D0h] BYREF
  __m128 *v20; // [esp+20h] [ebp-CCh]
  int v21; // [esp+24h] [ebp-C8h]
  int v22; // [esp+28h] [ebp-C4h]
  NiObject *(__thiscall *Unk_02)(NiObject *); // [esp+2Ch] [ebp-C0h]
  NiObject *BhkCollisionObject; // [esp+30h] [ebp-BCh]
  NiObjectVtbl *v25; // [esp+34h] [ebp-B8h]
  bhkRefObject *v26; // [esp+38h] [ebp-B4h]
  __int32 v27[4]; // [esp+3Ch] [ebp-B0h] BYREF
  __m128 v28[3]; // [esp+4Ch] [ebp-A0h] BYREF
  __m128 v29; // [esp+7Ch] [ebp-70h] BYREF
  __m128 v30[4]; // [esp+8Ch] [ebp-60h] BYREF
  unsigned int v31; // [esp+E8h] [ebp-4h]

  if ( a2 ) /*0x539bc9*/
  {
    NiAVObject_UpdateNiAVObject(a2, 0.0, 1); /*0x539bd9*/
    m_parent = a2->members.m_parent; /*0x539bde*/
    if ( m_parent ) /*0x539be3*/
    {
      BhkCollisionObject = (NiObject *)NiAVObject_GetBhkCollisionObject((int)m_parent); /*0x539bf4*/
      if ( BhkCollisionObject ) /*0x539bf8*/
      {
        v20 = 0; /*0x539bfe*/
        v22 = 0; /*0x539c02*/
        Unk_02 = 0; /*0x539c06*/
        v21 = 1; /*0x539c0a*/
        v19 = &hkLimitedHingeConstraintCinfo::`vftable'; /*0x539c12*/
        v31 = 0; /*0x539c1c*/
        Shared_GetPointerAtOffset08(this); /*0x539c23*/
        sub_8B2B00(&v19); /*0x539c2c*/
        unk10 = (int *)this->unk10; /*0x539c35*/
        vftable = BhkCollisionObject[2].__vftable; /*0x539c3a*/
        v25 = vftable; /*0x539c3d*/
        if ( unk10 ) /*0x539c41*/
          v22 = unk10[2]; /*0x539c46*/
        else
          v22 = 0; /*0x539c4c*/
        if ( vftable ) /*0x539c52*/
          Unk_02 = vftable->Unk_02; /*0x539c57*/
        else
          Unk_02 = 0; /*0x539c5d*/
        sub_5398E0((int)v28, (float *)&m_parent->members.super.m_worldTransform); /*0x539c6a*/
        v20->m128_f32[3] = 0.0; /*0x539c75*/
        v20[1].m128_f32[0] = kFaceEarNormalMatchRadius; /*0x539c82*/
        *(float *)v27 = 0.0; /*0x539c91*/
        *(float *)&v27[1] = 0.0; /*0x539c96*/
        v30[0] = v28[0]; /*0x539c9a*/
        *(float *)&v27[2] = 1.0; /*0x539cad*/
        v30[1] = v28[1]; /*0x539cb6*/
        *(float *)&v27[3] = 0.0; /*0x539cbe*/
        v30[2] = v28[2]; /*0x539cd3*/
        v30[3] = v29; /*0x539ce4*/
        sub_8B23E0(v20, v30, v28, &v29, v27); /*0x539cec*/
        v6 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x539cf3*/
        v26 = v6; /*0x539cfb*/
        LOBYTE(v31) = 1; /*0x539d01*/
        if ( v6 ) /*0x539d09*/
          v7 = sub_5399B0(v6, (int)&v19); /*0x539d12*/
        else
          v7 = 0; /*0x539d19*/
        LOBYTE(v31) = 0; /*0x539d1e*/
        sub_8A46C0(unk10, (volatile LONG *)v7); /*0x539d25*/
        v8 = v25; /*0x539d2a*/
        if ( v25 && (v9 = v25->Unk_02) != 0 && (v10 = (int)v9 + 0x14) != 0 ) /*0x539d3e*/
          v11 = *(_DWORD *)(v10 + 0x1C); /*0x539d40*/
        else
          v11 = 0; /*0x539d45*/
        v12 = v11 & 0xFFFFE0C0 | 0x1608; /*0x539d51*/
        if ( unk10 ) /*0x539d56*/
        {
          v13 = unk10[2]; /*0x539d58*/
          if ( v13 ) /*0x539d5d*/
          {
            v14 = v13 + 0x14; /*0x539d5f*/
            if ( v14 ) /*0x539d64*/
              *(_DWORD *)(v14 + 0x1C) = v12; /*0x539d66*/
          }
        }
        (*(void (__thiscall **)(int *))(*unk10 + 0x80))(unk10); /*0x539d73*/
        v15 = (*((int (__thiscall **)(NiObjectVtbl *))v8->super.Destructor + 0x16))(v8); /*0x539d7c*/
        if ( v15 ) /*0x539d80*/
          v16 = *(NiObjectVtbl **)(v15 + 0x2B0); /*0x539d82*/
        else
          v16 = 0; /*0x539d8a*/
        v17 = v16; /*0x539d8c*/
        if ( v16 /*0x539dad*/
          || (v18 = NiRTTI_Cast((BSStringT *)&MEMORY[0xBA7A20], BhkCollisionObject)) != 0
          && (v17 = v18[4].__vftable) != 0 )
        {
          sub_532C80(v17, (int)unk10); /*0x539db0*/
        }
        v31 = 0xFFFFFFFF; /*0x539dba*/
        v19 = &hkConstraintCinfo::`vftable'; /*0x539dc5*/
        sub_8A0200(&v19, 0); /*0x539dcd*/
      }
    }
  }
}
