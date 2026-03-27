char __usercall sub_5859C0@<al>(int *this@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  char v6; // al
  InterfaceManager *Singleton; // eax
  InterfaceManager *v9; // eax
  char v10; // al
  float *v11; // eax

  v6 = *((_BYTE *)this + 0x31);
  if ( v6 )
  {
    if ( v6 == 1
      && (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0
      && (Singleton = InterfaceManager_GetSingleton(0, 1), sub_57CFA0(Singleton, 0) == 3)
      && (v9 = InterfaceManager_GetSingleton(0, 1), !sub_57CFA0(v9, 1)) )
    {
      sub_585720(this, a2, a3, a4, a5, 2);
      return 0;
    }
    else
    {
      v10 = *((_BYTE *)this + 0x31);
      *((_BYTE *)this + 0x31) = 0;
      if ( v10 > 0 )
      {
        v11 = sub_571F90(1);
        sub_571820((char *)v11, a3, a4, a5);
        InterfaceManager_GetSingleton(0, 1)->debugSelection = 0;
      }
      return 0;
    }
  }
  else
  {
    sub_585720(this, a2, a3, a4, a5, 1);
    return 1;
  }
}
