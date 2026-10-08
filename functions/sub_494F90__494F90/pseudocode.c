signed int __cdecl sub_494F90(NiAVObject *a1, unsigned int a2, int a3)
{
  int v3; // edi
  const char *m_pcName; // eax
  const char *v6; // edx
  unsigned int v7; // eax
  char *v8; // edi
  char *v10; // eax
  char v12; // dl
  _DWORD v13[289]; // [esp+14h] [ebp-59Ch] BYREF
  char v14; // [esp+49Bh] [ebp-115h] BYREF
  char Src[260]; // [esp+49Ch] [ebp-114h] BYREF
  unsigned int v16; // [esp+5ACh] [ebp-4h]

  v3 = 0; /*0x494fd7*/
  if ( a2 < 2 ) /*0x494fdb*/
    return 1; /*0x494fdb*/
  if ( a2 == 3 && a1 ) /*0x494fe9*/
  {
    switch ( a3 ) /*0x494ff5*/
    {
      case 'p': /*0x494ff5*/
        a1->members.m_flags |= 1u; /*0x494ff7*/
        return 1; /*0x494ffc*/
      case 'q': /*0x494ff5*/
        a1->members.m_flags &= ~1u; /*0x49502e*/
        return 1; /*0x495034*/
      case 'r': /*0x494ff5*/
        NiAVObject_InitializePropertyState(a1); /*0x49503d*/
        NiNode_UpdateDynamicEffectState((NiNode *)a1); /*0x495044*/
        NiAVObject_UpdateNiAVObject(a1, 0.0, 0); /*0x495053*/
        return 1; /*0x495058*/
      case 'z': /*0x494ff5*/
        NiStream::NiStream((NiStream *)v13); /*0x495063*/
        v16 = 0; /*0x49506d*/
        sub_713E50(v13, (int)a1); /*0x495078*/
        m_pcName = a1->members.super.m_pcName; /*0x49507d*/
        if ( !m_pcName ) /*0x495082*/
          m_pcName = "NullObject"; /*0x495084*/
        *(_DWORD *)Src = (char *)&loc_5C3A62 + 1; /*0x495089*/
        v6 = m_pcName; /*0x495094*/
        v7 = strlen(m_pcName) + 1; /*0x4950a6*/
        v8 = &v14; /*0x4950a8*/
        while ( *++v8 ) /*0x4950b8*/
          ; /*0x4950b0*/
        qmemcpy(v8, v6, v7); /*0x4950c1*/
        v10 = &v14; /*0x4950d1*/
        while ( *++v10 ) /*0x4950dc*/
          ; /*0x4950d4*/
        v12 = byte_A3DBAC; /*0x4950e4*/
        *(_DWORD *)v10 = dword_A3DBA8; /*0x4950ea*/
        v10[4] = v12; /*0x4950ec*/
        sub_712140((char *)v13, Src); /*0x4950fb*/
        v3 = 1; /*0x495104*/
        v16 = 0xFFFFFFFF; /*0x495109*/
        NiStream::~NiStream((NiStream *)v13); /*0x495114*/
        break;
    }
  }
  return v3; /*0x495003*/
}
