_WORD *__thiscall sub_719D40(unsigned __int16 **this, unsigned __int16 a2, _WORD *a3, _WORD *a4, _WORD *a5)
{
  int v5; // edx
  unsigned __int16 *v6; // ebx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // si
  unsigned __int16 v9; // ax
  int v10; // edi
  int v11; // eax
  __int16 v12; // cx
  __int16 v13; // dx

  v5 = (int)*(this + 0x13);
  v6 = *(this + 0x12);
  v7 = a2;
  v8 = *v6;
  v9 = *v6 - 2;
  v10 = 0;
  if ( a2 >= v9 )
  {
    do
    {
      v7 -= v9;
      v5 += 2 * v8;
      v8 = v6[(unsigned __int16)++v10];
      v9 = v8 - 2;
    }
    while ( v7 >= (unsigned __int16)(v8 - 2) );
  }
  v11 = v7;
  if ( (v7 & 1) != 0 )
  {
    *a3 = *(_WORD *)(v5 + 2 * v7 + 2);
    v12 = *(_WORD *)(v5 + 2 * v7);
  }
  else
  {
    *a3 = *(_WORD *)(v5 + 2 * v7);
    v12 = *(_WORD *)(v5 + 2 * v7 + 2);
  }
  *a4 = v12;
  v13 = *(_WORD *)(v5 + 2 * v11 + 4);
  *a5 = v13;
  return a5;
}
