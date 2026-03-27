_DWORD *__thiscall NiNode::SetObjectAt(NiNode *this, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *v5; // edi
  int v7; // esi
  _DWORD *v8; // edi
  LONG (__stdcall *v9)(volatile LONG *); // ebx

  if ( this->members.children.end > a3 )
  {
    v7 = *((_DWORD *)&this->members.children.data->vtbl + a3);
    if ( v7 )
    {
      InterlockedIncrement((volatile LONG *)(v7 + 4));
      *(_DWORD *)(v7 + 0x1C) = 0;
    }
    v8 = a4;
    if ( a4 )
      sub_7074B0(a4, (int)this);
    a4 = v8;
    if ( v8 )
      InterlockedIncrement(v8 + 1);
    sub_4B34E0(&this->members.children._vtbl, a3, (LONG *)&a4);
    v9 = InterlockedDecrement;
    if ( v8 )
    {
      if ( !v9(v8 + 1) )
        (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1);
    }
    *a2 = v7;
    if ( v7 )
    {
      InterlockedIncrement((volatile LONG *)(v7 + 4));
      if ( !v9((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    return a2;
  }
  else
  {
    v5 = a4;
    if ( a4 )
      sub_7074B0(a4, (int)this);
    a4 = v5;
    if ( v5 )
      InterlockedIncrement(v5 + 1);
    if ( a3 >= this->members.children.capacity )
      sub_523B10((unsigned __int16 *)&this->members.children, a3 + this->members.children.growSize);
    sub_4B34E0(&this->members.children._vtbl, a3, (LONG *)&a4);
    if ( v5 )
    {
      if ( !InterlockedDecrement(v5 + 1) )
        (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1);
    }
    *a2 = 0;
    return a2;
  }
}
