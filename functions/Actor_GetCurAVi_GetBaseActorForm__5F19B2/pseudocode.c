int __userpurge Actor_GetCurAVi_::GetBaseActorForm@<eax>(_DWORD *a1@<esi>, float a2)
{
  int v2; // edi
  int v3; // ebx

  v2 = a1[0x16]; /*0x5f19ba*/
  v3 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x170))(a1); /*0x5f19c3*/
  if ( v3 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) ) /*0x5f19d3*/
    return Actor_GetCurAVi_::GetMagcka(v3, v2, a2); /*0x5f19da*/
  else
    return Actor_GetCurAVi_::GetMagcka(0, v2, a2); /*0x5f19d7*/
}
