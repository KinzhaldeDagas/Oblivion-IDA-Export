char __thiscall sub_6825C0(_DWORD *this, Actor *a1)
{
  char v3; // bl
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  sub_49F470(&stru_B3C000);
  v5 = 0;
  if ( NiTMap_GetAt(this + 8, (int)a1, &v5) && v5
    || NiTMap_GetAt(this + 4, (int)a1, &v5) && v5
    || NiTMap_GetAt(this + 0xC, (int)a1, &v5) && v5 )
  {
    v3 = 1;
  }
  j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
  return v3;
}
