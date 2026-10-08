void __thiscall sub_68B390(NiDX92DBufferData **this, void *a2)
{
  char *v3; // eax

  v3 = (char *)OblivionDynamicCast( /*0x68b3a7*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&PathLow `RTTI Type Descriptor',
                 &PathMiddleHigh `RTTI Type Descriptor',
                 0);
  if ( v3 ) /*0x68b3b1*/
    sub_68C6F0(this + 5, (NiSurfaceData *)(v3 + 0x14)); /*0x68b3ba*/
  sub_68AA20((TravelPath *)this, (int)a2); /*0x68b3c2*/
}
