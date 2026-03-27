void __userpurge sub_6286B0(int this@<ecx>, double a2@<st0>, Actor *a1)
{
  int v3; // eax

  v3 = *(_DWORD *)(this + 0x2BC);
  if ( v3 == 1 || v3 == 3 )
  {
    __asm { fld1 }
    *(_DWORD *)(this + 0x2BC) = 0;
    __asm { fstp    dword ptr [ecx+2C0h] }
    *(float *)(this + 0x2C0) = _ET1;
    sub_5EE1B0(a1, a2);
  }
}
