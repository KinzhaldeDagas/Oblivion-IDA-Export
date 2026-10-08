char __cdecl sub_50FF70(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int i; // ebp
  int j; // eax
  int v11; // ecx
  int v12; // edi
  NiRTTI *v13; // eax
  char v14; // al
  int v15; // eax
  unsigned int k; // edi
  int m; // eax
  int v18; // ecx

  if ( !a3 || !(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3) ) /*0x50ffad*/
  {
    Interface_ConsolePrint("Must supply a valid reference to show viewer string."); /*0x510131*/
    return 1; /*0x510131*/
  }
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3); /*0x50ffc5*/
  v4 = FormHeapAlloc(0x10u); /*0x50ffc7*/
  if ( v4 ) /*0x50ffd1*/
  {
    *(_DWORD *)v4 = &NiTArray<char *>::`vftable'; /*0x50ffd3*/
    *(_WORD *)(v4 + 8) = 0; /*0x50ffd9*/
    *(_WORD *)(v4 + 0xE) = 1; /*0x50ffdd*/
    *(_WORD *)(v4 + 0xA) = 0; /*0x50ffe3*/
    *(_WORD *)(v4 + 0xC) = 0; /*0x50ffe7*/
    *(_DWORD *)(v4 + 4) = 0; /*0x50ffeb*/
    v5 = v4; /*0x50ffee*/
  }
  else
  {
    v5 = 0; /*0x50fff2*/
  }
  if ( !v3 ) /*0x50fffe*/
    goto LABEL_15; /*0x50fffe*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3) ) /*0x510007*/
  {
    v6 = v3; /*0x51000d*/
    v7 = *(unsigned __int16 *)(v3 + 0xB6); /*0x51000f*/
    v3 = 0; /*0x510016*/
    v8 = 0; /*0x510018*/
    if ( v7 ) /*0x51001c*/
    {
      while ( !v3 ) /*0x510022*/
      {
        if ( v7 > v8 ) /*0x510026*/
          v3 = *(_DWORD *)(*(_DWORD *)(v6 + 0xB0) + 4 * v8); /*0x510032*/
        else
          v3 = 0; /*0x510028*/
        if ( ++v8 >= v7 ) /*0x51003a*/
          goto LABEL_14; /*0x51003a*/
      }
      goto LABEL_16; /*0x510022*/
    }
LABEL_15:
    Interface_ConsolePrint("Node with no children supplied as reference..."); /*0x510040*/
    return 1; /*0x510045*/
  }
LABEL_14:
  if ( !v3 ) /*0x51003e*/
    goto LABEL_15; /*0x51003e*/
LABEL_16:
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x30))(v3, v5); /*0x51004a*/
  for ( i = 0; i < *(unsigned __int16 *)(v5 + 0xA); Interface_ConsolePrint(*(char **)(*(_DWORD *)(v5 + 4) + 4 * i++)) ) /*0x510054*/
    ; /*0x510067*/
  for ( j = 0; (unsigned __int16)j < *(_WORD *)(v5 + 0xA); *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v11) = 0 ) /*0x51007c*/
    v11 = (unsigned __int16)j++; /*0x510085*/
  *(_WORD *)(v5 + 0xA) = 0; /*0x510094*/
  *(_WORD *)(v5 + 0xC) = 0; /*0x510098*/
  v12 = *(_DWORD *)(v3 + 0xA8); /*0x51009c*/
  if ( v12 )
  {
    v13 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x5100ad*/
    if ( v13 ) /*0x5100b1*/
    {
      while ( v13 != &MEMORY[0xBA7D24] ) /*0x5100b8*/
      {
        v13 = v13->parent; /*0x5100ba*/
        if ( !v13 ) /*0x5100bf*/
          goto LABEL_24; /*0x5100bf*/
      }
      v14 = 1; /*0x510128*/
    }
    else
    {
LABEL_24:
      v14 = 0; /*0x5100c1*/
    }
    v15 = v14 != 0 ? v12 : 0;
    if ( v15 ) /*0x5100c9*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v15 + 0x10) + 0x30))(*(_DWORD *)(v15 + 0x10), v5); /*0x5100d4*/
      for ( k = 0; k < *(unsigned __int16 *)(v5 + 0xA); Interface_ConsolePrint(*(char **)(*(_DWORD *)(v5 + 4) + 4 * k++)) ) /*0x5100d6*/
        ; /*0x5100e7*/
      for ( m = 0; (unsigned __int16)m < *(_WORD *)(v5 + 0xA); *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v18) = 0 ) /*0x5100fc*/
        v18 = (unsigned __int16)m++; /*0x510105*/
      *(_WORD *)(v5 + 0xA) = 0; /*0x510114*/
      *(_WORD *)(v5 + 0xC) = 0; /*0x510118*/
    }
  }
  (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x510124*/
  return 1; /*0x51013b*/
}
