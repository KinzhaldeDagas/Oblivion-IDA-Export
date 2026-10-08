void __userpurge sub_44E720(
        int a1@<ecx>,
        int a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
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
        FileFinder *a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        FileFinder *a24,
        FileFinder *a25,
        FileFinder *a26,
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
  _DWORD *Health; // esi
  int v63; // ecx
  const char *v64; // eax
  void *v65; // edi
  const char **WorldModel; // eax
  const char **v67; // [esp+30h] [ebp-694h]
  int v68; // [esp+3Ch] [ebp-688h]
  int savedregs; // [esp+6C4h] [ebp+0h] BYREF

  v61 = a1; /*0x44e768*/
  if ( !byte_B05584 )
  {
    *(_BYTE *)(a1 + 0xCD6) = 1; /*0x44e774*/
    if ( byte_B055A4 ) /*0x44e77b*/
      MenuBackground_CaptureWorldToTexture((NiDX9Renderer *)MEMORY[0xB33398], a1, a2); /*0x44e789*/
    if ( byte_B0558C ) /*0x44e78e*/
      nullsub_return0_0arg(); /*0x44e7a0*/
    Health = (_DWORD *)TESHealthForm_GetHealth(*(TESHealthForm **)v61); /*0x44e7af*/
    if ( Health )
    {
      do
      {
        if ( (Health[2] & 0x20) != 0 ) /*0x44e7c5*/
          goto LABEL_12; /*0x44e7c5*/
        v63 = 0; /*0x44e7ca*/
        while ( byte_B081AC[v63] != *((_BYTE *)Health + 4) ) /*0x44e7d6*/
        {
          if ( ++v63 >= 0x24 ) /*0x44e7de*/
          {
            v64 = (const char *)(*(int (__thiscall **)(_DWORD *))(*Health + 0xD4))(Health); /*0x44e7ea*/
            PrintError("Object \"%s\" invalid type.", v64); /*0x44e7f2*/
            goto LABEL_12; /*0x44e7f2*/
          }
        }
        (*(int (__thiscall **)(_DWORD *))(*Health + 0xF4))(Health); /*0x44e852*/
        v65 = OblivionDynamicCast( /*0x44e87c*/
                Health,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
                &TESModel `RTTI Type Descriptor',
                0);
        OblivionDynamicCast( /*0x44e87e*/
          Health,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
          0);
        v67 = (const char **)OblivionDynamicCast( /*0x44e89e*/
                               Health,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
                               &TESBipedModelForm `RTTI Type Descriptor',
                               0);
        if ( v65 ) /*0x44e8a2*/
        {
          v68 = 1; /*0x44e8a4*/
LABEL_19:
          if ( v67 ) /*0x44e8c7*/
          {
            switch ( v68 ) /*0x44e8d5*/
            {
              case 1: /*0x44e8d5*/
                WorldModel = (const char **)TESBipedModelForm_GetWorldModel(v67, 0); /*0x44e8e1*/
                goto LABEL_23; /*0x44e8e6*/
              case 4: /*0x44e8d5*/
                WorldModel = TESBipedModelForm_GetBipedModel(v67, 1); /*0x44e8fe*/
LABEL_23:
                def_44E8D5( /*0x44e903*/
                  0,
                  (int)&savedregs,
                  (int)WorldModel,
                  (int)Health,
                  a3,
                  a4,
                  a5,
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
                return; /*0x44e904*/
              default:
                break;
            }
          }
          JUMPOUT(0x44E905); /*0x44e905*/
        }
        v68 = v67 != 0 ? 4 : 0;
        if ( v68 ) /*0x44e8bd*/
          goto LABEL_19; /*0x44e8bd*/
LABEL_12:
        Health = (_DWORD *)TESObject_GetNextObject(Health); /*0x44e7fa*/
      }
      while ( Health );
      v61 = a1; /*0x44e80b*/
    }
    *(_BYTE *)(v61 + 0xCD6) = 0; /*0x44e80f*/
  }
}
