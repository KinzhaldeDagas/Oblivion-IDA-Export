void __userpurge sub_62F4E0(float *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, Actor *a5)
{
  int v6; // ebx
  Actor *v7; // esi
  UInt32 Levels; // eax
  Actor *v9; // edi
  float *v10; // ebp
  float *v11; // eax
  float *v12; // ebp
  float *v13; // eax
  int *v14; // ecx
  TESPackage *v15; // ebp
  bool v16; // bl
  LowProcess *process; // ecx
  LowProcess *v18; // esi
  int *v19; // ecx
  int v20; // [esp+18h] [ebp-24h]
  float v21; // [esp+18h] [ebp-24h]
  float v22; // [esp+18h] [ebp-24h]
  float v23; // [esp+1Ch] [ebp-20h]
  float v24; // [esp+1Ch] [ebp-20h]
  float v25; // [esp+1Ch] [ebp-20h]
  int v27; // [esp+24h] [ebp-18h] BYREF
  float v28; // [esp+28h] [ebp-14h]
  int v29; // [esp+2Ch] [ebp-10h] BYREF
  float v30; // [esp+30h] [ebp-Ch] BYREF
  float v31; // [esp+34h] [ebp-8h]
  int v32; // [esp+38h] [ebp-4h]

  v6 = (*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x184))(a1, a4, a3);
  v7 = (Actor *)sub_779480((_DWORD *)v6);
  Levels = NiDX9TextureData::GetLevels((NiDX9TextureData *)v6);
  v9 = (Actor *)Levels;
  if ( v7 && Levels )
  {
    if ( v7->vtbl->super.super.GetSleepState((TESObjectREFR *)v7) == kSitSleep_None && v7 != a5 )
    {
      v10 = v7->vtbl->super.super.GetPos((TESObjectREFR *)v7);
      v11 = v9->vtbl->super.super.GetPos((TESObjectREFR *)v9);
      v23 = v11[1] - v10[1];
      *(float *)&v20 = v11[2] - v10[2];
      v30 = *v11 - *v10;
      v31 = v23;
      v32 = v20;
      v24 = sub_683CB0(&v30);
      *(float *)&v27 = 0.0;
      sub_683D80((int)v9, v24, (int)&v27);
      v28 = v24;
      v21 = (double)iActorTurnDegree * dbl_A31C78;
      if ( sub_5E0590(v9) )
        v21 = (double)iActorKeepTurnDegree * dbl_A31C78;
      v28 = fabs(v28);
      a3 = v21;
      if ( v21 >= (double)v28 )
        sub_5E05F0(v7, 0x30);
      else
        sub_685530(v7, v24, 1);
    }
    if ( v9->vtbl->super.super.GetSleepState((TESObjectREFR *)v9) == kSitSleep_None && v9 != v7 )
    {
      v12 = v9->vtbl->super.super.GetPos((TESObjectREFR *)v9);
      v13 = v7->vtbl->super.super.GetPos((TESObjectREFR *)v7);
      v28 = v13[1] - v12[1];
      *(float *)&v27 = v13[2] - v12[2];
      v30 = *v13 - *v12;
      v31 = v28;
      v32 = v27;
      v22 = sub_683CB0(&v30);
      *(float *)&v29 = 0.0;
      sub_683D80((int)v7, v22, (int)&v29);
      v28 = v22;
      v25 = (double)iActorTurnDegree * dbl_A31C78;
      if ( sub_5E0590(v7) )
        v25 = (double)iActorKeepTurnDegree * dbl_A31C78;
      v28 = fabs(v28);
      a3 = v25;
      if ( v25 >= (double)v28 )
        sub_5E05F0(v9, 0x30);
      else
        sub_685530(v9, v22, 1);
    }
    if ( *(float *)(v6 + 0x44) <= 0.0 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 0xC0))(a1)
        || (v14 = *(int **)(v6 + 0x3C)) != 0 && sub_6B7260(v14) )
      {
        v19 = *(int **)(v6 + 0x3C);
        if ( !v19 || !sub_6B7260(v19) )
          sub_6267A0(v6, a2, a3, 0.0, (AnimSequenceSingle *)1);
      }
      else
      {
        v15 = sub_5E0380(v9);
        v16 = sub_5E0380(v7) == v15;
        a5->vtbl->Unk_C3(a5);
        sub_5E05F0(v7, 0x30);
        if ( v16 )
        {
          if ( v9 != a5 )
            v7 = v9;
          process = v7->members.super.process;
          if ( process )
          {
            if ( !process->GetProcessLevel(process) )
            {
              v18 = v7->members.super.process;
              if ( v18 )
                v18[2].unk08C = 0.0;
            }
          }
        }
        a1[0x6B] = 0.0;
      }
    }
    else
    {
      *(float *)(v6 + 0x44) = *(float *)(v6 + 0x44) - flt_B33E9C;
    }
  }
  else
  {
    a5->members.super.process->editorPackage = 0;
    a5->members.super.process->editorPackProcedure = kProcedure_TRAVEL;
  }
}
