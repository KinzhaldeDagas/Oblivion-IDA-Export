UInt32 *__cdecl sub_6D89F0(UInt32 *a1, _DWORD *a2, unsigned int a3, char *Src)
{
  bool v4; // cf
  NiSequence *v5; // eax
  UInt32 v6; // esi
  Ni2DBuffer *v8; // eax
  UInt32 v9; // [esp+10h] [ebp-14h] BYREF
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v10 = 0;
  v9 = 0;
  v4 = a2[0x36] < 0x4010003u;
  v11 = 1;
  if ( v4 )
  {
    v5 = sub_6D8730(a2, a3, Src);
    if ( !v5 )
    {
LABEL_8:
      *a1 = 0;
      v10 = 1;
      LOBYTE(v11) = 0;
      return a1;
    }
    v6 = (UInt32)v5;
    v9 = (UInt32)v5;
    InterlockedIncrement((volatile LONG *)v5 + 1);
  }
  else
  {
    if ( a3 >= a2[0x84] )
    {
      *a1 = 0;
      return a1;
    }
    v8 = (Ni2DBuffer *)NiRTTI_Cast(&stru_B3DB20, *(NiObject **)(a2[0x82] + 4 * a3));
    NiSmartPointer_Set__((Ni2DBuffer **)&v9, v8);
    v6 = v9;
  }
  if ( !v6 )
    goto LABEL_8;
  if ( Src )
    sub_6D7E10((unsigned int *)v6, Src);
  *a1 = v6;
  InterlockedIncrement((volatile LONG *)(v6 + 4));
  v10 = 1;
  LOBYTE(v11) = 0;
  if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
    (**(void (__thiscall ***)(UInt32, int))v6)(v6, 1);
  return a1;
}
