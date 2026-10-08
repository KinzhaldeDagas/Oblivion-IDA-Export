void __thiscall sub_68B240(int *this, int a2)
{
  char v3; // al
  int v4; // ebx
  char v5; // cl
  const NiPoint3 *v6; // esi

  if ( a2 ) /*0x68b24a*/
  {
    v3 = *((_BYTE *)this + 4); /*0x68b24c*/
    v4 = *(char *)(a2 + 4); /*0x68b250*/
    if ( v3 != v4 ) /*0x68b259*/
    {
      if ( v3 == 1 ) /*0x68b25d*/
        FormHeapFree(*this); /*0x68b262*/
      *this = 0; /*0x68b26a*/
      *((_BYTE *)this + 4) = v4; /*0x68b270*/
    }
    v5 = *(_BYTE *)(a2 + 4); /*0x68b273*/
    if ( v5 ) /*0x68b27d*/
    {
      if ( v5 == 1 ) /*0x68b282*/
      {
        if ( v5 != 1 || (v6 = *(const NiPoint3 **)a2) == 0 ) /*0x68b289*/
          v6 = &g_zeroNiPoint3; /*0x68b28f*/
        TravelPathNode_SetOwnedPosition((TravelPathNode *)this, v6); /*0x68b297*/
      }
    }
    else if ( !*((_BYTE *)this + 4) ) /*0x68b2ab*/
    {
      *this = *(_DWORD *)a2; /*0x68b2b1*/
    }
  }
}
