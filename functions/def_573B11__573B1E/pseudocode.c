// positive sp value has been detected, the output may be wrong!
int __userpurge def_573B11@<eax>(
        unsigned __int8 a1@<al>,
        int a2@<edx>,
        _BYTE *a3@<ebx>,
        float *_EBP@<ebp>,
        int _EDI@<edi>,
        float *_ESI@<esi>,
        double a7@<st1>,
        double a8@<st0>,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14,
        float a15)
{
  bool v21; // pf
  int result; // eax
  int v24; // [esp-4h] [ebp-4h]

  if ( a1 == 9 )
  {
    __asm
    {
      fstp    st(1)
      fld     dword ptr [esi]
      fxch    st(1)
    }
    unknown_libname_14(a7, a8);
    __asm
    {
      fstp    [esp+arg_1C]
      fld     [esp+arg_1C]
    }
    a2 = a12;
    __asm
    {
      fld     qword ptr ds:0A68950h
      fld     st
      fsubrp  st(2), st
      fxch    st(1)
      fstp    [esp+arg_1C]
      fldz
      fxch    st(1)
    }
  }
  else
  {
    _EAX = *(_DWORD *)(_EDI + 0x38) + 0x38 * a1 + 0x128;
    __asm
    {
      fld     dword ptr [eax+2Ch]
      fadd    dword ptr [eax+24h]
      fadd    dword ptr [eax+30h]
      fstp    [esp+arg_1C]
    }
  }
  __asm
  {
    fld     dword ptr [esi]
    fadd    [esp+arg_1C]
    fld     [esp+arg_24]
    fcompp
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    goto LABEL_11;
  if ( a14 )
  {
    _ECX = *(_DWORD *)(_EDI + 0x38);
    __asm
    {
      fld     dword ptr [ecx]
      fadd    dword ptr [ebp+0]
    }
  }
  else
  {
    __asm
    {
      fld     dword ptr [ebp+0]
      fadd    dword ptr [edi+2Ch]
    }
  }
  __asm { fstp    dword ptr [ebp+0] }
  *_EBP = _ET1;
  if ( a2 != 0xFFFFFFFE )
  {
    ++v24;
    __asm
    {
      fxch    st(1)
      fst     dword ptr [esi]
    }
    *_ESI = _ET1;
    __asm { fxch    st(1) }
LABEL_11:
    if ( *a3 )
      JUMPOUT(0x573A00);
  }
  __asm { fstp    st }
  __asm
  {
    fstp    st
    fld     [esp-4+arg_18]
    fld     dword ptr [esi]
    fcomp   st(1)
    fnstsw  ax
  }
  v21 = __SETP__(HIBYTE(_AX) & 5, 0);
  result = v24;
  if ( v21 )
  {
    __asm { fstp    st }
  }
  else
  {
    __asm { fstp    dword ptr [esi] }
    *_ESI = _ET1;
  }
  return result;
}
