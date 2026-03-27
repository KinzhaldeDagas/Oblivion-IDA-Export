int __userpurge Actor_ModCurAVf_::MarkAsModified@<eax>(_BYTE *a1@<esi>, int edi0@<edi>, int a3, int a4, int a5)
{
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 0x40))(a1, 0x400000);
  if ( (unsigned int)(edi0 - 0xC) <= 0x14 && (edi0 == 0x12 || edi0 == 0x1B) )
    return Actor_ModCurAVf_::CheckArmor(a1, a3, a4, a5);
  else
    return Actor_ModCurAVf_::Done(a3, a4, a5);
}
