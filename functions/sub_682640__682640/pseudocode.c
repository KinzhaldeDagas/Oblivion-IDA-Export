void __thiscall sub_682640(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx

  v3 = a2;
  if ( a2 )
  {
    sub_49F470(&stru_B3C000);
    a2 = 0;
    NiTMap_GetAt(this + 8, (int)v3, &a2);
    v5 = a2;
    if ( a2
      || (NiTMap_GetAt(this + 4, (int)v3, &a2), (v5 = a2) != 0)
      || (NiTMap_GetAt(this + 0xC, (int)v3, &a2), (v5 = a2) != 0) )
    {
      v6 = a3;
      v5[5] = *a3;
      v5[6] = v6[1];
      v5[7] = v6[2];
    }
    j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
  }
}
