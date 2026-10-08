void __thiscall bhkSphereShapeProbeCollector_GetPhantomTransform(int *this, int *a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax

  v3 = *(this + 0x68); /*0x5354c3*/
  if ( v3 ) /*0x5354cb*/
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x5C))(v3, a2); /*0x5354d8*/
    if ( a2 ) /*0x5354dc*/
    {
      v4 = *(this + 0x68); /*0x5354de*/
      v5 = sub_8AEB80(0x58u, 0xADu, 0x56u, 0xFu); /*0x5354ef*/
      sub_88BB60(a2, v4, v5); /*0x5354fb*/
    }
  }
}
