LONG __userpurge sub_438060@<eax>(
        _DWORD **this@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESObjectREFR *a6,
        int a7)
{
  LONG result; // eax
  TESForm *baseForm; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned __int8 (__thiscall *v12)(int, TESObjectREFR *, LONG *); // edx
  LONG v13; // esi
  IOTask *v14; // eax
  IOTask *v15; // eax
  int v16; // eax
  int v17; // eax
  IOTask *v18; // eax
  IOTask *v19; // eax
  IOTask *v20; // eax
  IOTask *v21; // eax
  void (__thiscall ***v22)(_DWORD, int); // esi
  LONG v23; // [esp+4h] [ebp-24h]
  LONG v24; // [esp+18h] [ebp-10h] BYREF
  unsigned int v25; // [esp+24h] [ebp-4h]

  if ( sub_45A500(SaveLoad_CurrentSavegame) )
  {
    result = (LONG)SaveLoad_CurrentSavegame;
    if ( (SaveLoad_CurrentSavegame->flags & 2) == 0 )
      return result;
  }
  baseForm = a6->member.baseForm;
  if ( baseForm )
  {
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm) )
    {
      result = (LONG)a6->vtbl->GetBaseForm(a6);
      if ( *(_BYTE *)(result + 4) != 0x1A )
        return result;
    }
  }
  result = (LONG)a6->vtbl->GetBaseForm(a6);
  if ( *(_BYTE *)(result + 4) == 0xA )
    return result;
  if ( a6->vtbl->IsActor(a6) )
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))a6->vtbl[1].IsMobileObject)(a6) )
    {
      v10 = ((int (__thiscall *)(TESObjectREFR *))a6->vtbl[1].IsMobileObject)(a6);
      sub_612DE0(v10, bp0, st5_0, a4, a5, 0xD);
    }
  }
  v24 = 0;
  v11 = (int)*(this + 2);
  v12 = *(unsigned __int8 (__thiscall **)(int, TESObjectREFR *, LONG *))(*(_DWORD *)v11 + 4);
  v25 = 0;
  if ( v12(v11, a6, &v24) )
  {
    v13 = v24;
    result = (unsigned __int8)BYTE2(*(_DWORD *)(v24 + 0x10));
    if ( (unsigned __int8)result != a7 )
    {
      result = (*(int (__thiscall **)(LONG, int))(*(_DWORD *)v24 + 0x1C))(v24, a7);
      v13 = v24;
    }
    v25 = 0xFFFFFFFF;
    if ( v13 )
    {
      result = InterlockedDecrement((volatile LONG *)(v13 + 8));
      goto LABEL_40;
    }
    return result;
  }
  if ( a6 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    v14 = (IOTask *)FormHeapAlloc(0x40u);
    if ( v14 )
    {
      v15 = sub_438020(v14, a7);
      goto LABEL_30;
    }
  }
  else
  {
    v16 = (unsigned __int8)a6->vtbl->GetBaseForm(a6)->member.type - 0x1E;
    if ( v16 )
    {
      v17 = v16 - 5;
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          v19 = (IOTask *)FormHeapAlloc(0x38u);
          if ( v19 )
          {
            v15 = sub_437FE0(v19, (int)a6, a7);
            goto LABEL_30;
          }
        }
        else
        {
          v18 = (IOTask *)FormHeapAlloc(0x38u);
          if ( v18 )
          {
            v15 = sub_437C30(v18, (int)a6, a7);
            goto LABEL_30;
          }
        }
      }
      else
      {
        v20 = (IOTask *)FormHeapAlloc(0x40u);
        if ( v20 )
        {
          v15 = sub_437F00(v20, (int)a6, a7);
          goto LABEL_30;
        }
      }
    }
    else
    {
      v21 = (IOTask *)FormHeapAlloc(0x38u);
      if ( v21 )
      {
        v15 = sub_437E20(v21, (int)a6, a7);
        goto LABEL_30;
      }
    }
  }
  v15 = 0;
LABEL_30:
  sub_4BCB70(&v24, (int)v15);
  v23 = v24;
  if ( v24 )
    InterlockedIncrement((volatile LONG *)(v24 + 8));
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, TESObjectREFR *, LONG, _DWORD))(**(this + 2) + 0xC))(
         *(this + 2),
         a6,
         v23,
         0) )
  {
    (*(void (__thiscall **)(LONG))(*(_DWORD *)v24 + 0x20))(v24);
    result = v24;
  }
  else
  {
    result = v24;
    if ( v24 )
    {
      v22 = (void (__thiscall ***)(_DWORD, int))v24;
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 8)) )
        (**v22)(v22, 1);
      result = 0;
      v24 = 0;
    }
  }
  v25 = 0xFFFFFFFF;
  if ( result )
  {
    v13 = result;
    result = InterlockedDecrement((volatile LONG *)(result + 8));
LABEL_40:
    if ( !result )
      return (**(LONG (__thiscall ***)(LONG, int))v13)(v13, 1);
  }
  return result;
}
