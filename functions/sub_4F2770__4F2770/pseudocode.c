char __thiscall sub_4F2770(_DWORD *this)
{
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // edx
  _DWORD *v6; // esi
  MEF_U32PointerMapEntry32 *v7; // eax
  MEF_U32PointerMapLayout32 *v8; // ecx
  TESObjectCELL *v9; // ecx
  char v10; // bl
  char v12; // [esp+13h] [ebp-29h]
  void *valueOut; // [esp+14h] [ebp-28h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+18h] [ebp-24h] BYREF
  unsigned int keyOut; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v16[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  unsigned int v19; // [esp+38h] [ebp-4h]

  v16[1] = 0x25; /*0x4f27a1*/
  v12 = 0; /*0x4f27af*/
  v18 = 0; /*0x4f27bb*/
  v17 = FormHeapAlloc(0x94u); /*0x4f27d7*/
  _memset(v17, 0, 0x94u); /*0x4f27db*/
  v16[0] = (unsigned int)&NiTPointerMap<TESObjectCELL *,bool>::`vftable'; /*0x4f27e3*/
  v2 = *(this + 0xC); /*0x4f27eb*/
  v3 = *(_DWORD *)(v2 + 4); /*0x4f27ee*/
  v4 = 0; /*0x4f27f1*/
  v19 = 0; /*0x4f27f5*/
  if ( v3 ) /*0x4f27f9*/
  {
    v5 = *(_DWORD **)(v2 + 8); /*0x4f27fb*/
    v6 = v5; /*0x4f27fe*/
    while ( !*v6 ) /*0x4f2802*/
    {
      ++v4; /*0x4f2808*/
      ++v6; /*0x4f280b*/
      if ( v4 >= v3 ) /*0x4f2810*/
        goto LABEL_5; /*0x4f2810*/
    }
    v7 = (MEF_U32PointerMapEntry32 *)v5[v4]; /*0x4f28a6*/
  }
  else
  {
LABEL_5:
    v7 = 0; /*0x4f2812*/
  }
  position = v7; /*0x4f2816*/
  while ( position ) /*0x4f281a*/
  {
    v8 = (MEF_U32PointerMapLayout32 *)*(this + 0xC); /*0x4f282a*/
    valueOut = 0; /*0x4f2832*/
    NiTMap_U32Pointer_GetNextEntry(v8, &position, &keyOut, &valueOut); /*0x4f2836*/
    if ( valueOut ) /*0x4f2841*/
    {
      if ( sub_4CC070((TESObjectCELL *)valueOut, v16) ) /*0x4f2848*/
        v12 = 1; /*0x4f2851*/
    }
  }
  v9 = (TESObjectCELL *)*(this + 0xD); /*0x4f285c*/
  if ( !v9 || (v10 = 1, !sub_4CC070(v9, v16)) ) /*0x4f2868*/
    v10 = v12; /*0x4f2873*/
  NiTMap_Clear(v16); /*0x4f287b*/
  v19 = 0xFFFFFFFF; /*0x4f2884*/
  NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(v16); /*0x4f288c*/
  return v10; /*0x4f2893*/
}
