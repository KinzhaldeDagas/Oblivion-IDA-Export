void __userpurge sub_640900(
        int a1@<ecx>,
        char a2@<dil>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESObjectREFR *a6,
        TESObjectREFR *a7,
        int a8,
        int a9,
        int a10)
{
  TESObjectREFR *v10; // esi
  TESObjectREFR *v11; // edi
  bool IsPlayerInCombat; // al
  int v13; // ebp
  int v14; // ebx
  int v16; // [esp+4h] [ebp-28h]
  int v17; // [esp+10h] [ebp-1Ch]
  float v19; // [esp+1Ch] [ebp-10h]
  char v20; // [esp+20h] [ebp-Ch]
  float DetectionLevel; // [esp+30h] [ebp+4h]

  v10 = a6;
  (*(void (__usercall **)(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x184))(a1, a5, a4);
  if ( !a6 || (a6->member.super.flags & 0x800) != 0 || !a6->vtbl->IsActor(a6) )
    JUMPOUT(0x6411C3);
  v11 = a7;
  if ( a6 == a7 )
    goto LABEL_24;
  if ( a6 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    IsPlayerInCombat = PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0);
  else
    a5 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))a6->vtbl[1].GetSleepState)(a6, 0);
  LOBYTE(a6) = IsPlayerInCombat;
  v13 = 0;
  DetectionLevel = (float)Actor_GetDetectionLevel(v11, (int)v11, a3, a4, a5, 1, v10, &a7, (int)a6, 0, 0, a2);
  if ( flt_B36778 < (double)DetectionLevel )
    v13 = 3;
  v14 = (*(int (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)a1 + 0x3B0))(a1, v11);
  if ( !v14 )
  {
    v14 = (*(int (__thiscall **)(int, TESObjectREFR *, int, float, int))(*(_DWORD *)v17 + 0xA8))(
            v17,
            v10,
            v13,
            COERCE_FLOAT(LODWORD(DetectionLevel)),
            a1);
    if ( !v14 )
LABEL_24:
      JUMPOUT(0x640ACC);
  }
  *(_DWORD *)(v14 + 0xC) = v16;
  *(_DWORD *)(v14 + 4) = v13;
  *(_BYTE *)(v14 + 8) = v20;
  if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778) >= (double)v19 )
  {
    switch ( v13 )
    {
      case 0:
        if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778) <= (double)v19
          || *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36770) >= (double)v19 )
        {
          JUMPOUT(0x640AC9);
        }
        return;
      case 3:
        break;
    }
  }
  def_640A2E(LODWORD(DetectionLevel), a7, a8);
}
