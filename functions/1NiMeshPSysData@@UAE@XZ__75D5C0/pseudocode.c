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

  v2 = *((_WORD *)this + 0x3F) == 0;
  *(_DWORD *)this = &NiMeshPSysData::`vftable';
  if ( !v2 )
  {
    do
    {
      v3 = *((_WORD *)this + 0x3F);
      if ( v3 )
      {
        v4 = *((_DWORD *)this + 0x1E);
        v5 = v3 - 1;
        *((_WORD *)this + 0x3F) = v5;
        v6 = (void (__thiscall ****)(_DWORD, int))(v4 + 4 * v5);
        v7 = *v6;
        v2 = *v6 == 0;
        *v6 = 0;
        if ( !v2 )
        {
          --*((_WORD *)this + 0x40);
          if ( v7 )
            (**v7)(v7, 1);
        }
      }
    }
    while ( *((_WORD *)this + 0x3F) );
  }
  v10 = *((_DWORD *)this + 0x1E);
  *((_DWORD *)this + 0x1D) = &NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable';
  FormHeapFree(v10);
  v8 = *((_DWORD *)this + 0x1A);
  if ( v8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = *((_DWORD *)this + 0x17);
  *(_DWORD *)this = &NiPSysData::`vftable';
  FormHeapFree(v9);
  FormHeapFree(*((_DWORD *)this + 0x18));
  sub_73EEC0((NiGeometryData *)this);
}
