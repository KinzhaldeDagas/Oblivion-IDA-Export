0x430350: push    edi
0x430351: mov     edi, [esp+4+Size]
0x430355: test    edi, edi
0x430357: ja      short loc_43035D
0x430359: xor     eax, eax
0x43035B: pop     edi
0x43035C: retn
0x43035D: push    esi
0x43035E: push    edi; Size
0x43035F: call    FormHeapAlloc
0x430364: mov     esi, eax
0x430366: mov     eax, [esp+0Ch+Src]
0x43036A: push    edi; Size
0x43036B: push    eax; Src
0x43036C: push    esi; Dst
0x43036D: call    _memcpy
0x430372: mov     eax, [esp+18h+arg_C]
0x430376: add     esp, 10h
0x430379: test    eax, eax
0x43037B: jz      short loc_43038D
0x43037D: mov     ecx, [esp+8+arg_10]
0x430381: push    ecx
0x430382: push    eax
0x430383: push    edi
0x430384: push    esi
0x430385: call    NiBinaryStream_DoByteSwap
0x43038A: add     esp, 10h
0x43038D: mov     ecx, [esp+8+arg_0]
0x430391: mov     edx, [ecx]
0x430393: mov     eax, [edx+3Ch]
0x430396: push    edi
0x430397: push    esi
0x430398: call    eax
0x43039A: push    esi
0x43039B: mov     edi, eax
0x43039D: call    FormHeapFree
0x4303A2: add     esp, 4
0x4303A5: pop     esi
0x4303A6: mov     eax, edi
0x4303A8: pop     edi
0x4303A9: retn
