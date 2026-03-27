void __thiscall sub_859880(
        _DWORD *this,
        int a2,
        int a3,
        _WORD *a4,
        int a5,
        char *a6,
        char a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  _DWORD *v15; // eax
  int v16; // ecx
  bool v17; // bl
  void (__thiscall ***v18)(_DWORD, int); // edi
  char *v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // [esp+14h] [ebp-10h] BYREF
  int v43; // [esp+20h] [ebp-4h]
  char v44; // [esp+2Ch] [ebp+8h]

  v44 = *(_BYTE *)(a3 + 0xFC);
  v15 = sub_405AD0((_DWORD *)a3, &v42);
  v16 = *v15;
  v17 = *(float *)&dword_B3FA90 == *(float *)(*v15 + 0xEC)
     && *(float *)&dword_B3FA94 == *(float *)(v16 + 0xF0)
     && *(float *)&dword_B3FA98 == *(float *)(v16 + 0xF4);
  v18 = (void (__thiscall ***)(_DWORD, int))v42;
  if ( v42 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v42 + 4)) )
    {
      if ( v18 )
        (**v18)(v18, 1);
    }
  }
  if ( !v17 )
  {
    v19 = a6;
    if ( a7 )
    {
      if ( v44 )
      {
        if ( a10 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v41 = FormHeapAlloc(0x10u);
            a5 = v41;
            v43 = 0x14;
            if ( v41 )
            {
              v21 = sub_7E2370(v41, a2, 0x128, *v19, 1u, a3);
              goto LABEL_95;
            }
            goto LABEL_94;
          }
        }
        else if ( a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v40 = FormHeapAlloc(0x10u);
            a5 = v40;
            v43 = 0x13;
            if ( v40 )
            {
              v21 = sub_7E2370(v40, a2, 0x127, *v19, 1u, a3);
              goto LABEL_95;
            }
            goto LABEL_94;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v39 = FormHeapAlloc(0x10u);
          a5 = v39;
          v43 = 0x12;
          if ( v39 )
          {
            v21 = sub_7E2370(v39, a2, 0x126, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( a10 )
      {
        if ( a9 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v38 = FormHeapAlloc(0x10u);
            a5 = v38;
            v43 = 0x11;
            if ( v38 )
            {
              v21 = sub_7E2370(v38, a2, 0x121, *v19, 1u, a3);
              goto LABEL_95;
            }
            goto LABEL_94;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v37 = FormHeapAlloc(0x10u);
          a5 = v37;
          v43 = 0x10;
          if ( v37 )
          {
            v21 = sub_7E2370(v37, a2, 0x11A, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( a9 )
      {
        if ( a12 )
        {
          if ( (_BYTE)a5 == 1 )
          {
            v36 = FormHeapAlloc(0x10u);
            a5 = v36;
            v43 = 0xF;
            if ( v36 )
            {
              v21 = sub_7E2370(v36, a2, 0x120, *v19, 1u, a3);
              goto LABEL_95;
            }
            goto LABEL_94;
          }
        }
        else if ( (_BYTE)a5 == 1 )
        {
          v35 = FormHeapAlloc(0x10u);
          a5 = v35;
          v43 = 0xE;
          if ( v35 )
          {
            v21 = sub_7E2370(v35, a2, 0x11F, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( a12 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v34 = FormHeapAlloc(0x10u);
          a5 = v34;
          v43 = 0xD;
          if ( v34 )
          {
            v21 = sub_7E2370(v34, a2, 0x119, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v33 = FormHeapAlloc(0x10u);
        a5 = v33;
        v43 = 0xC;
        if ( v33 )
        {
          v21 = sub_7E2370(v33, a2, 0x118, *v19, 1u, a3);
          goto LABEL_95;
        }
        goto LABEL_94;
      }
    }
    else if ( v44 )
    {
      if ( a10 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v32 = FormHeapAlloc(0x10u);
          a5 = v32;
          v43 = 0xB;
          if ( v32 )
          {
            v21 = sub_7E2370(v32, a2, 0x125, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( a11 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v31 = FormHeapAlloc(0x10u);
          a5 = v31;
          v43 = 0xA;
          if ( v31 )
          {
            v21 = sub_7E2370(v31, a2, 0x129, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( a12 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v30 = FormHeapAlloc(0x10u);
          a5 = v30;
          v43 = 9;
          if ( v30 )
          {
            v21 = sub_7E2370(v30, a2, 0x124, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v29 = FormHeapAlloc(0x10u);
        a5 = v29;
        v43 = 8;
        if ( v29 )
        {
          v21 = sub_7E2370(v29, a2, 0x123, *v19, 1u, a3);
          goto LABEL_95;
        }
        goto LABEL_94;
      }
    }
    else if ( a10 )
    {
      if ( a9 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v28 = FormHeapAlloc(0x10u);
          a5 = v28;
          v43 = 7;
          if ( v28 )
          {
            v21 = sub_7E2370(v28, a2, 0x11E, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v27 = FormHeapAlloc(0x10u);
        a5 = v27;
        v43 = 6;
        if ( v27 )
        {
          v21 = sub_7E2370(v27, a2, 0x117, *v19, 1u, a3);
          goto LABEL_95;
        }
        goto LABEL_94;
      }
    }
    else if ( a9 )
    {
      if ( a11 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v26 = FormHeapAlloc(0x10u);
          a5 = v26;
          v43 = 5;
          if ( v26 )
          {
            v21 = sub_7E2370(v26, a2, 0x122, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( a12 )
      {
        if ( (_BYTE)a5 == 1 )
        {
          v25 = FormHeapAlloc(0x10u);
          a5 = v25;
          v43 = 4;
          if ( v25 )
          {
            v21 = sub_7E2370(v25, a2, 0x11D, *v19, 1u, a3);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
      }
      else if ( (_BYTE)a5 == 1 )
      {
        v24 = FormHeapAlloc(0x10u);
        a5 = v24;
        v43 = 3;
        if ( v24 )
        {
          v21 = sub_7E2370(v24, a2, 0x11C, *v19, 1u, a3);
          goto LABEL_95;
        }
        goto LABEL_94;
      }
    }
    else if ( a11 )
    {
      if ( (_BYTE)a5 == 1 )
      {
        v23 = FormHeapAlloc(0x10u);
        a5 = v23;
        v43 = 2;
        if ( v23 )
        {
          v21 = sub_7E2370(v23, a2, 0x11B, *v19, 1u, a3);
          goto LABEL_95;
        }
        goto LABEL_94;
      }
    }
    else if ( a12 )
    {
      if ( (_BYTE)a5 == 1 )
      {
        v22 = FormHeapAlloc(0x10u);
        a5 = v22;
        v43 = 1;
        if ( v22 )
        {
          v21 = sub_7E2370(v22, a2, 0x116, *v19, 1u, a3);
          goto LABEL_95;
        }
LABEL_94:
        v21 = 0;
        goto LABEL_95;
      }
    }
    else if ( (_BYTE)a5 == 1 )
    {
      v20 = FormHeapAlloc(0x10u);
      a5 = v20;
      v43 = 0;
      if ( v20 )
      {
        v21 = sub_7E2370(v20, a2, 0x115, *v19, 1u, a3);
LABEL_95:
        a5 = v21;
        v43 = 0xFFFFFFFF;
        sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a5);
LABEL_97:
        *v19 = 0;
        return;
      }
      goto LABEL_94;
    }
    ++*a4;
    goto LABEL_97;
  }
}
