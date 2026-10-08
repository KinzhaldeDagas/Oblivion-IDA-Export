NiSequence *__thiscall NiSequence::NiSequence(NiSequence *this, char *Src, unsigned int a3, __int16 a4)
{
  char *v5; // eax
  int v6; // edi
  unsigned int SizeInBytes; // [esp+14h] [ebp-14h]

  NiObject_constr((NiObject *)this); /*0x6d80ed*/
  *(_DWORD *)this = &NiSequence::`vftable'; /*0x6d80f7*/
  *((_DWORD *)this + 3) = &NiTArray<char *>::`vftable'; /*0x6d8106*/
  *((_WORD *)this + 0xA) = 0; /*0x6d810c*/
  *((_WORD *)this + 0xD) = 1; /*0x6d8110*/
  *((_WORD *)this + 0xB) = 0; /*0x6d8114*/
  *((_WORD *)this + 0xC) = 0; /*0x6d8118*/
  *((_DWORD *)this + 4) = 0; /*0x6d811c*/
  *((_DWORD *)this + 7) = &NiTArray<NiPointer<NiTransformController>>::`vftable'; /*0x6d8122*/
  *((_WORD *)this + 0x12) = 0; /*0x6d8129*/
  *((_WORD *)this + 0x15) = 1; /*0x6d812d*/
  *((_WORD *)this + 0x13) = 0; /*0x6d8131*/
  *((_WORD *)this + 0x14) = 0; /*0x6d8135*/
  *((_DWORD *)this + 8) = 0; /*0x6d8139*/
  *((_DWORD *)this + 0xB) = 0; /*0x6d813c*/
  if ( Src ) /*0x6d814a*/
  {
    SizeInBytes = strlen(Src) + 1; /*0x6d815f*/
    v5 = (char *)FormHeapAlloc(SizeInBytes); /*0x6d8163*/
    *((_DWORD *)this + 2) = v5; /*0x6d8173*/
    strcpy_s(v5, SizeInBytes, Src); /*0x6d8176*/
  }
  else
  {
    *((_DWORD *)this + 2) = 0; /*0x6d8180*/
  }
  NiTArray_SetSize((unsigned __int16 *)this + 6, a3); /*0x6d818a*/
  *((_WORD *)this + 0xD) = a4; /*0x6d819a*/
  sub_6C4510((unsigned __int16 *)this + 0xE, a3); /*0x6d819e*/
  *((_WORD *)this + 0x15) = a4; /*0x6d81a3*/
  v6 = *((_DWORD *)this + 0xB); /*0x6d81a7*/
  if ( v6 ) /*0x6d81ac*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x6d81b2*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6d81c8*/
    *((_DWORD *)this + 0xB) = 0; /*0x6d81ca*/
  }
  *((_DWORD *)this + 0xC) = 0; /*0x6d81cf*/
  return this; /*0x6d81d2*/
}
