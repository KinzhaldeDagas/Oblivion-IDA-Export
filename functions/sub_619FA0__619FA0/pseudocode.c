void __thiscall sub_619FA0(_DWORD *this, int *a2, _DWORD *a3)
{
  _DWORD *v4; // ecx
  int *v5; // ebx
  int *v6; // edi
  int v7; // edi
  _DWORD *v8; // eax
  NiTPointerMap<unsigned int,TESGameSoundHandle *> *v9; // eax
  int *v10; // [esp-8h] [ebp-24h]

  v4 = (_DWORD *)*(this + 0x63); /*0x619fc5*/
  v5 = a2; /*0x619fcd*/
  if ( v4 && (v10 = a2, a2 = 0, NiTMap_GetAt(v4, (int)v10, &a2), (v6 = a2) != 0) ) /*0x619fec*/
  {
    sub_6B7240(a2); /*0x619ff0*/
    sub_6B7190(v6, (char)a3); /*0x619ffc*/
  }
  else
  {
    v7 = sub_65AC50((_DWORD *)*(this + 0xF), (int)v5, (char)a3, 2, 1); /*0x61a028*/
    if ( v7 ) /*0x61a02c*/
    {
      if ( !*(this + 0x63) ) /*0x61a02e*/
      {
        v8 = (_DWORD *)FormHeapAlloc(0x10u); /*0x61a039*/
        a3 = v8; /*0x61a041*/
        if ( v8 ) /*0x61a04f*/
          v9 = NiTPointerMap<unsigned int,TESGameSoundHandle *>::NiTPointerMap<unsigned int,TESGameSoundHandle *>( /*0x61a055*/
                 (NiTPointerMap<unsigned int,TESGameSoundHandle *> *)v8,
                 0x25u);
        else
          v9 = 0; /*0x61a05c*/
        *(this + 0x63) = v9; /*0x61a066*/
      }
      NiTMap_SetAt((_DWORD *)*(this + 0x63), (int)v5, v7); /*0x61a074*/
    }
  }
}
