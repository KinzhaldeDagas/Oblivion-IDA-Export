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

  v3 = ((int (__thiscall *)(NiRenderer *, char *))this->__vftable->ValidateRenderTargetGroup)(this, (char *)&v10 + 3); /*0x8c57f4*/
  v4 = (unsigned int *)a2; /*0x8c57f6*/
  v5 = v3; /*0x8c57fd*/
  result = sub_8A25C0(this, a2); /*0x8c57ff*/
  if ( v5 ) /*0x8c5806*/
  {
    v9 = v4[0x87]; /*0x8c581f*/
    v7 = *(void (__cdecl **)(unsigned int, int, int, signed int *, int))(v9 + 4); /*0x8c5820*/
    a2 = 4; /*0x8c5823*/
    v7(v9, v5 + 8, 4, &a2, 1); /*0x8c5827*/
    v8 = v4[0x87]; /*0x8c5829*/
    v11 = 4; /*0x8c583b*/
    (*(void (__cdecl **)(unsigned int, int, int, int *, int))(v8 + 4))(v8, v5 + 0x10, 0x10, &v11, 1); /*0x8c5844*/
    return (NiDynamicEffectState **)sub_712A20(v4); /*0x8c584b*/
  }
  return result; /*0x8c5850*/
}
