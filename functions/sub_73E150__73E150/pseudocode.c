__int16 __thiscall sub_73E150(unsigned int *this, unsigned int *a2, _DWORD **a3)
{
  unsigned int *v3; // ebx
  int v5; // eax
  __int16 v6; // dx
  __int16 v7; // cx
  __int16 v8; // dx
  __int16 v9; // cx
  __int16 v10; // dx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int v21; // [esp+Ch] [ebp-20h]
  _DWORD v22[7]; // [esp+10h] [ebp-1Ch] BYREF
  int v23; // [esp+34h] [ebp+8h]

  v3 = a2;
  sub_700770(this, (int)a2, a3);
  v21 = 0;
  if ( *(this + 4) )
  {
    v23 = 0;
    do
    {
      v5 = v23 + *(this + 2);
      v6 = *(_WORD *)(v5 + 2);
      LOWORD(v22[0]) = *(_WORD *)v5;
      v7 = *(_WORD *)(v5 + 4);
      HIWORD(v22[0]) = v6;
      v8 = *(_WORD *)(v5 + 6);
      LOWORD(v22[1]) = v7;
      v9 = *(_WORD *)(v5 + 8);
      HIWORD(v22[1]) = v8;
      v10 = *(_WORD *)(v5 + 0xA);
      LOWORD(v22[2]) = v9;
      v11 = *(_DWORD *)(v5 + 0xC);
      HIWORD(v22[2]) = v10;
      v12 = *(_DWORD *)(v5 + 0x10);
      v22[3] = v11;
      v13 = *(_DWORD *)(v5 + 0x14);
      v22[4] = v12;
      v14 = *(_DWORD *)(v5 + 0x18);
      v15 = a2[3];
      v16 = a2[4] == v15;
      v22[5] = v13;
      v22[6] = v14;
      if ( v16 )
      {
        if ( v15 )
          v17 = 2 * v15;
        else
          v17 = 1;
        sub_73DD70(a2 + 2, v17);
      }
      v23 += 0x1C;
      qmemcpy((void *)(a2[2] + 0x1C * a2[4]++), v22, 0x1Cu);
      ++v21;
    }
    while ( v21 < *(this + 4) );
    v3 = a2;
  }
  v18 = v3[5];
  if ( v18 == *(this + 5) )
  {
    LOWORD(v19) = *((_WORD *)this + 0xC);
    *((_WORD *)v3 + 0xC) = v19;
  }
  else
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(unsigned int, int))v18)(v18, 1);
    }
    v19 = *(this + 5);
    v3[5] = v19;
    if ( v19 )
      LOWORD(v19) = InterlockedIncrement((volatile LONG *)(v19 + 4));
    *((_WORD *)v3 + 0xC) = *((_WORD *)this + 0xC);
  }
  return v19;
}
