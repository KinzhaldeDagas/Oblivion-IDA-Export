_DWORD *__thiscall sub_68C040(_DWORD *this)
{
  NiAVObject *v2; // ebx
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v6[4]; // [esp+10h] [ebp-10h] BYREF

  *this = 0;
  *(this + 1) = 0;
  if ( dword_B3C09C )
  {
    ++dword_B3C09C;
    return this;
  }
  else
  {
    *(float *)v6 = 0.0;
    *(float *)&v6[1] = 1.0;
    *(float *)&v6[3] = 1.0;
    *(float *)&v6[2] = 0.0;
    v2 = sub_47FD30(flt_A31C80, (NiD3DPassVtbl **)v6);
    v3 = dword_B3C0A0;
    if ( (NiAVObject *)dword_B3C0A0 != v2 )
    {
      if ( v3 )
      {
        v4 = (void (__thiscall ***)(_DWORD, int))dword_B3C0A0;
        if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
          (**v4)(v4, 1);
      }
      dword_B3C0A0 = (int)v2;
      if ( v2 )
        InterlockedIncrement((volatile LONG *)&v2->members);
    }
    ++dword_B3C09C;
    return this;
  }
}
