int __thiscall sub_49E610(_DWORD *this, float a2, char *a3)
{
  int v4; // eax
  int v5; // eax
  char *v6; // ecx
  _BYTE *v7; // edx
  char v8; // al
  NiDirectionalLight *niDirectionalLight; // ecx
  char v11[260]; // [esp+24h] [ebp-108h] BYREF

  v4 = (__int64)(a2 / flt_B07040); /*0x49e656*/
  *(this + 6) = v4; /*0x49e65c*/
  if ( !v4 ) /*0x49e663*/
    *(this + 6) = 1; /*0x49e665*/
  if ( flt_B07048 <= 0.0 ) /*0x49e679*/
    flt_B07048 = 1.0; /*0x49e67d*/
  _sprintf(v11, "%s\\water\\%s", "Textures", off_B070F0[0]); /*0x49e698*/
  v5 = FormHeapAlloc(strlen(v11) + 1); /*0x49e6b6*/
  *(this + 3) = v5; /*0x49e6be*/
  v6 = v11; /*0x49e6c1*/
  v7 = (_BYTE *)v5; /*0x49e6c5*/
  do /*0x49e6d3*/
  {
    v8 = *v6; /*0x49e6c7*/
    *v7++ = *v6++; /*0x49e6c9*/
  }
  while ( v8 ); /*0x49e6d3*/
  sub_49B710((Ni2DBuffer **)this, a3); /*0x49e6d8*/
  sub_49DD00((Ni2DBuffer **)this, *(this + 1), a2); /*0x49e6ee*/
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)&MEMORY[0xB33E90][0x13A0] + 0x84))( /*0x49e707*/
    *(_DWORD *)&MEMORY[0xB33E90][0x13A0],
    *(this + 1),
    1);
  niDirectionalLight = MEMORY[0xB333A0]->niDirectionalLight; /*0x49e70f*/
  if ( niDirectionalLight ) /*0x49e714*/
    sub_708E40(niDirectionalLight, (_DWORD *)*(this + 1)); /*0x49e71a*/
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 1)); /*0x49e722*/
  return NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 1), 0.0, 0); /*0x49e740*/
}
