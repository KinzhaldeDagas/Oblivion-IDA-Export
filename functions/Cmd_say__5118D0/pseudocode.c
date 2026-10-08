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
  float v22; // [esp+28h] [ebp-4h]

  v8 = a7; /*0x5118dc*/
  *a7 = 0.0; /*0x5118e4*/
  a7 = 0; /*0x51191d*/
  v17 = 0; /*0x511921*/
  a2 = 0; /*0x511925*/
  v16 = 0; /*0x511929*/
  v18 = 0; /*0x51192d*/
  if ( Script_ExtractArgs(a1, arg4, a3, a4, argC, a5, l, &a7, &v17, &a2, &v16, &v18) ) /*0x511931*/
  {
    LOBYTE(v21) = v16 != 0; /*0x511956*/
    LOBYTE(v19) = v17 > 0; /*0x511961*/
    LOBYTE(v20) = v18 > 0; /*0x51196c*/
    v9 = OblivionDynamicCast( /*0x51197f*/
           a4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    v10 = v9; /*0x51198a*/
    v22 = flt_B36778[8]; /*0x511991*/
    flt_B36778[8] = NAN; /*0x511995*/
    if ( v9 && a7 ) /*0x5119a9*/
    {
      v11 = v9[0x16]; /*0x5119af*/
      if ( v11 ) /*0x5119b4*/
      {
        v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x4C8))(v11, 2); /*0x5119c9*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v10[0x16] + 0x4A0))(v10[0x16]); /*0x5119d3*/
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v10[0x16] + 0x484))(v10[0x16], v12); /*0x5119e1*/
        (*(void (__thiscall **)(_DWORD, _DWORD *, double *, int, _DWORD, _DWORD))(*(_DWORD *)v10[0x16] + 0x1A4))( /*0x5119fb*/
          v10[0x16],
          v10,
          a7,
          v19,
          0,
          0);
        v13 = OblivionDynamicCast( /*0x511a0d*/
                (void *)v10[0x16],
                0,
                (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                &HighProcess `RTTI Type Descriptor',
                0);
        if ( v13 ) /*0x511a17*/
        {
          *v8 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)v13 + 0x208))(v13); /*0x511a25*/
          flt_B36778[8] = v22; /*0x511a2f*/
          return; /*0x511a3a*/
        }
      }
    }
    else if ( a4 ) /*0x511a3d*/
    {
      if ( a2 ) /*0x511a43*/
      {
        v14 = sub_4DB260(0x32, 1); /*0x511a55*/
        TESObjectREFR_SetBaseForm(v14, (TESForm *)a2); /*0x511a5a*/
        *v8 = ((double (__thiscall *)(TESObjectREFR *, double *, TESObjectREFR *, int, int, int))a4->vtbl->Unk_37)( /*0x511a7d*/
                a4,
                a7,
                v14,
                v21,
                v20,
                1);
        if ( v14 ) /*0x511a82*/
          v14->vtbl->super.Destroy((TESForm *)v14, 1); /*0x511a8d*/
      }
    }
    flt_B36778[8] = v22; /*0x511a96*/
  }
}
