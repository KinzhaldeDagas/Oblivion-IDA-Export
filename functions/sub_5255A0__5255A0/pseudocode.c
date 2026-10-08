int __thiscall sub_5255A0(TESForm *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi
  UInt32 (__thiscall *GetSaveSize)(TESForm *, UInt32); // eax
  bool v6; // zf
  TESForm *v7; // eax
  int *v8; // eax
  int *v9; // esi
  int v10; // ebx
  int v11; // eax
  int (__thiscall *v12)(char *, int); // eax
  int result; // eax
  int v14; // [esp-4h] [ebp-1Ch]
  int v15; // [esp+10h] [ebp-8h]

  *((_DWORD *)this + 0x3B) = 0; /*0x5255ad*/
  *((_DWORD *)this + 0x3C) = 0; /*0x5255b3*/
  *((_DWORD *)this + 0x3D) = 0; /*0x5255b9*/
  *((_DWORD *)this + 0x3E) = 0; /*0x5255bf*/
  *((_DWORD *)this + 0x3F) = 0; /*0x5255c5*/
  *((_BYTE *)this + 0x100) = 0; /*0x5255cb*/
  *((float *)this + 0x73) = 0.0; /*0x5255d1*/
  *((_DWORD *)this + 0x72) = 0; /*0x5255d9*/
  *((_DWORD *)this + 0x74) = 0; /*0x5255df*/
  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x5255eb*/
  {
    v2 = *((_DWORD *)this + 0x76); /*0x5255f4*/
    v3 = InterlockedDecrement; /*0x525602*/
    if ( v2 ) /*0x525608*/
    {
      if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x52560e*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x525620*/
      *((_DWORD *)this + 0x76) = 0; /*0x525622*/
    }
    OB_NiSmartPointer_Assign_010201A0((int *)this + 0x75, (int *)this + 0x76); /*0x52562f*/
    v4 = *((_DWORD *)this + 0x77); /*0x525634*/
    if ( v4 ) /*0x52563c*/
    {
      if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x525642*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x525654*/
      *((_DWORD *)this + 0x77) = 0; /*0x525656*/
    }
  }
  GetSaveSize = this->vtbl[1].GetSaveSize; /*0x525664*/
  *((_WORD *)this + 0xF0) = 0xFF; /*0x52566e*/
  *((_DWORD *)this + 0x41) = 0; /*0x525677*/
  *((_DWORD *)this + 0x79) = 0; /*0x52567d*/
  *((_DWORD *)this + 0x7A) = 0x19324B; /*0x525683*/
  v6 = GetSaveSize(this, 0x45) == 0; /*0x52568f*/
  v7 = this + 0xF; /*0x525691*/
  if ( v6 ) /*0x525697*/
    v7 = this + 0xB; /*0x525699*/
  v14 = (int)v7; /*0x52569f*/
  v8 = (int *)FaceGenManager_GetDefaultHeadParameters(); /*0x5256a0*/
  FaceGenHeadParameters_Copy(v8, v14); /*0x5256a6*/
  v9 = (int *)((char *)this + 0x114); /*0x5256ae*/
  v15 = 2; /*0x5256b4*/
  do /*0x525738*/
  {
    v10 = 2; /*0x5256c0*/
    do /*0x525731*/
    {
      if ( v9[0xFFFFFFFD] ) /*0x5256c5*/
      {
        if ( !*v9 || !((v9[1] - *v9) >> 2) ) /*0x5256d5*/
          _invalid_parameter_noinfo(v10, (int)this, (int)v9); /*0x5256da*/
        _memset(*v9, 0, 4 * v9[0xFFFFFFFD] * v9[0xFFFFFFFE]); /*0x5256ef*/
      }
      if ( v9[0x15] ) /*0x5256f7*/
      {
        v11 = v9[0x18]; /*0x5256fc*/
        if ( !v11 || !((v9[0x19] - v11) >> 2) ) /*0x525708*/
          _invalid_parameter_noinfo(v10, (int)this, (int)v9); /*0x52570d*/
        _memset(v9[0x18], 0, 4 * v9[0x15] * v9[0x16]); /*0x525723*/
      }
      v9 += 6; /*0x52572b*/
      --v10; /*0x52572e*/
    }
    while ( v10 ); /*0x525731*/
    --v15; /*0x525733*/
  }
  while ( v15 ); /*0x525738*/
  *((_DWORD *)this + 0x3B) = 0x5050505; /*0x52573f*/
  *((_DWORD *)this + 0x3C) = 0x5050505; /*0x525745*/
  *((_DWORD *)this + 0x3D) = 0x5050505; /*0x52574b*/
  *((_DWORD *)this + 0x3E) = 0x5050505; /*0x525751*/
  *((_DWORD *)this + 0x3F) = 0x5050505; /*0x525757*/
  *((_BYTE *)this + 0x100) = 5; /*0x52575f*/
  j_TESForm_InitializeComponents(this); /*0x525765*/
  v12 = *(int (__thiscall **)(char *, int))(*((_DWORD *)this + 9) + 0x50); /*0x52576d*/
  *((_DWORD *)this + 0xA) &= ~0x200u; /*0x525770*/
  result = v12((char *)this + 0x24, 0x10); /*0x52577c*/
  *((_DWORD *)this + 0x21) = 0x32; /*0x52577e*/
  return result; /*0x525788*/
}
