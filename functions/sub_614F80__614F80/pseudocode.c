char __userpurge sub_614F80@<al>(int a1@<ecx>, char bl0@<bl>, int *a2)
{
  char result; // al
  _DWORD *v5; // ecx
  int v6; // edx
  void *v7; // ecx
  int *v8; // eax
  TESObjectREFR *v9; // eax
  double DistanceBetween; // st7

  result = 0;
  if ( a2 && a2 != *(int **)(a1 + 0x3C) )
  {
    v5 = (_DWORD *)(a1 + 0x15C);
    v6 = a1 + 0x15C;
    if ( a1 == 0xFFFFFEA4 )
    {
LABEL_6:
      BSSimpleList_PushFront(v5, (int)a2);
      v7 = *(void **)(a1 + 0x3C);
      ++*(_DWORD *)(a1 + 0x178);
      v8 = sub_5E0F50(v7);
      if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v8 + 0x16C))(v8, 4) )
      {
        return 1;
      }
      else
      {
        v9 = (TESObjectREFR *)sub_6135F0(a1);
        DistanceBetween = TESObjectREFR_GetDistanceBetween_(a2, (TESObjectREFR *)a2, v9, 0, bl0);
        result = 1;
        if ( flt_B372B8 > DistanceBetween )
          *(_BYTE *)(a1 + 0x17C) = 1;
      }
    }
    else
    {
      while ( *(int **)v6 != a2 )
      {
        v6 = *(_DWORD *)(v6 + 4);
        if ( !v6 )
          goto LABEL_6;
      }
    }
  }
  return result;
}
