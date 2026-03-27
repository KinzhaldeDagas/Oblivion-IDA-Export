0x4CCD00: mov     ecx, [esp+arg_0]
0x4CCD04: xor     al, al
0x4CCD06: test    ecx, ecx
0x4CCD08: jz      short locret_4CCD3E
0x4CCD0A: mov     edx, [ecx]
0x4CCD0C: cmp     edx, ds:0B05E20h
0x4CCD12: jnz     short loc_4CCD27
0x4CCD14: mov     ecx, [ecx+0Ch]
0x4CCD17: cmp     ecx, 6
0x4CCD1A: jz      short loc_4CCD24
0x4CCD1C: add     ecx, 0FFFFFFF8h
0x4CCD1F: cmp     ecx, 2
0x4CCD22: ja      short locret_4CCD3E
0x4CCD24: mov     al, 1
0x4CCD26: retn
0x4CCD27: push    edx
0x4CCD28: call    TESForm_GetFormTypeFromChunkType
0x4CCD2D: add     esp, 4
0x4CCD30: cmp     al, 31h ; '1'
0x4CCD32: jb      short loc_4CCD3C
0x4CCD34: cmp     al, 34h ; '4'
0x4CCD36: jbe     short loc_4CCD24
0x4CCD38: cmp     al, 36h ; '6'
0x4CCD3A: jz      short loc_4CCD24
0x4CCD3C: xor     al, al
0x4CCD3E: retn
