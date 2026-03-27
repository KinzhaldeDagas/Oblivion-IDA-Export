UInt32 *__cdecl sub_6CB240(UInt32 *a1, UInt32 a2, unsigned int a3)
{
  int v3; // eax
  bool v5; // cf
  int *v6; // eax
  volatile LONG *v7; // esi
  void (__thiscall ***v8)(_DWORD, int); // esi
  Ni2DBuffer *v9; // eax
  int v10; // esi
  bool v11; // zf
  volatile LONG *v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-4h]

  v13 = 0;
  v3 = a2;
  if ( a3 < *(_DWORD *)(a2 + 0x210) )
  {
    a2 = 0;
    v5 = *(_DWORD *)(v3 + 0xD8) < 0x5000000u;
    v14 = 1;
    if ( v5 )
    {
      sub_6D89F0((int)&a3, v3, a3, 0);
      LOBYTE(v14) = 2;
      v6 = (int *)sub_6CB0B0((float **)&v12, a3);
      LOBYTE(v14) = 3;
      sub_55E2A0((int *)&a2, v6);
      LOBYTE(v14) = 2;
      if ( v12 )
      {
        v7 = v12;
        if ( !InterlockedDecrement(v12 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
      }
      v8 = (void (__thiscall ***)(_DWORD, int))a3;
      LOBYTE(v14) = 1;
      if ( a3 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) )
        {
          if ( v8 )
            (**v8)(v8, 1);
        }
      }
    }
    else
    {
      v9 = (Ni2DBuffer *)NiRTTI_Cast((BSStringT *)dword_B3CB24, *(NiObject **)(*(_DWORD *)(v3 + 0x208) + 4 * a3));
      NiSmartPointer_Set__((Ni2DBuffer **)&a2, v9);
    }
    v10 = a2;
    v11 = a2 == 0;
    *a1 = a2;
    if ( !v11 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
    v13 = 1;
    LOBYTE(v14) = 0;
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}
