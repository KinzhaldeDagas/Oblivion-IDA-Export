0x8E6490: mov     eax, [esp+arg_0]
0x8E6494: mov     ecx, [eax]
0x8E6496: mov     edx, [ecx]
0x8E6498: push    ebx
0x8E6499: mov     ebx, [esp+4+arg_8]
0x8E649D: push    ebp
0x8E649E: push    esi
0x8E649F: mov     esi, [ebx]
0x8E64A1: push    edi
0x8E64A2: call    dword ptr [edx+8]
0x8E64A5: mov     edi, eax
0x8E64A7: mov     eax, [esp+10h+arg_4]
0x8E64AB: mov     ecx, [eax]
0x8E64AD: mov     edx, [ecx]
0x8E64AF: call    dword ptr [edx+8]
0x8E64B2: mov     cl, [ebx+0Ch]
0x8E64B5: test    cl, cl
0x8E64B7: jz      short loc_8E64CC
0x8E64B9: mov     ecx, edi
0x8E64BB: shl     ecx, 5
0x8E64BE: add     ecx, eax
0x8E64C0: movzx   ebp, byte ptr [ecx+esi+1294h]
0x8E64C8: add     ecx, esi
0x8E64CA: jmp     short loc_8E64DE
0x8E64CC: mov     edx, edi
0x8E64CE: shl     edx, 5
0x8E64D1: add     edx, eax
0x8E64D3: movzx   ebp, byte ptr [edx+esi+0E94h]
0x8E64DB: lea     ecx, [edx+esi]
0x8E64DE: mov     edx, ebp
0x8E64E0: imul    edx, 34h ; '4'
0x8E64E3: xor     ebx, ebx
0x8E64E5: cmp     dword ptr [edx+esi+16C4h], 2
0x8E64ED: setz    bl
0x8E64F0: cmp     ebp, 1
0x8E64F3: mov     edx, ebx
0x8E64F5: jnz     short loc_8E6510
0x8E64F7: movzx   ecx, byte ptr [ecx+190h]
0x8E64FE: lea     ecx, [ecx+ecx*4]
0x8E6501: mov     dl, [esi+ecx*4+9A0h]
0x8E6508: test    dl, dl
0x8E650A: setnz   dl
0x8E650D: movzx   edx, dl
0x8E6510: test    edx, edx
0x8E6512: mov     ecx, [esp+10h+arg_10]
0x8E6516: mov     [ecx], edx
0x8E6518: jz      short loc_8E6550
0x8E651A: mov     edx, [esp+10h+arg_8]
0x8E651E: mov     cl, [edx+0Ch]
0x8E6521: shl     eax, 5
0x8E6524: add     eax, edi
0x8E6526: test    cl, cl
0x8E6528: jz      short loc_8E653D
0x8E652A: movzx   eax, byte ptr [eax+esi+1294h]
0x8E6532: mov     ecx, [esp+10h+arg_C]
0x8E6536: pop     edi
0x8E6537: pop     esi
0x8E6538: pop     ebp
0x8E6539: mov     [ecx], eax
0x8E653B: pop     ebx
0x8E653C: retn
0x8E653D: movzx   eax, byte ptr [eax+esi+0E94h]
0x8E6545: mov     edx, [esp+10h+arg_C]
0x8E6549: pop     edi
0x8E654A: pop     esi
0x8E654B: pop     ebp
0x8E654C: mov     [edx], eax
0x8E654E: pop     ebx
0x8E654F: retn
0x8E6550: mov     eax, [esp+10h+arg_C]
0x8E6554: pop     edi
0x8E6555: pop     esi
0x8E6556: mov     [eax], ebp
0x8E6558: pop     ebp
0x8E6559: pop     ebx
0x8E655A: retn
