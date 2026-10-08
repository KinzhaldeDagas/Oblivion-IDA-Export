// Verified (Oblivion): returns the NodeVoid::data pointer through outData and increments its NiRefObject reference count when non-null. ActorProcessManager temp-effect iterators use this helper to hold each effect while inspecting it, then release that temporary reference.
void **__thiscall NodeVoid_GetDataAddRef(NodeVoid *this, void **outData)
{
  volatile LONG *data; // eax
  bool v3; // zf

  data = (volatile LONG *)this->data; /*0x677c71*/
  v3 = this->data == 0; /*0x677c73*/
  *outData = this->data; /*0x677c82*/
  if ( !v3 ) /*0x677c84*/
    InterlockedIncrement(data + 1); /*0x677c8a*/
  return outData; /*0x677c92*/
}
