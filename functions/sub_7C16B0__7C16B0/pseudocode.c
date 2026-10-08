// Generic refcounted NiT pointer-list AddTail helper. Allocates a node, assigns/increments its object pointer, links it after the old tail, and updates head/tail/count.
_DWORD *__thiscall sub_7C16B0(_DWORD *this, int *a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // eax
  bool v6; // zf
  _DWORD *result; // eax

  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x7c16c1*/
  v4 = v3[2]; /*0x7c16c3*/
  if ( v4 != *a2 ) /*0x7c16c9*/
  {
    if ( v4 ) /*0x7c16cd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7c16d3*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7c16e9*/
    }
    v5 = *a2; /*0x7c16eb*/
    v6 = *a2 == 0; /*0x7c16ee*/
    v3[2] = *a2; /*0x7c16f0*/
    if ( !v6 ) /*0x7c16f3*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x7c16f9*/
  }
  *v3 = 0; /*0x7c16ff*/
  v3[1] = *(this + 2); /*0x7c1708*/
  result = (_DWORD *)*(this + 2); /*0x7c170b*/
  if ( result ) /*0x7c1710*/
  {
    *result = v3; /*0x7c1712*/
    ++*(this + 3); /*0x7c1714*/
  }
  else
  {
    ++*(this + 3); /*0x7c1722*/
    *(this + 1) = v3; /*0x7c1726*/
  }
  *(this + 2) = v3; /*0x7c1718*/
  return result; /*0x7c171b*/
}
