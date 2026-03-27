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

  v3 = 0;
  if ( a2 < 2 )
    return 1;
  if ( a2 == 3 && a1 )
  {
    switch ( a3 )
    {
      case 'p':
        a1->members.m_flags |= 1u;
        return 1;
      case 'q':
        a1->members.m_flags &= ~1u;
        return 1;
      case 'r':
        NiAVObject_InitializePropertyState(a1);
        NiNode_UpdateDynamicEffectState((NiNode *)a1);
        NiAVObject_UpdateNiAVObject(a1, 0.0, 0);
        return 1;
      case 'z':
        NiStream::NiStream((NiStream *)v13);
        v16 = 0;
        sub_713E50(v13, (int)a1);
        m_pcName = a1->members.super.m_pcName;
        if ( !m_pcName )
          m_pcName = "NullObject";
        *(_DWORD *)Src = (char *)&loc_5C3A62 + 1;
        v6 = m_pcName;
        v7 = strlen(m_pcName) + 1;
        v8 = &v14;
        while ( *++v8 )
          ;
        qmemcpy(v8, v6, v7);
        v10 = &v14;
        while ( *++v10 )
          ;
        v12 = byte_A3DBAC;
        *(_DWORD *)v10 = dword_A3DBA8;
        v10[4] = v12;
        sub_712140((char *)v13, Src);
        v3 = 1;
        v16 = 0xFFFFFFFF;
        NiStream::~NiStream((NiStream *)v13);
        break;
    }
  }
  return v3;
}
