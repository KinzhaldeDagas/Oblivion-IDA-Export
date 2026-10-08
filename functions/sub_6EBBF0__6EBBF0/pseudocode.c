int __thiscall sub_6EBBF0(_DWORD **this)
{
  if ( !bNiParallelWaitFallback_0B3F944 && (*(this + 4))[1] > 1u ) /*0x6ebc03*/
    (*(void (__thiscall **)(_DWORD))(**(this + 3) + 0x68))(*(this + 3)); /*0x6ebc0d*/
  return ((int (__thiscall *)(_DWORD **))(*this)[0x15])(this);// 3DTheft decode 2026-05-16: NiGeomMorpherUpdateTask::Run also gates work on byte_B3F944 before invoking the morpher update vfunc +0x68.
}
