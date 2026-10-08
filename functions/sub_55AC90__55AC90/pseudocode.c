void __thiscall sub_55AC90(_DWORD **this, int a2, int a3, float a4)
{
  if ( *(this + 2) ) /*0x55ac90*/
  {
    if ( a2 ) /*0x55ac9d*/
    {
      if ( a3 ) /*0x55aca5*/
      {
        if ( a4 >= 0.0 ) /*0x55acb6*/
          (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD))(**(this + 2) + 8))( /*0x55acc8*/
            *(this + 2),
            a2,
            a3,
            0,
            LODWORD(a4));
      }
    }
  }
}
