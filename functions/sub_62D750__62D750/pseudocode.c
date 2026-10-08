// BunkFix: hooked HighProcess Sleep action. After vanilla returns, plugin may assist only for Sleep packages when actor remains not sleeping, target is multi-marker sleep furniture, and engine free-marker/marker-transform helpers validate.
UInt32 __userpurge sub_62D750@<eax>(int *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, Actor *a5)
{
  int v6; // eax
  int *v7; // edi
  int *v8; // eax
  int v9; // ecx
  _BYTE *v10; // ecx
  bool v11; // zf
  TESObjectREFR *v12; // ecx
  int v13; // ebp
  int v14; // eax
  int v15; // edx
  int v16; // edx
  UInt32 result; // eax
  int v18; // edx
  UInt32 v19; // esi

  (*(void (__usercall **)(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))(a1, a4, a3, a2); /*0x62d75d*/
  if ( !a1[0x48] ) /*0x62d75f*/
    *((_BYTE *)a1 + 0x124) = 0x7F; /*0x62d768*/
  v6 = a1[0x3A]; /*0x62d76f*/
  if ( v6 ) /*0x62d77b*/
    Actor_UnequipItem(a5, a4, a2, a3, *(_DWORD *)(v6 + 8), 1, 0, 0, 0, 0); /*0x62d78d*/
  if ( Actor::HasNPCBaseForm(a5) /*0x62d7bd*/
    && !(*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1)
    && !a1[0x48]
    && !a1[0x2D]
    && !a1[0x2C] )
  {
    sub_6553E0(a1, (TESObjectREFR *)a5, 0.0); /*0x62d7c9*/
  }
  if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 9 && Actor::HasNPCBaseForm(a5) ) /*0x62d7e5*/
  {
    if ( !a1[0x48] ) /*0x62d7f2*/
    {
      v7 = a1 + 0x2C; /*0x62d7ff*/
      v8 = a1 + 0x2C; /*0x62d805*/
      v9 = 0; /*0x62d807*/
      if ( a1 != (int *)0xFFFFFF50 ) /*0x62d80b*/
      {
        do /*0x62d81e*/
        {
          if ( *v8 ) /*0x62d811*/
            ++v9; /*0x62d816*/
          v8 = (int *)v8[1]; /*0x62d819*/
        }
        while ( v8 ); /*0x62d81e*/
        if ( v9 ) /*0x62d822*/
        {
          v10 = (_BYTE *)*v7; /*0x62d824*/
          v11 = *v7 == 0; /*0x62d826*/
          for ( a1[0x48] = *v7; !v11; a1[0x48] = *v7 ) /*0x62d82e*/
          {
            if ( sub_4DB9A0(v10) ) /*0x62d830*/
              break; /*0x62d837*/
            BSSimpleList_Remove(a1 + 0x2C, a1[0x48]); /*0x62d842*/
            v10 = (_BYTE *)*v7; /*0x62d847*/
            v11 = *v7 == 0; /*0x62d849*/
          }
          v12 = (TESObjectREFR *)a1[0x48]; /*0x62d853*/
          if ( v12 ) /*0x62d85b*/
          {                                     // RadiantAI: selected-target owner check. If target has no owner, code randomizes among candidate list; if owned, current selected target is preserved. This does not prove theft permission or crime consequences.
            if ( !TESObjectREFR_GetOwner(v12) ) /*0x62d85d*/
            {
              v13 = BSSimpleList_Count(a1 + 0x2C); /*0x62d870*/
              v14 = Game_RandomLargeInteger(0); /*0x62d872*/
              v15 = v14 % v13; /*0x62d878*/
              if ( v14 % v13 >= v13 ) /*0x62d87f*/
                v15 = v13; /*0x62d881*/
              if ( v15 > 0 ) /*0x62d886*/
              {
                do /*0x62d88e*/
                {
                  --v15; /*0x62d888*/
                  v7 = (int *)v7[1]; /*0x62d88b*/
                }
                while ( v15 ); /*0x62d88e*/
              }
              a1[0x48] = *v7; /*0x62d892*/
            }
          }
        }
      }
    }
    if ( a1[0x48] ) /*0x62d898*/
    {
      if ( !a1[0xB] ) /*0x62d8a2*/
        (*(void (__thiscall **)(int *, int))(*a1 + 0xD0))(a1, a1[0x48]); /*0x62d8b3*/
      (*(void (__thiscall **)(int *, Actor *, _DWORD))(*a1 + 0x51C))(a1, a5, 0); /*0x62d8c2*/
    }
  }
  if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9 ) /*0x62d8d3*/
  {
    (*(void (__thiscall **)(int *, int))(*a1 + 0xBC))(a1, 1); /*0x62d8e5*/
    BSSimpleList_Clear(a1 + 0x2C); /*0x62d8ed*/
  }
  else if ( !a1[0x48] && !a1[0x2D] && !a1[0x2C] && Actor::HasNPCBaseForm(a5) ) /*0x62d981*/
  {
    (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x194))(a1, a5); /*0x62d999*/
    v18 = *a1; /*0x62d9a1*/
    *((float *)a1 + 0x7A) = flt_A417B4; /*0x62d9a3*/
    return (*(UInt32 (__thiscall **)(int *, Actor *, int))(v18 + 0x188))(a1, a5, 1); /*0x62d9b9*/
  }
  if ( sub_64ADA0((Actor *)a1) ) /*0x62d8f4*/
  {
    a1[0x48] = 0; /*0x62d90f*/
    sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0); /*0x62d919*/
    *((_BYTE *)a1 + 0x136) = 0; /*0x62d91e*/
    a1[0x4A] = LODWORD(g_zeroNiPoint3.x); /*0x62d92b*/
    a1[0x4B] = LODWORD(g_zeroNiPoint3.y); /*0x62d933*/
    v16 = *a1; /*0x62d93b*/
    a1[0x4C] = LODWORD(g_zeroNiPoint3.z); /*0x62d93d*/
    (*(void (__thiscall **)(int *, Actor *))(v16 + 0x194))(a1, a5); /*0x62d949*/
    return (*(UInt32 (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a5, 1); /*0x62d958*/
  }
  else
  {
    (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x48))(a1, a5); /*0x62d9c4*/
    result = a5->vtbl->super.super.GetSleepState((TESObjectREFR *)a5); /*0x62d9d0*/
    if ( result == 9 ) /*0x62d9d5*/
    {
      result = sub_5E12B0(a5); /*0x62d9d9*/
      v19 = result; /*0x62d9de*/
      if ( result ) /*0x62d9e2*/
      {
        result = (*(int (__thiscall **)(UInt32))(*(_DWORD *)result + 0x98))(result); /*0x62d9ee*/
        if ( !(_BYTE)result ) /*0x62d9f2*/
          return (*(UInt32 (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v19 + 0x9C))(v19, 1, 0); /*0x62da02*/
      }
    }
  }
  return result; /*0x62d95a*/
}
