bool __thiscall sub_8B7930(NiTriBasedGeomData *this, _DWORD *a2)
{
  bool result; // al
  bool v4; // al
  int v5; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // [esp+10h] [ebp-2Ch] BYREF
  _DWORD *v10[2]; // [esp+14h] [ebp-28h] BYREF
  int v11; // [esp+1Ch] [ebp-20h]
  int v12; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD *v13[2]; // [esp+24h] [ebp-18h] BYREF
  int v14; // [esp+2Ch] [ebp-10h]
  int v15; // [esp+38h] [ebp-4h]
  bool v16; // [esp+40h] [ebp+4h]

  result = sub_8A2650(this, (int)a2); /*0x8b795d*/
  if ( result ) /*0x8b7966*/
  {
    v12 = 0; /*0x8b796c*/
    v13[0] = 0; /*0x8b7970*/
    v13[1] = 0; /*0x8b7974*/
    v14 = 0x80000000; /*0x8b7978*/
    v15 = 1; /*0x8b7980*/
    v9 = 0; /*0x8b7984*/
    v10[0] = 0; /*0x8b7988*/
    v10[1] = 0; /*0x8b798c*/
    v11 = 0x80000000; /*0x8b7990*/
    sub_8B77A0(this, &v12); /*0x8b79a4*/
    sub_8B77A0(a2, &v9); /*0x8b79b0*/
    v4 = sub_8E8140(v13, v10); /*0x8b79bf*/
    v5 = MEMORY[0xBA9DE4]; /*0x8b79c4*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8b79ca*/
    v16 = v4; /*0x8b79d1*/
    LOBYTE(v15) = 0; /*0x8b79de*/
    if ( v11 >= 0 ) /*0x8b79e2*/
    {
      v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8b79e7*/
      if ( !v7 ) /*0x8b79ef*/
        v7 = unk_BA7D9C; /*0x8b79f1*/
      sub_8A75D0(v7, v10[0], 0x10 * v11, 0x14); /*0x8b7a07*/
    }
    v15 = 0xFFFFFFFF; /*0x8b7a12*/
    if ( v14 >= 0 ) /*0x8b7a1a*/
    {
      v8 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8b7a1f*/
      if ( !v8 ) /*0x8b7a27*/
        v8 = unk_BA7D9C; /*0x8b7a29*/
      sub_8A75D0(v8, v13[0], 0x10 * v14, 0x14); /*0x8b7a3f*/
    }
    return v16; /*0x8b7a44*/
  }
  return result; /*0x8b7a48*/
}
