int __thiscall sub_8CDA30(int *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  _DWORD **v5; // edx
  int v6; // edi
  int result; // eax

  v3 = *(this + 0x25); /*0x8cda38*/
  v4 = 0; /*0x8cda3e*/
  if ( v3 <= 0 ) /*0x8cda43*/
  {
LABEL_5:
    v6 = 0xFFFFFFFF; /*0x8cda5c*/
  }
  else
  {
    v5 = (_DWORD **)*(this + 0x24); /*0x8cda45*/
    while ( *v5 != a2 ) /*0x8cda52*/
    {
      ++v4; /*0x8cda54*/
      ++v5; /*0x8cda55*/
      if ( v4 >= v3 ) /*0x8cda5a*/
        goto LABEL_5; /*0x8cda5a*/
    }
    v6 = v4; /*0x8cda94*/
  }
  result = (int)sub_88D7D0(this, a2, v6 >= 0); /*0x8cda6c*/
  if ( v6 >= 0 ) /*0x8cda73*/
  {
    result = *(this + 0x25) - 1; /*0x8cda7b*/
    *(this + 0x25) = result; /*0x8cda7c*/
    *(_DWORD *)(*(this + 0x24) + 4 * v6) = *(_DWORD *)(*(this + 0x24) + 4 * result); /*0x8cda8b*/
  }
  return result; /*0x8cda8e*/
}
