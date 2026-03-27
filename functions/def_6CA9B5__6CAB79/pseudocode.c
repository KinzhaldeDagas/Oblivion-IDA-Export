// positive sp value has been detected, the output may be wrong!
void __userpurge def_6CA9B5(int a1@<edi>, int _ESI@<esi>, float a3, float a4)
{
  float v8; // [esp-Ch] [ebp-18h]
  float v9; // [esp-8h] [ebp-14h]
  float v10; // [esp-8h] [ebp-14h]
  float v11; // [esp-8h] [ebp-14h]
  float v12; // [esp-4h] [ebp-10h]
  float v13; // [esp-4h] [ebp-10h]

  if ( LOBYTE(a4) )
  {
    __asm
    {
      fld     dword ptr [esi+54h]
      fld     dword ptr ds:0A7DEB4h
      fchs
      fucompp
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
    {
      __asm
      {
        fstp    st
        fld     dword ptr [esi+54h]
      }
    }
    else
    {
      _ECX = *(_DWORD *)(_ESI + 0x58);
      if ( _ECX )
      {
        __asm
        {
          fld     dword ptr [ecx+34h]
          fld     dword ptr [ecx+48h]
          fadd    st, st(2)
          fucompp
          fnstsw  ax
        }
        if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
        {
          __asm { fstp    [esp+8+var_8]; float }
          sub_6CA950(_ECX, a1, v9, 0.0);
          __asm { fld     [esp+arg_C] }
        }
        _EAX = *(_DWORD *)(_ESI + 0x58);
        __asm { fadd    dword ptr [eax+48h] }
        __asm
        {
          fstp    [esp+4+arg_10]
          fld     [esp+4+arg_10]
          fstp    [esp+4+var_4]; float
        }
        sub_6C6B30((float *)_ESI, a1, _EAX, v12);
        __asm
        {
          fstp    [esp+arg_10]
          fld     [esp+arg_10]
          fdiv    dword ptr [esi+28h]
        }
      }
      else
      {
        __asm { fadd    dword ptr [esi+48h] }
      }
    }
    __asm { fstp    [esp+arg_10] }
    __asm { fld     [esp+4+arg_10] }
    __asm { fstp    [esp+8+var_8]; float }
    sub_6C5FC0(_ESI, v10, 1);
    __asm { fstp    [esp+0Ch+var_4]; float }
    __asm
    {
      fld     [esp+0Ch+arg_0]
      fstp    [esp+0Ch+var_8]; float
      fld     dword ptr [esi+1Ch]
      fmul    [esp+0Ch+arg_4]
      fstp    [esp+0Ch+arg_10]
      fld     [esp+0Ch+arg_10]
      fstp    [esp+0Ch+var_C]; float
    }
    sub_6C6DC0((_DWORD *)_ESI, v8, v11, v13);
  }
  else
  {
    __asm { fstp    st }
  }
}
