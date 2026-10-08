void __thiscall sub_559A70(_DWORD *this)
{
  float *v2; // esi
  char *v3; // edi
  unsigned int v4; // ebx
  void *v5; // esi
  float *v6; // ebx
  _DWORD *v7; // esi
  unsigned int v8; // ebp
  void *v9; // ebx

  v2 = (float *)*(this + 3); /*0x559a9b*/
  v3 = (char *)(this + 1); /*0x559aa1*/
  if ( *(this + 2) > (unsigned int)v2 ) /*0x559aac*/
    _invalid_parameter_noinfo(); /*0x559aae*/
  v4 = *((_DWORD *)v3 + 1); /*0x559ab3*/
  if ( v4 > *((_DWORD *)v3 + 2) ) /*0x559ab9*/
    _invalid_parameter_noinfo(); /*0x559abb*/
  if ( (float *)v4 != v2 ) /*0x559ac2*/
  {
    v5 = (void *)sub_558610(v2, *((float **)v3 + 2), v4); /*0x559ad6*/
    FaceGenEgtBasisRecordArray_Destruct(v5, *((void **)v3 + 2)); /*0x559adb*/
    *((_DWORD *)v3 + 2) = v5; /*0x559ae0*/
  }
  v6 = (float *)*(this + 7); /*0x559ae3*/
  v7 = this + 5; /*0x559ae9*/
  if ( *(this + 6) > (unsigned int)v6 ) /*0x559aec*/
    _invalid_parameter_noinfo(); /*0x559aee*/
  v8 = *(this + 6); /*0x559af3*/
  if ( v8 > v7[2] ) /*0x559af9*/
    _invalid_parameter_noinfo(); /*0x559afb*/
  if ( (float *)v8 != v6 ) /*0x559b02*/
  {
    v9 = (void *)sub_558610(v6, (float *)v7[2], v8); /*0x559b0f*/
    FaceGenEgtBasisRecordArray_Destruct(v9, (void *)v7[2]); /*0x559b1b*/
    v7[2] = v9; /*0x559b20*/
  }
  _LN21(v3, 0x10u, 2, (void (__thiscall *)(void *))FaceGenEgtBasisBank_Destruct); /*0x559b35*/
}
