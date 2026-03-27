int __thiscall sub_7EC890(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DPass *v9; // edi
  int v10; // eax
  int v11; // eax
  NiD3DPass *v12; // eax
  NiD3DPass *v15; // [esp+10h] [ebp-10h] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-4h]

  (*((void (__thiscall **)(NiTArray_NiD3DPass *))this->_vtbl + 0x20))(this);
  v9 = 0;
  v15 = 0;
  v10 = *((_DWORD *)this + 0x24);
  v16 = 0;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_9;
      v12 = *((NiD3DPass **)this + 0x1C);
    }
    else
    {
      v12 = *((NiD3DPass **)this + 0x2B);
    }
  }
  else
  {
    v12 = *((NiD3DPass **)this + 0x2C);
  }
  if ( v12 )
  {
    v9 = v12;
    ++v12->RefCount;
    v15 = v12;
  }
LABEL_9:
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &v15);
  ++*((_DWORD *)this + 0xE);
  v16 = 0xFFFFFFFF;
  if ( v9 )
  {
    if ( v9->RefCount-- == 1 )
      sub_7604D0(v9);
  }
  return 0;
}
