_DWORD *__thiscall sub_4EA580(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4)
{
  __int16 v5; // bx
  int v6; // esi
  _DWORD *v7; // ebp
  _DWORD *v8; // eax
  _DWORD *v9; // eax

  if ( (unsigned int)(a2 + 0x8000) > 0xFFFF || (v5 = (__int16)a3, (unsigned int)(a3 + 0x2000) > 0xFFFF) )
  {
    PrintError("Trying to get LOD for invalid world coordinate.");
    return 0;
  }
  else
  {
    v6 = ((__int16)a2 << 0x10) | (unsigned __int16)a3;
    a3 = 0;
    NiTMap_GetAt(this, v6, &a3);
    v7 = a3;
    if ( !a3 )
    {
      if ( (_BYTE)a4 )
      {
        v8 = (_DWORD *)FormHeapAlloc(0x10u);
        a4 = v8;
        if ( v8 )
          v9 = sub_4EA3A0(v8, (int)this);
        else
          v9 = 0;
        *((_WORD *)v9 + 4) = a2;
        v7 = v9;
        *((_WORD *)v9 + 5) = v5;
        NiTMap_SetAt(this, v6, (int)v9);
      }
    }
    return v7;
  }
}
