int __thiscall sub_88DB30(int *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  _DWORD **v5; // edx
  int v6; // edi
  int result; // eax

  v3 = *(this + 0x25); /*0x88db39*/
  v4 = 0; /*0x88db3f*/
  if ( v3 <= 0 ) /*0x88db44*/
  {
LABEL_5:
    v6 = 0xFFFFFFFF; /*0x88db5e*/
  }
  else
  {
    v5 = (_DWORD **)*(this + 0x24); /*0x88db46*/
    while ( *v5 != a2 ) /*0x88db52*/
    {
      ++v4; /*0x88db54*/
      ++v5; /*0x88db57*/
      if ( v4 >= v3 ) /*0x88db5c*/
        goto LABEL_5; /*0x88db5c*/
    }
    v6 = v4; /*0x88dbcf*/
  }
  result = (int)sub_88D7D0(this, a2, v6 >= 0); /*0x88db6e*/
  if ( v6 >= 0 ) /*0x88db75*/
  {
    if ( !unk_BA7A08 || (result = unk_BA7A08(this, a2, 1), (_BYTE)result) ) /*0x88db8b*/
    {
      result = *(this + 0x24); /*0x88db8d*/
      --*(this + 0x25); /*0x88db96*/
      *(_DWORD *)(result + 4 * v6) = *(_DWORD *)(result + 4 * *(this + 0x25)); /*0x88dba5*/
      if ( *(this + 0x29) > v6 ) /*0x88dbae*/
      {
        result = --*(this + 0x29); /*0x88dbb6*/
        *(_DWORD *)(*(this + 0x28) + 4 * v6) = *(_DWORD *)(*(this + 0x28) + 4 * result); /*0x88dbc5*/
      }
    }
  }
  return result; /*0x88dbc8*/
}
