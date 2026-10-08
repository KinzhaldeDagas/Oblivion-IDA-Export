char __thiscall sub_6825C0(_DWORD *this, Actor *a2)
{
  char v3; // bl
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0; /*0x6825cb*/
  sub_49F470(&unk_B3C000); /*0x6825cd*/
  v5 = 0; /*0x6825df*/
  if ( NiTMap_GetAt(this + 8, (int)a2, &v5) && v5 /*0x682620*/
    || NiTMap_GetAt(this + 4, (int)a2, &v5) && v5
    || NiTMap_GetAt(this + 0xC, (int)a2, &v5) && v5 )
  {
    v3 = 1; /*0x682622*/
  }
  j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&unk_B3C000); /*0x682629*/
  return v3; /*0x68262e*/
}
