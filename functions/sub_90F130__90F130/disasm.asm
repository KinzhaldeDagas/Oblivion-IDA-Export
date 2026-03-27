0x90F130: push    esi
0x90F131: mov     esi, ecx
0x90F133: mov     ecx, [esi+8]
0x90F136: test    ecx, ecx
0x90F138: mov     dword ptr [esi], offset off_A9CAA8
0x90F13E: jz      short loc_90F158
0x90F140: cmp     word ptr [ecx+4], 0
0x90F145: jz      short loc_90F158
0x90F147: dec     word ptr [ecx+6]
0x90F14B: cmp     word ptr [ecx+6], 0
0x90F150: jnz     short loc_90F158
0x90F152: mov     eax, [ecx]
0x90F154: push    1
0x90F156: call    dword ptr [eax]
0x90F158: mov     eax, [esi+10h]
0x90F15B: push    edi
0x90F15C: xor     edi, edi
0x90F15E: test    eax, eax
0x90F160: jle     short loc_90F188
0x90F162: mov     ecx, [esi+0Ch]
0x90F165: mov     ecx, [ecx+edi*4]
0x90F168: cmp     word ptr [ecx+4], 0
0x90F16D: jz      short loc_90F180
0x90F16F: dec     word ptr [ecx+6]
0x90F173: cmp     word ptr [ecx+6], 0
0x90F178: jnz     short loc_90F180
0x90F17A: mov     edx, [ecx]
0x90F17C: push    1
0x90F17E: call    dword ptr [edx]
0x90F180: mov     eax, [esi+10h]
0x90F183: inc     edi
0x90F184: cmp     edi, eax
0x90F186: jl      short loc_90F162
0x90F188: mov     eax, [esi+14h]
0x90F18B: test    eax, eax
0x90F18D: pop     edi
0x90F18E: js      short loc_90F1C4
0x90F190: mov     ecx, ds:0BA9DE4h
0x90F196: mov     edx, large fs:2Ch
0x90F19D: mov     ecx, [edx+ecx*4]
0x90F1A0: mov     ecx, [ecx+19Ch]
0x90F1A6: test    ecx, ecx
0x90F1A8: jnz     short loc_90F1B0
0x90F1AA: mov     ecx, ds:0BA7D9Ch
0x90F1B0: mov     edx, [esi+0Ch]
0x90F1B3: and     eax, 3FFFFFFFh
0x90F1B8: push    14h
0x90F1BA: shl     eax, 2
0x90F1BD: push    eax
0x90F1BE: push    edx
0x90F1BF: call    sub_8A75D0
0x90F1C4: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90F1CA: pop     esi
0x90F1CB: retn
