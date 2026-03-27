__int16 __thiscall sub_728890(
        unsigned int *this,
        __int16 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        __int16 a8)
{
  unsigned int *v9; // eax
  unsigned int v10; // edi
  bool v11; // zf
  unsigned int *v12; // eax
  unsigned int v13; // edi
  unsigned int *v14; // eax
  unsigned int v15; // edi
  int v16; // ebp
  unsigned int *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // edx
  unsigned __int16 v20; // ax
  __int16 result; // ax

  if ( (*(int (__thiscall **)(unsigned int *))(*this + 0x44))(this) )
  {
    if ( a3 != *(this + 7) )
    {
      v9 = (unsigned int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x44))(this);
      v10 = (unsigned int)v9;
      v11 = v9[3]-- == 1;
      if ( v11 )
      {
        sub_732A20(v9);
        FormHeapFree(v10);
      }
    }
    if ( a4 != *(this + 8) )
    {
      v12 = (unsigned int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x44))(this);
      v13 = (unsigned int)v12;
      v11 = v12[3]-- == 1;
      if ( v11 )
      {
        sub_732A20(v12);
        FormHeapFree(v13);
      }
    }
    if ( a5 != *(this + 9) )
    {
      v14 = (unsigned int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x44))(this);
      v15 = (unsigned int)v14;
      v11 = v14[3]-- == 1;
      if ( v11 )
      {
        sub_732A20(v14);
        FormHeapFree(v15);
      }
    }
    v16 = a6;
    if ( a6 != *(this + 0xA) )
    {
      v17 = (unsigned int *)(*(int (__thiscall **)(unsigned int *))(*this + 0x44))(this);
      v18 = (unsigned int)v17;
      v11 = v17[3]-- == 1;
      if ( v11 )
      {
        sub_732A20(v17);
        FormHeapFree(v18);
      }
    }
  }
  else
  {
    if ( a3 != *(this + 7) )
      FormHeapFree(*(this + 7));
    if ( a4 != *(this + 8) )
      FormHeapFree(*(this + 8));
    if ( a5 != *(this + 9) )
      FormHeapFree(*(this + 9));
    v16 = a6;
    if ( a6 != *(this + 0xA) )
      FormHeapFree(*(this + 0xA));
  }
  *(this + 7) = a3;
  v19 = *this;
  *((_WORD *)this + 4) = a2;
  *(this + 8) = a4;
  v20 = (*(int (__thiscall **)(unsigned int *))(v19 + 0x50))(this);
  if ( v20 )
  {
    if ( *(this + 7) )
      sub_72A0F0((float *)this + 3, v20, (float *)*(this + 7));
  }
  result = a8 | a7 & 0x3F | *(_WORD *)(this + 0xB) & 0xFC0;
  *(this + 0xA) = v16;
  *(this + 9) = a5;
  *((_WORD *)this + 0x16) = result;
  return result;
}
