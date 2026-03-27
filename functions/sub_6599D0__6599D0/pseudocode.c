double __thiscall sub_6599D0(_DWORD **this)
{
  double result; // st7
  int v2; // [esp+0h] [ebp-4h]

  if ( !*(this + 0x16) )
    return flt_A30634;
  v2 = (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 0x16) + 0x2C))(*(this + 0x16), this);
  result = (double)v2;
  if ( v2 < 0 )
    return result + flt_A2FC78;
  return result;
}
