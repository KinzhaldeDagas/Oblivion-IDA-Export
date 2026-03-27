void __userpurge sub_61D4B0(int a1@<ecx>, char a2@<bpl>, int *edi0@<edi>, int *a3, float a5, char a6)
{
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // ebx
  void (__thiscall **v11)(_DWORD *, int, int, int, _DWORD, _DWORD); // edi
  int v12; // eax
  TESPackage *v13; // eax
  _DWORD *v14; // eax

  if ( Actor_IsCreature(*(Actor **)(a1 + 0x3C)) )
  {
    v7 = a6 == 0;
    goto LABEL_10;
  }
  if ( a6 )
  {
LABEL_11:
    if ( TESObjectREFR_GetDistanceBetween_(edi0, (TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), (TESObjectREFR *)a3, 0, a2) <= dbl_A529C0
      || a6 )
    {
      v10 = *(_DWORD **)(a1 + 0x3C);
      v11 = (void (__thiscall **)(_DWORD *, int, int, int, _DWORD, _DWORD))(*v10 + 0x318);
      v12 = sub_6135F0(a1);
      (*v11)(v10, v12, 1, 1, 0, 0);
      v13 = sub_5E0380(*(Actor **)(a1 + 0x3C));
      v14 = OblivionDynamicCast(
              v13,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
              &FleePackage `RTTI Type Descriptor',
              0);
      if ( v14 )
      {
        sub_626C90(v14, (int)a3);
        *(_DWORD *)(a1 + 0x12C) = a3;
        sub_619920(a1, 6);
        *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
        *(float *)(a1 + 0xD8) = a5;
        *(float *)(a1 + 0xDC) = flt_A30634;
      }
    }
    return;
  }
  v8 = *(_DWORD *)(a1 + 0x70);
  if ( v8 != 7 && v8 != 0xC )
  {
    v9 = *(_DWORD *)(a1 + 0x6C);
    if ( v9 != 8 && v9 != 9 && v9 != 5 )
    {
      v7 = v9 == 6;
LABEL_10:
      if ( v7 )
        return;
      goto LABEL_11;
    }
  }
}
