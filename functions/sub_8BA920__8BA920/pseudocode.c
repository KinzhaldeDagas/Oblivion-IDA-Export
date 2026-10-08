int __thiscall sub_8BA920(hkVector4 **this, _BYTE *a2)
{
  FreeEntry *v3; // eax
  unsigned __int8 v4; // cl
  char *v5; // eax
  bool v6; // zf
  int v8; // [esp+0h] [ebp-10h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( *(this + 3) ) /*0x8ba92c*/
  {
    *a2 = 0; /*0x8ba9a5*/
    return (int)*(this + 3); /*0x8ba9a8*/
  }
  else
  {
    v3 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000050uLL, v8); /*0x8ba93f*/
    v4 = 0x10 - ((unsigned __int8)v3 & 0xF); /*0x8ba94b*/
    v5 = (char *)v3 + v4; /*0x8ba950*/
    v5[0xFFFFFFFF] = v4; /*0x8ba952*/
    *((_DWORD *)v5 + 3) = 0; /*0x8ba955*/
    *((_DWORD *)v5 + 4) = 0; /*0x8ba95c*/
    *((_DWORD *)v5 + 5) = 0x80000000; /*0x8ba963*/
    *(_DWORD *)v5 = 0; /*0x8ba96d*/
    *((_DWORD *)v5 + 1) = 0; /*0x8ba973*/
    v5[8] = 2; /*0x8ba97a*/
    *((_OWORD *)v5 + 2) = 0; /*0x8ba97e*/
    *((_OWORD *)v5 + 3) = 0; /*0x8ba982*/
    v6 = *(this + 2) == 0; /*0x8ba986*/
    *(this + 3) = (hkVector4 *)v5; /*0x8ba98a*/
    if ( !v6 ) /*0x8ba98d*/
      sub_8BA6F0(this, (hkVector4 *)v5); /*0x8ba992*/
    *a2 = 1; /*0x8ba997*/
    return (int)*(this + 3); /*0x8ba99a*/
  }
}
