0x46F100: movzx   eax, word ptr [ecx+8]
0x46F104: cmp     ax, 0FFFFh
0x46F108: push    esi
0x46F109: jnz     short loc_46F11E
0x46F10B: mov     eax, [ecx+4]
0x46F10E: lea     esi, [eax+1]
0x46F111: mov     dl, [eax]
0x46F113: add     eax, 1
0x46F116: test    dl, dl
0x46F118: jnz     short loc_46F111
0x46F11A: sub     eax, esi
0x46F11C: jmp     short loc_46F121
0x46F11E: movzx   eax, ax
0x46F121: test    eax, eax
0x46F123: jz      short loc_46F163
0x46F125: movzx   eax, word ptr [ecx+8]
0x46F129: cmp     ax, 0FFFFh
0x46F12D: jnz     short loc_46F142
0x46F12F: mov     eax, [ecx+4]
0x46F132: lea     esi, [eax+1]
0x46F135: mov     dl, [eax]
0x46F137: add     eax, 1
0x46F13A: test    dl, dl
0x46F13C: jnz     short loc_46F135
0x46F13E: sub     eax, esi
0x46F140: jmp     short loc_46F145
0x46F142: movzx   eax, ax
0x46F145: mov     ecx, [ecx+4]
0x46F148: test    ecx, ecx
0x46F14A: jnz     short loc_46F151
0x46F14C: mov     ecx, offset EmptyString
0x46F151: add     eax, 1
0x46F154: push    eax; Size
0x46F155: push    ecx; Src
0x46F156: push    4D414E46h; int
0x46F15B: call    TESForm_PutFormRecordChunkData
0x46F160: add     esp, 0Ch
0x46F163: pop     esi
0x46F164: retn
