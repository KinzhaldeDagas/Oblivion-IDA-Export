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

  v3 = a1; /*0x685534*/
  if ( (a1 && !Actor::GetDeadState(a1) || Actor::GetDeadState(v3) == 4) /*0x685561*/
    && !v3->vtbl->super.super.GetKnockedState((TESObjectREFR *)v3) )
  {
    vtbl = v3->vtbl; /*0x68556d*/
    *(float *)&v16 = 1.0; /*0x685573*/
    v14 = a2; /*0x685585*/
    v13 = vtbl->super.GetZRotation((MobileObject *)v3); /*0x68558b*/
    *(float *)&a1 = sub_683AD0(v13, v14, (float *)&v16); /*0x685593*/
    if ( 0.0 != *(float *)&a1 ) /*0x6855a5*/
    {
      Unk_96 = v3->vtbl->Unk_96; /*0x6855b3*/
      v17 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x6855b9*/
      v6 = ((double (__thiscall *)(Actor *))Unk_96)(v3); /*0x6855bf*/
      v17 = v6 * (*(float *)&v16 * dbl_A31C78) * v17; /*0x6855d1*/
      *(float *)&v18 = fabs(*(float *)&a1); /*0x6855db*/
      *(float *)&a1 = fabs(v17); /*0x6855e5*/
      if ( *(float *)&v18 < (double)*(float *)&a1 ) /*0x6855fa*/
      {
        ((void (__thiscall *)(Actor *, _DWORD))v3->vtbl->super.Unk_7A)(v3, LODWORD(a2)); /*0x685610*/
        sub_5E1A80(v3, 0); /*0x685616*/
        return; /*0x68561f*/
      }
      if ( a3 /*0x68564e*/
        || (v7 = v3->vtbl,
            v18 = *(float *)&v18,
            v8 = ((double (__thiscall *)(Actor *))v7->Unk_96)(v3),
            v8 * (unk_B3A490 * dbl_A31C78) < v18) )
      {
        LOBYTE(a1) = 1; /*0x685663*/
        v15 = 1; /*0x685668*/
        if ( !sub_684CB0((MobileObject *)v3, &a1, &v15) ) /*0x685679*/
        {
          if ( sub_5E0630(v3, 2u) ) /*0x68570b*/
          {
            sub_5E05F0(v3, 0xF); /*0x685718*/
            sub_5E0610(v3, 1); /*0x685721*/
            v17 = 0.0; /*0x685728*/
          }
          else
          {
            if ( sub_5E0630(v3, 1u) ) /*0x685730*/
            {
              sub_5E05F0(v3, 0xF); /*0x68573d*/
              sub_5E0610(v3, 2); /*0x685746*/
            }
            v17 = 0.0; /*0x68574d*/
          }
          goto LABEL_28; /*0x68572c*/
        }
        sub_5E05F0(v3, 0xF); /*0x685681*/
        if ( *(float *)&v16 < 0.0 && !(_BYTE)a1 && sub_5E1A50(v3) >= 0 /*0x6856c2*/
          || *(float *)&v16 > 0.0 && !v15 && sub_5E1A50(v3) <= 0 )
        {
          v9 = dbl_A3D360; /*0x6856d0*/
          *(float *)&v16 = *(float *)&v16 * v9; /*0x6856d2*/
          v17 = v9 * v17; /*0x6856da*/
        }
        if ( *(float *)&v16 >= 0.0 ) /*0x6856eb*/
          sub_5E0610(v3, 0x20); /*0x685707*/
        else
          sub_5E0610(v3, 0x10); /*0x6856ef*/
      }
      if ( v17 < 0.0 ) /*0x6856ff*/
      {
        sub_5E1A80(v3, 0xFFFFFFFF); /*0x685703*/
LABEL_29:
        v10 = v3->vtbl; /*0x68575a*/
        v11 = ((double (__thiscall *)(Actor *))v3->vtbl->super.GetZRotation)(v3); /*0x685765*/
        Unk_7A = v10->super.Unk_7A; /*0x68576b*/
        *(float *)&a1 = v11 + v17; /*0x685772*/
        ((void (__thiscall *)(Actor *, Actor *))Unk_7A)(v3, a1); /*0x68577f*/
        return; /*0x68577f*/
      }
LABEL_28:
      sub_5E1A80(v3, 1); /*0x685751*/
      goto LABEL_29; /*0x685755*/
    }
  }
}
