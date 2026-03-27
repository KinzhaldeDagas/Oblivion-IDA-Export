void __thiscall sub_75DB40(unsigned __int16 *this, unsigned int a2)
{
  unsigned int v3; // edi
  __int16 v4; // ax
  int v5; // ecx
  unsigned __int16 v6; // ax
  void (__thiscall ****v7)(_DWORD, int); // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // [esp-8h] [ebp-18h]
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(this + 0x3F);
  if ( a2 >= v3 )
  {
    if ( a2 > v3 )
    {
      NiTArray_SetSize(this + 0x3A, a2);
      do
      {
        v10 = FormHeapAlloc(0x10u);
        if ( v10 )
        {
          *(_DWORD *)v10 = &NiTArray<NiPointer<NiAVObject>>::`vftable';
          *(_WORD *)(v10 + 8) = 0;
          *(_WORD *)(v10 + 0xE) = 1;
          *(_WORD *)(v10 + 0xA) = 0;
          *(_WORD *)(v10 + 0xC) = 0;
          *(_DWORD *)(v10 + 4) = 0;
        }
        else
        {
          v10 = 0;
        }
        v11 = *((_DWORD *)this + 0x1C);
        v12 = v10;
        sub_523B10((unsigned __int16 *)v10, v11);
        NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x3A), v3++, &v12);
      }
      while ( v3 < a2 );
    }
  }
  else
  {
    do
    {
      v4 = *(this + 0x3F);
      if ( v4 )
      {
        v5 = *((_DWORD *)this + 0x1E);
        v6 = v4 - 1;
        *(this + 0x3F) = v6;
        v7 = (void (__thiscall ****)(_DWORD, int))(v5 + 4 * v6);
        v8 = *v7;
        v9 = *v7 == 0;
        *v7 = 0;
        if ( !v9 )
        {
          --*(this + 0x40);
          if ( v8 )
            (**v8)(v8, 1);
        }
      }
    }
    while ( *(this + 0x3F) > a2 );
  }
}
