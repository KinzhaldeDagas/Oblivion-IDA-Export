char __thiscall sub_613AF0(void **this, unsigned int a2, int a3, unsigned int *a4)
{
  char v4; // bl
  char v7; // al
  double v8; // [esp+Ch] [ebp-8h]

  v4 = 0; /*0x613afa*/
  if ( !a4 ) /*0x613b00*/
    return 0; /*0x613b0a*/
  if ( Actor_IsCreature((Actor *)*(this + 0xF)) && (a3 == 0x20000 || a3 == 0x10000 && !sub_5E1CF0(*(this + 0xF))) ) /*0x613b31*/
    return 0; /*0x613b43*/
  EffectItemList_HasEffectWithFlags((_DWORD *)(*(_DWORD *)a2 + 0xC), a3); /*0x613b50*/
  if ( v7 ) /*0x613b57*/
  {
    if ( !*a4 ) /*0x613b5d*/
    {
LABEL_12:
      v4 = 1; /*0x613b93*/
      *a4 = a2; /*0x613b95*/
      return v4; /*0x613b95*/
    }
    v8 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)*a4 + 0xC))(*(_DWORD *)*a4 + 0xC, 0); /*0x613b6c*/
    if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)a2 + 0xC))(*(_DWORD *)a2 + 0xC, 0) > v8 ) /*0x613b86*/
    {
      FormHeapFree(*a4); /*0x613b8b*/
      goto LABEL_12; /*0x613b8b*/
    }
  }
  return v4; /*0x613b02*/
}
