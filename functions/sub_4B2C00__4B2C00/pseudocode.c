// Verified local save behavior: looks up runtime TESTextureList cache by tree FormID and, when present, derives the model path then calls nullsub_returnVoid_2arg (0x60CF60). That target is a single `retn 8`, so no DMTL chunk bytes are emitted by this helper. The load path does parse DMTL; this is an Oblivion load/save asymmetry.
void __thiscall TESObjectTREE_WriteTextureHashChunk(TESObjectTREE *this)
{
  int v2; // eax
  int v3; // [esp+4h] [ebp-10Ch] BYREF
  char Str[260]; // [esp+8h] [ebp-108h] BYREF

  v2 = *((_DWORD *)this + 3); /*0x4b2c17*/
  v3 = 0; /*0x4b2c25*/
  if ( NiTMap_GetAt(&g_TESObjectTREETextureHashCache, v2, &v3) ) /*0x4b2c2d*/
  {
    if ( v3 ) /*0x4b2c3d*/
    {
      sub_46D540(Str, (char *)this); /*0x4b2c45*/
      nullsub_returnVoid_2arg(0x4C544D44, (int)Str);// Verified: nullsub_returnVoid_2arg at 0x60CF60 is exactly `retn 8`; this call emits no DMTL chunk. Do not treat the presence of the call as successful serialization. /*0x4b2c59*/
    }
  }
}
