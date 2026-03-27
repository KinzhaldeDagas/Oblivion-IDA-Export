BSFaceGenModel *__thiscall BSFaceGenModel::BSFaceGenModel(BSFaceGenModel *this)
{
  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &BSFaceGenModel::`vftable';
  return this;
}
