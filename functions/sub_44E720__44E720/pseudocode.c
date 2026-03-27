void __userpurge sub_44E720(
        int a1@<ecx>,
        int a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        double WorldModel@<st0>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        _BYTE *a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        signed int a24,
        signed int a25,
        int a26,
        char a27,
        float a28,
        float a29,
        CHAR a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61)
{
  int v61; // edi
  NiNode *Health; // esi
  int v63; // ecx
  const char *v64; // eax
  void *v65; // edi
  int BipedModel; // eax
  _WORD *v67; // [esp+30h] [ebp-694h]
  int v68; // [esp+3Ch] [ebp-688h]
  int savedregs; // [esp+6C4h] [ebp+0h] BYREF

  v61 = a1;
  if ( !byte_B05584 )
  {
    *(_BYTE *)(a1 + 0xCD6) = 1;
    if ( byte_B055A4 )
      sub_40D160((NiDX9Renderer *)OSGlobals, a1, a2);
    if ( byte_B0558C )
      nullsub_return0_0arg();
    Health = TESHealthForm_GetHealth(*(Sky **)v61);
    if ( Health )
    {
      do
      {
        if ( ((int)Health->members.super.super.m_pcName & 0x20) != 0 )
          goto LABEL_12;
        v63 = 0;
        while ( byte_B081AC[v63] != LOBYTE(Health->members.super.super.super.m_uiRefCount) )
        {
          if ( ++v63 >= 0x24 )
          {
            v64 = (const char *)((int (__thiscall *)(NiNode *))Health->vtbl[1].super.super.Unk_0E)(Health);
            PrintError("Object \"%s\" invalid type.", v64);
            goto LABEL_12;
          }
        }
        ((int (__thiscall *)(NiNode *))Health->vtbl[1].super.GetObjectByName)(Health);
        v65 = OblivionDynamicCast(
                Health,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
                &TESModel `RTTI Type Descriptor',
                0);
        OblivionDynamicCast(
          Health,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
          0);
        v67 = OblivionDynamicCast(
                Health,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
                &TESBipedModelForm `RTTI Type Descriptor',
                0);
        if ( v65 )
        {
          v68 = 1;
LABEL_19:
          if ( v67 )
          {
            switch ( v68 )
            {
              case 1:
                WorldModel = TESBipedModelForm_GetWorldModel(0);
                goto LABEL_23;
              case 4:
                BipedModel = TESBipedModelForm_GetBipedModel(v67, 1);
LABEL_23:
                def_44E8D5(
                  0,
                  (int)&savedregs,
                  BipedModel,
                  (int)Health,
                  a3,
                  a4,
                  WorldModel,
                  a6,
                  a7,
                  a8,
                  a9,
                  a10,
                  a11,
                  a12,
                  a13,
                  a14,
                  a15,
                  a16,
                  a17,
                  a18,
                  a19,
                  a20,
                  a21,
                  a22,
                  a23,
                  a24,
                  a25,
                  a26,
                  a27,
                  a28,
                  a29,
                  a30,
                  a31,
                  a32,
                  a33,
                  a34,
                  a35,
                  a36,
                  a37,
                  a38,
                  a39,
                  a40,
                  a41,
                  a42,
                  a43,
                  a44,
                  a45,
                  a46,
                  a47,
                  a48,
                  a49,
                  a50,
                  a51,
                  a52,
                  a53,
                  a54,
                  a55,
                  a56,
                  a57,
                  a58,
                  a59,
                  a60,
                  a61);
                return;
              default:
                break;
            }
          }
          JUMPOUT(0x44E905);
        }
        v68 = v67 != 0 ? 4 : 0;
        if ( v68 )
          goto LABEL_19;
LABEL_12:
        Health = (NiNode *)TESObject_GetNextObject(Health);
      }
      while ( Health );
      v61 = a1;
    }
    *(_BYTE *)(v61 + 0xCD6) = 0;
  }
}
