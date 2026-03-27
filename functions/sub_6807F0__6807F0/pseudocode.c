double __thiscall sub_6807F0(TESObjectREFR **this, TESObjectREFR *a2)
{
  char v3; // al
  TESObjectREFR *v4; // edi
  TESObjectREFR *v5; // eax
  TESObjectREFR *v6; // ecx
  double v7; // st7
  TESForm *v8; // ebp
  TESForm *v9; // edi
  float v11; // [esp+8h] [ebp-4h]

  v11 = 0.0;
  v3 = sub_67F0A0();
  v4 = a2;
  if ( !v3 )
  {
    if ( a2 )
    {
      v5 = *(this + 1);
      if ( v5 )
      {
        if ( !sub_4B72C0(v5, a2, 0, 1) )
        {
          v6 = *(this + 1);
          LOBYTE(a2) = 0;
          if ( sub_4B7490(v6, v4, &a2) )
          {
            if ( !(_BYTE)a2 )
              goto LABEL_10;
            v7 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B3A438) + dbl_A2FC68;
          }
          else
          {
            v7 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B3A430);
          }
          v11 = v7;
        }
      }
    }
  }
LABEL_10:
  if ( !sub_67F0C0() )
  {
    if ( v4 )
    {
      if ( *(this + 1) )
      {
        if ( *(this + 3) )
        {
          if ( v4 == (TESObjectREFR *)TESDataHandler_g_PlayerRef
            || !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v4->vtbl[1].GetSleepState)(v4, 1) )
          {
            v8 = 0;
            if ( (*(this + 1))->vtbl->GetBaseForm(*(this + 1))->member.type == kFormType_Door )
              v8 = (*(this + 1))->vtbl->GetBaseForm(*(this + 1));
            v9 = 0;
            if ( (*(this + 3))->vtbl->GetBaseForm(*(this + 3))->member.type == kFormType_Door )
              v9 = (*(this + 3))->vtbl->GetBaseForm(*(this + 3));
            if ( sub_4B6D10(v8) || sub_4B6D10(v9) )
              return (float)(flt_B3A440 + v11);
          }
        }
      }
    }
  }
  return v11;
}
