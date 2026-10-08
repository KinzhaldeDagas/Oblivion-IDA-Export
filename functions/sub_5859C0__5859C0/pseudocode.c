char __usercall sub_5859C0@<al>(int *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char v6; // al
  InterfaceManager *Singleton; // eax
  InterfaceManager *v9; // eax
  char v10; // al
  float *v11; // eax

  v6 = *((_BYTE *)this + 0x31); /*0x5859c4*/
  if ( v6 ) /*0x5859cb*/
  {
    if ( v6 == 1 /*0x585a1c*/
      && (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0
      && (Singleton = InterfaceManager_GetSingleton(0, 1), sub_57CFA0(Singleton, 0) == 3)
      && (v9 = InterfaceManager_GetSingleton(0, 1), !sub_57CFA0(v9, 1)) )
    {
      sub_585720(this, a2, a3, a4, 2); /*0x585a29*/
      return 0; /*0x585a2f*/
    }
    else
    {
      v10 = *((_BYTE *)this + 0x31); /*0x585a33*/
      *((_BYTE *)this + 0x31) = 0; /*0x585a38*/
      if ( v10 > 0 ) /*0x585a3b*/
      {
        v11 = sub_571F90(1); /*0x585a3f*/
        sub_571820((char *)v11, a2, a3, a4); /*0x585a49*/
        InterfaceManager_GetSingleton(0, 1)->debugSelection = 0; /*0x585a56*/
      }
      return 0; /*0x585a60*/
    }
  }
  else
  {
    sub_585720(this, a2, a3, a4, 1); /*0x5859cf*/
    return 1; /*0x5859d5*/
  }
}
