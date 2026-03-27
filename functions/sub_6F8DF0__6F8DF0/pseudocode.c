_DWORD *__userpurge sub_6F8DF0@<eax>(_DWORD *this@<ecx>, int a2@<edi>, int a3)
{
  _BYTE v5[116]; // [esp+Ch] [ebp-84h] BYREF
  int v6; // [esp+8Ch] [ebp-4h]

  *(this + 1) = a3;
  v6 = 0;
  *this = &std::codecvt<char,char,int>::`vftable';
  sub_6F84E0((struct std::_Locinfo *)v5, a2, "C");
  sub_6F7670((std::_Lockit *)v5);
  return this;
}
