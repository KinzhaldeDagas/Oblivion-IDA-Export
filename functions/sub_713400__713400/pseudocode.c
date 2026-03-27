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

  v2 = (NiTArray_NiTexturingPropertyMap *)(this + 0x64);
  NiTArray_SetSize(this + 0x64, 1u);
  v3 = 0;
  v16 = 0;
  result = (_DWORD *)NiTArray_SetAt(v2, 0, &v16);
  v5 = *((_DWORD *)this + 0x7E) == 0;
  v16 = 0;
  if ( !v5 )
  {
    do
    {
      v6 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * v3);
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x44))(v6);
      v7 = result;
      v17 = result;
      if ( result )
      {
        result = 0;
        if ( !*(this + 0x69) )
          goto LABEL_9;
        v8 = *((_DWORD **)this + 0x33);
        while ( v7 != (_DWORD *)*v8 )
        {
          result = (_DWORD *)((char *)result + 1);
          ++v8;
          if ( (unsigned int)result >= *(this + 0x69) )
            goto LABEL_9;
        }
        if ( !result )
        {
LABEL_9:
          end = v2->end;
          if ( end >= v2->capacity )
            NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
          result = (_DWORD *)NiTArray_SetAt(v2, end, &v17);
          v3 = v16;
          *v7 = 0;
        }
      }
      v10 = (unsigned int)++v3 < *((_DWORD *)this + 0x7E);
      v16 = v3;
    }
    while ( v10 );
  }
  for ( i = 0; i < *((_DWORD *)this + 0x7E); ++i )
  {
    v12 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * i);
    result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x44))(v12);
    v13 = result;
    if ( result )
    {
      v14 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * i);
      v15 = *result;
      result = (_DWORD *)(v15 + (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x40))(v14));
      *v13 = result;
    }
  }
  return result;
}
