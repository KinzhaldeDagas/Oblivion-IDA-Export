int __cdecl sub_6159C0(
        int a1,
        int a2,
        float a3,
        float a4,
        _DWORD *a5,
        double a6,
        float a7,
        int a8,
        double a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        float a19,
        float a20,
        float a21,
        float a22,
        float a23,
        float a24,
        float a25,
        float a26,
        float a27,
        float a28,
        float a29,
        float a30,
        float a31,
        float a32,
        float a33)
{
  int v34; // edx
  float v35; // ecx
  float v36; // eax
  float v37; // ecx
  MobileObject *v38; // eax
  MobileObject *v39; // edi
  MobileObject *v40; // eax
  MobileObject *v41; // eax
  char **CharProxy; // eax
  bhkCharacterProxy *v43; // eax
  char *v44; // eax
  __m128 *v45; // eax
  float v46[8]; // [esp+54h] [ebp-3Ch] BYREF
  _BYTE v47[16]; // [esp+74h] [ebp-1Ch] BYREF
  _BYTE v48[12]; // [esp+84h] [ebp-Ch] BYREF

  if ( a5 )
  {
    v36 = *(&Vector3_InitValue_ + 1);
    v37 = dword_B3F9B0;
    v46[0] = Vector3_InitValue_;
    v46[1] = v36;
    v46[2] = v37;
    v38 = (MobileObject *)OblivionDynamicCast(
                            a5,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    v39 = v38;
    if ( v38 )
    {
      if ( ((int (__thiscall *)(MobileObject *))v38->vtbl[1].super.Unk_5F)(v38) )
      {
        v40 = (MobileObject *)((int (__thiscall *)(MobileObject *))v39->vtbl[1].super.Unk_5F)(v39);
        if ( MobileObject_GetCharProxy(v40) )
        {
          v41 = (MobileObject *)((int (__thiscall *)(MobileObject *))v39->vtbl[1].super.Unk_5F)(v39);
          CharProxy = (char **)MobileObject_GetCharProxy(v41);
          sub_5639D0(CharProxy, v46);
        }
      }
      if ( MobileObject_GetCharProxy(v39) )
      {
        v43 = MobileObject_GetCharProxy(v39);
        if ( v43 )
        {
          v44 = *((char **)v43 + 2);
          if ( v44 )
          {
            v45 = (__m128 *)sub_8AC0A0(v44);
            sub_43F3E0(v46, v45);
          }
        }
      }
    }
    if ( v39 )
    {
      switch ( LODWORD(a7) )
      {
        case 0:
        case 2:
          sub_5E0660(v39);
          break;
        case 1:
        case 3:
          sub_5E0660(v39);
          break;
        default:
          JUMPOUT(0x615B60);
      }
    }
    else
    {
      (*(int (__thiscall **)(_DWORD *, _BYTE *))(*a5 + 0x15C))(a5, v48);
      (*(int (__thiscall **)(_DWORD *, _BYTE *))(*a5 + 0x158))(a5, v47);
      ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a5 + 0xEC))(a5);
    }
    return def_615ADD(
             a1,
             a2,
             a3,
             a4,
             (int)a5,
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
             a33);
  }
  else
  {
    v34 = *((_DWORD *)&Vector3_InitValue_ + 1);
    *(float *)a1 = Vector3_InitValue_;
    v35 = dword_B3F9B0;
    *(_DWORD *)(a1 + 4) = v34;
    *(float *)(a1 + 8) = v35;
    return a1;
  }
}
