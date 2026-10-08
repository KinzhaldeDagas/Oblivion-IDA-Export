_DWORD *__thiscall sub_6ACCA0(_DWORD *this, _DWORD *a3, int ArgList)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // ebp
  _DWORD *v7; // [esp+10h] [ebp-4h] BYREF

  v4 = (_DWORD *)*(this + 0xC0); /*0x6accaf*/
  v7 = 0; /*0x6accb7*/
  if ( !NiTMap_GetAt(v4, ArgList, &v7) ) /*0x6accca*/
    goto LABEL_4; /*0x6accca*/
  v5 = v7; /*0x6acccc*/
  if ( v7 != a3 ) /*0x6accd2*/
  {
    PrintError("AudioID Collision(%i)", ArgList); /*0x6accda*/
    sub_6B6AC0(v5); /*0x6acce4*/
    sub_6AC9F0(this, ArgList); /*0x6accec*/
LABEL_4:
    NiTMap_SetAt((_DWORD *)*(this + 0xC0), ArgList, (int)a3); /*0x6accf1*/
  }
  return a3; /*0x6accfe*/
}
