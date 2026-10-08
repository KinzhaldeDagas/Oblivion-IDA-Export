// Destroys every 0x08-byte NiTextKey (freeing each text), frees the header-backed array at +0x10, then destroys NiExtraData base state.
void __thiscall NiTextKeyExtraData::~NiTextKeyExtraData(NiTextKeyExtraData *this)
{
  char *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiTextKeyExtraData::`vftable'; /*0x6d7569*/
  v2 = *((char **)this + 4); /*0x6d756f*/
  if ( v2 ) /*0x6d757c*/
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFC); /*0x6d7581*/
    _LN21(v2, 8u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiTextKey_Destroy); /*0x6d758d*/
    FormHeapFree(v3); /*0x6d7593*/
  }
  NiExtraData_dtor((unsigned int *)this); /*0x6d75a5*/
}
