int __thiscall sub_49E610(_DWORD *this, float a2, char *a3)
{
  int v4; // eax
  int v5; // eax
  char *v6; // ecx
  _BYTE *v7; // edx
  char v8; // al
  NiDirectionalLight *niDirectionalLight; // ecx
  char v11[260]; // [esp+24h] [ebp-108h] BYREF

  v4 = (__int64)(a2 / flt_B07040);
  *(this + 6) = v4;
  if ( !v4 )
    *(this + 6) = 1;
  if ( flt_B07048 <= 0.0 )
    flt_B07048 = 1.0;
  _sprintf(v11, "%s\\water\\%s", "Textures", off_B070F0[0]);
  v5 = FormHeapAlloc(strlen(v11) + 1);
  *(this + 3) = v5;
  v6 = v11;
  v7 = (_BYTE *)v5;
  do
  {
    v8 = *v6;
    *v7++ = *v6++;
  }
  while ( v8 );
  sub_49B710((Ni2DBuffer **)this, a3);
  sub_49DD00((Ni2DBuffer **)this, *(this + 1), a2);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)value + 0x84))(value, *(this + 1), 1);
  niDirectionalLight = TES->niDirectionalLight;
  if ( niDirectionalLight )
    sub_708E40(niDirectionalLight, *(this + 1));
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 1));
  return NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 1), 0.0, 0);
}
