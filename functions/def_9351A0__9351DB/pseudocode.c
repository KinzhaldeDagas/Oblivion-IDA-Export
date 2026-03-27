// positive sp value has been detected, the output may be wrong!
int __usercall def_9351A0@<eax>(
        int a1@<ebx>,
        _DWORD *a2@<ebp>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        _DWORD *a20,
        int a21,
        int a22)
{
  int v22; // edx
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // esi
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  void *v30; // ecx
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // eax
  int v34; // ecx
  int v35; // eax
  _DWORD *v36; // ecx
  _DWORD *v37; // eax
  int *v38; // ecx
  int v39; // ebx
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // edx
  _DWORD *ThreadLocalStoragePointer; // esi
  int v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int *v48; // ecx
  unsigned __int64 v49; // rax
  _DWORD *v50; // ecx
  unsigned __int64 v51; // rax
  _DWORD *v52; // ecx
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h]
  int v55; // [esp+1Ch] [ebp+Ch]

  v22 = a8;
  if ( a8 != a22 )
  {
LABEL_7:
    v27 = a1 - (_DWORD)a10 - 0x10;
    if ( v27 + *(unsigned __int8 *)(v22 + 3) > 0x1A0 )
    {
      v28 = a2[2];
      *a10 = v27;
      if ( a16 >= a15 )
      {
        v29 = *(_DWORD *)(v28 + 4);
        v30 = (void *)(v29 + 1);
        v55 = v29 - a15;
        v31 = *(_DWORD *)(v28 + 8) & 0x3FFFFFFF;
        retaddr = v30;
        if ( v31 < (int)v30 )
        {
          v32 = 2 * v31;
          if ( (int)v30 >= v32 )
            v32 = (int)v30;
          sub_8A6E40((const void **)v28, v32, 4);
        }
        if ( v55 - 1 >= 0 )
        {
          v33 = (_DWORD *)(*(_DWORD *)v28 + 4 * a15 + 4 + 4 * (v55 - 1));
          v34 = v55;
          do
          {
            *v33 = v33[0xFFFFFFFF];
            v33 += 0xFFFFFFFF;
            --v34;
          }
          while ( v34 );
        }
        *(_DWORD *)(v28 + 4) = retaddr;
      }
      *(_DWORD *)(*(_DWORD *)v28 + 4 * a16) = a10;
      v35 = *(_DWORD *)(a4 + 0x19C);
      v36 = *(_DWORD **)(v35 + 0x64);
      if ( v36 )
      {
        --*(_DWORD *)(v35 + 0xA8);
        *(_DWORD *)(v35 + 0x64) = *v36;
        v37 = v36;
      }
      else
      {
        v37 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x18))(dword_BA7D98, 0xC, 0x1C);
      }
      if ( v37 )
        *v37 = 0;
      JUMPOUT(0x934EC1);
    }
    JUMPOUT(0x934ED0);
  }
  v23 = *(_DWORD **)(a4 + 0x19C);
  v24 = v23[0x2A];
  if ( v24 >= v23[0xC] )
  {
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)dword_BA7D98 + 0x1C))(dword_BA7D98, a20, 0xC, 0x1C);
  }
  else
  {
    v25 = v23[0x19];
    v23[0x2A] = v24 + 1;
    *a20 = v25;
    v23[0x19] = a20;
  }
  v26 = a2[2];
  if ( a15 < *(_DWORD *)(v26 + 4) )
  {
    v22 = *(_DWORD *)(*(_DWORD *)v26 + 4 * a15++) + 0x10;
    goto LABEL_7;
  }
  v38 = a10;
  *a10 = a1 - (_DWORD)a10 - 0x10;
  v39 = a16 + 1;
  v40 = *(_DWORD *)(v26 + 8) & 0x3FFFFFFF;
  if ( v40 < a16 + 1 )
  {
    v41 = 2 * v40;
    if ( v39 >= v41 )
      v41 = a16 + 1;
    sub_8A6E40((const void **)v26, v41, 4);
    v38 = a10;
  }
  v42 = *(_DWORD **)v26;
  *(_DWORD *)(v26 + 4) = v39;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v44 = TlsIndex;
  v42[a16] = v38;
  v45 = ThreadLocalStoragePointer[v44];
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) )
  {
    v46 = ThreadLocalStoragePointer[v44];
    v47 = *(_DWORD *)(v45 + 0x1A4);
    *(_DWORD *)v47 = "MinumTim";
    *(float *)(v47 + 4) = (float)a17;
    *(_DWORD *)(v46 + 0x1A4) = v47 + 8;
  }
  v48 = (int *)a2[7];
  *(_DWORD *)(a3 + 4) = a14;
  LODWORD(v49) = v48[0xC10];
  if ( !(_DWORD)v49 )
    goto LABEL_36;
  if ( *(_DWORD *)v49 <= (unsigned int)(v49 + 0x408) )
  {
    v48[0xC10] = a19;
    return v49;
  }
  if ( *(_DWORD *)(ThreadLocalStoragePointer[v44] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v44] + 0x1A8) )
  {
    v50 = *(_DWORD **)(a4 + 0x1A4);
    *v50 = "TtWelding";
    v51 = __rdtsc();
    v50[1] = v51;
    *(_DWORD *)(a4 + 0x1A4) = v50 + 3;
    v48 = (int *)a2[7];
  }
  sub_934300((int **)a3, a2[4], v48);
  if ( *(_DWORD *)(ThreadLocalStoragePointer[v44] + 0x1A4) >= *(_DWORD *)(ThreadLocalStoragePointer[v44] + 0x1A8) )
  {
    v48 = (int *)a2[7];
LABEL_36:
    v48[0xC10] = a19;
    LODWORD(v49) = a19;
    return v49;
  }
  v52 = *(_DWORD **)(a4 + 0x1A4);
  *v52 = "Et";
  v49 = __rdtsc();
  HIDWORD(v49) = a2[7];
  v52[1] = v49;
  *(_DWORD *)(a4 + 0x1A4) = v52 + 3;
  *(_DWORD *)(HIDWORD(v49) + 0x3040) = a19;
  return v49;
}
