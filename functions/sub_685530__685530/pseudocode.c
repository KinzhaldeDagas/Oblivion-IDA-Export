void __cdecl sub_685530(Actor *a1, float a2, char a3)
{
  Actor *v3; // esi
  ActorVtbl *vtbl; // edx
  void (__thiscall *Unk_96)(Actor *); // eax
  double v6; // st7
  ActorVtbl *v7; // edx
  double v8; // st7
  double v9; // rt0
  ActorVtbl *v10; // edi
  double v11; // st7
  void (__thiscall *Unk_7A)(MobileObject *); // edx
  float v13; // [esp+0h] [ebp-24h]
  float v14; // [esp+4h] [ebp-20h]
  char v15; // [esp+13h] [ebp-11h] BYREF
  int v16; // [esp+14h] [ebp-10h] BYREF
  float v17; // [esp+18h] [ebp-Ch]
  double v18; // [esp+1Ch] [ebp-8h]

  v3 = a1;
  if ( (a1 && !Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)a1)
     || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v3) == (struct Concurrency::details::ScheduleGroupBase *)4)
    && !v3->vtbl->super.super.GetKnockedState((TESObjectREFR *)v3) )
  {
    vtbl = v3->vtbl;
    *(float *)&v16 = 1.0;
    v14 = a2;
    v13 = vtbl->super.GetZRotation((MobileObject *)v3);
    *(float *)&a1 = sub_683AD0(v13, v14, (float *)&v16);
    if ( 0.0 != *(float *)&a1 )
    {
      Unk_96 = v3->vtbl->Unk_96;
      v17 = flt_B33E9C;
      v6 = ((double (__thiscall *)(Actor *))Unk_96)(v3);
      v17 = v6 * (*(float *)&v16 * dbl_A31C78) * v17;
      *(float *)&v18 = fabs(*(float *)&a1);
      *(float *)&a1 = fabs(v17);
      if ( *(float *)&v18 < (double)*(float *)&a1 )
      {
        ((void (__thiscall *)(Actor *, _DWORD))v3->vtbl->super.Unk_7A)(v3, LODWORD(a2));
        sub_5E1A80(v3, 0);
        return;
      }
      if ( a3
        || (v7 = v3->vtbl,
            v18 = *(float *)&v18,
            v8 = ((double (__thiscall *)(Actor *))v7->Unk_96)(v3),
            v8 * (flt_B3A490 * dbl_A31C78) < v18) )
      {
        LOBYTE(a1) = 1;
        v15 = 1;
        if ( !sub_684CB0((MobileObject *)v3, &a1, &v15) )
        {
          if ( sub_5E0630(v3, 2u) )
          {
            sub_5E05F0(v3, 0xF);
            sub_5E0610(v3, 1);
            v17 = 0.0;
          }
          else
          {
            if ( sub_5E0630(v3, 1u) )
            {
              sub_5E05F0(v3, 0xF);
              sub_5E0610(v3, 2);
            }
            v17 = 0.0;
          }
          goto LABEL_28;
        }
        sub_5E05F0(v3, 0xF);
        if ( *(float *)&v16 < 0.0 && !(_BYTE)a1 && sub_5E1A50(v3) >= 0
          || *(float *)&v16 > 0.0 && !v15 && sub_5E1A50(v3) <= 0 )
        {
          v9 = dbl_A3D360;
          *(float *)&v16 = *(float *)&v16 * v9;
          v17 = v9 * v17;
        }
        if ( *(float *)&v16 >= 0.0 )
          sub_5E0610(v3, 0x20);
        else
          sub_5E0610(v3, 0x10);
      }
      if ( v17 < 0.0 )
      {
        sub_5E1A80(v3, 0xFFFFFFFF);
LABEL_29:
        v10 = v3->vtbl;
        v11 = ((double (__thiscall *)(Actor *))v3->vtbl->super.GetZRotation)(v3);
        Unk_7A = v10->super.Unk_7A;
        *(float *)&a1 = v11 + v17;
        ((void (__thiscall *)(Actor *, Actor *))Unk_7A)(v3, a1);
        return;
      }
LABEL_28:
      sub_5E1A80(v3, 1);
      goto LABEL_29;
    }
  }
}
