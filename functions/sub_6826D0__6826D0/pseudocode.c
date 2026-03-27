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

  v2 = a2;
  if ( a2 )
  {
    sub_49F470(&stru_B3C000);
    a2 = 0;
    if ( NiTMap_GetAt(this + 8, (int)v2, &a2) )
    {
      v4 = a2;
      if ( a2 )
      {
        NiTMap_RemoveAt(this + 8, (int)v2);
        if ( v4 == (_DWORD *)*(this + 0x10) )
        {
          v4[8] = 1;
        }
        else
        {
          v5 = v4[1];
          if ( v5 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x10))(v5, 1);
          v6 = (void (__thiscall ***)(_DWORD, int))v4[2];
          if ( v6 )
            (**v6)(v6, 1);
          FormHeapFree((unsigned int)v4);
          a2 = 0;
        }
      }
    }
    if ( NiTMap_GetAt(this + 4, (int)v2, &a2) )
    {
      v7 = a2;
      if ( a2 )
      {
        NiTMap_RemoveAt(this + 4, (int)v2);
        if ( v7 == (_DWORD *)*(this + 0x10) )
        {
          v7[8] = 1;
        }
        else
        {
          v8 = v7[1];
          if ( v8 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x10))(v8, 1);
          v9 = (void (__thiscall ***)(_DWORD, int))v7[2];
          if ( v9 )
            (**v9)(v9, 1);
          FormHeapFree((unsigned int)v7);
          a2 = 0;
        }
      }
    }
    if ( NiTMap_GetAt(this + 0xC, (int)v2, &a2) )
    {
      v10 = a2;
      if ( a2 )
      {
        NiTMap_RemoveAt(this + 0xC, (int)v2);
        v11 = v10[1];
        if ( v11 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x10))(v11, 1);
        v12 = (void (__thiscall ***)(_DWORD, int))v10[2];
        if ( v12 )
          (**v12)(v12, 1);
        FormHeapFree((unsigned int)v10);
      }
    }
    j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
  }
}
