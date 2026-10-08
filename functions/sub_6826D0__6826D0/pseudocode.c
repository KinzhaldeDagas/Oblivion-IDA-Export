void __thiscall sub_6826D0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  _DWORD *v4; // edi
  int v5; // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  _DWORD *v7; // esi
  int v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // ecx
  _DWORD *v10; // edi
  int v11; // ecx
  void (__thiscall ***v12)(_DWORD, int); // ecx

  v2 = a2; /*0x6826d1*/
  if ( a2 ) /*0x6826da*/
  {
    sub_49F470((struct _RTL_CRITICAL_SECTION *)&qword_B3BB2C[0x135]); /*0x6826e7*/
    a2 = 0; /*0x6826f7*/
    if ( NiTMap_GetAt(this + 8, (int)v2, &a2) ) /*0x6826ff*/
    {
      v4 = a2; /*0x682708*/
      if ( a2 ) /*0x68270e*/
      {
        NiTMap_RemoveAt(this + 8, (int)v2); /*0x682713*/
        if ( v4 == (_DWORD *)*(this + 0x10) ) /*0x68271b*/
        {
          v4[8] = 1; /*0x68271d*/
        }
        else
        {
          v5 = v4[1]; /*0x682726*/
          if ( v5 ) /*0x68272b*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x10))(v5, 1); /*0x682734*/
          v6 = (void (__thiscall ***)(_DWORD, int))v4[2]; /*0x682736*/
          if ( v6 ) /*0x68273b*/
            (**v6)(v6, 1); /*0x682743*/
          FormHeapFree((unsigned int)v4); /*0x682746*/
          a2 = 0; /*0x68274e*/
        }
      }
    }
    if ( NiTMap_GetAt(this + 4, (int)v2, &a2) ) /*0x682761*/
    {
      v7 = a2; /*0x68276a*/
      if ( a2 ) /*0x682770*/
      {
        NiTMap_RemoveAt(this + 4, (int)v2); /*0x682775*/
        if ( v7 == (_DWORD *)*(this + 0x10) ) /*0x68277d*/
        {
          v7[8] = 1; /*0x68277f*/
        }
        else
        {
          v8 = v7[1]; /*0x682788*/
          if ( v8 ) /*0x68278d*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x10))(v8, 1); /*0x682796*/
          v9 = (void (__thiscall ***)(_DWORD, int))v7[2]; /*0x682798*/
          if ( v9 ) /*0x68279d*/
            (**v9)(v9, 1); /*0x6827a5*/
          FormHeapFree((unsigned int)v7); /*0x6827a8*/
          a2 = 0; /*0x6827b0*/
        }
      }
    }
    if ( NiTMap_GetAt(this + 0xC, (int)v2, &a2) ) /*0x6827c3*/
    {
      v10 = a2; /*0x6827cc*/
      if ( a2 ) /*0x6827d2*/
      {
        NiTMap_RemoveAt(this + 0xC, (int)v2); /*0x6827d7*/
        v11 = v10[1]; /*0x6827dc*/
        if ( v11 ) /*0x6827e1*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x10))(v11, 1); /*0x6827ea*/
        v12 = (void (__thiscall ***)(_DWORD, int))v10[2]; /*0x6827ec*/
        if ( v12 ) /*0x6827f1*/
          (**v12)(v12, 1); /*0x6827f9*/
        FormHeapFree((unsigned int)v10); /*0x6827fc*/
      }
    }
    j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&qword_B3BB2C[0x135]); /*0x682809*/
  }
}
