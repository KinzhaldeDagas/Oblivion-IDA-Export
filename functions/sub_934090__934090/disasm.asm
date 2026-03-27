0x934090: push    ebx
0x934091: push    esi
0x934092: mov     esi, [esp+8+arg_0]
0x934096: mov     eax, [esi+0Ch]
0x934099: mov     ecx, [eax+4]
0x93409C: mov     ebx, [ecx]
0x93409E: push    edi
0x93409F: mov     edi, [esp+0Ch+arg_4]
0x9340A3: mov     edx, [edi+8]
0x9340A6: push    edx
0x9340A7: mov     edx, [esi+8]
0x9340AA: push    edx
0x9340AB: mov     edx, [esi+4]
0x9340AE: push    edx
0x9340AF: mov     edx, [esi]
0x9340B1: push    edx
0x9340B2: push    eax
0x9340B3: lea     eax, [esp+20h+arg_4]
0x9340B7: push    eax
0x9340B8: call    dword ptr [ebx]
0x9340BA: cmp     byte ptr [eax], 0
0x9340BD: mov     al, [edi]
0x9340BF: jz      short loc_9340CB
0x9340C1: movzx   eax, byte ptr [edi+3]
0x9340C5: add     eax, edi
0x9340C7: pop     edi
0x9340C8: pop     esi
0x9340C9: pop     ebx
0x9340CA: retn
0x9340CB: test    al, al
0x9340CD: jz      short loc_9340C1
0x9340CF: movzx   ecx, byte ptr [edi+1]
0x9340D3: mov     edx, [esi+0Ch]
0x9340D6: imul    ecx, 34h ; '4'
0x9340D9: mov     eax, [edx]
0x9340DB: mov     edx, [esi+10h]
0x9340DE: push    edx
0x9340DF: mov     edx, [esp+10h+arg_8]
0x9340E3: push    edx
0x9340E4: push    edi
0x9340E5: call    dword ptr [ecx+eax+1698h]
0x9340EC: add     esp, 0Ch
0x9340EF: mov     eax, edi
0x9340F1: pop     edi
0x9340F2: pop     esi
0x9340F3: pop     ebx
0x9340F4: retn
