int __thiscall bhkSphereShapeProbeCollector_GetWorldFromPhantom(_DWORD *this)
{
  int v1; // ecx
  int result; // eax
  int v3; // eax

  v1 = *(this + 0x68); /*0x535510*/
  result = 0; /*0x535516*/
  if ( v1 ) /*0x53551a*/
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 0x58))(v1); /*0x535521*/
    if ( v3 ) /*0x535525*/
      return *(_DWORD *)(v3 + 0x2B0); /*0x535527*/
    else
      return 0; /*0x53552e*/
  }
  return result; /*0x53552d*/
}
