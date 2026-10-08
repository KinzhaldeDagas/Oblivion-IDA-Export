_DWORD *__thiscall sub_713400(unsigned __int16 *this)
{
  NiTArray_NiTexturingPropertyMap *v2; // ebp
  int v3; // edi
  _DWORD *result; // eax
  bool v5; // zf
  int v6; // ecx
  _DWORD *v7; // ebx
  _DWORD *v8; // ecx
  unsigned int end; // edi
  bool v10; // cf
  unsigned int i; // ebx
  int v12; // ecx
  _DWORD *v13; // edi
  int v14; // ecx
  int v15; // ebp
  int v16; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v17; // [esp+14h] [ebp-4h] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)(this + 0x64); /*0x713409*/
  NiTArray_SetSize(this + 0x64, 1u); /*0x713413*/
  v3 = 0; /*0x71341c*/
  v16 = 0; /*0x713422*/
  result = (_DWORD *)NiTArray_SetAt(v2, 0, &v16); /*0x713426*/
  v5 = *((_DWORD *)this + 0x7E) == 0; /*0x71342b*/
  v16 = 0; /*0x713431*/
  if ( !v5 ) /*0x713435*/
  {
    do /*0x7134c2*/
    {
      v6 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * v3); /*0x713446*/
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x44))(v6); /*0x71344e*/
      v7 = result; /*0x713450*/
      v17 = result; /*0x713454*/
      if ( result ) /*0x713458*/
      {
        result = 0; /*0x713461*/
        if ( !*(this + 0x69) ) /*0x71345a*/
          goto LABEL_9; /*0x71345a*/
        v8 = *((_DWORD **)this + 0x33); /*0x713467*/
        while ( v7 != (_DWORD *)*v8 ) /*0x713472*/
        {
          result = (_DWORD *)((char *)result + 1); /*0x713474*/
          ++v8; /*0x713477*/
          if ( (unsigned int)result >= *(this + 0x69) ) /*0x71347c*/
            goto LABEL_9; /*0x71347c*/
        }
        if ( !result ) /*0x713482*/
        {
LABEL_9:
          end = v2->end; /*0x713484*/
          if ( end >= v2->capacity ) /*0x71348e*/
            NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x713499*/
          result = (_DWORD *)NiTArray_SetAt(v2, end, &v17); /*0x7134a6*/
          v3 = v16; /*0x7134ab*/
          *v7 = 0; /*0x7134af*/
        }
      }
      v10 = (unsigned int)++v3 < *((_DWORD *)this + 0x7E); /*0x7134b8*/
      v16 = v3; /*0x7134be*/
    }
    while ( v10 ); /*0x7134c2*/
  }
  for ( i = 0; i < *((_DWORD *)this + 0x7E); ++i ) /*0x7134ca*/
  {
    v12 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * i); /*0x7134d8*/
    result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x44))(v12); /*0x7134e0*/
    v13 = result; /*0x7134e2*/
    if ( result ) /*0x7134e6*/
    {
      v14 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * i); /*0x7134ee*/
      v15 = *result; /*0x7134f6*/
      result = (_DWORD *)(v15 + (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x40))(v14)); /*0x7134fa*/
      *v13 = result; /*0x7134fc*/
    }
  }
  return result; /*0x713509*/
}
