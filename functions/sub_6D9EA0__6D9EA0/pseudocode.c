int *__thiscall sub_6D9EA0(int *this, int *a2, float a3, float a4)
{
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebp
  unsigned int v7; // eax
  int v8; // ecx
  int v10; // [esp+28h] [ebp-1Ch] BYREF
  int v11; // [esp+2Ch] [ebp-18h] BYREF
  int v12; // [esp+30h] [ebp-14h]
  int v13; // [esp+34h] [ebp-10h] BYREF
  int v14; // [esp+40h] [ebp-4h]

  v14 = 0; /*0x6d9ed0*/
  v12 = 0; /*0x6d9ed4*/
  v5 = *sub_700790(this, &v13); /*0x6d9edd*/
  *a2 = v5; /*0x6d9ee5*/
  if ( v5 ) /*0x6d9ee7*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6d9eed*/
  v6 = (void (__thiscall ***)(_DWORD, int))v13; /*0x6d9ef3*/
  v14 = 0; /*0x6d9ef9*/
  v12 = 1; /*0x6d9efd*/
  if ( v13 ) /*0x6d9f05*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x6d9f0b*/
    {
      if ( v6 ) /*0x6d9f17*/
        (**v6)(v6, 1); /*0x6d9f22*/
    }
  }
  v7 = *(this + 2); /*0x6d9f24*/
  if ( v7 ) /*0x6d9f29*/
  {
    v8 = *(this + 4); /*0x6d9f34*/
    v11 = 0; /*0x6d9f43*/
    v10 = 0; /*0x6d9f4b*/
    NiAnimationKey_CopyRangeRebased(1, v8, (float *)*(this + 3), v7, a3, a4, (int **)&v11, &v10); /*0x6d9f5a*/
    sub_6D9E40((_DWORD *)*a2, v11, v10, *(this + 4)); /*0x6d9f72*/
  }
  return a2; /*0x6d9f79*/
}
