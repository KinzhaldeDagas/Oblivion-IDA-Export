// positive sp value has been detected, the output may be wrong!
void __userpurge def_47AD87(
        const char *a1@<ebx>,
        NiNode *a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6)
{
  _DWORD *v6; // esi
  const char *v7; // ebx
  const char *v8; // edi
  int IsFemale; // eax
  NiTexturingProperty *v10; // esi
  NiProperty *NiPropertyByID; // ebp
  BOOL v12; // esi
  _DWORD *v13; // esi
  NiObject *v14; // eax
  const char *vftable; // ecx
  void (__thiscall **v16)(_DWORD *, int, int); // edi
  int v17; // eax
  volatile LONG *v18; // eax
  LONG (__stdcall *v19)(volatile LONG *); // edi
  void (__thiscall ***v20)(_DWORD, int); // esi
  void (__thiscall ***v21)(_DWORD, int); // esi
  int v22; // [esp-1A8h] [ebp-1A8h] BYREF
  int v23; // [esp-1A0h] [ebp-1A0h] BYREF
  NiObject *v24; // [esp-19Ch] [ebp-19Ch]
  int v25; // [esp-198h] [ebp-198h]
  NiRenderedTexture *v26; // [esp-194h] [ebp-194h] BYREF
  volatile LONG *v27; // [esp-190h] [ebp-190h] BYREF
  int v28; // [esp-18Ch] [ebp-18Ch] BYREF
  _DWORD *v29; // [esp-188h] [ebp-188h]
  int v30; // [esp-174h] [ebp-174h] BYREF
  int v31; // [esp-16Ch] [ebp-16Ch] BYREF
  char v32[272]; // [esp-114h] [ebp-114h] BYREF
  unsigned int v33; // [esp-4h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  PrintError("Bad skin name '%s' on '%s'.", a1, a2->members.super.m_parent->members.super.super.m_pcName);
  v6 = v29;
  if ( v29 )
  {
    sub_5221C0(v29, &v31);
    if ( !sub_52D2C0((void *)v29[0x3A], a3, a4, a5, (int *)&v26, &v28, (int)v29, v25) )
    {
      v7 = *(const char **)(v6[0x3A] + 0x1C);
      if ( !v7 )
        v7 = EmptyString;
      v8 = *(const char **)(4 * v25 + 0xB06588);
      IsFemale = TESActorBase_IsFemale(v6);
      PrintError("Missing '%s' race texture for '%s' in race '%s'.", *(const char **)(4 * IsFemale + 0xB10BC4), v8, v7);
      goto LABEL_26;
    }
  }
  if ( v27 )
  {
    v10 = (NiTexturingProperty *)sub_700900((void *)v27);
    NiTexturingProperty::SetUnk08(v10, v26);
    sub_708560(a2, &v27, 6);
    sub_7016A0((NiD3DVertexShader *)&v27);
LABEL_25:
    sub_405680(a2, (BSShaderProperty *)v10);
    goto LABEL_26;
  }
  NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4);
  v12 = NiPropertyByID
     && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
     && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
  v13 = v12 ? (_DWORD *)NiPropertyByID : 0;
  if ( !v13 )
  {
    v18 = (volatile LONG *)FormHeapAlloc(0x30u);
    v27 = v18;
    if ( v18 )
      v10 = NiTexturingProperty::NiTexturingProperty((NiTexturingProperty *)v18);
    else
      v10 = 0;
    NiTexturingProperty::SetUnk08(v10, v26);
    goto LABEL_25;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, NiRenderedTexture *))(*v13 + 0x80))(v13, 0, v26);
  v14 = NiRTTI_Cast((BSStringT *)dword_B3F95C, v24);
  vftable = 0;
  if ( v14 )
    vftable = (const char *)v14[7].__vftable;
  sub_7B4160(v32, vftable, (int)"_n");
  if ( v32[0] )
  {
    sub_7B8200(&v23, v32, 1, 1);
    LOBYTE(v33) = 3;
    if ( v23 )
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v13 + 0x84))(v13, 0, v23);
    v32[0x108] = 2;
    sub_7016A0((NiD3DVertexShader *)&v22);
  }
  (*(void (__thiscall **)(_DWORD *, int, NiObject *))(*v13 + 0x80))(v13, 1, v24);
  v16 = (void (__thiscall **)(_DWORD *, int, int))(*v13 + 0x84);
  v17 = sub_4783A0();
  (*v16)(v13, 1, v17);
  v13[7] |= 0x400u;
  v13[9] = 0;
LABEL_26:
  v19 = InterlockedDecrement;
  if ( v28 )
  {
    v20 = (void (__thiscall ***)(_DWORD, int))v28;
    if ( !v19((volatile LONG *)(v28 + 4)) )
      (**v20)(v20, 1);
  }
  v21 = (void (__thiscall ***)(_DWORD, int))v25;
  LOBYTE(retaddr) = 0;
  if ( v25 )
  {
    if ( !v19((volatile LONG *)(v25 + 4)) )
    {
      if ( v21 )
        (**v21)(v21, 1);
    }
  }
  v33 = 0xFFFFFFFF;
  _LN21(&v30, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
}
