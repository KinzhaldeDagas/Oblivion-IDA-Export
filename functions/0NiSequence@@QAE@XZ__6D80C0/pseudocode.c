NiSequence *__thiscall NiSequence::NiSequence(NiSequence *this, char *Src, unsigned int a3, __int16 a4)
{
  char *v5; // eax
  int v6; // edi
  unsigned int SizeInBytes; // [esp+14h] [ebp-14h]

  NiObject_constr((NiObject *)this);
  *(_DWORD *)this = &NiSequence::`vftable';
  *((_DWORD *)this + 3) = &NiTArray<char *>::`vftable';
  *((_WORD *)this + 0xA) = 0;
  *((_WORD *)this + 0xD) = 1;
  *((_WORD *)this + 0xB) = 0;
  *((_WORD *)this + 0xC) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 7) = &NiTArray<NiPointer<NiTransformController>>::`vftable';
  *((_WORD *)this + 0x12) = 0;
  *((_WORD *)this + 0x15) = 1;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x14) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 0xB) = 0;
  if ( Src )
  {
    SizeInBytes = strlen(Src) + 1;
    v5 = (char *)FormHeapAlloc(SizeInBytes);
    *((_DWORD *)this + 2) = v5;
    strcpy_s(v5, SizeInBytes, Src);
  }
  else
  {
    *((_DWORD *)this + 2) = 0;
  }
  NiTArray_SetSize((unsigned __int16 *)this + 6, a3);
  *((_WORD *)this + 0xD) = a4;
  sub_6C4510((unsigned __int16 *)this + 0xE, a3);
  *((_WORD *)this + 0x15) = a4;
  v6 = *((_DWORD *)this + 0xB);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 0xB) = 0;
  }
  *((_DWORD *)this + 0xC) = 0;
  return this;
}
