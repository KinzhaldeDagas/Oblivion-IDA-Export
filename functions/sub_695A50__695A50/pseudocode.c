char __userpurge sub_695A50@<al>(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  TESObjectCELL *ParentCell; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // ebx
  int (__thiscall *v12)(Concurrency::details::SchedulerBase *); // eax
  float *v13; // eax
  float *v14; // ebx
  int v15; // edi
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  NiObject *v19; // eax
  float v21; // [esp+24h] [ebp+4h]
  float v22; // [esp+28h] [ebp+8h]
  float v23; // [esp+28h] [ebp+8h]

  sub_69F1E0((int *)a1, a2, a3, a4, a5, a6, a7);
  sub_695010((MagicBallProjectile *)a1);
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
  sub_4D35D0(ParentCell, a3, a4, a5, (TESObjectREFR *)a1);
  if ( *((_DWORD *)a1 + 0x20) != 2 )
  {
    v9 = *((_DWORD *)a1 + 0x1D);
    if ( *(_DWORD *)(v9 + 0x84) )
    {
      v10 = *((_DWORD *)a1 + 0x22);
      v11 = *(_DWORD *)(*(_DWORD *)(v9 + 0x84) + 0xC);
      if ( v10 )
      {
        sub_6B73E0(*((_DWORD **)a1 + 0x22));
        FormHeapFree(v10);
        *((_DWORD *)a1 + 0x22) = 0;
      }
      *((_DWORD *)a1 + 0x22) = sub_65AC50(a1, v11, 1, 0x102, 1);
    }
  }
  if ( (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x154))(a1) )
  {
    v22 = fabs(*((float *)a1 + 0x21));
    *(float *)((*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x154))(a1) + 0x60) = v22;
  }
  v12 = *(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x154);
  v21 = *((float *)a1 + 0x23);
  *((_DWORD *)a1 + 0x23) = 0;
  v13 = (float *)v12(a1);
  if ( v13 )
  {
    v13 = *((float **)a1 + 0x1D);
    if ( *((_DWORD *)v13 + 0x1C) )
    {
      v14 = (float *)FormHeapAlloc(0x1Cu);
      if ( v14 )
      {
        v15 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 0x1D) + 0x70) + 0xC);
        v16 = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x154))(a1);
        v13 = MagicCaster_CastingVFX_constr(v14, v15, v16);
      }
      else
      {
        v13 = 0;
      }
      v17 = *((_DWORD *)a1 + 0x20) == 2;
      *((_DWORD *)a1 + 0x23) = v13;
      if ( v17 )
      {
        if ( v13 )
        {
          v18 = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x154))(a1);
          if ( v18 )
            v19 = *(NiObject **)(v18 + 0xC);
          else
            v19 = 0;
          v13 = (float *)NiRTTI_Cast(&stru_B3CAC0, v19);
          if ( v13 )
          {
            v13 = (float *)sub_4715A0(v13, (int)"SpecialIdle_AreaEffect");
            if ( v13 )
            {
              v23 = v13[0xC] * dbl_A31C70;
              LOBYTE(v13) = MagicCaster_CastingVFX_ClearSomething___(*((_DWORD *)a1 + 0x23), 0, v23);
              *(float *)(*((_DWORD *)a1 + 0x23) + 0x10) = v21;
            }
          }
        }
      }
    }
  }
  return (char)v13;
}
