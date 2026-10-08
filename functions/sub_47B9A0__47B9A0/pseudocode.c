void __userpurge sub_47B9A0(unsigned int this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  _BYTE *v6; // eax
  int IsFemale; // eax
  int v8; // edi
  void **i; // esi
  _BYTE *v10; // eax
  const char *v11; // eax
  void *ModelData; // esi
  int v13; // ebx
  int v14; // eax
  NiObjectNET *v15; // esi
  _DWORD *v16; // ecx
  int (__thiscall *v17)(_DWORD *, int); // edx
  const char *v18; // eax
  int v19; // [esp-4h] [ebp-90h]
  int v20; // [esp-4h] [ebp-90h]
  BSStringT Src; // [esp+14h] [ebp-78h] BYREF
  int (__stdcall ***v22[4])(signed int); // [esp+1Ch] [ebp-70h] BYREF
  float v23; // [esp+2Ch] [ebp-60h]
  float v24; // [esp+30h] [ebp-5Ch]
  float v25; // [esp+34h] [ebp-58h]
  float v26[9]; // [esp+38h] [ebp-54h] BYREF
  float v27[9]; // [esp+5Ch] [ebp-30h] BYREF
  unsigned int v28; // [esp+88h] [ebp-4h]
  int v29; // [esp+90h] [ebp+4h]

  if ( a5 ) /*0x47b9d5*/
  {
    if ( *(_BYTE *)(a5 + 4) == 0x16 ) /*0x47b9df*/
    {
      ActorSkinInfo_ClearOrReplaceEquipmentSlot( /*0x47b9f0*/
        (ActorSkinInfo *)this,
        (ActorSkinInfoEquipmentSlot *)(this + 0xCC),
        1,
        0);
      v6 = (_BYTE *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(this + 0x150) + 0x170))( /*0x47ba05*/
                      *(_DWORD *)(this + 0x150),
                      a4,
                      a3,
                      st5_0);
      IsFemale = TESActorBase_IsFemale(v6); /*0x47ba09*/
      sub_4691D0(a5 + 0x5C, st5_0, a3, a4, (char *)this, IsFemale, 0xFFFFFFFF); /*0x47ba13*/
      if ( *(_DWORD *)(this + 0xD0) ) /*0x47ba18*/
      {
        v8 = 0; /*0x47ba25*/
        for ( i = (void **)(this + 0x4C); ; i += 4 ) /*0x47ba27*/
        {
          v10 = OblivionDynamicCast( /*0x47ba41*/
                  *i,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESBipedModelForm `RTTI Type Descriptor',
                  0);
          if ( v10 ) /*0x47ba4b*/
          {
            if ( (v10[6] & 2) != 0 ) /*0x47ba50*/
              break; /*0x47ba50*/
          }
          if ( ++v8 >= 0x10 ) /*0x47ba5f*/
          {
            if ( *(PlayerCharacter **)(this + 0x150) != reference || !sub_65D770(reference, this) ) /*0x47ba70*/
            {
              v11 = (const char *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(this + 0xD0) + 0x14))( /*0x47ba8e*/
                                    *(_DWORD *)(this + 0xD0),
                                    a4,
                                    a3,
                                    st5_0);
              ModelData = (void *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v11, 1, (void *)3, 1); /*0x47baa0*/
              OB_NiCloningProcess_ctor(v22); /*0x47baa2*/
              v25 = 1.0; /*0x47baa9*/
              v24 = 1.0; /*0x47baad*/
              v23 = 1.0; /*0x47bab1*/
              v28 = 0; /*0x47babc*/
              v13 = sub_700610(ModelData, (int)v22); /*0x47bacc*/
              v14 = 0; /*0x47bace*/
              if ( v13 ) /*0x47bad2*/
              {
                if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v13) ) /*0x47bade*/
                  sub_4A01B0((_BYTE *)v13, 7); /*0x47baee*/
                sub_6FFAC0((_WORD *)v13, off_A3CEB0); /*0x47bafa*/
                *(float *)(v13 + 0x54) = g_zeroNiPoint3.x; /*0x47bb05*/
                *(float *)(v13 + 0x58) = g_zeroNiPoint3.y; /*0x47bb0d*/
                *(float *)(v13 + 0x5C) = g_zeroNiPoint3.z; /*0x47bb16*/
                qmemcpy((void *)(v13 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x47bb26*/
                v15 = (NiObjectNET *)sub_47B5B0((int **)this, v13, 8, 0, 0); /*0x47bb36*/
                v29 = (int)v15; /*0x47bb3a*/
                if ( !v15 ) /*0x47bb41*/
                {
                  v29 = v13; /*0x47bb53*/
                  AttachModelUsingPrnExtraData( /*0x47bb5a*/
                    *(NiNode **)(*(_DWORD *)(this + 0x150) + 0x3C),
                    (NiAVObject *)v13,
                    0,
                    this,
                    8,
                    0);
                  v15 = (NiObjectNET *)v13; /*0x47bb62*/
                }
                Src.m_data = 0; /*0x47bb64*/
                Src.m_dataLen = 0; /*0x47bb68*/
                Src.m_bufLen = 0; /*0x47bb6d*/
                v16 = *(_DWORD **)(this + 0xCC); /*0x47bb72*/
                v19 = v16[3]; /*0x47bb7b*/
                v17 = *(int (__thiscall **)(_DWORD *, int))(*v16 + 0xD4); /*0x47bb7e*/
                LOBYTE(v28) = 1; /*0x47bb84*/
                v18 = (const char *)v17(v16, v19); /*0x47bb8c*/
                BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065A8, v18, v20); /*0x47bb9f*/
                NiObjectNET_SetName(v15, Src.m_data); /*0x47bbae*/
                if ( *(_BYTE *)(this + 0xD8) ) /*0x47bbb3*/
                {
                  qmemcpy(v26, &v15[2], sizeof(v26)); /*0x47bbcc*/
                  qmemcpy(&v15[2], sub_4D7C50(*(_DWORD **)(this + 0x150), v27, v26, 1), 0x24u); /*0x47bbec*/
                }
                LOBYTE(v28) = 0; /*0x47bbf2*/
                BSStringT_Clear((unsigned int *)&Src); /*0x47bbfa*/
                v14 = v29; /*0x47bbff*/
              }
              *(_DWORD *)(this + 0xD4) = v14; /*0x47bc0a*/
              v28 = 0xFFFFFFFF; /*0x47bc10*/
              sub_4781A0(v22); /*0x47bc1b*/
            }
            return; /*0x47bc1b*/
          }
        }
      }
    }
  }
}
