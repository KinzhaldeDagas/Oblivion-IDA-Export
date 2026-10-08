MEF_RefListNode32 *__thiscall sub_708F90(unsigned __int16 *this, _DWORD *a2)
{
  unsigned __int16 *v2; // esi
  MEF_RefListNode32 *result; // eax
  MEF_RefListNode32 *v4; // ebx
  MEF_RefListNode32 *v5; // edi
  int (__thiscall *v6)(_DWORD *); // edx
  _DWORD *v7; // esi
  int v8; // ecx

  v2 = this; /*0x708f97*/
  result = sub_7081B0(this, a2); /*0x708f9e*/
  if ( a2[0x36] >= 0xA00010Eu ) /*0x708fad*/
  {
    result = (MEF_RefListNode32 *)sub_7124D0(a2); /*0x708fb2*/
    v4 = result; /*0x708fb7*/
    while ( v4 ) /*0x708fbb*/
    {
      v4 = (MEF_RefListNode32 *)((char *)v4 + 0xFFFFFFFF); /*0x708fc2*/
      result = (MEF_RefListNode32 *)sub_7124A0(a2); /*0x708fc5*/
      v5 = result; /*0x708fca*/
      if ( result ) /*0x708fce*/
      {
        v6 = *(int (__thiscall **)(_DWORD *))(*((_DWORD *)v2 + 0x33) + 4); /*0x708fd6*/
        v7 = v2 + 0x66; /*0x708fd9*/
        result = (MEF_RefListNode32 *)v6(v7); /*0x708fe1*/
        result->payload = v5; /*0x708fe3*/
        result->previous = 0; /*0x708fe6*/
        result->next = (struct MEF_RefListNode32 *)v7[1]; /*0x708ff0*/
        v8 = v7[1]; /*0x708ff2*/
        if ( v8 ) /*0x708ff7*/
          *(_DWORD *)(v8 + 4) = result; /*0x708ff9*/
        else
          v7[2] = result; /*0x708ffe*/
        ++v7[3]; /*0x709001*/
        v7[1] = result; /*0x709005*/
        v2 = this; /*0x709008*/
      }
    }
  }
  return result; /*0x709013*/
}
