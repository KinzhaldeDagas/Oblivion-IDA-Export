_DWORD *__usercall sub_724F80@<eax>(void *this@<ecx>, int a2@<ebx>)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  size_t v6; // [esp-4h] [ebp-20h]

  v3 = (_DWORD *)FormHeapAlloc(0x28u);
  v4 = v3;
  if ( v3 )
  {
    sub_738760(v3);
    *v4 = &NiRangeLODData::`vftable';
    v4[2] = LODWORD(Vector3_InitValue_);
    v4[3] = *((_DWORD *)&Vector3_InitValue_ + 1);
    v4[4] = LODWORD(dword_B3F9B0);
    v4[8] = 0;
    v4[9] = 0;
  }
  else
  {
    v4 = 0;
  }
  v4[2] = *((_DWORD *)this + 2);
  v4[3] = *((_DWORD *)this + 3);
  v4[4] = *((_DWORD *)this + 4);
  sub_724AB0(v4, a2, *((_DWORD *)this + 8));
  LODWORD(v6) = 0x10 * *((_DWORD *)this + 8);
  memcpy((void *)v4[9], *((const void **)this + 9), v6);
  return v4;
}
