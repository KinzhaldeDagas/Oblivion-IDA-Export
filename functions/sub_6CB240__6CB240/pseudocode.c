UInt32 *__cdecl sub_6CB240(UInt32 *a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v3; // eax
  bool v5; // cf
  int *v6; // eax
  volatile LONG *v7; // esi
  void (__thiscall ***v8)(_DWORD, int); // esi
  Ni2DBuffer *v9; // eax
  UInt32 v10; // esi
  bool v11; // zf
  volatile LONG *v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-4h]

  v13 = 0; /*0x6cb265*/
  v3 = a2; /*0x6cb26d*/
  if ( a3 < a2[0x84] ) /*0x6cb27d*/
  {
    a2 = 0; /*0x6cb29b*/
    v5 = v3[0x36] < 0x5000000u; /*0x6cb2a3*/
    v14 = 1; /*0x6cb2ad*/
    if ( v5 ) /*0x6cb2b5*/
    {
      sub_6D89F0(&a3, v3, a3, 0); /*0x6cb2c4*/
      LOBYTE(v14) = 2; /*0x6cb2d3*/
      v6 = (int *)sub_6CB0B0((float **)&v12, a3); /*0x6cb2d8*/
      LOBYTE(v14) = 3; /*0x6cb2e5*/
      OB_NiSmartPointer_Assign_010201A0((int *)&a2, v6); /*0x6cb2ea*/
      LOBYTE(v14) = 2; /*0x6cb2f5*/
      if ( v12 ) /*0x6cb2fa*/
      {
        v7 = v12; /*0x6cb2fc*/
        if ( !InterlockedDecrement(v12 + 1) ) /*0x6cb302*/
          (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x6cb318*/
      }
      v8 = (void (__thiscall ***)(_DWORD, int))a3; /*0x6cb31a*/
      LOBYTE(v14) = 1; /*0x6cb320*/
      if ( a3 ) /*0x6cb325*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) ) /*0x6cb32b*/
        {
          if ( v8 ) /*0x6cb337*/
            (**v8)(v8, 1); /*0x6cb341*/
        }
      }
    }
    else
    {
      v9 = (Ni2DBuffer *)NiRTTI_Cast((BSStringT *)&stru_B3CB24, *(NiObject **)(v3[0x82] + 4 * a3)); /*0x6cb354*/
      NiSmartPointer_Set__((Ni2DBuffer **)&a2, v9); /*0x6cb361*/
    }
    v10 = (UInt32)a2; /*0x6cb366*/
    v11 = a2 == 0; /*0x6cb36a*/
    *a1 = (UInt32)a2; /*0x6cb370*/
    if ( !v11 ) /*0x6cb372*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x6cb378*/
    v13 = 1; /*0x6cb380*/
    LOBYTE(v14) = 0; /*0x6cb388*/
    if ( v10 ) /*0x6cb38d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x6cb393*/
        (**(void (__thiscall ***)(UInt32, int))v10)(v10, 1); /*0x6cb3a5*/
    }
    return a1; /*0x6cb3a7*/
  }
  else
  {
    *a1 = 0; /*0x6cb283*/
    return a1; /*0x6cb27f*/
  }
}
