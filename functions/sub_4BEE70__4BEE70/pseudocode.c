void __thiscall sub_4BEE70(unsigned int *this)
{
  unsigned int *v2; // esi
  unsigned int v3; // edi
  _DWORD *v4; // edi
  TESForm *v5; // eax
  void *v6; // eax

  BSStringT_Set((BSStringT *)(this + 0xF), "Sky\\Sun.dds", 0);
  BSStringT_Set((BSStringT *)this + 9, "Sky\\SunGlare.dds", 0);
  (*(void (__thiscall **)(unsigned int *, const char *))(*(this + 6) + 0x18))(this + 6, "Sky\\Stars.nif");
  *((_BYTE *)this + 0x50) = 0x24;
  *((_BYTE *)this + 0x51) = 0x2A;
  *((_BYTE *)this + 0x52) = 0x6C;
  *((_BYTE *)this + 0x53) = 0x72;
  *((_BYTE *)this + 0x54) = 0;
  *((_BYTE *)this + 0x55) = 0xC3;
  v2 = this + 0xC;
  if ( v2[1] )
  {
    do
    {
      v3 = *(_DWORD *)(v2[1] + 4);
      FormHeapFree(v2[1]);
      v2[1] = v3;
    }
    while ( v3 );
  }
  *v2 = 0;
  v4 = (_DWORD *)FormHeapAlloc(8u);
  v5 = TESForm_LookupByFormID(0x15Eu);
  v6 = OblivionDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESWeather `RTTI Type Descriptor',
         0);
  *v4 = v6;
  v4[1] = 0x64;
  if ( v6 )
  {
    BSSimpleList_PushFront(v2, (int)v4);
  }
  else
  {
    FormHeapFree((unsigned int)v4);
    PrintError("Unable to add default weather to default climate.  ( TESClimate::MakeDefault() )");
  }
}
