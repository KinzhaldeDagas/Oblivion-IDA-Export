void __usercall sub_624480(void **a1@<ecx>, double a2@<st0>)
{
  TESObjectREFR *v4; // edi
  bool v5; // bl
  unsigned __int16 AnimGroup; // ax
  int v7; // ebp
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  char v12; // al
  int v13; // edx
  int v14; // [esp+10h] [ebp-4h] BYREF

  sub_61E8A0(a1);
  v4 = (TESObjectREFR *)a1[0xF];
  *((_BYTE *)a1 + 0x174) = 1;
  v5 = 0;
  AnimGroup = Actor_LoadAnimGroup_(v4, 0x11, 0, 1);
  v7 = AnimGroup;
  if ( AnimGroup )
  {
    v8 = (int)v4->vtbl->GetAnimData(v4);
    if ( v8 )
      v5 = sub_470960(*(_DWORD **)(v8 + 0x9C), v7, &v14) != 0;
  }
  v9 = a1[0xF];
  *((_BYTE *)a1 + 0x1BC) = v5;
  if ( !v9
    || (v10 = v9[0x16]) == 0
    || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0xEC))(v10, 1)
    || (v11 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)a1[0xF] + 0x16) + 0xEC))(
                            *((_DWORD *)a1[0xF] + 0x16),
                            1)
                        + 8)) == 0 )
  {
    *((_BYTE *)a1 + 0x130) = 1;
LABEL_15:
    *((_BYTE *)a1 + 0x131) = 1;
    sub_624030((int)a1, (Actor *)v4, a2, 0);
    return;
  }
  v12 = *(_BYTE *)(v11 + 0x90);
  if ( v12 != 5 && v12 != 4 )
  {
    *((_BYTE *)a1 + 0x130) = 0;
    v4 = (TESObjectREFR *)sub_612960((_DWORD **)a1, 1);
    if ( v4 )
    {
LABEL_11:
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)v4, v13);
      FormHeapFree((unsigned int)v4);
      sub_624030((int)a1, (Actor *)v4, a2, 0);
      return;
    }
    goto LABEL_15;
  }
  *((_BYTE *)a1 + 0x131) = 0;
  v4 = (TESObjectREFR *)sub_612960((_DWORD **)a1, 1);
  if ( v4 )
    goto LABEL_11;
  *((_BYTE *)a1 + 0x130) = 1;
  sub_624030((int)a1, 0, a2, 0);
}
