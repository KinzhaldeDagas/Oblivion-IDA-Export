void __thiscall sub_6E16A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // eax
  int v6; // ebp
  char *v7; // edi
  NiSequence *v8; // eax
  NiSequence *v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ebx
  char *v14; // edi
  int v15; // eax
  int v16; // edi
  int v17; // eax
  void (__stdcall *v18)(volatile LONG *); // ebx
  _DWORD *v19; // ebp
  int v20; // edi
  int v21; // eax
  int v22; // esi
  unsigned int v23; // [esp-10h] [ebp-40h]
  unsigned int v24; // [esp-Ch] [ebp-3Ch]
  unsigned int v25; // [esp-8h] [ebp-38h]
  unsigned int v26; // [esp-4h] [ebp-34h] BYREF
  int v27; // [esp+0h] [ebp-30h]
  int v28; // [esp+14h] [ebp-1Ch]
  _DWORD *v29; // [esp+18h] [ebp-18h]
  unsigned int v30; // [esp+1Ch] [ebp-14h]
  unsigned int *v31; // [esp+20h] [ebp-10h]
  unsigned int v32; // [esp+2Ch] [ebp-4h]

  v3 = a2; /*0x6e16c9*/
  NiTimeController_LinkObject(this, a2); /*0x6e16ce*/
  if ( a2[0x36] >= 0x4010003u ) /*0x6e16dd*/
  {
    v17 = sub_7124D0(a2); /*0x6e1878*/
    if ( v17 ) /*0x6e187f*/
    {
      v18 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x6e1881*/
      v19 = this + 0xF; /*0x6e1887*/
      v20 = v17; /*0x6e188a*/
      do /*0x6e18b6*/
      {
        v21 = sub_7124A0(a2); /*0x6e1894*/
        v22 = *(_DWORD *)(v21 + 8); /*0x6e1899*/
        v26 = v21; /*0x6e189f*/
        v31 = &v26; /*0x6e18a4*/
        v18((volatile LONG *)(v21 + 4)); /*0x6e18a9*/
        sub_7C2FF0((int)v19, v22, v26, v27); /*0x6e18ae*/
        --v20; /*0x6e18b3*/
      }
      while ( v20 ); /*0x6e18b6*/
    }
  }
  else
  {
    v4 = (_DWORD *)unk_B3E040; /*0x6e16e3*/
    v5 = *(unsigned __int16 *)(unk_B3E040 + 0x2A); /*0x6e16e9*/
    v6 = 0; /*0x6e16ed*/
    v30 = v5; /*0x6e16f1*/
    v28 = 0; /*0x6e16f5*/
    if ( v5 ) /*0x6e16f9*/
    {
      v29 = this + 0xF; /*0x6e1702*/
      while ( 1 ) /*0x6e1717*/
      {
        v7 = *(char **)(v4[5] + 4 * v6); /*0x6e1717*/
        v8 = (NiSequence *)FormHeapAlloc(0x34u); /*0x6e171c*/
        v31 = (unsigned int *)v8; /*0x6e1724*/
        v9 = 0; /*0x6e1728*/
        v32 = 0; /*0x6e172c*/
        if ( v8 ) /*0x6e1730*/
          v9 = NiSequence::NiSequence(v8, v7, 0xCu, 0xC); /*0x6e173e*/
        v32 = 0xFFFFFFFF; /*0x6e1741*/
        FormHeapFree((unsigned int)v7); /*0x6e1749*/
        *((_DWORD *)v9 + 0xC) = *(_DWORD *)(*(_DWORD *)(unk_B3E040 + 4) + 4 * v6); /*0x6e175f*/
        v10 = sub_7124A0(v3); /*0x6e1762*/
        v11 = *((_DWORD *)v9 + 0xB); /*0x6e1767*/
        v12 = v10; /*0x6e176a*/
        if ( v11 != v10 ) /*0x6e176e*/
        {
          if ( v11 ) /*0x6e1772*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x6e1778*/
              (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x6e178e*/
          }
          *((_DWORD *)v9 + 0xB) = v12; /*0x6e1792*/
          if ( v12 ) /*0x6e1795*/
            InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x6e179b*/
        }
        v13 = *(_DWORD *)(*(_DWORD *)(unk_B3E040 + 0x24) + 4 * v6); /*0x6e17aa*/
        while ( v13 ) /*0x6e17af*/
        {
          v14 = *(char **)(*(_DWORD *)(unk_B3E040 + 0x34) + 4 * v28); /*0x6e17bd*/
          --v13; /*0x6e17c7*/
          ++v28; /*0x6e17ca*/
          v15 = sub_7124A0(a2); /*0x6e17ce*/
          sub_6D83A0((unsigned __int16 *)v9, v14, v15); /*0x6e17d7*/
          FormHeapFree((unsigned int)v14); /*0x6e17dd*/
        }
        v16 = *((_DWORD *)v9 + 2); /*0x6e17e9*/
        v26 = (unsigned int)v9; /*0x6e17ef*/
        v31 = &v26; /*0x6e17f1*/
        InterlockedIncrement((volatile LONG *)v9 + 1); /*0x6e17f9*/
        sub_7C2FF0((int)v29, v16, v26, v27); /*0x6e1804*/
        v4 = (_DWORD *)unk_B3E040; /*0x6e1809*/
        if ( ++v6 >= v30 ) /*0x6e1816*/
          break; /*0x6e1816*/
        v3 = a2; /*0x6e1710*/
      }
    }
    if ( v4 ) /*0x6e181e*/
    {
      v26 = v4[0xD]; /*0x6e1826*/
      v4[0xC] = &NiTArray<char *>::`vftable'; /*0x6e1827*/
      FormHeapFree(v26); /*0x6e182d*/
      v25 = v4[9]; /*0x6e1835*/
      v4[8] = &NiTArray<unsigned int>::`vftable'; /*0x6e1836*/
      FormHeapFree(v25); /*0x6e183d*/
      v24 = v4[5]; /*0x6e1845*/
      v4[4] = &NiTArray<char *>::`vftable'; /*0x6e1846*/
      FormHeapFree(v24); /*0x6e184d*/
      v23 = v4[1]; /*0x6e1855*/
      *v4 = &NiTArray<unsigned int>::`vftable'; /*0x6e1856*/
      FormHeapFree(v23); /*0x6e185c*/
      FormHeapFree((unsigned int)v4); /*0x6e1862*/
    }
    unk_B3E040 = 0; /*0x6e186a*/
  }
}
