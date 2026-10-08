// [Verified] Loads the supplied shader package from Data\Shaders\<filename>, validates its header (observed values 0x0C and 0x64), reads the record payload, and inserts entries into the ShaderBufferEntry string map. [Unknown] Internal meaning of package header fields and variant-specific payloads is not established. [Candidate cross-build note] Fallout's observed HLSL creator compiles resolved source files directly; no same-name .sdp load path was located in its IDB, which remains an incomplete search rather than a proven absence.
char __thiscall ShaderProgramPackageMap_LoadSdp(unsigned int *this, const char *filename)
{
  char result; // al
  unsigned int v4; // edi
  void (__thiscall ***BSFile)(void *, int); // eax
  void (__thiscall ***v6)(void *, int); // ebx
  void *v7; // eax
  TESForm *v8; // esi
  unsigned int *v9; // ebp
  int v10; // [esp+10h] [ebp-114h]
  unsigned int v11; // [esp+14h] [ebp-110h]
  char v12[260]; // [esp+1Ch] [ebp-108h] BYREF

  result = 0; /*0x7dacbf*/
  v4 = 0; /*0x7dacc1*/
  if ( filename ) /*0x7dacc9*/
  {
    _sprintf(v12, "\\Data\\Shaders\\%s", filename); /*0x7dacdb*/
    BSFile = (void (__thiscall ***)(void *, int))FileFinder_LoadBSFile(v12, 0, 0); /*0x7dace7*/
    v6 = BSFile; /*0x7dacec*/
    if ( BSFile ) /*0x7dacf3*/
    {
      if ( ((int (__stdcall *)(void (__thiscall ***)(void *, int)))BSFile[1])(BSFile) == 0xC && v10 == 0x64 ) /*0x7dad23*/
      {
        v7 = (void *)FormHeapAlloc(1u); /*0x7dad2a*/
        *(this + 1) = (unsigned int)v7; /*0x7dad3a*/
        if ( Archive_ReadBytes(v6, v7, 1u) == 1 ) /*0x7dad46*/
        {
          v8 = (TESForm *)*(this + 1); /*0x7dad4c*/
          if ( v11 ) /*0x7dad54*/
          {
            v9 = this + 2; /*0x7dad56*/
            do /*0x7dad7d*/
            {
              sub_412D30(v9, (int)v8, v8); /*0x7dad64*/
              ++v4; /*0x7dad6f*/
              v8 = (TESForm *)((char *)v8 + (unsigned int)&v8[0xA].member.modlist.data->name[0xE8]); /*0x7dad76*/
            }
            while ( v4 < v11 ); /*0x7dad7d*/
          }
        }
        else
        {
          FormHeapFree(*(this + 1)); /*0x7dad85*/
          *(this + 1) = 0; /*0x7dad8d*/
        }
      }
      (**v6)(v6, 1); /*0x7dad98*/
    }
    return 0; /*0x7dad9b*/
  }
  return result; /*0x7dada0*/
}
