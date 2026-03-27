0x8E5050: push    ebx
0x8E5051: push    ebp
0x8E5052: mov     ebp, ds:0BA9DE4h
0x8E5058: push    esi
0x8E5059: mov     esi, ecx
0x8E505B: mov     eax, [esi+70h]
0x8E505E: xor     ebx, ebx
0x8E5060: test    eax, eax
0x8E5062: push    edi
0x8E5063: mov     dword ptr [esi], offset off_A9A710
0x8E5069: jle     short loc_8E50AB
0x8E506B: xor     edi, edi
0x8E506D: lea     ecx, [ecx+0]
0x8E5070: mov     eax, [esi+78h]
0x8E5073: lea     ecx, [edi+eax+4]
0x8E5077: mov     eax, [ecx+8]
0x8E507A: test    eax, eax
0x8E507C: js      short loc_8E50A0
0x8E507E: mov     ecx, [ecx]
0x8E5080: mov     edx, large fs:2Ch
0x8E5087: and     eax, 3FFFFFFFh
0x8E508C: push    14h
0x8E508E: shl     eax, 1
0x8E5090: push    eax
0x8E5091: mov     eax, [edx+ebp*4]
0x8E5094: push    ecx
0x8E5095: mov     ecx, [eax+19Ch]
0x8E509B: call    sub_8A75D0
0x8E50A0: mov     eax, [esi+70h]
0x8E50A3: inc     ebx
0x8E50A4: add     edi, 10h
0x8E50A7: cmp     ebx, eax
0x8E50A9: jl      short loc_8E5070
0x8E50AB: mov     ecx, ds:0BA7D98h
0x8E50B1: mov     eax, [esi+78h]
0x8E50B4: mov     edx, [ecx]
0x8E50B6: push    eax
0x8E50B7: call    dword ptr [edx+4]
0x8E50BA: lea     edi, [esi+70h]
0x8E50BD: mov     ebx, 3
0x8E50C2: mov     eax, [edi-4]
0x8E50C5: sub     edi, 0Ch
0x8E50C8: test    eax, eax
0x8E50CA: js      short loc_8E50EF
0x8E50CC: mov     ecx, [edi]
0x8E50CE: mov     edx, large fs:2Ch
0x8E50D5: and     eax, 3FFFFFFFh
0x8E50DA: push    14h
0x8E50DC: shl     eax, 2
0x8E50DF: push    eax
0x8E50E0: mov     eax, [edx+ebp*4]
0x8E50E3: push    ecx
0x8E50E4: mov     ecx, [eax+19Ch]
0x8E50EA: call    sub_8A75D0
0x8E50EF: dec     ebx
0x8E50F0: jnz     short loc_8E50C2
0x8E50F2: mov     eax, [esi+48h]
0x8E50F5: test    eax, eax
0x8E50F7: js      short loc_8E511D
0x8E50F9: mov     ecx, [esi+40h]
0x8E50FC: mov     edx, large fs:2Ch
0x8E5103: and     eax, 3FFFFFFFh
0x8E5108: push    14h
0x8E510A: shl     eax, 4
0x8E510D: push    eax
0x8E510E: mov     eax, [edx+ebp*4]
0x8E5111: push    ecx
0x8E5112: mov     ecx, [eax+19Ch]
0x8E5118: call    sub_8A75D0
0x8E511D: pop     edi
0x8E511E: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8E5124: pop     esi
0x8E5125: pop     ebp
0x8E5126: pop     ebx
0x8E5127: retn
