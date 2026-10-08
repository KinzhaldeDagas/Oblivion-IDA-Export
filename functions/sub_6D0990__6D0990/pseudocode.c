char __thiscall sub_6D0990(NiTriBasedGeomData *this, int a2)
{
  int v2; // edi
  int v5; // ebx
  _DWORD *v6; // ebp
  unsigned __int8 (__thiscall **v7)(_DWORD *, int); // edi
  int v8; // eax

  v2 = a2; /*0x6d0992*/
  if ( !NiInterpController_IsEqual(this, a2) /*0x6d09b5*/
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x14) + 0x2C))(
          *((_DWORD *)this + 0x14),
          *(_DWORD *)(a2 + 0x50)) )
  {
    return 0; /*0x6d09a3*/
  }
  v5 = 0; /*0x6d09c4*/
  if ( !(unsigned __int16)this->__vftable[1].super.super.Unk_03((NiObject *)this) ) /*0x6d09c6*/
    return 1; /*0x6d09d0*/
  while ( 1 ) /*0x6d09f3*/
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x80))(v2, v5); /*0x6d09f3*/
    v7 = (unsigned __int8 (__thiscall **)(_DWORD *, int))(*v6 + 0x2C); /*0x6d0a01*/
    v8 = ((int (__thiscall *)(NiTriBasedGeomData *, int))this->__vftable[1].super.super.Copy)(this, v5); /*0x6d0a04*/
    if ( !(*v7)(v6, v8) ) /*0x6d0a0b*/
      break; /*0x6d0a0b*/
    if ( (unsigned __int16)++v5 >= (unsigned __int16)this->__vftable[1].super.super.Unk_03((NiObject *)this) ) /*0x6d0a20*/
      return 1; /*0x6d0a28*/
    v2 = a2; /*0x6d09e0*/
  }
  return 0; /*0x6d09a2*/
}
