signed int __thiscall sub_6762B0(char *this, TESObjectREFR *a2, char a3)
{
  Actor *v3; // eax
  ActorVtbl *vtbl; // esi
  ActorVtbl **v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  PlayerCharacter *v8; // eax
  int v9; // eax
  Actor *v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  float Distance; // [esp+1Ch] [ebp-Ch]
  _DWORD v15[2]; // [esp+20h] [ebp-8h] BYREF

  v12 = 0; /*0x6762ca*/
  LOBYTE(reference->unk5A8) = 0; /*0x6762ce*/
  v3 = ActorList_ReturnHead((ActorList *)(this + 0x68)); /*0x6762d4*/
  v11 = v3; /*0x6762db*/
  if ( v3 ) /*0x6762df*/
  {
    while ( v3->vtbl ) /*0x6762f8*/
    {
      vtbl = 0; /*0x676306*/
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v3->vtbl->super.super.super.super.InitializeComponent + 0x64))(v3->vtbl) ) /*0x676308*/
        vtbl = v11->vtbl; /*0x676312*/
      if ( a3 ) /*0x676317*/
      {
LABEL_12:
        if ( vtbl /*0x676374*/
          && !(*((unsigned __int8 (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent
               + 0x66))(
                vtbl,
                0)
          && ((int)vtbl->super.super.super.super.CopyFromBase & 0x800) == 0 )
        {
          if ( a2 == (TESObjectREFR *)reference && !LOBYTE(reference->unk5A8) ) /*0x676383*/
          {
            Distance = TesObjectREF_GetDistance(a2, (TESObjectREFR *)vtbl, 0); /*0x676394*/
            if ( (double)SLODWORD(flt_B36778[6]) >= Distance ) /*0x6763a9*/
              LOBYTE(reference->unk5A8) = 1; /*0x6763b1*/
          }
          if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent /*0x6763cc*/
                + 0xCD))(
                 vtbl,
                 1)
            || sub_5E6BA0((Actor *)vtbl) )
          {
            if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent /*0x6763e1*/
                  + 0xCD))(
                   vtbl,
                   1) )
            {
              if ( (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl) ) /*0x6763f1*/
              {
                v6 = (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl); /*0x676401*/
                if ( (TESObjectREFR *)CombatController_GetCurrentTarget(v6) == a2 ) /*0x67640c*/
                {
                  v7 = (_DWORD *)(*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent /*0x676418*/
                                  + 0xCC))(vtbl);
                  if ( !sub_612A10(v7) ) /*0x67641c*/
                    return 3; /*0x67641c*/
                }
              }
            }
            if ( sub_5E6BA0((Actor *)vtbl) ) /*0x676427*/
            {
              sub_5E2E00((Actor *)vtbl); /*0x676432*/
              if ( v8 == reference ) /*0x67643d*/
                return 3; /*0x676473*/
            }
          }
          v9 = sub_5E10A0(vtbl, (int)a2); /*0x676442*/
          if ( v9 > v12 ) /*0x67644b*/
            v12 = v9; /*0x67644d*/
        }
      }
      else if ( vtbl ) /*0x67631b*/
      {
        v15[0] = 0; /*0x67632b*/
        v15[1] = 0; /*0x67632f*/
        sub_6761A0(this, a2, v15); /*0x676333*/
        v5 = (ActorVtbl **)v15; /*0x676338*/
        while ( *v5 != vtbl ) /*0x676342*/
        {
          v5 = (ActorVtbl **)v5[1]; /*0x676348*/
          if ( !v5 ) /*0x67634d*/
            goto LABEL_12; /*0x67634d*/
        }
      }
      v11 = *(Actor **)&v11->members.super.super.super.type; /*0x67645a*/
      if ( !v11 ) /*0x67645e*/
        return v12; /*0x67645e*/
      v3 = v11; /*0x6762f0*/
    }
  }
  return v12; /*0x676468*/
}
