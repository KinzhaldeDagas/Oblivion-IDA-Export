double __userpurge sub_461030@<st0>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double result@<st0>,
        char a5)
{
  float v5; // edi
  int v7; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  ExtraDataList *v9; // edi
  BSExtraDataVtbl *v10; // eax

  v5 = *(float *)&MEMORY[0xB33398]->mainThreadID; /*0x461037*/
  if ( ((int (__usercall *)@<eax>(double@<st0>, double@<st1>))GetCurrentThreadId)(result, a3) == LODWORD(v5) ) /*0x461044*/
    LOBYTE(v7) = *((_BYTE *)this + 0x18); /*0x461046*/
  else
    v7 = *(this + 6) >> 0x12; /*0x46104e*/
  if ( (v7 & 1) != 0 ) /*0x461055*/
  {
    SaveLoad_DrainAnimationBlobs(this, st5_0, a3, result); /*0x46105d*/
    SaveLoad_DrainAttachedAnimationBlobs(this); /*0x461064*/
    SaveLoad_DrainCharacterControllerBlobs(this); /*0x46106b*/
    if ( a5 ) /*0x461075*/
    {
      sub_677EC0((int)&qword_B3BB2C[0x75], v5, 0.0, a3, 0.0, 0.0); /*0x461084*/
      result = 0.0; /*0x461089*/
      sub_4424D0((ExtraDataList **)MEMORY[0xB333A0], 0.0);// ModernWindowsCompatible decode: secondary sub_4424D0 caller passes 0.0 during this flagged world/cell update path; not a fire-specific animation routine. /*0x461095*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x4610a0*/
      v9 = (ExtraDataList *)DwordAtOffset40; /*0x4610a5*/
      if ( DwordAtOffset40 ) /*0x4610a9*/
      {
        if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x4610ad*/
          v10 = sub_424180(v9 + 2); /*0x4610b9*/
        else
          v10 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4610c0*/
        if ( v10 ) /*0x4610c7*/
          sub_88BC20(v10); /*0x4610cb*/
      }
    }
    SaveLoad_DrainHavokBlobs(this); /*0x4610d2*/
    sub_45D190(this); /*0x4610d9*/
  }
  return result; /*0x4610de*/
}
