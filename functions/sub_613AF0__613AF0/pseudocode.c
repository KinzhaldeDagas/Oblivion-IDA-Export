char __thiscall sub_613AF0(void **this, unsigned int a2, int a3, unsigned int *a4)
{
  char v4; // bl
  double v7; // [esp+Ch] [ebp-8h]

  v4 = 0;
  if ( !a4 )
    return 0;
  if ( Actor_IsCreature((Actor *)*(this + 0xF)) && (a3 == 0x20000 || a3 == 0x10000 && !sub_5E1CF0(*(this + 0xF))) )
    return 0;
  if ( EffectItemList_HasEffectWithFlags((_DWORD *)(*(_DWORD *)a2 + 0xC), a3) )
  {
    if ( !*a4 )
    {
LABEL_12:
      v4 = 1;
      *a4 = a2;
      return v4;
    }
    v7 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)*a4 + 0xC))(*(_DWORD *)*a4 + 0xC, 0);
    if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)a2 + 0xC))(*(_DWORD *)a2 + 0xC, 0) > v7 )
    {
      FormHeapFree(*a4);
      goto LABEL_12;
    }
  }
  return v4;
}
