void __thiscall BSCullingProcess_Culling(BSCullingProcess *this, NiAVObject *a2)
{
  if ( this->unk90 )
    NiCullingProcess_Culling_(this, a2);
  else
    a2->vtbl->OnVisible(a2, &this->super);
}
