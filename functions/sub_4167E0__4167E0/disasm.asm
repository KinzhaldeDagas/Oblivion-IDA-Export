0x4167E0: mov     ecx, dword_B3350C
0x4167E6: xor     eax, eax
0x4167E8: test    ecx, ecx
0x4167EA: jbe     short loc_4167FF
0x4167EC: mov     edx, dword_B33510
0x4167F2: cmp     dword ptr [edx+eax*4], 0
0x4167F6: jnz     short loc_416814
0x4167F8: add     eax, 1
0x4167FB: cmp     eax, ecx
0x4167FD: jb      short loc_4167F2
0x4167FF: xor     eax, eax
0x416801: test    eax, eax
0x416803: jz      short locret_416861
0x416805: push    esi
0x416806: push    edi
0x416807: mov     ecx, [eax]
0x416809: test    ecx, ecx
0x41680B: mov     edi, [eax+8]
0x41680E: jz      short loc_416819
0x416810: mov     eax, ecx
0x416812: jmp     short loc_416850
0x416814: mov     eax, [edx+eax*4]
0x416817: jmp     short loc_416801
0x416819: mov     eax, [eax+4]
0x41681C: mov     edx, EffectSettingCollection
0x416822: push    eax
0x416823: mov     eax, [edx+4]
0x416826: mov     ecx, offset EffectSettingCollection
0x41682B: call    eax
0x41682D: mov     edx, dword_B3350C
0x416833: add     eax, 1
0x416836: cmp     eax, edx
0x416838: jnb     short loc_41684E
0x41683A: mov     esi, dword_B33510
0x416840: mov     ecx, [esi+eax*4]
0x416843: test    ecx, ecx
0x416845: jnz     short loc_416810
0x416847: add     eax, 1
0x41684A: cmp     eax, edx
0x41684C: jb      short loc_416840
0x41684E: xor     eax, eax
0x416850: test    edi, edi
0x416852: jz      short loc_41685B
0x416854: and     dword ptr [edi+58h], 0FFDFFFFFh
0x41685B: test    eax, eax
0x41685D: jnz     short loc_416807
0x41685F: pop     edi
0x416860: pop     esi
0x416861: retn
