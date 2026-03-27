0x748070: push    edi
0x748071: mov     edi, [esp+4+Size]
0x748075: test    edi, edi
0x748077: ja      short loc_74807D
0x748079: xor     eax, eax
0x74807B: pop     edi
0x74807C: retn
0x74807D: push    esi
0x74807E: push    edi; Size
0x74807F: call    FormHeapAlloc
0x748084: mov     esi, eax
0x748086: mov     eax, [esp+0Ch+Src]
0x74808A: push    edi; Size
0x74808B: push    eax; Src
0x74808C: push    esi; Dst
0x74808D: call    _memcpy
0x748092: mov     ecx, [esp+18h+arg_10]
0x748096: mov     edx, [esp+18h+arg_C]
0x74809A: push    ecx
0x74809B: push    edx
0x74809C: push    edi
0x74809D: push    esi
0x74809E: call    NiBinaryStream_DoByteSwap
0x7480A3: mov     ecx, [esp+28h+arg_0]
0x7480A7: add     esp, 20h
0x7480AA: push    edi; Count
0x7480AB: push    esi; Src
0x7480AC: call    NiFile_DirectWrite
0x7480B1: push    esi
0x7480B2: mov     edi, eax
0x7480B4: call    FormHeapFree
0x7480B9: add     esp, 4
0x7480BC: pop     esi
0x7480BD: mov     eax, edi
0x7480BF: pop     edi
0x7480C0: retn
