void __thiscall NiNode::AddObject(unsigned __int16 *this, int a2, int a3)
{
  void (__stdcall *v4)(volatile LONG *); // ebp
  bool v5; // zf
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  unsigned __int16 *v8; // ebx
  LONG (__stdcall *v9)(volatile LONG *); // ebx
  volatile LONG *v10; // [esp-4h] [ebp-24h]

  if ( a2 )
  {
    v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    InterlockedIncrement((volatile LONG *)(a2 + 4));
    sub_7074B0((_DWORD *)a2, (int)this);
    v5 = (_BYTE)a3 == 0;
    v10 = (volatile LONG *)(a2 + 4);
    a3 = a2;
    if ( v5 )
    {
      v4(v10);
      v6 = *(this + 0x5B);
      v7 = *(this + 0x5A);
      v8 = this + 0x56;
      if ( v6 >= v7 )
        sub_523B10(v8, v6 + v8[7]);
      sub_4B34E0(v8, v6, &a3);
    }
    else
    {
      v4(v10);
      NiTArray_AddItem((int)(this + 0x56), &a3);
    }
    v9 = InterlockedDecrement;
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
      (**(void (__thiscall ***)(int, int))a2)(a2, 1);
    if ( !v9((volatile LONG *)(a2 + 4)) )
      (**(void (__thiscall ***)(int, int))a2)(a2, 1);
  }
}
