void __thiscall NiSequence::~NiSequence(NiSequence *this)
{
  unsigned int i; // ebp
  int *v3; // ebx
  int v4; // edi
  bool v5; // zf
  void (__thiscall ***v6)(_DWORD, int); // edi
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned __int16 v10; // ax
  int v11; // edi
  int *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // [esp-4h] [ebp-2Ch]
  unsigned int v15; // [esp-4h] [ebp-2Ch]
  _DWORD v16[2]; // [esp+14h] [ebp-14h] BYREF
  int v17; // [esp+24h] [ebp-4h]

  v16[1] = this;
  *(_DWORD *)this = &NiSequence::`vftable';
  v14 = *((_DWORD *)this + 2);
  v17 = 3;
  FormHeapFree(v14);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x13); ++i )
  {
    v3 = sub_6D7F60((int)this + 0x1C, v16, i);
    v4 = *v3;
    v5 = *v3 == 0;
    LOBYTE(v17) = 4;
    if ( !v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      *v3 = 0;
    }
    v6 = (void (__thiscall ***)(_DWORD, int))v16[0];
    LOBYTE(v17) = 3;
    if ( v16[0] )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16[0] + 4)) )
      {
        if ( v6 )
          (**v6)(v6, 1);
      }
    }
    if ( i < *((unsigned __int16 *)this + 0xB) )
    {
      v8 = *((_DWORD *)this + 4);
      v9 = *(_DWORD *)(v8 + 4 * i);
      *(_DWORD *)(v8 + 4 * i) = 0;
      if ( v9 )
        --*((_WORD *)this + 0xC);
      v10 = *((_WORD *)this + 0xB);
      if ( i == v10 - 1 )
        *((_WORD *)this + 0xB) = v10 - 1;
      v7 = v9;
    }
    else
    {
      v7 = 0;
    }
    FormHeapFree(v7);
  }
  v11 = *((_DWORD *)this + 0xB);
  LOBYTE(v17) = 2;
  if ( v11 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  v12 = *((int **)this + 8);
  LOBYTE(v17) = 1;
  *((_DWORD *)this + 7) = &NiTArray<NiPointer<NiTransformController>>::`vftable';
  if ( v12 )
  {
    v13 = (unsigned int)(v12 + 0xFFFFFFFF);
    _LN21(v12, 4u, v12[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v13);
  }
  v15 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 3) = &NiTArray<char *>::`vftable';
  FormHeapFree(v15);
  v17 = 0xFFFFFFFF;
  NiRefObject_destr(this);
}
