0x780780: push    ebp
0x780781: mov     ebp, ds:0A2807Ch
0x780787: push    esi
0x780788: mov     esi, ecx
0x78078A: push    edi
0x78078B: mov     dword ptr [esi], offset ??_7NiD3DRenderState@@6B@; const NiD3DRenderState::`vftable'
0x780791: mov     edi, [esi+74h]
0x780794: test    edi, edi
0x780796: jz      short loc_7807B7
0x780798: lea     eax, [edi+4]
0x78079B: push    eax; lpAddend
0x78079C: call    ebp ; InterlockedDecrement
0x78079E: test    eax, eax
0x7807A0: jnz     short loc_7807B0
0x7807A2: test    edi, edi
0x7807A4: jz      short loc_7807B0
0x7807A6: mov     edx, [edi]
0x7807A8: mov     eax, [edx]
0x7807AA: push    1
0x7807AC: mov     ecx, edi
0x7807AE: call    eax
0x7807B0: mov     dword ptr [esi+74h], 0
0x7807B7: mov     eax, [esi+0FF8h]
0x7807BD: test    eax, eax
0x7807BF: mov     dword ptr [esi+0FFCh], 0
0x7807C9: jz      short loc_7807D3
0x7807CB: mov     ecx, [eax]
0x7807CD: mov     edx, [ecx+8]
0x7807D0: push    eax
0x7807D1: call    edx
0x7807D3: mov     dword ptr [esi+0FF8h], 0
0x7807DD: mov     edi, [esi+0FF0h]
0x7807E3: test    edi, edi
0x7807E5: jz      short loc_7807FF
0x7807E7: lea     eax, [edi+4]
0x7807EA: push    eax; lpAddend
0x7807EB: call    ebp ; InterlockedDecrement
0x7807ED: test    eax, eax
0x7807EF: jnz     short loc_7807FF
0x7807F1: test    edi, edi
0x7807F3: jz      short loc_7807FF
0x7807F5: mov     edx, [edi]
0x7807F7: mov     eax, [edx]
0x7807F9: push    1
0x7807FB: mov     ecx, edi
0x7807FD: call    eax
0x7807FF: lea     ecx, [esi+0F8h]
0x780805: call    sub_780990
0x78080A: mov     edi, [esi+74h]
0x78080D: test    edi, edi
0x78080F: jz      short loc_780829
0x780811: lea     ecx, [edi+4]
0x780814: push    ecx; lpAddend
0x780815: call    ebp ; InterlockedDecrement
0x780817: test    eax, eax
0x780819: jnz     short loc_780829
0x78081B: test    edi, edi
0x78081D: jz      short loc_780829
0x78081F: mov     edx, [edi]
0x780821: mov     eax, [edx]
0x780823: push    1
0x780825: mov     ecx, edi
0x780827: call    eax
0x780829: push    offset NiRefObject_objcount; lpAddend
0x78082E: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x780834: call    ebp ; InterlockedDecrement
0x780836: pop     edi
0x780837: pop     esi
0x780838: pop     ebp
0x780839: retn
