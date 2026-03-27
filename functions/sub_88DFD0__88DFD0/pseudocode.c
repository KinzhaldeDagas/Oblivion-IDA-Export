bool __thiscall sub_88DFD0(__m128 *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // esi
  int v11; // eax
  void (__cdecl *v12)(_DWORD *, _DWORD *, _DWORD *, void ***); // edi
  _DWORD *v14; // [esp+14h] [ebp-50h]
  _DWORD *v15; // [esp+18h] [ebp-4Ch]
  void **v16; // [esp+1Ch] [ebp-48h] BYREF
  char v17; // [esp+20h] [ebp-44h]
  __m128 v18; // [esp+34h] [ebp-30h] BYREF
  int v19; // [esp+60h] [ebp-4h]

  sub_88D5E0(this, &v18, a4, a5, a6);
  (*(void (__thiscall **)(_DWORD, __m128 *))(**((_DWORD **)this + 0x2C) + 0x94))(*((_DWORD *)this + 0x2C), &v18);
  v7 = *(_DWORD **)(this->m128_i32[2] + 0x74);
  v8 = *((_DWORD *)this + 0x2C);
  v9 = *v7;
  v15 = v7;
  if ( v8 && (v10 = *(_DWORD *)(v8 + 8)) != 0 )
    v14 = (_DWORD *)(v10 + 0x14);
  else
    v14 = 0;
  v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v14 + 8))(*v14);
  if ( !*a2 )
    return 0;
  v12 = *(void (__cdecl **)(_DWORD *, _DWORD *, _DWORD *, void ***))(v9
                                                                   + 0x14
                                                                   * *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2)
                                                                                        + 0x20 * v11
                                                                                        + v9
                                                                                        + 0x190)
                                                                   + 0x994);
  v16 = &hkFirstCdBodyPairCollector::`vftable';
  v17 = 0;
  v19 = 0;
  v12(v14, a2, v15, &v16);
  return v17 != 0;
}
