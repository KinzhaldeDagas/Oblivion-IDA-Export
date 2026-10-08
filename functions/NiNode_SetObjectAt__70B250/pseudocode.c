_DWORD *__thiscall NiNode::SetObjectAt(NiNode *this, _DWORD *a2, unsigned int a3, NiAVObject *a4)
{
  NiAVObject *v5; // edi
  int v7; // esi
  NiAVObject *v8; // edi
  LONG (__stdcall *v9)(volatile LONG *); // ebx

  if ( this->members.children.end > a3 ) /*0x70b28c*/
  {
    v7 = *((_DWORD *)&this->members.children.data->vtbl + a3); /*0x70b31e*/
    if ( v7 ) /*0x70b32a*/
    {
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x70b330*/
      *(_DWORD *)(v7 + 0x1C) = 0; /*0x70b342*/
    }
    v8 = a4; /*0x70b349*/
    if ( a4 ) /*0x70b34f*/
      NiAVObject_SetParentAndDetachFromOld(a4, this); /*0x70b354*/
    a4 = v8; /*0x70b35b*/
    if ( v8 ) /*0x70b35f*/
      InterlockedIncrement((volatile LONG *)&v8->members); /*0x70b365*/
    sub_4B34E0(&this->members.children._vtbl, a3, (LONG *)&a4); /*0x70b37c*/
    v9 = InterlockedDecrement; /*0x70b383*/
    if ( v8 ) /*0x70b38e*/
    {
      if ( !v9((volatile LONG *)&v8->members) ) /*0x70b394*/
        v8->vtbl->super.super.Destructor((NiRefObject *)v8, 1); /*0x70b3a2*/
    }
    *a2 = v7; /*0x70b3aa*/
    if ( v7 ) /*0x70b3ac*/
    {
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x70b3b2*/
      if ( !v9((volatile LONG *)(v7 + 4)) ) /*0x70b3cd*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x70b3db*/
    }
    return a2; /*0x70b3dd*/
  }
  else
  {
    v5 = a4; /*0x70b292*/
    if ( a4 ) /*0x70b298*/
      NiAVObject_SetParentAndDetachFromOld(a4, this); /*0x70b29d*/
    a4 = v5; /*0x70b2a4*/
    if ( v5 ) /*0x70b2a8*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x70b2ae*/
    if ( a3 >= this->members.children.capacity ) /*0x70b2cb*/
      sub_523B10((unsigned __int16 *)&this->members.children, a3 + this->members.children.growSize); /*0x70b2d6*/
    sub_4B34E0(&this->members.children._vtbl, a3, (LONG *)&a4); /*0x70b2e3*/
    if ( v5 ) /*0x70b2ef*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x70b2f5*/
        v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x70b307*/
    }
    *a2 = 0; /*0x70b30d*/
    return a2; /*0x70b309*/
  }
}
