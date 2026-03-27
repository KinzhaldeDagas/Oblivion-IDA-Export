0x6C5D40: push    esi
0x6C5D41: mov     esi, dword ptr [esp+4+SizeInBytes]
0x6C5D45: test    esi, esi
0x6C5D47: jnz     short loc_6C5D50
0x6C5D49: mov     eax, 1
0x6C5D4E: pop     esi
0x6C5D4F: retn
0x6C5D50: mov     ecx, dword ptr [esp+4+SizeInBytes+4]
0x6C5D54: push    edi; ArgList
0x6C5D55: mov     edi, [esp+8+DstBuf]
0x6C5D59: lea     eax, [esp+8+ArgList]
0x6C5D5D: push    eax; Format
0x6C5D5E: push    ecx; Format
0x6C5D5F: push    esi; SizeInBytes
0x6C5D60: push    edi; DstBuf
0x6C5D61: call    _vsprintf_s
0x6C5D66: add     esp, 10h
0x6C5D69: mov     byte ptr [edi+esi-1], 0
0x6C5D6E: pop     edi
0x6C5D6F: pop     esi
0x6C5D70: retn
