BSStringT *__thiscall sub_4A4EA0(BSStringT *this, _BYTE *a2)
{
  char **v3; // esi
  int (__thiscall *v4)(_BYTE *, unsigned int *); // edx
  const char **v5; // edi
  char *v6; // eax
  int v7; // eax
  unsigned int v9; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  sub_4A34E0(this, a2);
  v3 = (char **)(this + 1);
  this->m_data = (char *)&TESRegionDataMap::`vftable';
  v10 = 0;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 7) = 0;
  v4 = *(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28);
  LOBYTE(v10) = 1;
  v5 = (const char **)v4(a2, &v9);
  v6 = (char *)*v5;
  LOBYTE(v10) = 2;
  if ( v6 && *v3 )
    v7 = _strcmp(*v3, v6);
  else
    v7 = 2 * (v6 == 0) - 1;
  if ( v7 )
    BSStringT_Set(this + 1, *v5, 0);
  FormHeapFree(v9);
  return this;
}
