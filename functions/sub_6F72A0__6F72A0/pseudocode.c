int __userpurge sub_6F72A0@<eax>(_DWORD **this@<ecx>, int a2@<ebx>, char *Dst, rsize_t DstSize, int a5)
{
  int v5; // ebp
  int v6; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  rsize_t v13; // [esp-10h] [ebp-20h]
  rsize_t v14; // [esp-4h] [ebp-14h]
  int v15; // [esp+Ch] [ebp-4h]

  v5 = HIDWORD(DstSize);
  v6 = 0;
  v15 = 0;
  if ( SHIDWORD(DstSize) <= 0 )
    return 0;
  LODWORD(v14) = a2;
  do
  {
    v9 = sub_6F6F00(this);
    if ( v9 <= 0 )
    {
      v11 = ((int (__thiscall *)(_DWORD **))(*this)[5])(this);
      if ( v11 == 0xFFFFFFFF )
        return v6;
      ++v6;
      *Dst++ = v11;
      v15 = v6;
      --v5;
    }
    else
    {
      v10 = v9;
      if ( v5 < v9 )
        v10 = v5;
      HIDWORD(v13) = **(this + 8);
      LODWORD(v13) = DstSize;
      memcpy_s(Dst, v13, (const void *)v10, v14);
      **(this + 0xC) -= v10;
      v15 += v10;
      Dst += v10;
      v5 -= v10;
      **(this + 8) += v10;
      v6 = v15;
    }
  }
  while ( v5 > 0 );
  return v6;
}
