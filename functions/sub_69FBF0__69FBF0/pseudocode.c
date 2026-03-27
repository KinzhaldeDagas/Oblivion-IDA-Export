int __cdecl sub_69FBF0(const char *a1)
{
  void *v1; // esi
  int v2; // eax
  int v3; // ebp
  bool v4; // zf
  NiTPointerMap<NiObject *,NiObject *> *v6; // [esp+10h] [ebp-28h] BYREF
  void (__thiscall ***v7)(_DWORD, int); // [esp+14h] [ebp-24h]
  float v8; // [esp+20h] [ebp-18h]
  float v9; // [esp+24h] [ebp-14h]
  float v10; // [esp+28h] [ebp-10h]
  unsigned int v11; // [esp+34h] [ebp-4h]
  float v12; // [esp+3Ch] [ebp+4h]

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 0;
  v1 = (void *)sub_439EB0((int *)ModelLoaderPtr, a1, 0, 0, 1);
  if ( !v1 )
    return 0;
  sub_478B90(&v6);
  v10 = 1.0;
  v9 = 1.0;
  v8 = 1.0;
  v11 = 0;
  v2 = sub_700610(v1, (int)&v6);
  v3 = v2;
  if ( v2 )
  {
    *(_WORD *)(v2 + 0x18) &= ~1u;
    v4 = *(_DWORD *)(v2 + 0x1C) == 0;
    v12 = fabs(1.0);
    *(float *)(v2 + 0x60) = v12;
    qmemcpy((void *)(v2 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
    *(float *)(v2 + 0x54) = Vector3_InitValue_;
    *(float *)(v2 + 0x58) = *(&Vector3_InitValue_ + 1);
    *(float *)(v2 + 0x5C) = dword_B3F9B0;
    if ( !v4 )
      *(_DWORD *)(v2 + 0x1C) = 0;
    NiAVObject_InitializePropertyState((NiAVObject *)v2);
  }
  v11 = 0xFFFFFFFF;
  if ( v6 )
    (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v6)(v6, 1);
  if ( v7 )
    (**v7)(v7, 1);
  return v3;
}
