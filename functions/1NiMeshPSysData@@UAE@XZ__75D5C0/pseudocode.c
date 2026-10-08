void __thiscall NiMeshPSysData::~NiMeshPSysData(NiMeshPSysData *this)
{
  bool v2; // zf
  __int16 v3; // ax
  int v4; // ecx
  unsigned __int16 v5; // ax
  void (__thiscall ****v6)(_DWORD, int); // eax
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int v8; // edi
  unsigned int v9; // [esp-8h] [ebp-10h]
  unsigned int v10; // [esp-8h] [ebp-10h]

  v2 = *((_WORD *)this + 0x3F) == 0; /*0x75d5c3*/
  *(_DWORD *)this = &NiMeshPSysData::`vftable'; /*0x75d5c9*/
  if ( !v2 ) /*0x75d5cf*/
  {
    do /*0x75d60e*/
    {
      v3 = *((_WORD *)this + 0x3F); /*0x75d5d6*/
      if ( v3 ) /*0x75d5dd*/
      {
        v4 = *((_DWORD *)this + 0x1E); /*0x75d5df*/
        v5 = v3 - 1; /*0x75d5e2*/
        *((_WORD *)this + 0x3F) = v5; /*0x75d5e5*/
        v6 = (void (__thiscall ****)(_DWORD, int))(v4 + 4 * v5); /*0x75d5ec*/
        v7 = *v6; /*0x75d5ef*/
        v2 = *v6 == 0; /*0x75d5f1*/
        *v6 = 0; /*0x75d5f3*/
        if ( !v2 ) /*0x75d5f9*/
        {
          --*((_WORD *)this + 0x40); /*0x75d5fb*/
          if ( v7 ) /*0x75d604*/
            (**v7)(v7, 1); /*0x75d60c*/
        }
      }
    }
    while ( *((_WORD *)this + 0x3F) ); /*0x75d60e*/
  }
  v10 = *((_DWORD *)this + 0x1E); /*0x75d618*/
  *((_DWORD *)this + 0x1D) = &NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable'; /*0x75d619*/
  FormHeapFree(v10); /*0x75d620*/
  v8 = *((_DWORD *)this + 0x1A); /*0x75d625*/
  if ( v8 ) /*0x75d62d*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x75d633*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x75d649*/
  }
  v9 = *((_DWORD *)this + 0x17); /*0x759836*/
  *(_DWORD *)this = &NiPSysData::`vftable'; /*0x759837*/
  FormHeapFree(v9); /*0x75983d*/
  FormHeapFree(*((_DWORD *)this + 0x18)); /*0x759846*/
  sub_73EEC0((NiGeometryData *)this); /*0x759851*/
}
