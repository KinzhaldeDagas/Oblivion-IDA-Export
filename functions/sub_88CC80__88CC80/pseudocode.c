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

  if ( !a2 ) /*0x88cc90*/
    return 0; /*0x88cc90*/
  if ( !a6 ) /*0x88cc9a*/
  {
    v7 = sub_6FA970(a2); /*0x88cc9d*/
    if ( !v7 || (v7[1].members.m_uiRefCount & 2) == 0 ) /*0x88ccb5*/
      return 0; /*0x88cd47*/
  }
  *(this + 0x18) = 1; /*0x88ccbf*/
  v8 = unk_BA7908 == 0; /*0x88ccc3*/
  v13 = this; /*0x88ccc9*/
  v14 = a3; /*0x88cccd*/
  if ( !v8 ) /*0x88ccd1*/
  {
    v9 = (void (__cdecl *)(int, int))off_B2E328; /*0x88ccd3*/
    v8 = off_B2E328 == 0; /*0x88ccd8*/
    v15 = 0xA; /*0x88ccda*/
    if ( !v8 ) /*0x88cce2*/
      sub_88A7D0(a2, (int)&v13, v9); /*0x88cceb*/
  }
  v10 = a4 != 0; /*0x88ccf9*/
  if ( !a2[7].vtbl ) /*0x88ccfc*/
    v10 = 0; /*0x88cd04*/
  v16 = v10; /*0x88cd0a*/
  v11 = (void (__cdecl *)(int, int))off_B2E300; /*0x88cd0e*/
  v8 = off_B2E300 == 0; /*0x88cd13*/
  v15 = 0; /*0x88cd15*/
  v17 = a5; /*0x88cd19*/
  v18 = 0; /*0x88cd1d*/
  v19 = 1; /*0x88cd21*/
  if ( !v8 ) /*0x88cd29*/
    sub_88A7D0(a2, (int)&v13, v11); /*0x88cd32*/
  return 1; /*0x88cd3a*/
}
