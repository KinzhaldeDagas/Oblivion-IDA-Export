char __thiscall sub_77C7C0(_DWORD *this, NiGeometry *a2, Atmosphere *a3)
{
  NiAVObject *v4; // ebx
  int CastingType; // ebp
  Atmosphere *v6; // eax
  size_t v8; // [esp-8h] [ebp-44h]
  char *v9; // [esp+0h] [ebp-3Ch]
  char DstBuf[32]; // [esp+18h] [ebp-24h] BYREF

  v4 = sub_452A60(a3);
  if ( !v4 )
  {
    v9 = *(char **)ArgList;
    HIDWORD(v8) = "NiD3DShader%d";
    LODWORD(v8) = 0x20;
    ++*(_DWORD *)ArgList;
    sub_6C5D40((va_list)this, DstBuf, v8, v9);
    sub_738630((unsigned int *)a3, DstBuf);
    v4 = sub_452A60(a3);
  }
  CastingType = TESEnchantableForm_GetCastingType(a3);
  v6 = (Atmosphere *)(*(int (__thiscall **)(_DWORD *, NiAVObject *, int, _DWORD))(*this + 4))(this, v4, CastingType, 0);
  if ( v6 )
  {
    if ( v6 != a3 )
      return 0;
  }
  else
  {
    sub_769B10((_DWORD *)*(this + 5), (int)a3);
    if ( a3->__vftbl[0xA].GetObjectNode((SkyObject *)a3) )
      CastingType = 0xFFFFFFFF;
    (*(void (__thiscall **)(_DWORD *, Atmosphere *, int))(*this + 0x18))(this, a3, CastingType);
  }
  return sub_77C2A0(this, a2, (BSShader *)a3);
}
