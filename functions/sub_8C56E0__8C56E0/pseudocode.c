int __thiscall sub_8C56E0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  Ni2DBuffer *v4; // eax
  char v6; // [esp+Fh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6); /*0x8c56f8*/
  if ( v3 ) /*0x8c56fc*/
  {
    v4 = (Ni2DBuffer *)sub_7124A0(a2); /*0x8c5700*/
    NiSmartPointer_Set__((Ni2DBuffer **)(v3 + 4), v4); /*0x8c5709*/
  }
  return sub_8A2600(this, (int)a2); /*0x8c5716*/
}
