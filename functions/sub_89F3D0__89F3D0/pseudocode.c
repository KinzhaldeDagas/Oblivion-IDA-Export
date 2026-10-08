//
// [Collision v143 ownership] Phantom UpdateRefcount retains/releases the Ni wrapper reached through hkPhantom+14 shape -> hkShape+08 userData. Together with transform8A1EE0 and list8A1390/13E0, this supports scoped temporary Ni owners during construction and native scene ownership after attachment.
int __thiscall sub_89F3D0(_DWORD *this, char a2)
{
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax

  if ( a2 ) /*0x89f3da*/
  {
    if ( this && (v3 = *(this + 2)) != 0 && (v4 = (int *)(v3 + 0x14)) != 0 && (v5 = *v4) != 0 ) /*0x89f3f0*/
      v6 = *(_DWORD *)(v5 + 8); /*0x89f3f2*/
    else
      v6 = 0; /*0x89f3f7*/
    if ( v6 ) /*0x89f3fb*/
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x89f401*/
    v7 = this; /*0x89f407*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 0x60))(this); /*0x89f411*/
    v8 = *(this + 2); /*0x89f413*/
    if ( v8 && (v9 = (int *)(v8 + 0x14)) != 0 && (v10 = *v9) != 0 ) /*0x89f423*/
      v11 = *(_DWORD *)(v10 + 8); /*0x89f425*/
    else
      v11 = 0; /*0x89f42a*/
    if ( v11 ) /*0x89f42e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x89f434*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x89f446*/
    }
    v7 = 0; /*0x89f448*/
  }
  if ( this ) /*0x89f44d*/
  {
    v12 = *(this + 2); /*0x89f44f*/
    if ( v12 ) /*0x89f454*/
      *(_DWORD *)(v12 + 0xC) = v7; /*0x89f456*/
  }
  return sub_89D430(this, a2); /*0x89f461*/
}
