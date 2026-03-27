void __thiscall NiScreenGeometryData::~NiScreenGeometryData(NiScreenGeometryData *this)
{
  unsigned int v2; // edi
  bool v3; // zf
  int v4; // eax
  int v5; // ebx
  unsigned int *v6; // ecx
  NiD3DPass *a2[2]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  a2[1] = (NiD3DPass *)this;
  *(_DWORD *)this = &NiScreenGeometryData::`vftable';
  v2 = 0;
  v3 = *((_WORD *)this + 0x35) == 0;
  v8 = 1;
  if ( !v3 )
  {
    do
    {
      v4 = *((_DWORD *)this + 0x19);
      v5 = *(_DWORD *)(v4 + 4 * v2);
      if ( v2 < *((unsigned __int16 *)this + 0x35) )
      {
        if ( *(_DWORD *)(v4 + 4 * v2) )
          --*((_WORD *)this + 0x36);
      }
      else
      {
        *((_WORD *)this + 0x35) = v2 + 1;
      }
      *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * v2) = 0;
      if ( v5 )
      {
        FormHeapFree(*(_DWORD *)(v5 + 8));
        FormHeapFree(*(_DWORD *)(v5 + 0xC));
        FormHeapFree(*(_DWORD *)(v5 + 0x10));
        v6 = (unsigned int *)dword_B40134;
        a2[0] = (NiD3DPass *)v5;
        sub_73A5E0(v6, a2);
      }
      ++v2;
    }
    while ( v2 < *((unsigned __int16 *)this + 0x35) );
  }
  NiTArray_SetSize((unsigned __int16 *)this + 0x30, 0);
  *((_DWORD *)this + 0x18) = &NiTArray<NiScreenGeometryData::ScreenElement *>::`vftable';
  FormHeapFree(*((_DWORD *)this + 0x19));
  v8 = 0xFFFFFFFF;
  NiTriShapeDynamicData::~NiTriShapeDynamicData(this);
}
