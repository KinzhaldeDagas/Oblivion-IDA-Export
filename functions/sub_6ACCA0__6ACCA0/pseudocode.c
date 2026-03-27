_DWORD *__thiscall sub_6ACCA0(_DWORD *this, _DWORD *a3, int ArgList)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // ebp
  _DWORD *v7; // [esp+10h] [ebp-4h] BYREF

  v4 = (_DWORD *)*(this + 0xC0);
  v7 = 0;
  if ( !NiTMap_GetAt(v4, ArgList, &v7) )
    goto LABEL_4;
  v5 = v7;
  if ( v7 != a3 )
  {
    PrintError("AudioID Collision(%i)", ArgList);
    sub_6B6AC0(v5);
    sub_6AC9F0(this, ArgList);
LABEL_4:
    NiTMap_SetAt((_DWORD *)*(this + 0xC0), ArgList, (int)a3);
  }
  return a3;
}
