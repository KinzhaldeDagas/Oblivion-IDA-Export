// Pass226/227: NiScreenSpaceCamera copy/clone path; copies texture array pointers, not screen-texture records.
LONG __thiscall sub_73A220(char **this, int a2, _DWORD **a3)
{
  int v4; // edi
  unsigned int v5; // ebx
  volatile LONG *v6; // esi
  int v7; // edi
  LONG result; // eax
  unsigned int v9; // ebx
  volatile LONG *v10; // esi
  int v11; // edi
  LONG v12; // [esp+14h] [ebp-14h] BYREF
  volatile LONG *v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+24h] [ebp-4h]
  _DWORD *v15; // [esp+2Ch] [ebp+4h]

  v4 = a2; /*0x73a24d*/
  sub_70D050(this, a2, a3); /*0x73a253*/
  sub_6C4510((unsigned __int16 *)(a2 + 0x124), *((unsigned __int16 *)this + 0x97)); /*0x73a266*/
  v5 = 0; /*0x73a272*/
  for ( *(_WORD *)(a2 + 0x132) = *((_WORD *)this + 0x99); v5 < *((unsigned __int16 *)this + 0x97); ++v5 ) /*0x73a27b*/
  {
    v6 = *(volatile LONG **)&(*(this + 0x4A))[4 * v5]; /*0x73a296*/
    v13 = v6; /*0x73a29e*/
    if ( v6 ) /*0x73a2a2*/
      InterlockedIncrement(v6 + 1); /*0x73a2a8*/
    v14 = 0; /*0x73a2b2*/
    if ( v6 ) /*0x73a2b6*/
    {
      v7 = (*(int (__thiscall **)(volatile LONG *, _DWORD **))(*v6 + 0x18))(v6, a3); /*0x73a2ca*/
      v12 = v7; /*0x73a2ce*/
      if ( v7 ) /*0x73a2d2*/
        InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x73a2d8*/
      LOBYTE(v14) = 1; /*0x73a2ee*/
      sub_739810((_DWORD *)(a2 + 0x124), v5, &v12); /*0x73a2f3*/
      LOBYTE(v14) = 0; /*0x73a2fa*/
      if ( v7 ) /*0x73a2ff*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x73a305*/
          (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x73a317*/
      }
      v4 = a2; /*0x73a319*/
    }
    else
    {
      v12 = 0; /*0x73a413*/
      LOBYTE(v14) = 2; /*0x73a423*/
      sub_739810((_DWORD *)(v4 + 0x124), v5, &v12); /*0x73a428*/
    }
    v14 = 0xFFFFFFFF; /*0x73a31f*/
    if ( v6 ) /*0x73a327*/
    {
      if ( !InterlockedDecrement(v6 + 1) ) /*0x73a32d*/
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x73a33f*/
    }
  }
  v15 = (_DWORD *)(v4 + 0x134); /*0x73a361*/
  sub_6C4510((unsigned __int16 *)(v4 + 0x134), *((unsigned __int16 *)this + 0x9F)); /*0x73a365*/
  result = *((unsigned __int16 *)this + 0xA1); /*0x73a36a*/
  v9 = 0; /*0x73a371*/
  for ( *(_WORD *)(v4 + 0x142) = result; v9 < *((unsigned __int16 *)this + 0x9F); ++v9 ) /*0x73a37a*/
  {
    v10 = *(volatile LONG **)&(*(this + 0x4E))[4 * v9]; /*0x73a396*/
    v13 = v10; /*0x73a39e*/
    if ( v10 ) /*0x73a3a2*/
      InterlockedIncrement(v10 + 1); /*0x73a3a8*/
    v14 = 3; /*0x73a3b0*/
    if ( v10 ) /*0x73a3b8*/
    {
      v11 = (*(int (__thiscall **)(volatile LONG *, _DWORD **))(*v10 + 0x18))(v10, a3); /*0x73a3c8*/
      v12 = v11; /*0x73a3cc*/
      if ( v11 ) /*0x73a3d0*/
        InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x73a3d6*/
      LOBYTE(v14) = 4; /*0x73a3e6*/
      result = sub_7395A0(v15, v9, &v12); /*0x73a3eb*/
      LOBYTE(v14) = 3; /*0x73a3f2*/
      if ( v11 ) /*0x73a3f7*/
      {
        result = InterlockedDecrement((volatile LONG *)(v11 + 4)); /*0x73a3fd*/
        if ( !result ) /*0x73a405*/
          result = (**(int (__thiscall ***)(int, int))v11)(v11, 1); /*0x73a40f*/
      }
    }
    else
    {
      v12 = 0; /*0x73a432*/
      LOBYTE(v14) = 5; /*0x73a444*/
      result = sub_7395A0(v15, v9, &v12); /*0x73a449*/
    }
    v14 = 0xFFFFFFFF; /*0x73a450*/
    if ( v10 ) /*0x73a458*/
    {
      result = InterlockedDecrement(v10 + 1); /*0x73a45e*/
      if ( !result ) /*0x73a466*/
        result = (**(int (__thiscall ***)(volatile LONG *, int))v10)(v10, 1); /*0x73a470*/
    }
  }
  return result; /*0x73a484*/
}
