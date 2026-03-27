0x56A0F0: sub     esp, 0Ch
0x56A0F3: xor     eax, eax
0x56A0F5: mov     [esp+0Ch+Src], eax
0x56A0F8: mov     [esp+0Ch+var_4], eax
0x56A0FC: mov     [esp+0Ch+var_8], eax
0x56A100: mov     eax, [ecx+8]
0x56A103: mov     [esp+0Ch+var_4], eax
0x56A107: mov     al, [ecx]
0x56A109: cmp     al, 1
0x56A10B: mov     byte ptr [esp+0Ch+Src], al
0x56A10E: jbe     short loc_56A119
0x56A110: cmp     al, 2
0x56A112: jnz     short loc_56A127
0x56A114: mov     ecx, [ecx+4]
0x56A117: jmp     short loc_56A123
0x56A119: mov     ecx, [ecx+4]
0x56A11C: test    ecx, ecx
0x56A11E: jz      short loc_56A127
0x56A120: mov     ecx, [ecx+0Ch]
0x56A123: mov     [esp+0Ch+var_8], ecx
0x56A127: push    0Ch; Size
0x56A129: lea     edx, [esp+10h+Src]
0x56A12D: push    edx; Src
0x56A12E: push    54445450h; int
0x56A133: call    TESForm_PutFormRecordChunkData
0x56A138: add     esp, 18h
0x56A13B: retn
