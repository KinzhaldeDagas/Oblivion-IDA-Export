int __userpurge def_573A25@<eax>(
        unsigned __int8 a1@<al>,
        int a2@<edx>,
        int a3@<ebx>,
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
        int a14,
        float a15,
        int a16,
        int a17,
        int a18,
        char a19)
{
  _BYTE *v22; // ebx

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
    a2 = a17;
    __asm
    {
      fld     qword ptr ds:0A68950h
      fld     st
      fsubrp  st(2), st
      fld     dword ptr [esi]
      faddp   st(2), st
      fxch    st(1)
      fstp    dword ptr [esi]
    }
    *_ESI = _ET1;
    __asm
    {
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
      fadd    dword ptr [esi]
      fstp    dword ptr [esi]
    }
    *_ESI = _ET1;
  }
  v22 = (_BYTE *)(a3 + 1);
  if ( *v22 == 0xA )
  {
    __asm
    {
      fld     dword ptr [esi]
      fld     [esp+arg_18]
      fcompp
      fnstsw  ax
    }
    if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm
      {
        fld     dword ptr [esi]
        fstp    [esp+arg_18]; float
      }
    }
    if ( a19 )
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
    if ( a2 == 0xFFFFFFFE )
      goto LABEL_23;
    ++a12;
    __asm
    {
      fxch    st(1)
      fst     dword ptr [esi]
    }
    *_ESI = _ET1;
    __asm { fxch    st(1) }
  }
  __asm
  {
    fld     st(1)
    fcomp   [esp+arg_24]
    fnstsw  ax
  }
  if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
    goto LABEL_24;
  if ( !*v22 )
LABEL_23:
    JUMPOUT(0x573BC5);
  if ( !a2 )
LABEL_24:
    JUMPOUT(0x573BBC);
  switch ( *v22 )
  {
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
      return def_573B11(a9, a10, a11, a12, a13, a14, a15);
    default:
      JUMPOUT(0x573B1E);
  }
}
