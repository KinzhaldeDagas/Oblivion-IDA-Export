char __thiscall sub_88CC80(_BYTE *this, NiObjectNET *a2, char a3, char a4, int a5, char a6)
{
  NiObject *v7; // eax
  bool v8; // zf
  void (__cdecl *v9)(int, int); // eax
  BOOL v10; // eax
  void (__cdecl *v11)(int, int); // eax
  _BYTE *v13; // [esp+Ch] [ebp-1Ch] BYREF
  char v14; // [esp+10h] [ebp-18h]
  int v15; // [esp+14h] [ebp-14h]
  BOOL v16; // [esp+18h] [ebp-10h]
  int v17; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h]
  int v19; // [esp+24h] [ebp-4h]

  if ( !a2 )
    return 0;
  if ( !a6 )
  {
    v7 = sub_6FA970(a2);
    if ( !v7 || (v7[1].members.m_uiRefCount & 2) == 0 )
      return 0;
  }
  *(this + 0x18) = 1;
  v8 = byte_BA7908 == 0;
  v13 = this;
  v14 = a3;
  if ( !v8 )
  {
    v9 = (void (__cdecl *)(int, int))off_B2E328;
    v8 = off_B2E328 == 0;
    v15 = 0xA;
    if ( !v8 )
      sub_88A7D0(a2, (int)&v13, v9);
  }
  v10 = a4 != 0;
  if ( !a2[7].vtbl )
    v10 = 0;
  v16 = v10;
  v11 = (void (__cdecl *)(int, int))off_B2E300;
  v8 = off_B2E300 == 0;
  v15 = 0;
  v17 = a5;
  v18 = 0;
  v19 = 1;
  if ( !v8 )
    sub_88A7D0(a2, (int)&v13, v11);
  return 1;
}
