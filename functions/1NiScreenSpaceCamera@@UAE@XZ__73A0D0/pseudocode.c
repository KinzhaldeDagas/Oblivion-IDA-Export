void __thiscall NiScreenSpaceCamera::~NiScreenSpaceCamera(NiScreenSpaceCamera *this)
{
  unsigned int v2; // edi
  bool v3; // zf
  unsigned int v4; // ecx
  unsigned int v5; // edi
  unsigned int v6; // eax
  int *v7; // edi
  int *v8; // eax
  unsigned int v9; // edi
  LONG v10[2]; // [esp+14h] [ebp-14h] BYREF
  int v11; // [esp+24h] [ebp-4h]

  v10[1] = (LONG)this;
  *(_DWORD *)this = &NiScreenSpaceCamera::`vftable';
  v2 = 0;
  v3 = *((_WORD *)this + 0x97) == 0;
  v11 = 2;
  if ( !v3 )
  {
    v10[0] = 0;
    do
    {
      LOBYTE(v11) = 3;
      sub_739810((_DWORD *)this + 0x49, v2, v10);
      v4 = *((unsigned __int16 *)this + 0x97);
      ++v2;
      LOBYTE(v11) = 2;
    }
    while ( v2 < v4 );
  }
  sub_739670((_WORD *)this + 0x92);
  v5 = 0;
  if ( *((_WORD *)this + 0x9F) )
  {
    v10[0] = 0;
    do
    {
      LOBYTE(v11) = 4;
      sub_7395A0((_DWORD *)this + 0x4D, v5, v10);
      v6 = *((unsigned __int16 *)this + 0x9F);
      ++v5;
      LOBYTE(v11) = 2;
    }
    while ( v5 < v6 );
  }
  sub_739670((_WORD *)this + 0x9A);
  *((_DWORD *)this + 0x4D) = &NiTArray<NiPointer<NiScreenTexture>>::`vftable';
  v7 = *((int **)this + 0x4E);
  LOBYTE(v11) = 1;
  if ( v7 )
  {
    _LN21(v7, 4u, v7[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree((unsigned int)(v7 + 0xFFFFFFFF));
  }
  v8 = *((int **)this + 0x4A);
  LOBYTE(v11) = 0;
  *((_DWORD *)this + 0x49) = &NiTArray<NiPointer<NiScreenPolygon>>::`vftable';
  if ( v8 )
  {
    v9 = (unsigned int)(v8 + 0xFFFFFFFF);
    _LN21(v8, 4u, v8[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v9);
  }
  v11 = 0xFFFFFFFF;
  DestroyNiCamera_((NiAVObject *)this);
}
