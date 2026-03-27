void __cdecl Cmd_say(
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  double *v8; // ebp
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // ecx
  int v12; // edi
  void *v13; // eax
  TESObjectREFR *v14; // esi
  int a2; // [esp+Ch] [ebp-20h] BYREF
  int v16; // [esp+10h] [ebp-1Ch] BYREF
  int v17; // [esp+14h] [ebp-18h] BYREF
  int v18; // [esp+18h] [ebp-14h] BYREF
  int v19; // [esp+1Ch] [ebp-10h]
  int v20; // [esp+20h] [ebp-Ch]
  int v21; // [esp+24h] [ebp-8h]
  int v22; // [esp+28h] [ebp-4h]

  v8 = a7;
  *a7 = 0.0;
  a7 = 0;
  v17 = 0;
  a2 = 0;
  v16 = 0;
  v18 = 0;
  if ( Script_ExtractArgs(a1, arg4, a3, a4, argC, a5, l, &a7, &v17, &a2, &v16, &v18) )
  {
    LOBYTE(v21) = v16 != 0;
    LOBYTE(v19) = v17 > 0;
    LOBYTE(v20) = v18 > 0;
    v9 = OblivionDynamicCast(
           a4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    v10 = v9;
    v22 = dword_B36798;
    dword_B36798 = 0x7FFFFFFF;
    if ( v9 && a7 )
    {
      v11 = v9[0x16];
      if ( v11 )
      {
        v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x4C8))(v11, 2);
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v10[0x16] + 0x4A0))(v10[0x16]);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v10[0x16] + 0x484))(v10[0x16], v12);
        (*(void (__thiscall **)(_DWORD, _DWORD *, double *, int, _DWORD, _DWORD))(*(_DWORD *)v10[0x16] + 0x1A4))(
          v10[0x16],
          v10,
          a7,
          v19,
          0,
          0);
        v13 = OblivionDynamicCast(
                (void *)v10[0x16],
                0,
                (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                &HighProcess `RTTI Type Descriptor',
                0);
        if ( v13 )
        {
          *v8 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)v13 + 0x208))(v13);
          dword_B36798 = v22;
          return;
        }
      }
    }
    else if ( a4 )
    {
      if ( a2 )
      {
        v14 = sub_4DB260(0x32, 1);
        TESObjectREFR_SetBaseForm(v14, a2);
        *v8 = ((double (__thiscall *)(TESObjectREFR *, double *, TESObjectREFR *, int, int, int))a4->vtbl->Unk_37)(
                a4,
                a7,
                v14,
                v21,
                v20,
                1);
        if ( v14 )
          v14->vtbl->super.Destroy((TESForm *)v14, 1);
      }
    }
    dword_B36798 = v22;
  }
}
