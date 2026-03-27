void *__userpurge sub_618290@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>, _DWORD *Dst)
{
  _DWORD *v4; // esi
  TESSaveLoad *v5; // ecx
  void *result; // eax
  _DWORD *v7; // eax
  size_t v8; // [esp-4h] [ebp-8h]

  v4 = Dst;
  LODWORD(v8) = 1;
  v5 = SaveLoad_CurrentSavegame;
  LOBYTE(Dst) = Dst != 0;
  result = SaveLoad_LoadData((int)v5, &Dst, v8);
  if ( (_BYTE)Dst )
  {
    v7 = (_DWORD *)FormHeapAlloc(8u);
    if ( v7 )
    {
      *v7 = 0;
      v7[1] = 0;
      *v4 = v7;
      return (void *)sub_614DB0(v7, a1, a2, a3);
    }
    else
    {
      *v4 = 0;
      return (void *)sub_614DB0(0, a1, a2, a3);
    }
  }
  else
  {
    *v4 = 0;
  }
  return result;
}
