0x95A1B0: push    ebx
0x95A1B1: xor     ebx, ebx
0x95A1B3: cmp     ds:0BA9A65h, bl
0x95A1B9: jz      loc_95A24E
0x95A1BF: push    offset aNicollisiondat; "NiCollisionData"
0x95A1C4: mov     ds:0BA9A65h, bl
0x95A1CA: call    sub_7125B0
0x95A1CF: mov     eax, ds:0BA9AA0h
0x95A1D4: push    eax
0x95A1D5: mov     ds:0BA9A8Ch, ebx
0x95A1DB: mov     ds:0BA9A90h, ebx
0x95A1E1: mov     ds:0BA9A9Ch, ebx
0x95A1E7: mov     ds:0BA9A94h, ebx
0x95A1ED: mov     ds:0BA9A88h, ebx
0x95A1F3: mov     ds:0BA9A98h, ebx
0x95A1F9: call    FormHeapFree
0x95A1FE: mov     ecx, ds:0BA9AA4h
0x95A204: push    ecx
0x95A205: call    FormHeapFree
0x95A20A: mov     edx, ds:0BA9AA8h
0x95A210: push    edx
0x95A211: call    FormHeapFree
0x95A216: mov     eax, ds:0BA9AACh
0x95A21B: push    eax
0x95A21C: call    FormHeapFree
0x95A221: add     esp, 14h
0x95A224: mov     ds:0BA9AA0h, ebx
0x95A22A: mov     ds:0BA9AA4h, ebx
0x95A230: mov     ds:0BA9AA8h, ebx
0x95A236: mov     ds:0BA9AACh, ebx
0x95A23C: mov     ds:0BA9AB0h, ebx
0x95A242: mov     ds:0BA9AB4h, ebx
0x95A248: mov     ds:0BA9AB8h, ebx
0x95A24E: pop     ebx
0x95A24F: retn
