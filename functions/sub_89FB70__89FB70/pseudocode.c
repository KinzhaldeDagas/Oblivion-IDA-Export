_DWORD *__thiscall sub_89FB70(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  _DWORD *result; // eax
  int v10; // edi
  int v11; // edi
  const char **v12; // eax
  char *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ecx
  char *v16; // [esp+Ch] [ebp-8Ch] BYREF
  unsigned int v17; // [esp+10h] [ebp-88h] BYREF
  char v18[128]; // [esp+14h] [ebp-84h] BYREF

  sub_89D820(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7D38);
  v4 = a2[5];
  v5 = a2[4];
  v16 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v16);
  if ( this && (v6 = *(this + 2)) != 0 && (v7 = v6 + 0x14) != 0 )
    v8 = *(_DWORD *)(v7 + 0x1C);
  else
    v8 = 0;
  v17 = v8;
  result = (_DWORD *)sub_8A9100(&v17, a2);
  if ( this
    && (v10 = *(this + 2)) != 0
    && (result = (_DWORD *)(v10 + 0x14), v10 != 0xFFFFFFEC)
    && (result = (_DWORD *)*result) != 0 )
  {
    v11 = result[2];
  }
  else
  {
    v11 = 0;
  }
  if ( v11 )
  {
    v12 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
    _sprintf(v18, "%s: 0x%8X", *v12, v11);
    v13 = TESOutput_PrintLabeledString("Shape", v18);
    v14 = a2[5];
    v15 = a2[4];
    v16 = v13;
    if ( v14 >= v15 )
      NiTArray_SetSize(a2, v14 + a2[7]);
    return (_DWORD *)NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v14, &v16);
  }
  return result;
}
