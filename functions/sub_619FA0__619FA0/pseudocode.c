void __thiscall sub_619FA0(_DWORD *this, int *a2, _DWORD *a3)
{
  _DWORD *v4; // ecx
  int *v5; // ebx
  int *v6; // edi
  int v7; // edi
  _DWORD *v8; // eax
  NiTPointerMap<unsigned int,TESGameSoundHandle *> *v9; // eax
  int *v10; // [esp-8h] [ebp-24h]

  v4 = (_DWORD *)*(this + 0x63);
  v5 = a2;
  if ( v4 && (v10 = a2, a2 = 0, NiTMap_GetAt(v4, (int)v10, &a2), (v6 = a2) != 0) )
  {
    sub_6B7240(a2);
    sub_6B7190(v6, (char)a3);
  }
  else
  {
    v7 = sub_65AC50((_DWORD *)*(this + 0xF), (int)v5, (char)a3, 2, 1);
    if ( v7 )
    {
      if ( !*(this + 0x63) )
      {
        v8 = (_DWORD *)FormHeapAlloc(0x10u);
        a3 = v8;
        if ( v8 )
          v9 = NiTPointerMap<unsigned int,TESGameSoundHandle *>::NiTPointerMap<unsigned int,TESGameSoundHandle *>(
                 (NiTPointerMap<unsigned int,TESGameSoundHandle *> *)v8,
                 0x25u);
        else
          v9 = 0;
        *(this + 0x63) = v9;
      }
      NiTMap_SetAt((_DWORD *)*(this + 0x63), (int)v5, v7);
    }
  }
}
