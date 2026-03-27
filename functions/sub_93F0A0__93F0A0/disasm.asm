0x93F0A0: push    ebp
0x93F0A1: mov     ebp, esp
0x93F0A3: fld     [ebp+arg_0]
0x93F0A6: and     esp, 0FFFFFFF0h
0x93F0A9: fld     dword ptr [ecx+18h]
0x93F0AC: fucompp
0x93F0AE: fnstsw  ax
0x93F0B0: test    ah, 44h
0x93F0B3: jp      short loc_93F0C1
0x93F0B5: mov     eax, [ebp+arg_4]
0x93F0B8: mov     [ecx+18h], eax
0x93F0BB: mov     esp, ebp
0x93F0BD: pop     ebp
0x93F0BE: retn    0Ch
0x93F0C1: xorps   xmm0, xmm0
0x93F0C4: mov     dword ptr [ecx+18h], 0BF800000h
0x93F0CB: movaps  xmmword ptr [ecx+20h], xmm0
0x93F0CF: mov     esp, ebp
0x93F0D1: pop     ebp
0x93F0D2: retn    0Ch
