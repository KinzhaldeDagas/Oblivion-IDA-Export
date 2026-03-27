char __userpurge sub_585720@<al>(
        int *this@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  InterfaceManager *Singleton; // eax
  BOOL v8; // edx
  float *v9; // eax
  _DWORD *v10; // ecx
  float *v11; // eax
  float *v12; // eax
  float v14; // [esp+0h] [ebp-1Ch]
  float v15; // [esp+0h] [ebp-1Ch]
  float v16; // [esp+4h] [ebp-18h]
  float v17; // [esp+4h] [ebp-18h]
  float v18; // [esp+10h] [ebp-Ch]
  float v19; // [esp+10h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-8h]

  LOBYTE(Singleton) = a6;
  v8 = *((_BYTE *)this + 0x31) > 0;
  *((_BYTE *)this + 0x31) = a6;
  if ( a6 > 0 != v8 )
  {
    if ( a6 <= 0 )
    {
      v12 = sub_571F90(1);
      sub_571820((char *)v12, a3, a4, a5);
      Singleton = InterfaceManager_GetSingleton(0, 1);
      Singleton->debugSelection = 0;
    }
    else if ( LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) == 1 )
    {
      v19 = flt_A30634;
      v17 = (float)dword_B3A704;
      v15 = (float)dword_B3A700;
      v11 = sub_571F90(1);
      sub_5723E0((char *)v11, bp0, a3, a4, a5, EmptyString, v15, v17, 1, 0xFFFFFFFF, v19, 0);
      LOBYTE(Singleton) = sub_585620(this, bp0, a4, a5);
    }
    else
    {
      v20 = dword_B13994;
      v18 = flt_A30634;
      v16 = (float)dword_B3A704;
      v14 = (float)dword_B3A700;
      v9 = sub_571F90(1);
      sub_5723E0((char *)v9, bp0, a3, a4, a5, "|", v14, v16, 1, 0xFFFFFFFF, v18, v20);
      sub_5855E0(this, *(this + 4));
      LOBYTE(Singleton) = sub_585620(v10, bp0, a4, a5);
    }
  }
  return (char)Singleton;
}
