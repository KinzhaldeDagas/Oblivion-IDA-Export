void __userpurge sub_47B9A0(int this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  _BYTE *v6; // eax
  int IsFemale; // eax
  int v8; // edi
  void **i; // esi
  _BYTE *v10; // eax
  const char *v11; // eax
  void *v12; // esi
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

  if ( a5 )
  {
    if ( *(_BYTE *)(a5 + 4) == 0x16 )
    {
      sub_478780((char *)this, this, st5_0, a3, a4, this + 0xCC, 1, 0);
      v6 = (_BYTE *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x150) + 0x170))(*(_DWORD *)(this + 0x150));
      IsFemale = TESActorBase_IsFemale(v6);
      sub_4691D0(a5 + 0x5C, st5_0, a3, a4, (char *)this, IsFemale, 0xFFFFFFFF);
      if ( *(_DWORD *)(this + 0xD0) )
      {
        v8 = 0;
        for ( i = (void **)(this + 0x4C); ; i += 4 )
        {
          v10 = OblivionDynamicCast(
                  *i,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESBipedModelForm `RTTI Type Descriptor',
                  0);
          if ( v10 )
          {
            if ( (v10[6] & 2) != 0 )
              break;
          }
          if ( ++v8 >= 0x10 )
          {
            if ( *(PlayerCharacter **)(this + 0x150) != TESDataHandler_g_PlayerRef
              || !sub_65D770(TESDataHandler_g_PlayerRef, this) )
            {
              v11 = (const char *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(this + 0xD0) + 0x14))(
                                    *(_DWORD *)(this + 0xD0),
                                    a4,
                                    a3,
                                    st5_0);
              v12 = (void *)sub_439EB0((int *)ModelLoaderPtr, v11, 1, (void *)3, 1);
              sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)v22);
              v25 = 1.0;
              v24 = 1.0;
              v23 = 1.0;
              v28 = 0;
              v13 = sub_700610(v12, (int)v22);
              v14 = 0;
              if ( v13 )
              {
                if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B35288, (NiObject *)v13) )
                  sub_4A01B0((_BYTE *)v13, 7);
                sub_6FFAC0((_WORD *)v13, off_A3CEB0);
                *(float *)(v13 + 0x54) = Vector3_InitValue_;
                *(float *)(v13 + 0x58) = *(&Vector3_InitValue_ + 1);
                *(float *)(v13 + 0x5C) = dword_B3F9B0;
                qmemcpy((void *)(v13 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
                v15 = (NiObjectNET *)sub_47B5B0((int **)this, v13, 8, 0, 0);
                v29 = (int)v15;
                if ( !v15 )
                {
                  v29 = v13;
                  sub_479140(*(_DWORD **)(*(_DWORD *)(this + 0x150) + 0x3C), (_DWORD *)v13, 0, this, 8);
                  v15 = (NiObjectNET *)v13;
                }
                Src.m_data = 0;
                Src.m_dataLen = 0;
                Src.m_bufLen = 0;
                v16 = *(_DWORD **)(this + 0xCC);
                v19 = v16[3];
                v17 = *(int (__thiscall **)(_DWORD *, int))(*v16 + 0xD4);
                LOBYTE(v28) = 1;
                v18 = (const char *)v17(v16, v19);
                BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065A8, v18, v20);
                NiObjectNET_SetName(v15, Src.m_data);
                if ( *(_BYTE *)(this + 0xD8) )
                {
                  qmemcpy(v26, &v15[2], sizeof(v26));
                  qmemcpy(&v15[2], sub_4D7C50(*(_DWORD **)(this + 0x150), v27, v26, 1), 0x24u);
                }
                LOBYTE(v28) = 0;
                BSStringT_Clear((unsigned int *)&Src);
                v14 = v29;
              }
              *(_DWORD *)(this + 0xD4) = v14;
              v28 = 0xFFFFFFFF;
              sub_4781A0(v22);
            }
            return;
          }
        }
      }
    }
  }
}
