void __usercall sub_4B7DB0(double a1@<st2>, double st6_0@<st1>, double a3@<st0>, char *a4, char a5)
{
  void *v5; // eax
  _BYTE *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  NiObject *v11; // eax
  NiObject *v12; // edi
  int v13; // ebx
  NiAVObject *v14; // eax
  NiAVObject *v15; // eax
  int v16; // eax
  float a2; // [esp+8h] [ebp-14h]

  if ( a4 )
  {
    v5 = (void *)(*(int (__usercall **)@<eax>(char *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a4 + 0x170))(
                   a4,
                   a3,
                   st6_0,
                   a1);
    v6 = OblivionDynamicCast(
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectDOOR `RTTI Type Descriptor',
           0);
    if ( v6 && (v6[0x64] & 1) != 0 )
    {
      sub_46AA50(a4, 1);
      if ( (*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4)
        && (v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4), sub_405790(v7, 0))
        && (v8 = (*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4), *(_DWORD *)(sub_405790(v8, 0) + 0xC)) )
      {
        v9 = (*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4);
        v10 = sub_405790(v9, 0);
        v11 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v10 + 0xC));
        v12 = v11;
        if ( v11 )
        {
          v13 = sub_4715A0(v11, (int)"Unequip");
          if ( v13 )
          {
            sub_4715C0(v12, 0.0);
            LOWORD(v12[1].__vftable) |= 8u;
            a3 = 1.0;
            sub_470B20((_DWORD *)v13, 0, 1, 1.0, 0.0, 0);
            if ( a5 )
            {
              v14 = (NiAVObject *)(*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4);
              NiAVObject_UpdateNiAVObject(v14, 0.0, 1);
              a2 = *(float *)(v13 + 0x30);
              v15 = (NiAVObject *)(*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4);
              NiAVObject_UpdateNiAVObject(v15, a2, 1);
              sub_6C9CB0(v13, 0.0, 0);
              sub_4D90D0(a4, *(const char **)(v13 + 8));
              LOWORD(v12[1].__vftable) &= ~8u;
              v16 = (*(int (__thiscall **)(char *))(*(_DWORD *)a4 + 0x154))(a4);
              sub_897A20(v16, 1);
              sub_4D9310(a4, a1, st6_0, 0.0, 0);
              return;
            }
          }
        }
      }
      else
      {
        sub_4D90D0(a4, "Unequip");
      }
    }
    sub_4D9310(a4, a1, st6_0, a3, 0);
  }
}
