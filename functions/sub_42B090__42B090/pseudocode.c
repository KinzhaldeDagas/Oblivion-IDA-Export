_DWORD *__thiscall sub_42B090(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax

  *((_BYTE *)this + 4) = 0x57;
  *(this + 2) = 0;
  *this = &ExtraEditorRefMoveData::`vftable';
  if ( a2 )
  {
    *(this + 3) = a2[8];
    *(this + 4) = a2[9];
    *(this + 5) = a2[0xA];
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x174))(a2);
    *(this + 6) = *v3;
    *(this + 7) = v3[1];
    *(this + 8) = v3[2];
    *(this + 9) = *v3;
    *(this + 0xA) = v3[1];
    *(this + 0xB) = v3[2];
  }
  return this;
}
