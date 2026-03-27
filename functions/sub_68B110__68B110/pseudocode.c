void __thiscall sub_68B110(float **this)
{
  if ( !*((_BYTE *)this + 4) )
  {
    if ( *this )
    {
      if ( GetTeleportExtraData(*this) )
      {
        if ( *((_BYTE *)this + 4) )
          sub_4D76F0(0);
        else
          sub_4D76F0(*this);
      }
      else if ( *((_BYTE *)this + 4) )
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)0 + 0x174))(0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x174))(*this);
      }
    }
  }
}
