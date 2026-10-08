// Compresses the global TESForm record buffer with zlib when payload exists and FORM flag 0x40000 is clear. Rebuilds the record with compressed flag, original payload size, and deflated data.
void sub_46B370()
{
  _DWORD *v0; // edi
  int v1; // ecx
  int v2; // ebx
  const void *v3; // ebp
  int v4; // esi
  int v5; // ebx
  _DWORD *v6; // eax
  void *v7; // esi
  size_t v8; // [esp-14h] [ebp-58h]
  int Size; // [esp+4h] [ebp-40h]
  int v10; // [esp+8h] [ebp-3Ch]
  _DWORD v11[4]; // [esp+Ch] [ebp-38h] BYREF
  int v12; // [esp+1Ch] [ebp-28h]
  int v13; // [esp+2Ch] [ebp-18h]
  int v14; // [esp+30h] [ebp-14h]
  int v15; // [esp+34h] [ebp-10h]

  v0 = MEMORY[0xB33C14]; /*0x46b374*/
  if ( MEMORY[0xB33C14] ) /*0x46b374*/
  {
    v1 = MEMORY[0xB33C18]; /*0x46b384*/
    if ( (unsigned int)MEMORY[0xB33C18] > 0x14 && (v0[2] & 0x40000) == 0 ) /*0x46b39a*/
    {
      v2 = v1 - 0x14; /*0x46b3a8*/
      v10 = v1 - 0x14; /*0x46b3b5*/
      v13 = 0; /*0x46b3bd*/
      v14 = 0; /*0x46b3c1*/
      v15 = 0; /*0x46b3c5*/
      if ( sub_744FB0(v11, 0xFFFFFFFF, "1.2.1", 0x38) ) /*0x46b3c9*/
      {
        PrintError("Error initializing ZLib stream for deflate."); /*0x46b3da*/
      }
      else
      {
        v3 = (const void *)FormHeapAlloc(2 * v2); /*0x46b3f3*/
        v11[1] = v2; /*0x46b400*/
        v11[0] = v0 + 5; /*0x46b404*/
        v12 = 2 * v2; /*0x46b408*/
        v11[3] = v3; /*0x46b40c*/
        if ( sub_743A40(v11, 4u) == 0xFFFFFFFE ) /*0x46b41b*/
        {
          PrintError("Error deflating ZLib stream."); /*0x46b422*/
          FormHeapFree((unsigned int)v3);       // MEF v51 bridge-stack audit: pending error-string push makes zlib stream [ESP+1Ch]. Helper arguments plus original string total 0Ch; add esp,0Ch restores the common failure-epilogue stack. /*0x46b428*/
        }
        else
        {
          v4 = 2 * v2 - v12;                    // MEF v51 bridge-stack audit: at direct-JMP entry B, saved EBP/ESI plus pending size place payload at [ESP+14h] and zlib stream at [ESP+1Ch]; no-size failure after cleanup uses [ESP+18h]. All paths rejoin with vanilla ESP. /*0x46b438*/
          v5 = v4 + 0x18; /*0x46b43c*/
          Size = v4; /*0x46b440*/
          v6 = (_DWORD *)FormHeapAlloc(v4 + 0x18); /*0x46b444*/
          v0[2] |= 0x40000u;                    // MEF v51 bridge-stack audit: pending final allocation size makes zlib stream [ESP+1Ch]. Helper arguments plus size total 0Ch; cleanup restores the common uncompressed-return frame. /*0x46b449*/
          v7 = v6; /*0x46b450*/
          v0[1] = v5 - 0x14; /*0x46b455*/
          *v6 = *v0; /*0x46b45a*/
          v6[1] = v0[1]; /*0x46b45f*/
          v6[2] = v0[2]; /*0x46b465*/
          v6[3] = v0[3]; /*0x46b46f*/
          LODWORD(v8) = Size; /*0x46b479*/
          v6[4] = v0[4]; /*0x46b47a*/
          v6[5] = v10; /*0x46b482*/
          memcpy(v6 + 6, v3, v8); /*0x46b485*/
          FormHeapFree((unsigned int)MEMORY[0xB33C14]); /*0x46b491*/
          MEMORY[0xB33C14] = v7; /*0x46b49b*/
          MEMORY[0xB33C18] = v5; /*0x46b4a1*/
          sub_743E50((int)v11); /*0x46b4a7*/
          FormHeapFree((unsigned int)v3); /*0x46b4ad*/
        }
      }
    }
  }
}
