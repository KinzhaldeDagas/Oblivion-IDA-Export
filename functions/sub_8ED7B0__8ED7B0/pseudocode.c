_OWORD *__thiscall sub_8ED7B0(_DWORD *this, _OWORD *a2)
{
  __int128 v3; // [esp+0h] [ebp-10h]

  HIDWORD(v3) = *(this + 3);
  *(_QWORD *)&v3 = 0;
  DWORD2(v3) = 0;
  *a2 = v3;
  return a2;
}
