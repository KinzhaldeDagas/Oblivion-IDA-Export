// Oblivion BSCullingProcess destructor restores its base culling-process state; no separate visible-array allocation is released here.
void __thiscall BSCullingProcess::~BSCullingProcess(BSCullingProcess *this)
{
  this->super.vtbl = (NiCullingProcessVtbl *)&NiCullingProcess::`vftable'; /*0x70dfa0*/
}
