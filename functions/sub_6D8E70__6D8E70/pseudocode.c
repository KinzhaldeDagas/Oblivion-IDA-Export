int *__thiscall sub_6D8E70(int *this, int *a2, float a3, float a4)
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

  v14 = 0; /*0x6d8ea0*/
  v12 = 0; /*0x6d8ea4*/
  v5 = *sub_700790(this, &v13); /*0x6d8ead*/
  *a2 = v5; /*0x6d8eb5*/
  if ( v5 ) /*0x6d8eb7*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6d8ebd*/
  v6 = (void (__thiscall ***)(_DWORD, int))v13; /*0x6d8ec3*/
  v14 = 0; /*0x6d8ec9*/
  v12 = 1; /*0x6d8ecd*/
  if ( v13 ) /*0x6d8ed5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x6d8edb*/
    {
      if ( v6 ) /*0x6d8ee7*/
        (**v6)(v6, 1); /*0x6d8ef2*/
    }
  }
  v7 = *(this + 2); /*0x6d8ef4*/
  if ( v7 ) /*0x6d8ef9*/
  {
    v8 = *(this + 4); /*0x6d8f04*/
    v11 = 0; /*0x6d8f13*/
    v10 = 0; /*0x6d8f1b*/
    NiAnimationKey_CopyRangeRebased(2, v8, (float *)*(this + 3), v7, a3, a4, (int **)&v11, &v10); /*0x6d8f2a*/
    sub_6D8E10((_DWORD *)*a2, v11, v10, *(this + 4)); /*0x6d8f42*/
  }
  return a2; /*0x6d8f49*/
}
