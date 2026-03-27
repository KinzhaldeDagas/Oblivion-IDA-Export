void __userpurge Actor_PlayPainFX(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double st7_0@<st0>,
        double a4@<st1>,
        int *a5,
        char a6)
{
  int v7; // ecx
  float *v8; // edi
  double v9; // st6
  double v10; // st7
  PlayerCharacter *v11; // ecx
  float v12; // [esp+10h] [ebp-Ch]
  double v13; // [esp+14h] [ebp-8h]

  if ( !((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))this->vtbl->IsDead)(
          this,
          0,
          st7_0,
          a4,
          st5_0)
    && !this->vtbl->GetKnockedState(this)
    && *((_DWORD *)this + 0x2C) != 4 )
  {
    v7 = *((_DWORD *)this + 0x16);
    if ( v7 )
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) )
      {
        v8 = *((float **)this + 0x16);
        v9 = v8[0x90];
        if ( v9 <= *((float *)this + 0x2F)
          || (v12 = v8[0x90],
              v13 = *((float *)this + 0x2F),
              v12 - *(float *)GameSetting_GetSafeFloatPointer((int *)&fPainDelay) >= v13) )
        {
          v10 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPainDelay) + *((float *)this + 0x2F);
          v8[0x90] = v10;
          v11 = TESDataHandler_g_PlayerRef;
          if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          {
            if ( a6 )
            {
              sub_7EB080(flt_A35AA4);
              v11 = TESDataHandler_g_PlayerRef;
            }
            if ( (_BYTE)a5 )
              ((void (__thiscall *)(PlayerCharacter *, _DWORD, int, _DWORD))v11->vtbl->super.Unk_C2)(v11, 0, 1, 0);
          }
          else if ( (_BYTE)a5 )
          {
            a5 = (int *)(*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v8 + 0x33C))(v8, 0);
            sub_616530(st5_0, v10, v9, &a5, this, 0, 1, 0);
          }
        }
      }
    }
  }
}
