NiDynamicEffectState **__thiscall sub_8C57E0(NiRenderer *this, signed int a2)
{
  int v3; // eax
  unsigned int *v4; // esi
  int v5; // edi
  NiDynamicEffectState **result; // eax
  void (__cdecl *v7)(unsigned int, int, int, signed int *, int); // eax
  unsigned int v8; // eax
  unsigned int v9; // [esp-14h] [ebp-28h]
  int v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v3 = ((int (__thiscall *)(NiRenderer *, char *))this->__vftable->ValidateRenderTargetGroup)(this, (char *)&v10 + 3);
  v4 = (unsigned int *)a2;
  v5 = v3;
  result = sub_8A25C0(this, a2);
  if ( v5 )
  {
    v9 = v4[0x87];
    v7 = *(void (__cdecl **)(unsigned int, int, int, signed int *, int))(v9 + 4);
    a2 = 4;
    v7(v9, v5 + 8, 4, &a2, 1);
    v8 = v4[0x87];
    v11 = 4;
    (*(void (__cdecl **)(unsigned int, int, int, int *, int))(v8 + 4))(v8, v5 + 0x10, 0x10, &v11, 1);
    return (NiDynamicEffectState **)sub_712A20(v4);
  }
  return result;
}
