// Noope the struct asosciated to the this pointer is bigger
double __thiscall sub_6599B0(TESChildCELL *this)
{
  if ( *((_DWORD *)this + 0x16) )
    return ((double (__thiscall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 0x16) + 0x28))(*((_DWORD *)this + 0x16));
  else
    return flt_A30634;
}
