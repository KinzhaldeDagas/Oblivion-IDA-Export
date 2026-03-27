// positive sp value has been detected, the output may be wrong!
int __usercall Actor_ModCurAVf_::CheckHealthDmg@<eax>(
        int a1@<edi>,
        _BYTE *a2@<esi>,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7)
{
  if ( a1 != 8 || a6 >= 0.0 )
    JUMPOUT(0x5E2C8B);
  (*(void (__thiscall **)(_BYTE *, _DWORD, float))(*(_DWORD *)a2 + 0x3B8))(a2, LODWORD(a7), COERCE_FLOAT(LODWORD(a6)));
  return Actor_ModCurAVf_::MarkAsModified(a2, 8, a3, a4, a5);
}
