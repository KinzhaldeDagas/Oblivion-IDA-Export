void __thiscall sub_495E30(HWND *this, LPARAM a2, NiObject *a3)
{
  int v3; // eax
  int v4; // edi
  NiRTTI *(__thiscall *GetType)(NiObject *); // edx
  const char **v6; // eax
  HWND v7; // ecx
  LRESULT (__stdcall *v8)(HWND, UINT, WPARAM, LPARAM); // ebp
  LRESULT v9; // eax
  void (__thiscall *DumpAttributes)(NiObject *, void *); // edx
  void (__thiscall ***v11)(_DWORD, int); // ecx
  unsigned int v12; // edi
  int i; // eax
  int v14; // edx
  int v15; // eax
  char v16; // al
  int v17; // eax
  int v18; // eax
  int *v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  char v23; // al
  int *v24; // eax
  int *v25; // esi
  LONG (__stdcall *v26)(volatile LONG *); // ebp
  int *j; // edi
  bool v28; // bl
  void (__thiscall ***v29)(_DWORD, int); // esi
  void (__thiscall ***v30)(_DWORD, int); // esi
  int v31; // eax
  char v32; // al
  NiObject *v33; // eax
  NiObject *v34; // edi
  NiObject *v35; // eax
  NiObjectVtbl *v36; // eax
  UInt32 (__thiscall *Unk_03)(NiObject *); // eax
  int v38; // eax
  NiObject *v39; // eax
  NiObject *v40; // ebp
  NiObjectVtbl *vftable; // ecx
  unsigned int v42; // edi
  unsigned int k; // esi
  NiObjectVtbl *v44; // eax
  int v45; // eax
  int v46; // eax
  NiObject *v47; // eax
  NiObject *v48; // eax
  int v49; // eax
  HWND v50; // [esp-10h] [ebp-C0h]
  size_t v51; // [esp-4h] [ebp-B4h]
  int v52; // [esp-4h] [ebp-B4h]
  int v53; // [esp-4h] [ebp-B4h]
  void (__thiscall ***v55)(_DWORD, int); // [esp+18h] [ebp-98h]
  LPARAM v56; // [esp+1Ch] [ebp-94h]
  int v57; // [esp+20h] [ebp-90h]
  int v58; // [esp+24h] [ebp-8Ch] BYREF
  int v59; // [esp+28h] [ebp-88h] BYREF
  LPARAM lParam[6]; // [esp+2Ch] [ebp-84h] BYREF
  char *v61; // [esp+44h] [ebp-6Ch]
  int v62; // [esp+4Ch] [ebp-64h]
  int v63; // [esp+50h] [ebp-60h]
  NiObject *v64; // [esp+58h] [ebp-58h]
  char Dest[64]; // [esp+60h] [ebp-50h] BYREF
  int v66; // [esp+ACh] [ebp-4h]

  v57 = 0;
  if ( a3 )
  {
    v3 = FormHeapAlloc(0x10u);
    v4 = v3;
    v58 = v3;
    v66 = 0;
    if ( v3 )
    {
      *(_WORD *)(v3 + 8) = 0x80;
      *(_WORD *)(v3 + 0xE) = 0x80;
      *(_DWORD *)v3 = &NiTArray<char *>::`vftable';
      *(_WORD *)(v3 + 0xA) = 0;
      *(_WORD *)(v3 + 0xC) = 0;
      *(_DWORD *)(v3 + 4) = FormHeapAlloc(0x200u);
      v55 = (void (__thiscall ***)(_DWORD, int))v4;
    }
    else
    {
      v55 = 0;
    }
    GetType = a3->__vftable->GetType;
    v66 = 0xFFFFFFFF;
    lParam[1] = 0xFFFF0002;
    lParam[2] = 0x27;
    v64 = a3;
    v6 = (const char **)GetType(a3);
    LODWORD(v51) = 0x3F;
    strncpy(Dest, *v6, v51);
    v61 = Dest;
    v7 = *(this + 3);
    lParam[0] = a2;
    v8 = SendMessageA;
    Dest[0x3F] = 0;
    v62 = 0;
    v63 = 0;
    v9 = v8(v7, 0x1100u, 0, (LPARAM)lParam);
    DumpAttributes = a3->__vftable->DumpAttributes;
    lParam[0] = v9;
    v56 = v9;
    DumpAttributes(a3, v55);
    v11 = v55;
    v12 = 0;
    if ( *((_WORD *)v55 + 5) )
    {
      do
      {
        v61 = (char *)v55[1][v12];
        v50 = *(this + 3);
        v62 = 6;
        v63 = 6;
        v8(v50, 0x1100u, 0, (LPARAM)lParam);
        ++v12;
      }
      while ( v12 < *((unsigned __int16 *)v55 + 5) );
      v11 = v55;
    }
    for ( i = 0; (unsigned __int16)i < *((_WORD *)v11 + 5); v11[1][v14] = 0 )
      v14 = (unsigned __int16)i++;
    *((_WORD *)v11 + 5) = 0;
    *((_WORD *)v11 + 6) = 0;
    v15 = (int)a3->__vftable->GetType(a3);
    if ( v15 )
    {
      while ( (char *)v15 != dword_BA7D38 )
      {
        v15 = *(_DWORD *)(v15 + 4);
        if ( !v15 )
          goto LABEL_13;
      }
      v16 = 1;
    }
    else
    {
LABEL_13:
      v16 = 0;
    }
    v17 = v16 != 0 ? (unsigned int)a3 : 0;
    if ( v17 )
    {
      v18 = *(_DWORD *)(v17 + 8);
      if ( v18 && (v19 = (int *)(v18 + 0x14)) != 0 && (v20 = *v19) != 0 )
        v21 = *(_DWORD *)(v20 + 8);
      else
        v21 = 0;
      sub_495E30(this, v56, v21);
      v22 = (int)a3->__vftable->GetType(a3);
      if ( v22 )
      {
        while ( (char *)v22 != dword_BA7D84 )
        {
          v22 = *(_DWORD *)(v22 + 4);
          if ( !v22 )
            goto LABEL_24;
        }
        v23 = 1;
      }
      else
      {
LABEL_24:
        v23 = 0;
      }
      v24 = v23 != 0 ? (int *)a3 : 0;
      v25 = v24;
      if ( v24 )
      {
        if ( sub_8A4740(v24) )
        {
          v26 = InterlockedDecrement;
          for ( j = v25 + 4; ; j = (int *)j[1] )
          {
            v28 = 0;
            if ( j )
            {
              v57 |= 1u;
              if ( *sub_677C70(j, &v59) )
                v28 = 1;
            }
            if ( (v57 & 1) != 0 )
            {
              v29 = (void (__thiscall ***)(_DWORD, int))v59;
              v57 &= ~1u;
              if ( v59 )
              {
                if ( !v26((volatile LONG *)(v59 + 4)) )
                {
                  if ( v29 )
                    (**v29)(v29, 1);
                }
              }
            }
            if ( !v28 )
              break;
            v52 = *sub_677C70(j, &v58);
            v66 = 1;
            sub_495E30(this, v56, v52);
            v66 = 0xFFFFFFFF;
            if ( v58 )
            {
              v30 = (void (__thiscall ***)(_DWORD, int))v58;
              if ( !v26((volatile LONG *)(v58 + 4)) )
                (**v30)(v30, 1);
            }
          }
        }
      }
      goto LABEL_70;
    }
    v31 = (int)a3->__vftable->GetType(a3);
    if ( v31 )
    {
      while ( (char *)v31 != dword_BA7D78 )
      {
        v31 = *(_DWORD *)(v31 + 4);
        if ( !v31 )
          goto LABEL_46;
      }
      v32 = 1;
    }
    else
    {
LABEL_46:
      v32 = 0;
    }
    v33 = v32 != 0 ? a3 : 0;
    v34 = v33;
    if ( v33 )
    {
      v35 = NiRTTI_Cast((BSStringT *)dword_BA7D68, v33);
      if ( !v35 )
      {
        v39 = NiRTTI_Cast((BSStringT *)dword_BA7D5C, v34);
        v40 = v39;
        if ( v39 )
        {
          vftable = v39[1].__vftable;
          if ( vftable )
          {
            v42 = (*((int (__thiscall **)(NiObjectVtbl *))vftable->super.Destructor + 7))(vftable);
            if ( v42 )
            {
              for ( k = 0; k < v42; ++k )
              {
                v44 = v40[1].__vftable;
                if ( v44 && (v45 = *((_DWORD *)v44->Unk_04 + 2 * k)) != 0 )
                  v46 = *(_DWORD *)(v45 + 8);
                else
                  v46 = 0;
                sub_495E30(this, v56, v46);
              }
            }
          }
        }
        goto LABEL_70;
      }
      v36 = v35[1].__vftable;
      if ( v36 )
      {
        Unk_03 = v36->Unk_03;
        if ( Unk_03 )
        {
          v38 = *((_DWORD *)Unk_03 + 2);
LABEL_69:
          sub_495E30(this, v56, v38);
          goto LABEL_70;
        }
      }
      goto LABEL_68;
    }
    v47 = NiRTTI_Cast((BSStringT *)dword_BA7D44, a3);
    if ( v47 )
    {
      v53 = sub_89FE90(v47, 0x42);
      sub_495E30(this, v56, v53);
    }
    else
    {
      v48 = NiRTTI_Cast(&stru_BA7D50, a3);
      if ( v48 )
      {
        v49 = ((int (__thiscall *)(NiObject *))v48->__vftable[1].Unk_10)(v48);
        if ( v49 )
        {
          v38 = *(_DWORD *)(v49 + 0xC);
          goto LABEL_69;
        }
LABEL_68:
        v38 = 0;
        goto LABEL_69;
      }
    }
LABEL_70:
    (**v55)(v55, 1);
  }
}
