_DWORD *__userpurge sub_6F8630@<eax>(_DWORD *this@<ecx>, int a2@<edi>, int a3, char a4, int a5)
{
  int v6; // eax
  _Ctypevec v8; // [esp+10h] [ebp-94h] BYREF
  _BYTE v9[116]; // [esp+20h] [ebp-84h] BYREF
  int v10; // [esp+A0h] [ebp-4h]

  *(this + 1) = a5;
  v10 = 0;
  *this = &std::ctype<char>::`vftable';
  sub_6F84E0((struct std::_Locinfo *)v9, a2, "C");
  *(_Ctypevec *)(this + 2) = *_Getctype(&v8);
  sub_6F7670((std::_Lockit *)v9);
  if ( a3 )
  {
    v6 = *(this + 5);
    if ( v6 <= 0 )
    {
      if ( v6 < 0 )
        FormHeapFree(*(this + 4));
    }
    else
    {
      free((void *)*(this + 4));
    }
    *(this + 4) = a3;
    *(this + 5) = -(a4 != 0);
  }
  return this;
}
