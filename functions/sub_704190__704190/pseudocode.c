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

  *(_DWORD *)this = &NiTexturingProperty::Map::`vftable'; /*0x7041c0*/
  *(this + 2) = *(_WORD *)(a2 + 4); /*0x7041ca*/
  v3 = *(_DWORD *)(a2 + 8); /*0x7041ce*/
  *((_DWORD *)this + 2) = v3; /*0x7041d5*/
  if ( v3 ) /*0x7041d8*/
    InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x7041de*/
  v4 = *(_DWORD *)(a2 + 0xC) == 0; /*0x7041e4*/
  v13 = 0; /*0x7041e7*/
  if ( v4 ) /*0x7041eb*/
  {
    *((_DWORD *)this + 3) = 0; /*0x70426b*/
  }
  else
  {
    v5 = FormHeapAlloc(0x48u); /*0x7041ef*/
    LOBYTE(v13) = 1; /*0x7041fd*/
    if ( v5 ) /*0x704202*/
    {
      v6 = *(_DWORD **)(a2 + 0xC); /*0x704204*/
      v7 = v6[0x11]; /*0x70420a*/
      v10[0] = v6[5]; /*0x70420d*/
      v10[1] = v6[6]; /*0x704214*/
      v8 = *(_DWORD *)(a2 + 0xC); /*0x70421e*/
      v11[0] = *(_DWORD *)(v8 + 0xC); /*0x704221*/
      v11[1] = *(_DWORD *)(v8 + 0x10); /*0x704228*/
      v14 = *(float *)(v8 + 8); /*0x704231*/
      v12[0] = *(_DWORD *)v8; /*0x704239*/
      v12[1] = *(_DWORD *)(v8 + 4); /*0x704246*/
      *((_DWORD *)this + 3) = sub_72FF40(v5, v12, v14, v11, v10, v7); /*0x70425f*/
    }
    else
    {
      *((_DWORD *)this + 3) = 0; /*0x704266*/
    }
  }
  return this; /*0x704270*/
}
