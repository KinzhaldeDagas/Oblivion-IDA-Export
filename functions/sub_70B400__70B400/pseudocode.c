int *__thiscall sub_70B400(_DWORD *this, int *a2)
{
  Ni2DBuffer *v3; // esi
  _DWORD *v4; // ecx
  int *v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v8; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v3 = 0; /*0x70b428*/
  v10 = 0; /*0x70b42a*/
  v8 = 0; /*0x70b432*/
  v4 = (_DWORD *)*(this + 7); /*0x70b436*/
  v11 = 1; /*0x70b43b*/
  if ( v4 ) /*0x70b443*/
  {
    v5 = sub_70B400(v4, &v9); /*0x70b44a*/
    LOBYTE(v11) = 2; /*0x70b454*/
    OB_NiSmartPointer_Assign_010201A0(&v8, v5); /*0x70b459*/
    v6 = (void (__thiscall ***)(_DWORD, int))v9; /*0x70b45e*/
    LOBYTE(v11) = 1; /*0x70b464*/
    if ( v9 ) /*0x70b469*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x70b46f*/
      {
        if ( v6 ) /*0x70b47b*/
          (**v6)(v6, 1); /*0x70b485*/
      }
    }
    v3 = (Ni2DBuffer *)v8; /*0x70b487*/
  }
  sub_70A500(this, a2, v3, 0); /*0x70b495*/
  v10 = 1; /*0x70b49c*/
  LOBYTE(v11) = 0; /*0x70b4a4*/
  if ( v3 ) /*0x70b4a9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x70b4af*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))v3->__vftable)(v3, 1); /*0x70b4c1*/
  }
  return a2; /*0x70b4c5*/
}
