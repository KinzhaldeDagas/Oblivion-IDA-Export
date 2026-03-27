_DWORD *__thiscall sub_6C4E50(int *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  _DWORD *result; // eax
  Ni2DBuffer *v6; // eax
  int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_715F40(this, (signed int)a2);
  v7 = v2[0x87];
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v7 + 4);
  v8 = 1;
  v4(v7, &a2, 1, &v8, 1);
  *((_BYTE *)this + 0x6C) = (_BYTE)a2 != 0;
  result = (_DWORD *)sub_712AE0(v2);
  if ( v2[0x36] >= 0xA010068u )
  {
    v6 = (Ni2DBuffer *)sub_712A90(v2);
    return NiSmartPointer_Set__((Ni2DBuffer **)this + 0x1F, v6);
  }
  return result;
}
