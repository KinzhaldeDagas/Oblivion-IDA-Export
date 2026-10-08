void __thiscall sub_8CACE0(_DWORD *this, int a2)
{
  int v3; // ecx

  if ( *(this + 0xFFFFFFEE) ) /*0x8cace3*/
  {
    v3 = *(_DWORD *)(a2 + 0xC); /*0x8cacef*/
    if ( v3 ) /*0x8cacf4*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xC))(v3) != 0xB ) /*0x8cacfe*/
        sub_8CA1D0((int *)*(this + 0xFFFFFFEE), a2); /*0x8cad04*/
    }
  }
}
