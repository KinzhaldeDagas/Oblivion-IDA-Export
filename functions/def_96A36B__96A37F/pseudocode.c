// positive sp value has been detected, the output may be wrong!
char __usercall def_96A36B@<al>(int a1@<ebp>)
{
  float *v4; // eax
  float v9; // [esp+38h] [ebp+1Ch]
  float v10; // [esp+3Ch] [ebp+20h]
  float v11; // [esp+40h] [ebp+24h]

  __asm /*0x96a37f*/
  {
    fstp    st(1); jumptable 0096A36B default case
    fstp    st
    fstp    st
  }
  if ( *(_BYTE *)(a1 + 0x24) ) /*0x96a385*/
  {
    _ESI = *(float **)(a1 + 0x28); /*0x96a38f*/
    sub_47DA40(_ESI); /*0x96a394*/
    __asm /*0x96a399*/
    {
      fstp    [esp+arg_8]
      fld     [esp+arg_8]
      fld     qword ptr ds:0A2F928h
      fsubr   st, st(1)
      fstp    [esp+arg_8]
      fld     [esp+arg_8]
      fabs
      fstp    [esp+arg_8]
      fld     [esp+arg_8]
      fld     dword ptr ds:0AA3B44h
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x96a3ca*/
    {
      __asm { fstp    st } /*0x96c32f*/
    }
    else
    {
      __asm /*0x96a3d0*/
      {
        fcompp
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x96a3d7*/
      {
        *_ESI = stru_B258D0.x; /*0x96c31a*/
        _ESI[1] = stru_B258D0.y; /*0x96c322*/
        _ESI[2] = stru_B258D0.z; /*0x96c32a*/
LABEL_8:
        __asm /*0x96c333*/
        {
          fld     dword ptr [esi]
          fchs
          fstp    [esp+arg_28]
          fld     dword ptr [esi+4]
          fchs
          fstp    [esp+arg_2C]
          fld     dword ptr [esi+8]
        }
        v4 = *(float **)(a1 + 0x2C); /*0x96c347*/
        __asm { fchs } /*0x96c34a*/
        __asm { fstp    [esp+arg_30] }
        *v4 = v9; /*0x96c358*/
        v4[1] = v10; /*0x96c35e*/
        v4[2] = v11; /*0x96c361*/
        return 1; /*0x96c361*/
      }
      Vector3_NormalizeInPlace(_ESI); /*0x96a3df*/
    }
    __asm { fstp    st } /*0x96c331*/
    goto LABEL_8; /*0x96c331*/
  }
  return 1; /*0x96c36c*/
}
