int *__thiscall sub_6E46A0(int *this, int *a2, float a3, float a4)
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

  v14 = 0; /*0x6e46d0*/
  v12 = 0; /*0x6e46d4*/
  v5 = *sub_700790(this, &v13); /*0x6e46dd*/
  *a2 = v5; /*0x6e46e5*/
  if ( v5 ) /*0x6e46e7*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6e46ed*/
  v6 = (void (__thiscall ***)(_DWORD, int))v13; /*0x6e46f3*/
  v14 = 0; /*0x6e46f9*/
  v12 = 1; /*0x6e46fd*/
  if ( v13 ) /*0x6e4705*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x6e470b*/
    {
      if ( v6 ) /*0x6e4717*/
        (**v6)(v6, 1); /*0x6e4722*/
    }
  }
  v7 = *(this + 2); /*0x6e4724*/
  if ( v7 ) /*0x6e4729*/
  {
    v8 = *(this + 4); /*0x6e4734*/
    v11 = 0; /*0x6e4743*/
    v10 = 0; /*0x6e474b*/
    NiAnimationKey_CopyRangeRebased(3, v8, (float *)*(this + 3), v7, a3, a4, (int **)&v11, &v10); /*0x6e475a*/
    sub_6E4640((_DWORD *)*a2, v11, v10, *(this + 4)); /*0x6e4772*/
  }
  return a2; /*0x6e4779*/
}
