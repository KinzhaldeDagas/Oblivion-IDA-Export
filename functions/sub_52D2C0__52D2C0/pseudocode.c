char __userpurge sub_52D2C0@<al>(
        int this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        Ni2DBuffer **a5,
        Ni2DBuffer **a6,
        int *a7,
        int a8)
{
  Ni2DBuffer *v8; // esi
  bool v9; // zf
  Ni2DBuffer *v10; // eax
  Ni2DBuffer *v11; // esi
  Ni2DBuffer *v12; // edi
  unsigned int v13; // esi
  int IsFemale; // eax
  int v15; // esi
  int v16; // edx
  unsigned __int16 v17; // cx
  unsigned int v18; // eax
  const char *v19; // eax
  char *m_data; // esi
  void (__thiscall ***v21)(_DWORD, int); // edi
  char v22; // cl
  TESModel *v23; // ecx
  TESModel *v24; // esi
  Ni2DBuffer *v25; // eax
  Ni2DBuffer **v26; // edi
  const char *v27; // eax
  unsigned int v28; // eax
  char *v29; // edi
  int v30; // esi
  Ni2DBuffer **v31; // esi
  const char *v33; // [esp+0h] [ebp-1B8h]
  Ni2DBuffer *v34; // [esp+4h] [ebp-1B4h]
  unsigned int v35; // [esp+4h] [ebp-1B4h]
  unsigned int v36; // [esp+1Ch] [ebp-19Ch] BYREF
  int v37; // [esp+20h] [ebp-198h]
  int v38; // [esp+24h] [ebp-194h] BYREF
  int v39; // [esp+28h] [ebp-190h] BYREF
  int v40; // [esp+2Ch] [ebp-18Ch] BYREF
  unsigned int v41; // [esp+30h] [ebp-188h]
  BSStringT ArgList; // [esp+34h] [ebp-184h] BYREF
  int *v43; // [esp+3Ch] [ebp-17Ch]
  Ni2DBuffer **v44; // [esp+40h] [ebp-178h]
  int v45; // [esp+44h] [ebp-174h] BYREF
  _DWORD a1[24]; // [esp+48h] [ebp-170h] BYREF
  char v47[256]; // [esp+A8h] [ebp-110h] BYREF
  int v48; // [esp+1B4h] [ebp-4h]

  v45 = this;
  v43 = a7;
  v44 = a6;
  if ( a8 == 0xF )
  {
    v41 = 4;
  }
  else if ( (unsigned int)(a8 - 2) > 4 )
  {
    v41 = 0xFFFFFFFF;
  }
  else
  {
    v41 = a8 - 2;
  }
  v39 = 0;
  v48 = 2;
  v38 = 0;
  v40 = 0;
  ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  ArgList.m_data = 0;
  *(_DWORD *)&ArgList.m_dataLen = 0;
  v36 = 0;
  v37 = 0;
  v8 = *a5;
  v9 = *a5 == 0;
  LOBYTE(v48) = 5;
  if ( !v9 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v8->members) )
    {
      if ( v8 )
        (*(void (__thiscall **)(Ni2DBuffer *, int))v8->__vftable)(v8, 1);
    }
    *a5 = 0;
  }
  v10 = (Ni2DBuffer *)sub_523D80();
  v11 = *v44;
  v12 = v10;
  if ( *v44 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v11->members) )
        (*(void (__thiscall **)(Ni2DBuffer *, int))v11->__vftable)(v11, 1);
    }
    *v44 = v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)&v12->members);
  }
  v13 = v41;
  if ( v41 > 4
    || (!v43 ? (v41 = 0, IsFemale = 0) : (IsFemale = TESActorBase_IsFemale(v43), v41 = IsFemale),
        (v15 = IsFemale + v13 + 4 * IsFemale, v16 = 3 * v15 + 0x8A, v17 = *(_WORD *)(v45 + 4 * v16 + 4), v17 != 0xFFFF)
      ? (v18 = v17)
      : (v18 = strlen(*(const char **)(v45 + 4 * v16))),
        !v18) )
  {
    FormHeapFree(v36);
    v36 = 0;
    v37 = 0;
    FormHeapFree(0);
    LOBYTE(v48) = 2;
    _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
    return 0;
  }
  v19 = *(const char **)(v45 + 0xC * v15 + 0x228);
  if ( !v19 )
    v19 = EmptyString;
  BSStringT_Static_Format(&ArgList, "Textures\\%s", v19);
  m_data = ArgList.m_data;
  v34 = (Ni2DBuffer *)*sub_442890((UInt32 *)&v45, ArgList.m_data, 0, 0);
  LOBYTE(v48) = 6;
  NiSmartPointer_Set__(a5, v34);
  LOBYTE(v48) = 5;
  if ( v45 )
  {
    v21 = (void (__thiscall ***)(_DWORD, int))v45;
    if ( !InterlockedDecrement((volatile LONG *)(v45 + 4)) )
      (**v21)(v21, 1);
  }
  if ( *a5 )
  {
    if ( byte_B10D3C )
    {
      v22 = byte_B3630C;
      if ( a8 == 2 )
      {
        if ( v41 == 1 )
        {
          v33 = "%08XModUpperBodyFemale";
          v23 = v22 != 0 ? &unk_B364B8 : 0;
        }
        else
        {
          v33 = "%08XModUpperBodyMale";
          v23 = v22 != 0 ? &unk_B364A0 : 0;
        }
      }
      else
      {
        v33 = "%08XModBody";
        v23 = v22 != 0 ? &unk_B364D0 : 0;
      }
      v24 = v23;
      _sprintf(v47, v33, v43[3]);
      if ( !v24 )
        goto LABEL_40;
      v25 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)dword_B35300 + 4))(
                            dword_B35300,
                            v47,
                            0);
      v26 = v44;
      NiSmartPointer_Set__(v44, v25);
      if ( !*v26 )
      {
        v27 = v24->vtbl->GetModelPath(v24);
        BSStringT_Static_Format(&ArgList, "Meshes\\%s", v27);
        v28 = sub_5500C0(&v36, ArgList.m_data);
        v29 = (char *)sub_553620(0, 0, 0, v28, 1, 0);
        if ( !v29 )
          goto LABEL_40;
        sub_5221C0(v43, a1);
        v30 = 0;
        if ( GetOpenedMenuCode(a8, st5_0, st6_0, st7_0) == 0x40C )
          v30 = a8 != 2 ? 5 : 0xA;
        v35 = v30;
        v31 = v44;
        sub_557E60(v29, (int)a1, (int *)v44, v35);
        if ( !*v31 )
        {
LABEL_40:
          LOBYTE(v48) = 4;
          BSStringT_Clear(&v36);
          LOBYTE(v48) = 3;
          BSStringT_Clear((unsigned int *)&ArgList);
          goto LABEL_32;
        }
        (*(void (__thiscall **)(UInt32, char *, Ni2DBuffer *))(*(_DWORD *)dword_B35300 + 8))(dword_B35300, v47, *v31);
      }
    }
    LOBYTE(v48) = 4;
    BSStringT_Clear(&v36);
    LOBYTE(v48) = 3;
    BSStringT_Clear((unsigned int *)&ArgList);
    LOBYTE(v48) = 2;
    _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
    LOBYTE(v48) = 1;
    sub_7016A0((NiD3DVertexShader *)&v40);
    LOBYTE(v48) = 0;
    sub_7016A0((NiD3DVertexShader *)&v38);
    v48 = 0xFFFFFFFF;
    sub_7016A0((NiD3DVertexShader *)&v39);
    return 1;
  }
  FormHeapFree(v36);
  v36 = 0;
  v37 = 0;
  FormHeapFree((unsigned int)m_data);
LABEL_32:
  LOBYTE(v48) = 2;
  _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  LOBYTE(v48) = 1;
  sub_7016A0((NiD3DVertexShader *)&v40);
  LOBYTE(v48) = 0;
  sub_7016A0((NiD3DVertexShader *)&v38);
  v48 = 0xFFFFFFFF;
  sub_7016A0((NiD3DVertexShader *)&v39);
  return 0;
}
