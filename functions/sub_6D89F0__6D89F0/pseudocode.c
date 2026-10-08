UInt32 *__cdecl sub_6D89F0(UInt32 *a1, _DWORD *a2, unsigned int a3, char *Src)
{
  bool v4; // cf
  NiSequence *v5; // eax
  UInt32 v6; // esi
  Ni2DBuffer *v8; // eax
  UInt32 v9; // [esp+10h] [ebp-14h] BYREF
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v10 = 0; /*0x6d8a18*/
  v9 = 0; /*0x6d8a20*/
  v4 = a2[0x36] < 0x4010003u; /*0x6d8a28*/
  v11 = 1; /*0x6d8a3f*/
  if ( v4 ) /*0x6d8a43*/
  {
    v5 = sub_6D8730(a2, a3, Src); /*0x6d8a48*/
    if ( !v5 ) /*0x6d8a52*/
    {
LABEL_8:
      *a1 = 0; /*0x6d8ab6*/
      v10 = 1; /*0x6d8ac2*/
      LOBYTE(v11) = 0; /*0x6d8ac6*/
      return a1; /*0x6d8af8*/
    }
    v6 = (UInt32)v5; /*0x6d8a54*/
    v9 = (UInt32)v5; /*0x6d8a5a*/
    InterlockedIncrement((volatile LONG *)v5 + 1); /*0x6d8a5e*/
  }
  else
  {
    if ( a3 >= a2[0x84] ) /*0x6d8a6e*/
    {
      *a1 = 0; /*0x6d8a74*/
      return a1; /*0x6d8a8c*/
    }
    v8 = (Ni2DBuffer *)NiRTTI_Cast((BSStringT *)&stru_B3DB20, *(NiObject **)(a2[0x82] + 4 * a3)); /*0x6d8a9c*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v9, v8); /*0x6d8aa9*/
    v6 = v9; /*0x6d8aae*/
  }
  if ( !v6 ) /*0x6d8ab4*/
    goto LABEL_8; /*0x6d8ab4*/
  if ( Src ) /*0x6d8afb*/
    sub_6D7E10((unsigned int *)v6, Src); /*0x6d8b00*/
  *a1 = v6; /*0x6d8b0d*/
  InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x6d8b10*/
  v10 = 1; /*0x6d8b17*/
  LOBYTE(v11) = 0; /*0x6d8b1f*/
  if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x6d8b24*/
    (**(void (__thiscall ***)(UInt32, int))v6)(v6, 1); /*0x6d8b36*/
  return a1; /*0x6d8a7a*/
}
