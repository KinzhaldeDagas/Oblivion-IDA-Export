// positive sp value has been detected, the output may be wrong!
char __usercall def_966B67@<al>(int a1@<ebp>)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  float *v4; // eax
  float v6; // [esp+2Ch] [ebp+2Ch]
  float v7; // [esp+30h] [ebp+30h]
  float v8; // [esp+34h] [ebp+34h]

  __asm /*0x968160*/
  {
    fstp    st(1); jumptable 00966B67 default case
    fstp    st
  }
  if ( *(_BYTE *)(a1 + 0x2C) ) /*0x968164*/
  {
    _ESI = *(_DWORD *)(a1 + 0x34); /*0x96816a*/
    v2 = STACK[0x170]; /*0x968174*/
    v3 = STACK[0x174]; /*0x96817b*/
    *(_DWORD *)_ESI = STACK[0x16C]; /*0x968182*/
    *(_DWORD *)(_ESI + 4) = v2; /*0x968184*/
    *(_DWORD *)(_ESI + 8) = v3; /*0x968189*/
    Vector3_NormalizeInPlace((float *)_ESI); /*0x96818c*/
    __asm /*0x968191*/
    {
      fstp    st
      fld     dword ptr [esi]
    }
    v4 = *(float **)(a1 + 0x30); /*0x968195*/
    __asm /*0x968198*/
    {
      fchs
      fstp    [esp+arg_38]
    }
    __asm
    {
      fld     dword ptr [esi+4]
      fchs
      fstp    [esp+arg_3C]
    }
    __asm { fld     dword ptr [esi+8] }
    *v4 = v6; /*0x9681b2*/
    __asm { fchs } /*0x9681b4*/
    v4[1] = v7; /*0x9681b6*/
    __asm { fstp    [esp+arg_40] } /*0x9681b9*/
    v4[2] = v8; /*0x9681c1*/
  }
  return 1; /*0x9681cc*/
}
