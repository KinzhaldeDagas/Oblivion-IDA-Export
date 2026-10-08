// Pass205: WaterShaderProperty copy/clone helper copies full water pass-data block +0x6C..+0x84.
NiTimeController *__thiscall sub_85BC40(BSShaderProperty *this, int a2, int a3)
{
  NiTimeController *result; // eax

  BSShaderProperty_CopyCloneMembers((char **)this, a2, a3); /*0x85bc4e*/
  *(_DWORD *)(a2 + 0x6C) = *((_DWORD *)this + 0x1B); /*0x85bc56*/
  *(_BYTE *)(a2 + 0x70) = *((_BYTE *)this + 0x70); /*0x85bc5d*/
  *(_BYTE *)(a2 + 0x71) = *((_BYTE *)this + 0x71); /*0x85bc63*/
  *(_BYTE *)(a2 + 0x72) = *((_BYTE *)this + 0x72); /*0x85bc6a*/
  *(_DWORD *)(a2 + 0x74) = *((_DWORD *)this + 0x1D); /*0x85bc70*/
  result = *((NiTimeController **)this + 0x1E); /*0x85bc73*/
  *(_DWORD *)(a2 + 0x78) = result; /*0x85bc76*/
  *(float *)(a2 + 0x7C) = *((float *)this + 0x1F); /*0x85bc7c*/
  *(float *)(a2 + 0x80) = *((float *)this + 0x20); /*0x85bc85*/
  *(_WORD *)(a2 + 0x84) = *((_WORD *)this + 0x42); /*0x85bc92*/
  return result; /*0x85bca5*/
}
