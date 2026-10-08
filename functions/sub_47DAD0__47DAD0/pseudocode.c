// Insert or replace NiTMap<unsigned int, VertexDist>. VertexDist payload is primaryTargetIndex, secondaryTargetIndex, distance; replacement destroys the previous payload, so no more than two target indices survive.
int __thiscall NiTMap_UInt_VertexDist_Set(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // ebp
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  int result; // eax

  v6 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x47dae2*/
  v7 = *(_DWORD **)(*(this + 2) + 4 * v6); /*0x47dae7*/
  if ( v7 ) /*0x47daec*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v7[1]) ) /*0x47db00*/
    {
      v7 = (_DWORD *)*v7; /*0x47db02*/
      if ( !v7 ) /*0x47db06*/
        goto LABEL_4; /*0x47db06*/
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v7); /*0x47db58*/
    return (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, int, int))(*this + 0xC))(this, v7, a2, a3, a4, a5); /*0x47db7c*/
  }
  else
  {
LABEL_4:
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this); /*0x47db08*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int, int, int))(*this + 0xC))(this, v8, a2, a3, a4, a5); /*0x47db35*/
    result = *(this + 2); /*0x47db37*/
    *v8 = *(_DWORD *)(result + 4 * v6); /*0x47db3d*/
    *(_DWORD *)(*(this + 2) + 4 * v6) = v8; /*0x47db42*/
    ++*(this + 3); /*0x47db45*/
  }
  return result; /*0x47db49*/
}
