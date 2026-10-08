LONG __thiscall sub_6E3D80(char *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // edi
  LONG v5; // ebx

  sub_6EC2B0((int)a2); /*0x6e3d8a*/
  sub_715420(this + 0xC, (signed int)a2); /*0x6e3d93*/
  result = sub_712A90(a2); /*0x6e3d9a*/
  v4 = *((_DWORD *)this + 7); /*0x6e3d9f*/
  v5 = result; /*0x6e3da2*/
  if ( v4 != result ) /*0x6e3da6*/
  {
    if ( v4 ) /*0x6e3daa*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x6e3db0*/
      if ( !result ) /*0x6e3db8*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x6e3dc6*/
    }
    *((_DWORD *)this + 7) = v5; /*0x6e3dca*/
    if ( v5 ) /*0x6e3dcd*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6e3dd3*/
  }
  return result; /*0x6e3dd9*/
}
