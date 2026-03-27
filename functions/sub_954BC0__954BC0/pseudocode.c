int __thiscall sub_954BC0(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // [esp-4h] [ebp-4h]

  v2 = (_DWORD *)*(this + 4);
  result = v2[3] - a2;
  if ( result > 0 )
  {
    v4 = v2[3] - a2;
    if ( result >= 0xFF )
    {
      if ( result >= 0xFFFF )
      {
        if ( result >= 0xFFFFFF )
          return sub_9567C0(v2, 8, v4);
        else
          return sub_956670(v2, 7, v4);
      }
      else
      {
        return sub_9565E0(v2, 6, v4);
      }
    }
    else
    {
      return sub_956580(v2, 5, v4);
    }
  }
  return result;
}
