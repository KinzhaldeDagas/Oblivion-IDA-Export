int *__thiscall sub_6E8920(int *this, int *a2, float a3, float a4)
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

  v14 = 0; /*0x6e8950*/
  v12 = 0; /*0x6e8954*/
  v5 = *sub_700790(this, &v13); /*0x6e895d*/
  *a2 = v5; /*0x6e8965*/
  if ( v5 ) /*0x6e8967*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6e896d*/
  v6 = (void (__thiscall ***)(_DWORD, int))v13; /*0x6e8973*/
  v14 = 0; /*0x6e8979*/
  v12 = 1; /*0x6e897d*/
  if ( v13 ) /*0x6e8985*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x6e898b*/
    {
      if ( v6 ) /*0x6e8997*/
        (**v6)(v6, 1); /*0x6e89a2*/
    }
  }
  v7 = *(this + 2); /*0x6e89a4*/
  if ( v7 ) /*0x6e89a9*/
  {
    v8 = *(this + 4); /*0x6e89b4*/
    v11 = 0; /*0x6e89c3*/
    v10 = 0; /*0x6e89cb*/
    NiAnimationKey_CopyRangeRebased(5, v8, (float *)*(this + 3), v7, a3, a4, (int **)&v11, &v10); /*0x6e89da*/
    sub_6E88C0((_DWORD *)*a2, v11, v10, *(this + 4)); /*0x6e89f2*/
  }
  return a2; /*0x6e89f9*/
}
