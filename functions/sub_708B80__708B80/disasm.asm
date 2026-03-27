0x708B80: push    ebp
0x708B81: push    edi
0x708B82: mov     edi, ecx
0x708B84: xor     ebp, ebp
0x708B86: cmp     [edi+0C8h], ebp
0x708B8C: jz      short loc_708BDD
0x708B8E: push    ebx
0x708B8F: push    esi
0x708B90: lea     esi, [edi+0BCh]
0x708B96: jmp     short loc_708BA0
0x708B98: align 10h
0x708BA0: mov     eax, [edi+0C0h]
0x708BA6: mov     ecx, [esi+4]
0x708BA9: mov     ebx, [eax+8]
0x708BAC: mov     eax, [ecx]
0x708BAE: cmp     eax, ebp
0x708BB0: mov     [esi+4], eax
0x708BB3: jz      short loc_708BBA
0x708BB5: mov     [eax+4], ebp
0x708BB8: jmp     short loc_708BBD
0x708BBA: mov     [esi+8], ebp
0x708BBD: mov     edx, [esi]
0x708BBF: mov     eax, [edx+8]
0x708BC2: push    ecx
0x708BC3: mov     ecx, esi
0x708BC5: call    eax
0x708BC7: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x708BCB: push    edi
0x708BCC: mov     ecx, ebx
0x708BCE: call    sub_70B930
0x708BD3: cmp     [edi+0C8h], ebp
0x708BD9: jnz     short loc_708BA0
0x708BDB: pop     esi
0x708BDC: pop     ebx
0x708BDD: pop     edi
0x708BDE: pop     ebp
0x708BDF: retn
