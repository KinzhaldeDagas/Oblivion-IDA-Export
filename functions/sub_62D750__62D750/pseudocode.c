UInt32 __userpurge sub_62D750@<eax>(
        int *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        PlayerCharacter *a5)
{
  int v6; // eax
  int *v7; // edi
  int *v8; // eax
  int v9; // ecx
  _BYTE *v10; // ecx
  bool v11; // zf
  TESObjectREFR *v12; // ecx
  int v13; // ebp
  int RandomLargeInteger; // eax
  int v15; // edx
  int v16; // edx
  UInt32 result; // eax
  int v18; // edx
  UInt32 v19; // esi

  (*(void (__usercall **)(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))(a1, a4, a3, a2);
  if ( !a1[0x48] )
    *((_BYTE *)a1 + 0x124) = 0x7F;
  v6 = a1[0x3A];
  if ( v6 )
    Actor_UnequipItem(a5, a4, a2, a3, *(_DWORD *)(v6 + 8), 1, 0, 0, 0, 0);
  if ( sub_5E32D0(a5) && !(*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) && !a1[0x48] && !a1[0x2D] && !a1[0x2C] )
    sub_6553E0(a1, (int)a5, 0.0);
  if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 9 && sub_5E32D0(a5) )
  {
    if ( !a1[0x48] )
    {
      v7 = a1 + 0x2C;
      v8 = a1 + 0x2C;
      v9 = 0;
      if ( a1 != (int *)0xFFFFFF50 )
      {
        do
        {
          if ( *v8 )
            ++v9;
          v8 = (int *)v8[1];
        }
        while ( v8 );
        if ( v9 )
        {
          v10 = (_BYTE *)*v7;
          v11 = *v7 == 0;
          for ( a1[0x48] = *v7; !v11; a1[0x48] = *v7 )
          {
            if ( sub_4DB9A0(v10) )
              break;
            BSSimpleList_Remove(a1 + 0x2C, a1[0x48]);
            v10 = (_BYTE *)*v7;
            v11 = *v7 == 0;
          }
          v12 = (TESObjectREFR *)a1[0x48];
          if ( v12 )
          {
            if ( !TESObjectREFR_GetOwner(v12) )
            {
              v13 = BSSimpleList_Count(a1 + 0x2C);
              RandomLargeInteger = GetRandomLargeInteger_(0);
              v15 = RandomLargeInteger % v13;
              if ( RandomLargeInteger % v13 >= v13 )
                v15 = v13;
              if ( v15 > 0 )
              {
                do
                {
                  --v15;
                  v7 = (int *)v7[1];
                }
                while ( v15 );
              }
              a1[0x48] = *v7;
            }
          }
        }
      }
    }
    if ( a1[0x48] )
    {
      if ( !a1[0xB] )
        (*(void (__thiscall **)(int *, int))(*a1 + 0xD0))(a1, a1[0x48]);
      (*(void (__thiscall **)(int *, PlayerCharacter *, _DWORD))(*a1 + 0x51C))(a1, a5, 0);
    }
  }
  if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9 )
  {
    (*(void (__thiscall **)(int *, int))(*a1 + 0xBC))(a1, 1);
    BSSimpleList_Clear(a1 + 0x2C);
  }
  else if ( !a1[0x48] && !a1[0x2D] && !a1[0x2C] && sub_5E32D0(a5) )
  {
    (*(void (__thiscall **)(int *, PlayerCharacter *))(*a1 + 0x194))(a1, a5);
    v18 = *a1;
    *((float *)a1 + 0x7A) = flt_A417B4;
    return (*(int (__thiscall **)(int *, PlayerCharacter *, int))(v18 + 0x188))(a1, a5, 1);
  }
  if ( sub_64ADA0((Actor *)a1) )
  {
    a1[0x48] = 0;
    sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0);
    *((_BYTE *)a1 + 0x136) = 0;
    a1[0x4A] = LODWORD(Vector3_InitValue_);
    a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
    v16 = *a1;
    a1[0x4C] = LODWORD(dword_B3F9B0);
    (*(void (__thiscall **)(int *, PlayerCharacter *))(v16 + 0x194))(a1, a5);
    return (*(int (__thiscall **)(int *, PlayerCharacter *, int))(*a1 + 0x188))(a1, a5, 1);
  }
  else
  {
    (*(void (__thiscall **)(int *, PlayerCharacter *))(*a1 + 0x48))(a1, a5);
    result = a5->vtbl->super.super.super.GetSleepState((TESObjectREFR *)a5);
    if ( result == 9 )
    {
      result = sub_5E12B0((Actor *)a5);
      v19 = result;
      if ( result )
      {
        result = (*(int (__thiscall **)(UInt32))(*(_DWORD *)result + 0x98))(result);
        if ( !(_BYTE)result )
          return (*(int (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v19 + 0x9C))(v19, 1, 0);
      }
    }
  }
  return result;
}
