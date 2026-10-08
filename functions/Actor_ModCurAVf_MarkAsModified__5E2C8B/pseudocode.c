void __userpurge Actor_ModCurAVf_::MarkAsModified(_BYTE *a1@<esi>, int edi0@<edi>, int a3, int a4, int a5)
{
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 0x40))(a1, 0x400000); /*0x5e2c97*/
  if ( (unsigned int)(edi0 - 0xC) <= 0x14 && (edi0 == 0x12 || edi0 == 0x1B) ) /*0x5e2ca9*/
    Actor_ModCurAVf_::CheckArmor(a1, a3, a4, a5); /*0x5e2caa*/
  else
    Actor_ModCurAVf_::Done(a3, a4, a5); /*0x5e2c9f*/
}
