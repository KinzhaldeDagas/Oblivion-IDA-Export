_DWORD *__thiscall sub_55C6E0(_DWORD *this, int a2, void *Src, int a4)
{
  int v5; // ecx
  int v6; // eax
  const void *v7; // ebp
  int v8; // eax
  unsigned int v9; // edx
  bool v10; // zf
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  size_t v14; // [esp-4h] [ebp-34h]
  int v15; // [esp+18h] [ebp-18h] BYREF
  int v16; // [esp+1Ch] [ebp-14h]
  char v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+2Ch] [ebp-4h]

  sub_721350(this);
  v18 = 0;
  *this = &BSFaceGenBaseMorphExtraData::`vftable';
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( !a2 )
    goto LABEL_16;
  v5 = *(_DWORD *)(a2 + 0xB4);
  if ( !v5 )
    goto LABEL_16;
  if ( sub_728AB0(v5, 1) )
    sub_728B60(*(_DWORD *)(a2 + 0xB4), (int)&v15);
  if ( v15 )
  {
    v6 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 0xB4) + 8);
    v7 = Src;
    *(this + 5) = v6;
    *(this + 4) = v6;
    if ( Src )
    {
      if ( a4 )
        *(this + 4) = a4 + v6;
    }
    v8 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)*(this + 4)) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * *(this + 4));
    v9 = 0;
    v10 = *(this + 5) == 0;
    *(this + 3) = v8;
    v11 = (_DWORD *)v8;
    if ( !v10 )
    {
      do
      {
        v12 = (_DWORD *)(v15 + v9 * v16);
        ++v9;
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11 += 3;
      }
      while ( v9 < *(this + 5) );
      v7 = Src;
    }
    if ( v7 )
    {
      if ( a4 )
      {
        LODWORD(v14) = 0xC * a4;
        memcpy((void *)(*(this + 3) + 0xC * *(this + 5)), v7, v14);
      }
    }
    sub_728B20(*(_DWORD *)(a2 + 0xB4));
  }
  else
  {
LABEL_16:
    *(this + 3) = 0;
    *(this + 5) = 0;
    *(this + 4) = 0;
  }
  return this;
}
