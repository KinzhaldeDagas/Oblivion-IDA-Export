char *__thiscall sub_42A540(char *this, int a2, int a3)
{
  _DWORD *v4; // eax

  *(this + 4) = 0x3E;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraOblivionEntry::`vftable';
  if ( a2 && a3 )
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2);
    *((_DWORD *)this + 3) = *v4;
    *((_DWORD *)this + 4) = v4[1];
    *((_DWORD *)this + 5) = v4[2];
    *((_DWORD *)this + 6) = a3;
  }
  else
  {
    *(_QWORD *)(this + 0xC) = *(_QWORD *)&Vector3_InitValue_;
    *((float *)this + 5) = dword_B3F9B0;
    *((_DWORD *)this + 6) = 0;
  }
  return this;
}
