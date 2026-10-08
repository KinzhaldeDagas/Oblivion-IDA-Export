// Pass227: NiScreenSpaceCamera destructor cleanup path for screen-texture array.
void __thiscall NiScreenSpaceCamera::~NiScreenSpaceCamera(NiScreenSpaceCamera *this)
{
  unsigned int v2; // edi
  bool v3; // zf
  unsigned int v4; // ecx
  unsigned int v5; // edi
  unsigned int v6; // eax
  char *v7; // edi
  char *v8; // eax
  unsigned int v9; // edi
  LONG v10[2]; // [esp+14h] [ebp-14h] BYREF
  int v11; // [esp+24h] [ebp-4h]

  v10[1] = (LONG)this; /*0x73a0f9*/
  *(_DWORD *)this = &NiScreenSpaceCamera::`vftable'; /*0x73a0fd*/
  v2 = 0; /*0x73a103*/
  v3 = *((_WORD *)this + 0x97) == 0; /*0x73a105*/
  v11 = 2; /*0x73a111*/
  if ( !v3 ) /*0x73a115*/
  {
    v10[0] = 0; /*0x73a117*/
    do /*0x73a143*/
    {
      LOBYTE(v11) = 3; /*0x73a129*/
      sub_739810((_DWORD *)this + 0x49, v2, v10); /*0x73a12e*/
      v4 = *((unsigned __int16 *)this + 0x97); /*0x73a133*/
      ++v2; /*0x73a13a*/
      LOBYTE(v11) = 2; /*0x73a13f*/
    }
    while ( v2 < v4 ); /*0x73a143*/
  }
  sub_739670((_WORD *)this + 0x92); /*0x73a14b*/
  v5 = 0; /*0x73a150*/
  if ( *((_WORD *)this + 0x9F) ) /*0x73a152*/
  {
    v10[0] = 0; /*0x73a15b*/
    do /*0x73a187*/
    {
      LOBYTE(v11) = 4; /*0x73a16d*/
      sub_7395A0((_DWORD *)this + 0x4D, v5, v10); /*0x73a172*/
      v6 = *((unsigned __int16 *)this + 0x9F); /*0x73a177*/
      ++v5; /*0x73a17e*/
      LOBYTE(v11) = 2; /*0x73a183*/
    }
    while ( v5 < v6 ); /*0x73a187*/
  }
  sub_739670((_WORD *)this + 0x9A); /*0x73a191*/
  *((_DWORD *)this + 0x4D) = &NiTArray<NiPointer<NiScreenTexture>>::`vftable'; /*0x73a196*/
  v7 = *((char **)this + 0x4E); /*0x73a19c*/
  LOBYTE(v11) = 1; /*0x73a1a1*/
  if ( v7 ) /*0x73a1a6*/
  {
    _LN21(v7, 4u, *((_DWORD *)v7 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x73a1b7*/
    FormHeapFree((unsigned int)(v7 + 0xFFFFFFFC)); /*0x73a1bd*/
  }
  v8 = *((char **)this + 0x4A); /*0x73a1c5*/
  LOBYTE(v11) = 0; /*0x73a1cd*/
  *((_DWORD *)this + 0x49) = &NiTArray<NiPointer<NiScreenPolygon>>::`vftable'; /*0x73a1d2*/
  if ( v8 ) /*0x73a1dc*/
  {
    v9 = (unsigned int)(v8 + 0xFFFFFFFC); /*0x73a1e1*/
    _LN21(v8, 4u, *((_DWORD *)v8 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x73a1ed*/
    FormHeapFree(v9); /*0x73a1f3*/
  }
  v11 = 0xFFFFFFFF; /*0x73a1fd*/
  DestroyNiCamera_((NiAVObject *)this); /*0x73a205*/
}
