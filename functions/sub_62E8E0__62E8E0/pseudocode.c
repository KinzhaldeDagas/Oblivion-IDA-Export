unsigned int __userpurge sub_62E8E0@<eax>(double a1@<st1>, double a2@<st0>, TESObjectREFR *arg0, TESObjectREFR *a4)
{
  double v5; // st5
  TESObjectCELL *ParentCell; // eax
  _DWORD *v7; // ebp
  Actor *v8; // esi
  _DWORD *v9; // ebx
  void (__thiscall **v10)(_DWORD *, _DWORD); // edi
  int ProcessLevel; // eax
  int v12; // eax
  unsigned int result; // eax
  int v14; // esi
  float *v15; // [esp-4h] [ebp-20h]
  float a3; // [esp+0h] [ebp-1Ch]
  float *v17; // [esp+4h] [ebp-18h]
  float a5; // [esp+8h] [ebp-14h]
  float v19; // [esp+20h] [ebp+4h]
  _DWORD *v20; // [esp+24h] [ebp+8h]

  v5 = (double)dword_B36A50;
  a5 = v5;
  v17 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))arg0->vtbl->GetPos)(
                   arg0,
                   a2,
                   a1);
  a3 = (float)dword_B36A50;
  v15 = arg0->vtbl->GetPos(arg0);
  ParentCell = TESObjectREFR_GetParentCell(arg0);
  sub_446B90(ParentCell, v15, a3, v17, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62E890, (int)arg0);
  v7 = sub_6753F0(a4, (int)&dword_B3B944);
  v20 = v7;
  if ( v7 )
  {
    do
    {
      if ( !*v7 )
        break;
      v8 = 0;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 0x190))(*v7) )
        v8 = (Actor *)*v7;
      v7 = (_DWORD *)v7[1];
      if ( v8 )
      {
        if ( Actor::GetProcessLevel(v8) )
        {
          v9 = &v8->members.super.process->__vftable;
          v10 = (void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x1C);
          v19 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2F928;
          (*v10)(v9, LODWORD(v19));
          ProcessLevel = Actor::GetProcessLevel(v8);
          sub_674550((char)v7, v5, a1, v19, (int)v8, ProcessLevel);
          v12 = Actor::GetProcessLevel(v8);
          sub_673A90((int)v8, v12, 0, 0, 0);
        }
      }
    }
    while ( v7 );
    BSSimpleList_Clear(v20);
    FormHeapFree((unsigned int)v20);
  }
  result = dword_B3B948;
  if ( dword_B3B948 )
  {
    do
    {
      v14 = *(_DWORD *)(result + 4);
      FormHeapFree(result);
      result = v14;
      dword_B3B948 = v14;
    }
    while ( v14 );
  }
  dword_B3B944 = 0;
  return result;
}
