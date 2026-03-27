void __thiscall sub_47B090(int **this, int arg0, float *a3, int a4, char a5, char *a6)
{
  int v7; // ebx
  int v8; // ebp
  char *v9; // eax
  unsigned int v10; // eax
  int v11; // esi
  void (__thiscall ***v12)(_DWORD, int); // esi
  _DWORD *v13; // ebp
  int **v14; // edi
  _DWORD *v15; // edi
  void *v16; // ecx
  int *v17; // eax
  int v18; // eax
  int *v19; // eax
  int v20; // eax
  int v21; // ebx
  unsigned int v22; // edi
  int v23; // eax
  int v24; // ecx
  const char *v25; // ecx
  int v26; // eax
  const char *v27; // eax
  const char *v28; // ebp
  const char *v29; // ebx
  char *Name; // eax
  int v31; // edx
  unsigned __int16 v32; // ax
  __int16 v33; // ax
  size_t v34; // [esp+8h] [ebp-B8h]
  const char *v35; // [esp+8h] [ebp-B8h]
  char *v37; // [esp+24h] [ebp-9Ch]
  unsigned int v38; // [esp+2Ch] [ebp-94h]
  _DWORD *v39; // [esp+30h] [ebp-90h]
  int v40; // [esp+34h] [ebp-8Ch] BYREF
  NiTimeController *a2; // [esp+38h] [ebp-88h] BYREF
  int v42; // [esp+3Ch] [ebp-84h] BYREF
  int v43; // [esp+40h] [ebp-80h] BYREF
  int v44; // [esp+44h] [ebp-7Ch]
  int v45; // [esp+48h] [ebp-78h] BYREF
  unsigned int v46; // [esp+4Ch] [ebp-74h]
  int v47; // [esp+50h] [ebp-70h] BYREF
  int a1[24]; // [esp+54h] [ebp-6Ch] BYREF
  unsigned int v49; // [esp+BCh] [ebp-4h]

  v7 = arg0;
  v8 = arg0 + 0xAC;
  v37 = 0;
  sub_4784A0((_WORD *)(arg0 + 0xAC));
  sub_477F90(arg0 + 0xAC);
  if ( a4 == 1 )
  {
    v9 = a6;
    if ( !a6 )
      v9 = (char *)sub_478A40(this);
    v37 = v9;
  }
  *(float *)(arg0 + 0x54) = Vector3_InitValue_;
  *(float *)(arg0 + 0x58) = *(&Vector3_InitValue_ + 1);
  *(float *)(arg0 + 0x5C) = dword_B3F9B0;
  if ( a3 )
  {
    a3[0x15] = Vector3_InitValue_;
    a3[0x16] = *(&Vector3_InitValue_ + 1);
    a3[0x17] = dword_B3F9B0;
  }
  v10 = 0;
  v38 = 0;
  if ( *(_WORD *)(arg0 + 0xB6) )
  {
    do
    {
      if ( *(unsigned __int16 *)(v7 + 0xB6) > v10 )
      {
        v11 = *(_DWORD *)(*(_DWORD *)(v7 + 0xB0) + 4 * v10);
        if ( v11 && !(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0xC))(v11) )
        {
          (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v7 + 0x88))(v7, &v47, v11);
          if ( !v47 )
            goto LABEL_52;
          v12 = (void (__thiscall ***)(_DWORD, int))v47;
          if ( InterlockedDecrement((volatile LONG *)(v47 + 4)) )
            goto LABEL_52;
LABEL_14:
          (**v12)(v12, 1);
          goto LABEL_52;
        }
      }
      else
      {
        v11 = 0;
      }
      if ( !a5 || (LODWORD(v34) = strlen(off_B06590), _strnicmp(*(const char **)(v11 + 8), off_B06590, v34)) )
      {
        v13 = *(_DWORD **)(v11 + 0xB8);
        v39 = v13;
        if ( *(_DWORD *)(v11 + 0xB4) && *(_DWORD *)(v11 + 0xB8) && v37 )
        {
          v14 = this;
          if ( *(this + 0x54)
            && (*(int (__thiscall **)(_DWORD))(**(this + 0x54) + 0x170))(*(this + 0x54))
            && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 0x54) + 0x170))(*(this + 0x54)) + 4) == 0x23 )
          {
            v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(this + 0x54) + 0x170))(*(this + 0x54));
            ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
            v16 = *(void **)(v11 + 0xB4);
            v49 = 0;
            v17 = sub_700790(v16, &v45);
            sub_405070(&v40, *v17);
            LOBYTE(v49) = 1;
            sub_7016A0((NiD3DVertexShader *)&v45);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x8C))(v11, v40);
            v18 = *(_DWORD *)(v11 + 0xB8);
            if ( v18 )
            {
              if ( *(_DWORD *)(v18 + 0xC) )
              {
                v19 = sub_700790(*(void **)(v18 + 0xC), &v43);
                sub_405070(&a2, *v19);
                LOBYTE(v49) = 2;
                sub_7016A0((NiD3DVertexShader *)&v43);
                v20 = sub_700900(*(void **)(v11 + 0xB8));
                sub_478350((_DWORD *)v11, v20);
                sub_478300(*(NiNode **)(v11 + 0xB8), a2);
                LOBYTE(v49) = 1;
                sub_7016A0((NiD3DVertexShader *)&a2);
              }
            }
            sub_5221C0(v15, a1);
            if ( useFaceGenHeads )
              sub_558840(v37, (int)a1, v11, 1.0, 0);
            LOBYTE(v49) = 0;
            sub_7016A0((NiD3DVertexShader *)&v40);
            v49 = 0xFFFFFFFF;
            _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
            goto LABEL_32;
          }
        }
        else
        {
LABEL_32:
          v14 = this;
        }
        sub_47AC20(v14, (NiNode *)v11);
        if ( v13 )
        {
          v21 = v13[5];
          v22 = 0;
          v46 = *(_DWORD *)(v13[2] + 0x40);
          v44 = v21;
          if ( v46 )
          {
            do
            {
              v23 = NiObjectNET_LookupObjectByName(*this, *(char **)(*(_DWORD *)(v21 + 4 * v22) + 8));
              if ( v23 )
              {
                *(_DWORD *)(v13[5] + 4 * v22) = v23;
              }
              else
              {
                LODWORD(v34) = strlen(*(const char **)(*(_DWORD *)(v21 + 4 * v22) + 8));
                if ( !_strnicmp(*(const char **)(v11 + 8), *(const char **)(*(_DWORD *)(v21 + 4 * v22) + 8), v34) )
                {
                  v24 = *(_DWORD *)(arg0 + 0x1C);
                  if ( v24 )
                    v25 = *(const char **)(v24 + 8);
                  else
                    v25 = "NULL";
                  PrintError(
                    "Bone '%s' not found for part '%s->%s'.\r\nMake sure all the vertices are skinned to a bone in Max.",
                    *(const char **)(*(_DWORD *)(v21 + 4 * v22) + 8),
                    v25,
                    *(const char **)(arg0 + 8));
                }
                else
                {
                  v26 = (*this)[7];
                  if ( v26 )
                    v27 = *(const char **)(v26 + 8);
                  else
                    v27 = "NULL";
                  v28 = *(const char **)(arg0 + 8);
                  v29 = *(const char **)(*(_DWORD *)(v21 + 4 * v22) + 8);
                  v35 = v27;
                  Name = TESObjectREFR_GetName((TESObjectREFR *)*(this + 0x54));
                  PrintError("Bone '%s' not found for part '%s'.\r\nRequested by '%s' model '%s'.", v29, v28, Name, v35);
                  v21 = v44;
                }
                v13 = v39;
              }
              ++v22;
            }
            while ( v22 < v46 );
          }
          if ( a3 )
          {
            v13[4] = a3;
            (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a3 + 0x84))(a3, v11, 1);
          }
          v7 = arg0;
        }
        v8 = arg0 + 0xAC;
        goto LABEL_52;
      }
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v7 + 0x88))(v7, &v42, v11);
      if ( v42 )
      {
        v12 = (void (__thiscall ***)(_DWORD, int))v42;
        if ( !InterlockedDecrement((volatile LONG *)(v42 + 4)) )
          goto LABEL_14;
      }
LABEL_52:
      v10 = ++v38;
    }
    while ( v38 < *(unsigned __int16 *)(v7 + 0xB6) );
  }
  sub_4784A0((_WORD *)v8);
  if ( *(_WORD *)(v8 + 0xA) )
  {
    v31 = *(_DWORD *)(v8 + 4);
    do
    {
      v32 = *(_WORD *)(v8 + 0xA);
      if ( *(_DWORD *)(v31 + 4 * v32 - 4) )
        break;
      v33 = v32 - 1;
      *(_WORD *)(v8 + 0xA) = v33;
    }
    while ( v33 );
  }
}
