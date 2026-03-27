void __thiscall sub_539B80(Atmosphere *this, NiAVObject *a2)
{
  int m_parent; // esi
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
  NiObject *v24; // [esp+30h] [ebp-BCh]
  NiObjectVtbl *v25; // [esp+34h] [ebp-B8h]
  bhkRefObject *v26; // [esp+38h] [ebp-B4h]
  __int32 v27[4]; // [esp+3Ch] [ebp-B0h] BYREF
  __m128 v28[3]; // [esp+4Ch] [ebp-A0h] BYREF
  __m128 v29; // [esp+7Ch] [ebp-70h] BYREF
  __m128 v30[4]; // [esp+8Ch] [ebp-60h] BYREF
  unsigned int v31; // [esp+E8h] [ebp-4h]

  if ( a2 )
  {
    NiAVObject_UpdateNiAVObject(a2, 0.0, 1);
    m_parent = (int)a2->members.m_parent;
    if ( m_parent )
    {
      v24 = (NiObject *)sub_47FAC0(m_parent);
      if ( v24 )
      {
        v20 = 0;
        v22 = 0;
        Unk_02 = 0;
        v21 = 1;
        v19 = &hkLimitedHingeConstraintCinfo::`vftable';
        v31 = 0;
        sub_452A60(this);
        sub_8B2B00(&v19);
        unk10 = (int *)this->unk10;
        vftable = v24[2].__vftable;
        v25 = vftable;
        if ( unk10 )
          v22 = unk10[2];
        else
          v22 = 0;
        if ( vftable )
          Unk_02 = vftable->Unk_02;
        else
          Unk_02 = 0;
        sub_5398E0((int)v28, (float *)(m_parent + 0x64));
        v20->m128_f32[3] = 0.0;
        v20[1].m128_f32[0] = flt_A2FAAC;
        *(float *)v27 = 0.0;
        *(float *)&v27[1] = 0.0;
        v30[0] = v28[0];
        *(float *)&v27[2] = 1.0;
        v30[1] = v28[1];
        *(float *)&v27[3] = 0.0;
        v30[2] = v28[2];
        v30[3] = v29;
        sub_8B23E0(v20, v30, v28, &v29, v27);
        v6 = (bhkRefObject *)FormHeapAlloc(0x10u);
        v26 = v6;
        LOBYTE(v31) = 1;
        if ( v6 )
          v7 = sub_5399B0(v6, (int)&v19);
        else
          v7 = 0;
        LOBYTE(v31) = 0;
        sub_8A46C0(unk10, (volatile LONG *)v7);
        v8 = v25;
        if ( v25 && (v9 = v25->Unk_02) != 0 && (v10 = (int)v9 + 0x14) != 0 )
          v11 = *(_DWORD *)(v10 + 0x1C);
        else
          v11 = 0;
        v12 = v11 & 0xFFFFE0C0 | 0x1608;
        if ( unk10 )
        {
          v13 = unk10[2];
          if ( v13 )
          {
            v14 = v13 + 0x14;
            if ( v14 )
              *(_DWORD *)(v14 + 0x1C) = v12;
          }
        }
        (*(void (__thiscall **)(int *))(*unk10 + 0x80))(unk10);
        v15 = (*((int (__thiscall **)(NiObjectVtbl *))v8->super.Destructor + 0x16))(v8);
        if ( v15 )
          v16 = *(NiObjectVtbl **)(v15 + 0x2B0);
        else
          v16 = 0;
        v17 = v16;
        if ( v16 || (v18 = NiRTTI_Cast((BSStringT *)dword_BA7A20, v24)) != 0 && (v17 = v18[4].__vftable) != 0 )
          sub_532C80(v17, (int)unk10);
        v31 = 0xFFFFFFFF;
        v19 = &hkConstraintCinfo::`vftable';
        sub_8A0200(&v19, 0);
      }
    }
  }
}
