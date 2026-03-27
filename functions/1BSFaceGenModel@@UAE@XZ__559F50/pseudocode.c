void __thiscall BSFaceGenModel::~BSFaceGenModel(BSFaceGenModel *this)
{
  unsigned int *v2; // edi
  unsigned int v3; // edi

  *(_DWORD *)this = &BSFaceGenModel::`vftable';
  v2 = *((unsigned int **)this + 2);
  if ( v2 )
  {
    sub_559CE0(v2);
    FormHeapFree((unsigned int)v2);
  }
  v3 = *((_DWORD *)this + 3);
  if ( v3 )
  {
    sub_559E90(*((unsigned int **)this + 3));
    FormHeapFree(v3);
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
