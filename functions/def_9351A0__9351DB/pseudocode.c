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

  v22 = a8; /*0x9351db*/
  if ( a8 != a22 ) /*0x9351e3*/
  {
LABEL_7:
    v27 = a1 - (_DWORD)a10 - 0x10; /*0x935943*/
    if ( v27 + *(unsigned __int8 *)(v22 + 3) > 0x1A0 ) /*0x93595a*/
    {
      v28 = a2[2]; /*0x935960*/
      *a10 = v27; /*0x935965*/
      if ( a16 >= a15 ) /*0x93596f*/
      {
        v29 = *(_DWORD *)(v28 + 4); /*0x935971*/
        v30 = (void *)(v29 + 1); /*0x935974*/
        v55 = v29 - a15; /*0x935979*/
        v31 = *(_DWORD *)(v28 + 8) & 0x3FFFFFFF; /*0x935980*/
        retaddr = v30; /*0x935987*/
        if ( v31 < (int)v30 ) /*0x93598b*/
        {
          v32 = 2 * v31; /*0x93598d*/
          if ( (int)v30 >= v32 ) /*0x935991*/
            v32 = (int)v30; /*0x935993*/
          sub_8A6E40((const void **)v28, v32, 4); /*0x935999*/
        }
        if ( v55 - 1 >= 0 ) /*0x9359b2*/
        {
          v33 = (_DWORD *)(*(_DWORD *)v28 + 4 * a15 + 4 + 4 * (v55 - 1)); /*0x9359b4*/
          v34 = v55; /*0x9359b9*/
          do /*0x9359c9*/
          {
            *v33 = v33[0xFFFFFFFF]; /*0x9359c3*/
            v33 += 0xFFFFFFFF; /*0x9359c5*/
            --v34; /*0x9359c8*/
          }
          while ( v34 ); /*0x9359c9*/
        }
        *(_DWORD *)(v28 + 4) = retaddr; /*0x9359d4*/
      }
      *(_DWORD *)(*(_DWORD *)v28 + 4 * a16) = a10; /*0x9359e5*/
      v35 = *(_DWORD *)(a4 + 0x19C); /*0x9359f1*/
      v36 = *(_DWORD **)(v35 + 0x64); /*0x9359f7*/
      if ( v36 ) /*0x9359fc*/
      {
        --*(_DWORD *)(v35 + 0xA8); /*0x9359fe*/
        *(_DWORD *)(v35 + 0x64) = *v36; /*0x935a06*/
        v37 = v36; /*0x935a09*/
      }
      else
      {
        v37 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x18))(unk_BA7D98, 0xC, 0x1C); /*0x935a19*/
      }
      if ( v37 ) /*0x935a1e*/
        *v37 = 0; /*0x935a20*/
      JUMPOUT(0x934EC1); /*0x934ec1*/
    }
    JUMPOUT(0x934ED0); /*0x934ed0*/
  }
  v23 = *(_DWORD **)(a4 + 0x19C); /*0x9351ed*/
  v24 = v23[0x2A]; /*0x9351f3*/
  if ( v24 >= v23[0xC] ) /*0x9351fc*/
  {
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)unk_BA7D98 + 0x1C))(unk_BA7D98, a20, 0xC, 0x1C); /*0x935911*/
  }
  else
  {
    v25 = v23[0x19]; /*0x935202*/
    v23[0x2A] = v24 + 1; /*0x935206*/
    *a20 = v25; /*0x935210*/
    v23[0x19] = a20; /*0x935212*/
  }
  v26 = a2[2]; /*0x935914*/
  if ( a15 < *(_DWORD *)(v26 + 4) ) /*0x93591e*/
  {
    v22 = *(_DWORD *)(*(_DWORD *)v26 + 4 * a15++) + 0x10; /*0x93592b*/
    goto LABEL_7; /*0x93593f*/
  }
  v38 = a10; /*0x935a32*/
  *a10 = a1 - (_DWORD)a10 - 0x10; /*0x935a3b*/
  v39 = a16 + 1; /*0x935a44*/
  v40 = *(_DWORD *)(v26 + 8) & 0x3FFFFFFF; /*0x935a45*/
  if ( v40 < a16 + 1 ) /*0x935a4c*/
  {
    v41 = 2 * v40; /*0x935a4e*/
    if ( v39 >= v41 ) /*0x935a52*/
      v41 = a16 + 1; /*0x935a54*/
    sub_8A6E40((const void **)v26, v41, 4); /*0x935a5a*/
    v38 = a10; /*0x935a5f*/
  }
  v42 = *(_DWORD **)v26; /*0x935a66*/
  *(_DWORD *)(v26 + 4) = v39; /*0x935a6c*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x935a6f*/
  v44 = MEMORY[0xBA9DE4]; /*0x935a76*/
  v42[a16] = v38; /*0x935a7c*/
  v45 = ThreadLocalStoragePointer[v44]; /*0x935a7f*/
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) ) /*0x935a8e*/
  {
    v46 = ThreadLocalStoragePointer[v44]; /*0x935a94*/
    v47 = *(_DWORD *)(v45 + 0x1A4); /*0x935a96*/
    *(_DWORD *)v47 = "MinumTim"; /*0x935a9c*/
    *(float *)(v47 + 4) = (float)a17; /*0x935aa2*/
    *(_DWORD *)(v46 + 0x1A4) = v47 + 8; /*0x935aa8*/
  }
  v48 = (int *)a2[7]; /*0x935ab2*/
  *(_DWORD *)(a3 + 4) = a14; /*0x935ab5*/
  LODWORD(v49) = v48[0xC10]; /*0x935ab8*/
  if ( !(_DWORD)v49 ) /*0x935ac0*/
    goto LABEL_36; /*0x935ac0*/
  if ( *(_DWORD *)v49 <= (unsigned int)(v49 + 0x408) ) /*0x935ace*/
  {
    v48[0xC10] = a19; /*0x935b87*/
    return v49; /*0x935b91*/
  }
  if ( *(_DWORD *)(ThreadLocalStoragePointer[v44] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v44] + 0x1A8) ) /*0x935ae3*/
  {
    v50 = *(_DWORD **)(a4 + 0x1A4); /*0x935ae9*/
    *v50 = "TtWelding"; /*0x935aef*/
    v51 = __rdtsc(); /*0x935af5*/
    v50[1] = v51; /*0x935b03*/
    *(_DWORD *)(a4 + 0x1A4) = v50 + 3; /*0x935b09*/
    v48 = (int *)a2[7]; /*0x935b0f*/
  }
  sub_934300((int **)a3, a2[4], v48); /*0x935b18*/
  if ( *(_DWORD *)(ThreadLocalStoragePointer[v44] + 0x1A4) >= *(_DWORD *)(ThreadLocalStoragePointer[v44] + 0x1A8) ) /*0x935b31*/
  {
    v48 = (int *)a2[7]; /*0x935b6d*/
LABEL_36:
    v48[0xC10] = a19; /*0x935b70*/
    LODWORD(v49) = a19; /*0x935b70*/
    return v49; /*0x935b80*/
  }
  v52 = *(_DWORD **)(a4 + 0x1A4); /*0x935b37*/
  *v52 = "Et"; /*0x935b3d*/
  v49 = __rdtsc(); /*0x935b43*/
  HIDWORD(v49) = a2[7]; /*0x935b4d*/
  v52[1] = v49; /*0x935b50*/
  *(_DWORD *)(a4 + 0x1A4) = v52 + 3; /*0x935b56*/
  *(_DWORD *)(HIDWORD(v49) + 0x3040) = a19; /*0x935b60*/
  return v49; /*0x935b6c*/
}
