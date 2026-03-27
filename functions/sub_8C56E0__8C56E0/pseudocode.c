int __thiscall sub_8C56E0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  Ni2DBuffer *v4; // eax
  char v6; // [esp+Fh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6);
  if ( v3 )
  {
    v4 = (Ni2DBuffer *)sub_7124A0(a2);
    NiSmartPointer_Set__((Ni2DBuffer **)(v3 + 4), v4);
  }
  return sub_8A2600(this, (int)a2);
}
