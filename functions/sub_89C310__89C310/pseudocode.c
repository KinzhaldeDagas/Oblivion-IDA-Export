void __thiscall sub_89C310(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // ebp
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  char *v15; // esi
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  _DWORD *v18; // edx
  char *v19; // ebp
  _DWORD *v20; // eax
  char v21; // al
  int v22; // eax
  const void **v23; // eax
  const void **v24; // ebp
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // ebx
  int v29; // esi
  char v30; // al
  int v31; // ecx
  _DWORD *v32; // esi
  _DWORD *v33; // ecx
  int v34; // esi
  _DWORD *v35; // edx
  char *v36; // ebp
  _DWORD *v37; // eax
  int v38; // ebx
  _DWORD *v39; // esi
  _DWORD *v40; // ecx
  unsigned __int64 v41; // rax
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // eax
  int (__thiscall ***v45)(_DWORD, int *, int, int); // eax
  unsigned __int64 v46; // rax
  _DWORD *v47; // ecx
  int j; // esi
  int v49; // ebp
  bool v50; // zf
  _DWORD *v51; // edx
  _DWORD *v52; // ecx
  unsigned __int64 v53; // rax
  _DWORD *v54; // ecx
  _DWORD *v55; // eax
  int v56; // ecx
  _DWORD *v57; // ecx
  _DWORD *v58; // eax
  int v59; // ecx
  _DWORD *v60; // ecx
  _DWORD *v61; // eax
  int v62; // ecx
  _DWORD *v63; // [esp+10h] [ebp-60h]
  char v64; // [esp+27h] [ebp-49h]
  int v65; // [esp+28h] [ebp-48h]
  float i; // [esp+2Ch] [ebp-44h]
  _DWORD v67[2]; // [esp+30h] [ebp-40h] BYREF
  __int16 v68; // [esp+38h] [ebp-38h]
  char v69; // [esp+3Ah] [ebp-36h]
  _DWORD *v70; // [esp+40h] [ebp-30h] BYREF
  int v71; // [esp+44h] [ebp-2Ch]
  signed int v72; // [esp+48h] [ebp-28h]
  _DWORD *v73; // [esp+4Ch] [ebp-24h]
  _DWORD *v74; // [esp+50h] [ebp-20h] BYREF
  int v75; // [esp+54h] [ebp-1Ch]
  signed int v76; // [esp+58h] [ebp-18h]
  _DWORD *v77; // [esp+5Ch] [ebp-14h]
  _DWORD *v78; // [esp+60h] [ebp-10h] BYREF
  int v79; // [esp+64h] [ebp-Ch]
  signed int v80; // [esp+68h] [ebp-8h]
  _DWORD *v81; // [esp+6Ch] [ebp-4h]

  if ( a3 )
  {
    if ( *(this + 0x22) )
    {
      v68 = a3;
      v67[1] = a2;
      v5 = *(this + 0x20);
      LOBYTE(v67[0]) = 6;
      v69 = a4;
      sub_8D8830(v5, (int)v67);
    }
    else
    {
      v6 = TlsIndex;
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      v8 = ThreadLocalStoragePointer[TlsIndex];
      if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
      {
        v9 = ThreadLocalStoragePointer[TlsIndex];
        v10 = *(_DWORD **)(v8 + 0x1A4);
        *v10 = "LtAddEntities";
        v10[3] = "init";
        v11 = __rdtsc();
        v10[1] = v11;
        *(_DWORD *)(v9 + 0x1A4) = v10 + 4;
      }
      v12 = ThreadLocalStoragePointer[v6];
      ++*(this + 0x22);
      v13 = *(_DWORD **)(v12 + 0x19C);
      v70 = 0;
      v71 = 0;
      v72 = 0x80000000;
      v65 = v12;
      if ( !v13 )
        v13 = (_DWORD *)dword_BA7D9C;
      v14 = (_DWORD *)v13[8];
      v15 = (char *)v14 + ((4 * a3 + 0x10) & 0xFFFFFFF0);
      if ( (unsigned int)v15 > v13[0xB] )
      {
        v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v13 + 0xC))(v13, (4 * a3 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v13[8] = v15;
        v16 = v14;
      }
      v17 = *(_DWORD **)(v12 + 0x19C);
      v70 = v16;
      v73 = v16;
      v72 = a3 | 0x80000000;
      v74 = 0;
      v75 = 0;
      v76 = 0x80000000;
      if ( !v17 )
        v17 = (_DWORD *)dword_BA7D9C;
      v18 = (_DWORD *)v17[8];
      v19 = (char *)v18 + ((0x20 * a3 + 0x10) & 0xFFFFFFF0);
      if ( (unsigned int)v19 > v17[0xB] )
      {
        v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v17 + 0xC))(
                          v17,
                          (0x20 * a3 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v17[8] = v19;
        v20 = v18;
      }
      v74 = v20;
      v77 = v20;
      v21 = *((_BYTE *)this + 0xA4);
      v76 = a3 | 0x80000000;
      v64 = 0;
      if ( v21 )
      {
        v22 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x6C, 0x2F);
        *(_WORD *)(v22 + 4) = 0x6C;
        v23 = (const void **)sub_8DE400((_DWORD *)v22, (int)this);
        v24 = v23;
        if ( a4 == 1 )
        {
          *((_WORD *)v23 + 0x10) = *((_WORD *)this + 0x1E);
          *((_BYTE *)v23 + 0x26) = 1;
          *((_BYTE *)v23 + 0x29) = 1;
          *((_BYTE *)v23 + 0x28) = 1;
        }
        else
        {
          *((_WORD *)v23 + 0x10) = *((_WORD *)this + 0x24);
          *((_BYTE *)v23 + 0x26) = 1;
          *((_BYTE *)v23 + 0x29) = 0;
          *((_BYTE *)v23 + 0x28) = 0;
        }
      }
      else
      {
        v24 = *(const void ***)*(this + 0xE);
        v25 = (int)v24[0xE] + a3;
        v26 = (unsigned int)v24[0xF] & 0x3FFFFFFF;
        if ( v26 < v25 )
        {
          v27 = 2 * v26;
          if ( v25 < v27 )
            v25 = v27;
          sub_8A6E40(v24 + 0xD, v25, 4);
        }
      }
      v28 = 0;
      for ( i = *(float *)(*(this + 0x1D) + 8) * flt_A3D65C; v28 < a3; ++v28 )
      {
        v29 = *(_DWORD *)(a2 + 4 * v28);
        sub_8BC720((_WORD *)v29);
        if ( !*(_DWORD *)(v29 + 0x1C) )
          *(_DWORD *)(v29 + 0x1C) = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 0xC))(v29);
        sub_8DD0C0(0.0, 0, *(_DWORD *)(v29 + 0x50) + 0x10);
        v30 = *(_BYTE *)(v29 + 0x91);
        *(_DWORD *)(v29 + 8) = this;
        if ( v30 )
        {
          v31 = *(this + 0xC);
        }
        else
        {
          v64 = 1;
          v31 = (int)v24;
        }
        sub_8DDE30(v31, v29);
        if ( *(_DWORD *)(v29 + 0x14) )
        {
          v63 = &v74[8 * v75++];
          (*(void (__thiscall **)(_DWORD, _DWORD, float, _DWORD *))(**(_DWORD **)(v29 + 0x14) + 0xC))(
            *(_DWORD *)(v29 + 0x14),
            *(_DWORD *)(v29 + 0x1C),
            COERCE_FLOAT(LODWORD(i)),
            v63);
          v70[v71++] = v29 + 0x28;
        }
      }
      if ( *((_BYTE *)this + 0xA4) )
      {
        if ( v64 )
        {
          v32 = this + 0xE;
          if ( a4 != 1 )
            v32 = this + 0x11;
          if ( v32[1] == (v32[2] & 0x3FFFFFFF) )
            sub_8A6EE0((int)v32, 4);
          *(_DWORD *)(*v32 + 4 * v32[1]++) = v24;
        }
        else
        {
          (*(void (__thiscall **)(const void **, int))*v24)(v24, 1);
        }
      }
      v33 = *(_DWORD **)(v65 + 0x19C);
      v34 = *(this + 0xA9);
      v78 = 0;
      v79 = 0;
      v80 = 0x80000000;
      if ( !v33 )
        v33 = (_DWORD *)dword_BA7D9C;
      v35 = (_DWORD *)v33[8];
      v36 = (char *)v35 + ((8 * v34 + 0x10) & 0xFFFFFFF0);
      if ( (unsigned int)v36 > v33[0xB] )
      {
        v37 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v33 + 0xC))(v33, (8 * v34 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v33[8] = v36;
        v37 = v35;
      }
      v38 = TlsIndex;
      v80 = v34 | 0x80000000;
      v39 = NtCurrentTeb()->ThreadLocalStoragePointer;
      v78 = v37;
      v81 = v37;
      if ( *(_DWORD *)(v39[v38] + 0x1A4) < *(_DWORD *)(v39[v38] + 0x1A8) )
      {
        v40 = *(_DWORD **)(v65 + 0x1A4);
        *v40 = "StBroadphase";
        v41 = __rdtsc();
        v40[1] = v41;
        *(_DWORD *)(v65 + 0x1A4) = v40 + 3;
      }
      (*(void (__thiscall **)(_DWORD, _DWORD **, _DWORD **, _DWORD **))(*(_DWORD *)*(this + 0x19) + 0xC))(
        *(this + 0x19),
        &v70,
        &v74,
        &v78);
      if ( *(_DWORD *)(v39[v38] + 0x1A4) < *(_DWORD *)(v39[v38] + 0x1A8) )
      {
        v42 = *(_DWORD **)(v65 + 0x1A4);
        *v42 = "StCreateAgents";
        v43 = __rdtsc();
        v42[1] = v43;
        *(_DWORD *)(v65 + 0x1A4) = v42 + 3;
      }
      v44 = *(this + 0x1E);
      if ( v44 )
        v45 = (int (__thiscall ***)(_DWORD, int *, int, int))(v44 + 8);
      else
        v45 = 0;
      sub_8D8370((_DWORD **)*(this + 0x1A), v78, v79, v45);
      LODWORD(v46) = v39[v38];
      if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) )
      {
        v47 = *(_DWORD **)(v65 + 0x1A4);
        *v47 = "StAddedCb";
        v46 = __rdtsc();
        v47[1] = v46;
        *(_DWORD *)(v65 + 0x1A4) = v47 + 3;
      }
      for ( j = 0; j < a3; ++j )
      {
        v49 = *(_DWORD *)(a2 + 4 * j);
        sub_8DC380(v46, (int)this, v49);
        LODWORD(v46) = sub_8DBEF0(v49);
      }
      v50 = (*(this + 0x22))-- == 1;
      if ( v50 )
      {
        if ( *(this + 0x21) )
        {
          if ( !*((_BYTE *)this + 0x90) )
            sub_899210((int)this);
        }
      }
      v51 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( *(_DWORD *)(v51[TlsIndex] + 0x1A4) < *(_DWORD *)(v51[TlsIndex] + 0x1A8) )
      {
        v52 = *(_DWORD **)(v65 + 0x1A4);
        *v52 = "lt";
        v53 = __rdtsc();
        v52[1] = v53;
        *(_DWORD *)(v65 + 0x1A4) = v52 + 3;
      }
      v54 = *(_DWORD **)(v65 + 0x19C);
      v55 = v81;
      if ( !v54 )
        v54 = (_DWORD *)dword_BA7D9C;
      v50 = v81 == (_DWORD *)v54[0xA];
      v54[8] = v81;
      if ( v50 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v54 + 0x10))(v54, v55);
      if ( v80 >= 0 )
      {
        v56 = *(_DWORD *)(v65 + 0x19C);
        if ( !v56 )
          v56 = dword_BA7D9C;
        sub_8A75D0(v56, v78, 8 * v80, 0x14);
      }
      v57 = *(_DWORD **)(v65 + 0x19C);
      v58 = v77;
      if ( !v57 )
        v57 = (_DWORD *)dword_BA7D9C;
      v50 = v77 == (_DWORD *)v57[0xA];
      v57[8] = v77;
      if ( v50 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v57 + 0x10))(v57, v58);
      if ( v76 >= 0 )
      {
        v59 = *(_DWORD *)(v65 + 0x19C);
        if ( !v59 )
          v59 = dword_BA7D9C;
        sub_8A75D0(v59, v74, 0x20 * v76, 0x14);
      }
      v60 = *(_DWORD **)(v65 + 0x19C);
      v61 = v73;
      if ( !v60 )
        v60 = (_DWORD *)dword_BA7D9C;
      v50 = v73 == (_DWORD *)v60[0xA];
      v60[8] = v73;
      if ( v50 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v60 + 0x10))(v60, v61);
      if ( v72 >= 0 )
      {
        v62 = *(_DWORD *)(v65 + 0x19C);
        if ( !v62 )
          v62 = dword_BA7D9C;
        sub_8A75D0(v62, v70, 4 * v72, 0x14);
      }
    }
  }
}
