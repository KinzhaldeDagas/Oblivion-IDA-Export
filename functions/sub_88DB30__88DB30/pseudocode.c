int __thiscall sub_88DB30(int *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // edi
  int result; // eax

  v3 = *(this + 0x25);
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_5:
    v6 = 0xFFFFFFFF;
  }
  else
  {
    v5 = (_DWORD *)*(this + 0x24);
    while ( (_DWORD *)*v5 != a2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v6 = v4;
  }
  result = (int)sub_88D7D0(this, a2, v6 >= 0);
  if ( v6 >= 0 )
  {
    if ( !dword_BA7A08 || (result = dword_BA7A08(this, a2, 1), (_BYTE)result) )
    {
      result = *(this + 0x24);
      --*(this + 0x25);
      *(_DWORD *)(result + 4 * v6) = *(_DWORD *)(result + 4 * *(this + 0x25));
      if ( *(this + 0x29) > v6 )
      {
        result = --*(this + 0x29);
        *(_DWORD *)(*(this + 0x28) + 4 * v6) = *(_DWORD *)(*(this + 0x28) + 4 * result);
      }
    }
  }
  return result;
}
