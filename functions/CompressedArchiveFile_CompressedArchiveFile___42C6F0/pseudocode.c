unsigned int __userpurge CompressedArchiveFile::CompressedArchiveFile___@<eax>(
        FILE **this@<ecx>,
        char *Dst,
        size_t Size)
{
  unsigned int v3; // ebp
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // edi
  bool v8; // cc
  int v9; // eax
  int v10; // edi
  int v11; // eax
  const char *v12; // eax
  FILE *v13; // eax
  size_t v15; // [esp-4h] [ebp-14h]
  int v16; // [esp+4h] [ebp-Ch]
  size_t v17; // [esp+8h] [ebp-8h]
  int Sizea; // [esp+18h] [ebp+8h]

  v3 = Size; /*0x42c6f2*/
  v5 = (int)*(this + 0x5B); /*0x42c6f9*/
  v6 = (int)*(this + 0x57); /*0x42c6ff*/
  v7 = (unsigned int)*(this + 0x5C) - v5; /*0x42c70c*/
  v8 = (unsigned int)Size <= v7; /*0x42c70e*/
  Sizea = 0; /*0x42c710*/
  if ( v8 ) /*0x42c718*/
  {
    if ( Dst ) /*0x42c89b*/
    {
      LODWORD(v15) = v3; /*0x42c8a3*/
      memcpy(Dst, (char *)*(this + 0x58) + v5, v15); /*0x42c8a8*/
    }
    *(this + 0x5B) = (FILE *)((char *)*(this + 0x5B) + v3); /*0x42c8b0*/
    return v3; /*0x42c8b8*/
  }
  if ( v7 ) /*0x42c720*/
  {
    if ( Dst ) /*0x42c728*/
    {
      LODWORD(v15) = (char *)*(this + 0x5C) - v5; /*0x42c730*/
      memcpy(Dst, (char *)*(this + 0x58) + v5, v15); /*0x42c735*/
      Dst += v7; /*0x42c73d*/
    }
    v3 -= v7; /*0x42c741*/
    Sizea = v7; /*0x42c743*/
  }
  *(this + 0x5B) = 0; /*0x42c749*/
  *(this + 0x5C) = 0; /*0x42c753*/
  if ( !v3 ) /*0x42c75d*/
    return Sizea; /*0x42c75d*/
  while ( 2 ) /*0x42c763*/
  {
    v9 = (int)*(this + 0x5A); /*0x42c763*/
    *(_DWORD *)(v6 + 0x10) = v9; /*0x42c76b*/
    *(_DWORD *)(v6 + 0xC) = *(this + 0x58); /*0x42c774*/
    if ( !v9 ) /*0x42c777*/
      goto LABEL_21; /*0x42c777*/
    while ( 1 ) /*0x42c783*/
    {
      v10 = (char *)*(this + 4) - (char *)*(this + 5); /*0x42c783*/
      *(_DWORD *)(v6 + 4) = v10; /*0x42c786*/
      *(_DWORD *)v6 = (char *)*(this + 6) + (_DWORD)*(this + 5); /*0x42c791*/
      if ( v10 ) /*0x42c793*/
        break; /*0x42c793*/
LABEL_14:
      *(this + 5) = (FILE *)((char *)*(this + 5) + v10 - *(_DWORD *)(v6 + 4)); /*0x42c7b9*/
      *(this + 0x52) = (FILE *)((char *)*(this + 0x52) + v10 - *(_DWORD *)(v6 + 4)); /*0x42c7c4*/
      if ( !*(_DWORD *)(v6 + 4) )               // MEF v28 proof: this jnz targets 0x42C7EB, so 0x42C7EB is a secondary entry into the output check when zlib still has input. /*0x42c7ca*/
      {
        NiFile_Flush((int)this); /*0x42c7d2*/
        *(this + 4) = (FILE *)sub_42C3E0(this, *(this + 6), (unsigned int)*(this + 3), SHIDWORD(v15));// MEF v28 correction: old dormant hook start was unsafe here because 0x42C7EB is an internal branch target inside the overwritten 0x42C7E8..0x42C7F2 window. /*0x42c7e8*/
      }
      if ( !*(_DWORD *)(v6 + 0x10) )            // MEF v28 proof: WER at this address matches the secondary branch target that was overwritten by the earlier 0x42C7E8 hook design; archive group remains disabled pending runtime proof. /*0x42c7eb*/
        goto LABEL_21; /*0x42c7ef*/
    }
    v11 = zlib_Inflate((unsigned __int8 **)v6, 2, SHIDWORD(v15), v16, v17); /*0x42c798*/
    if ( v11 != 0xFFFFFFFE && v11 != 2 && v11 != 0xFFFFFFFD && v11 != 0xFFFFFFFC ) /*0x42c7b2*/
    {
      if ( v11 == 1 ) /*0x42c7b7*/
        goto LABEL_21; /*0x42c7b7*/
      goto LABEL_14; /*0x42c7b7*/
    }
    Zlib_inflateEnd((_DWORD *)v6); /*0x42c7f4*/
    v12 = (const char *)(this + 0xF); /*0x42c7f9*/
    if ( this == (FILE **)0xFFFFFFC4 ) /*0x42c801*/
      v12 = "<Unknown>"; /*0x42c803*/
    PrintError("Error inflating ZLib stream for file %s.", v12); /*0x42c80e*/
    v3 = 0; /*0x42c816*/
LABEL_21:
    v13 = (FILE *)((char *)*(this + 0x5A) - *(_DWORD *)(v6 + 0x10)); /*0x42c818*/
    *(this + 0x5C) = v13; /*0x42c821*/
    if ( !v13 ) /*0x42c827*/
      return Sizea; /*0x42c866*/
    if ( v3 > (unsigned int)v13 ) /*0x42c82b*/
    {
      Sizea += (int)v13; /*0x42c831*/
      v3 -= (unsigned int)v13; /*0x42c835*/
      if ( Dst ) /*0x42c839*/
      {
        LODWORD(v15) = v13; /*0x42c83b*/
        memcpy(Dst, *(this + 0x58), v15); /*0x42c844*/
        Dst = &Dst[(_DWORD)*(this + 0x5C)]; /*0x42c852*/
      }
      if ( !v3 ) /*0x42c858*/
        return Sizea;                           // MEF runtime trace 2026-05-30: WER APPCRASH c0000005 reported RVA 0002C859 inside this branch back to refill. It maps to CompressedArchiveFile::Read while v22 archive streaming guards were installed; v23 disables the group. /*0x42c858*/
      continue; /*0x42c858*/
    }
    break;
  }
  if ( Dst ) /*0x42c86f*/
  {
    LODWORD(v15) = v3; /*0x42c877*/
    memcpy(Dst, *(this + 0x58), v15); /*0x42c87a*/
  }
  *(this + 0x5B) = (FILE *)((char *)*(this + 0x5B) + v3); /*0x42c882*/
  return v3 + Sizea; /*0x42c862*/
}
