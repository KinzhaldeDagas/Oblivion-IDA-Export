void __thiscall sub_6D8510(NiRenderer *this, signed int a2)
{
  unsigned int *v2; // ebx
  void (__cdecl *v4)(unsigned int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, unsigned int *, int, signed int *, int); // eax
  int *p_propertyState; // esi
  unsigned int i; // edi
  signed int v8; // eax
  unsigned int v9; // [esp-14h] [ebp-24h]
  unsigned int v10; // [esp-14h] [ebp-24h]
  unsigned int v11; // [esp+Ch] [ebp-4h] BYREF

  v2 = (unsigned int *)a2; /*0x6d8512*/
  sub_7008A0(this, a2); /*0x6d851b*/
  this->members.accumulator = 0; /*0x6d8526*/
  sub_713620(v2, (int)&this->members.accumulator); /*0x6d852c*/
  v9 = v2[0x87]; /*0x6d8548*/
  v4 = *(void (__cdecl **)(unsigned int, UInt32 *, int, signed int *, int))(v9 + 4); /*0x6d8549*/
  a2 = 4; /*0x6d854c*/
  v4(v9, &this->members.pad014[7], 4, &a2, 1); /*0x6d8550*/
  sub_712A20(v2); /*0x6d8557*/
  v10 = v2[0x87]; /*0x6d856f*/
  v5 = *(void (__cdecl **)(unsigned int, unsigned int *, int, signed int *, int))(v10 + 4); /*0x6d8570*/
  a2 = 4; /*0x6d8573*/
  v5(v10, &v11, 4, &a2, 1); /*0x6d8577*/
  p_propertyState = (int *)&this->members.propertyState; /*0x6d8580*/
  NiTArray_SetSize((unsigned __int16 *)p_propertyState, v11); /*0x6d8586*/
  for ( i = 0; i < v11; ++i ) /*0x6d8591*/
  {
    a2 = 0; /*0x6d859a*/
    sub_713620(v2, (int)&a2); /*0x6d85a2*/
    v8 = a2; /*0x6d85ad*/
    if ( i < *((unsigned __int16 *)p_propertyState + 5) ) /*0x6d85b1*/
    {
      if ( a2 ) /*0x6d85c7*/
      {
        if ( !*(_DWORD *)(p_propertyState[1] + 4 * i) ) /*0x6d85cc*/
          ++*((_WORD *)p_propertyState + 6); /*0x6d85d2*/
      }
      else if ( *(_DWORD *)(p_propertyState[1] + 4 * i) ) /*0x6d85dc*/
      {
        --*((_WORD *)p_propertyState + 6); /*0x6d85e2*/
      }
    }
    else
    {
      *((_WORD *)p_propertyState + 5) = i + 1; /*0x6d85b8*/
      if ( v8 ) /*0x6d85bc*/
        ++*((_WORD *)p_propertyState + 6); /*0x6d85be*/
    }
    *(_DWORD *)(p_propertyState[1] + 4 * i) = v8; /*0x6d85ed*/
    sub_712A20(v2); /*0x6d85f0*/
  }
}
