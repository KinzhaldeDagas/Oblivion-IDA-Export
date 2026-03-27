signed int __cdecl sub_7D1920(NiAVObject *a1, char a2)
{
  volatile LONG *v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  volatile LONG *v4; // esi
  volatile LONG *v5; // esi
  int v7; // edi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v9; // esi
  char *m_pcName; // eax
  int v11; // ecx
  NiObject *v12; // eax
  const char *vftable; // eax
  bool v14; // bl
  const char *v15; // eax
  double v16; // st7
  NiProperty *v17; // esi
  NiProperty *v18; // eax
  int v19; // edi
  volatile LONG *v20; // eax
  NiObjectNET *v21; // eax
  NiObject *m_controller; // esi
  const char *v23; // esi
  size_t v24; // [esp-4h] [ebp-138h]
  size_t v25; // [esp-4h] [ebp-138h]
  volatile LONG *v26; // [esp+14h] [ebp-120h] BYREF
  int v27; // [esp+18h] [ebp-11Ch] BYREF
  volatile LONG *v28; // [esp+1Ch] [ebp-118h] BYREF
  char Src[260]; // [esp+20h] [ebp-114h] BYREF
  unsigned int v30; // [esp+130h] [ebp-4h]

  v27 = 0;
  v2 = *sub_405760((NiGeometry *)a1, &v28);
  v3 = InterlockedDecrement;
  if ( v28 )
  {
    v4 = v28;
    if ( !v3(v28 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
  }
  if ( !v2 )
  {
    NiAVObject_InitializePropertyState(a1);
    v2 = *sub_405760((NiGeometry *)a1, &v26);
    if ( v26 )
    {
      v5 = v26;
      if ( !v3(v26 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
    }
  }
  if ( !a1 )
    return 0;
  if ( a1->vtbl->super.Unk_05((NiObject *)a1) )
    return 0;
  v7 = *((_DWORD *)v2 + 8);
  if ( !v7 )
    return 0;
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a1, 2);
  v9 = NiPropertyByID;
  if ( NiPropertyByID )
  {
    m_pcName = (char *)NiPropertyByID->members.m_pcName;
    if ( m_pcName )
    {
      if ( !_strcmp(m_pcName, "lava") )
        return 0x11;
    }
  }
  v11 = *(_DWORD *)(v7 + 0x20);
  if ( !*(_DWORD *)v11 || !*(_DWORD *)(*(_DWORD *)v11 + 8) )
    return 0;
  v12 = NiRTTI_Cast((BSStringT *)dword_B3F95C, *(NiObject **)(*(_DWORD *)v11 + 8));
  if ( !v12 )
    return 1;
  vftable = (const char *)v12[7].__vftable;
  if ( !vftable )
    return 1;
  sub_7B4160(Src, vftable, (int)"_n");
  v14 = !*sub_7B8200(&v27, Src, 1, 1) && !a2;
  sub_7016A0((NiD3DVertexShader *)&v27);
  if ( v14 )
    return 0;
  if ( v9 )
  {
    v15 = v9->members.m_pcName;
    if ( v15 )
    {
      LODWORD(v24) = 4;
      if ( !_strnicmp(v15, "hair", v24) )
      {
        if ( UsePS3Shaders || ShaderPackage >= 5 )
          return 0x1A;
        return 1;
      }
    }
  }
  if ( ShaderPackage < 2 || !v9 || _strcmp((char *)v9->members.m_pcName, "skin") )
  {
    if ( (*(_BYTE *)(v7 + 0x18) & 0xE) == 8 )
      return 0xF;
    v17 = NiNode_GetNiPropertyByID((NiNode *)a1, 0);
    v18 = NiNode_GetNiPropertyByID((NiNode *)a1, 2);
    if ( v18 )
    {
      LODWORD(v24) = 7;
      v19 = _strnicmp(v18->members.m_pcName, "dynalpha", v24);
    }
    else
    {
      v19 = 0xFFFFFFFF;
    }
    if ( !v17 )
    {
      if ( v19 )
        goto LABEL_52;
      v20 = (volatile LONG *)FormHeapAlloc(0x1Cu);
      v26 = v20;
      v30 = 0;
      if ( v20 )
        v21 = sub_47F920((NiObjectNET *)v20);
      else
        v21 = 0;
      LOWORD(v21[1].vtbl) &= ~1u;
      v30 = 0xFFFFFFFF;
      v17 = (NiProperty *)v21;
    }
    if ( ((int)v17[1].vtbl & 1) != 0 || !v19 )
    {
      if ( UsePS3Shaders )
        return 0x1A;
      goto LABEL_56;
    }
LABEL_52:
    if ( UsePS3Shaders )
    {
      m_controller = (NiObject *)a1->members.super.m_controller;
      if ( m_controller )
      {
        while ( !NiRTTI::IsObjectOfRTTIType(&stru_B3CE30, m_controller) )
        {
          m_controller = (NiObject *)m_controller[6].members.m_uiRefCount;
          if ( !m_controller )
            goto LABEL_56;
        }
        return 0x1A;
      }
    }
LABEL_56:
    v23 = a1->members.super.m_pcName;
    if ( v23 )
    {
      LODWORD(v24) = 5;
      if ( strncmp(v23, "Block", v24) )
      {
        LODWORD(v25) = 4;
        strncmp(v23, "STBB", v25);
      }
    }
    return 1;
  }
  if ( *(float *)&v9[3].members.super.m_uiRefCount < 1.0 )
  {
    v16 = flt_A46B10;
    ++v9[3].members.m_controller;
    *(float *)&v9[3].members.super.m_uiRefCount = v16;
  }
  return 0xE;
}
