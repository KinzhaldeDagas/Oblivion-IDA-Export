_WORD *__thiscall sub_704190(_WORD *this, int a2)
{
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // ebx
  int v8; // esi
  int v10[2]; // [esp+28h] [ebp-24h] BYREF
  int v11[2]; // [esp+30h] [ebp-1Ch] BYREF
  int v12[2]; // [esp+38h] [ebp-14h] BYREF
  int v13; // [esp+48h] [ebp-4h]
  float v14; // [esp+50h] [ebp+4h]

  *(_DWORD *)this = &NiTexturingProperty::Map::`vftable';
  *(this + 2) = *(_WORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  *((_DWORD *)this + 2) = v3;
  if ( v3 )
    InterlockedIncrement((volatile LONG *)(v3 + 4));
  v4 = *(_DWORD *)(a2 + 0xC) == 0;
  v13 = 0;
  if ( v4 )
  {
    *((_DWORD *)this + 3) = 0;
  }
  else
  {
    v5 = FormHeapAlloc(0x48u);
    LOBYTE(v13) = 1;
    if ( v5 )
    {
      v6 = *(_DWORD **)(a2 + 0xC);
      v7 = v6[0x11];
      v10[0] = v6[5];
      v10[1] = v6[6];
      v8 = *(_DWORD *)(a2 + 0xC);
      v11[0] = *(_DWORD *)(v8 + 0xC);
      v11[1] = *(_DWORD *)(v8 + 0x10);
      v14 = *(float *)(v8 + 8);
      v12[0] = *(_DWORD *)v8;
      v12[1] = *(_DWORD *)(v8 + 4);
      *((_DWORD *)this + 3) = sub_72FF40(v5, (int)v12, v14, (int)v11, (int)v10, v7);
    }
    else
    {
      *((_DWORD *)this + 3) = 0;
    }
  }
  return this;
}
