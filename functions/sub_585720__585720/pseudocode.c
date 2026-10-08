char __userpurge sub_585720@<al>(int *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char a5)
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

  LOBYTE(Singleton) = a5; /*0x585720*/
  v8 = *((_BYTE *)this + 0x31) > 0; /*0x58572e*/
  *((_BYTE *)this + 0x31) = a5; /*0x585738*/
  if ( a5 > 0 != v8 ) /*0x58573d*/
  {
    if ( a5 <= 0 ) /*0x585747*/
    {
      v12 = sub_571F90(1); /*0x5857f3*/
      sub_571820((char *)v12, a2, a3, a4); /*0x5857fd*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x585806*/
      Singleton->debugSelection = 0; /*0x58580e*/
    }
    else if ( LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) == 1 ) /*0x585761*/
    {
      v19 = kTerrainLODQuadRayDirectionZ; /*0x5857b5*/
      v17 = (float)unk_B3A704; /*0x5857c5*/
      v15 = (float)unk_B3A700; /*0x5857cf*/
      v11 = sub_571F90(1); /*0x5857d9*/
      sub_5723E0((char *)v11, EmptyString, v15, v17, 1, 0xFFFFFFFF, v19, 0); /*0x5857e3*/
      LOBYTE(Singleton) = sub_585620(this); /*0x5857ea*/
    }
    else
    {
      v20 = dword_B13994; /*0x585769*/
      v18 = kTerrainLODQuadRayDirectionZ; /*0x58576b*/
      v16 = (float)unk_B3A704; /*0x58577b*/
      v14 = (float)unk_B3A700; /*0x585785*/
      v9 = sub_571F90(1); /*0x58578f*/
      sub_5723E0((char *)v9, "|", v14, v16, 1, 0xFFFFFFFF, v18, v20); /*0x585799*/
      sub_5855E0(this, *(this + 4)); /*0x5857a4*/
      LOBYTE(Singleton) = sub_585620(v10); /*0x5857a9*/
    }
  }
  return (char)Singleton; /*0x5857ae*/
}
