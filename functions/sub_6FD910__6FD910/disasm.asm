0x6FD910: push    0FFFFFFFFh
0x6FD912: push    offset SEH_6E2760
0x6FD917: mov     eax, large fs:0
0x6FD91D: push    eax
0x6FD91E: sub     esp, 10h
0x6FD921: push    ebx
0x6FD922: push    ebp
0x6FD923: push    esi
0x6FD924: push    edi
0x6FD925: mov     eax, ds:0B30AACh
0x6FD92A: xor     eax, esp
0x6FD92C: push    eax
0x6FD92D: lea     eax, [esp+30h+var_C]
0x6FD931: mov     large fs:0, eax
0x6FD937: mov     esi, ecx
0x6FD939: mov     [esp+30h+var_10], esi
0x6FD93D: mov     ebx, [esp+30h+arg_0]
0x6FD941: push    ebx
0x6FD942: call    sub_715E40
0x6FD947: mov     ecx, [ebx]
0x6FD949: lea     eax, [esp+30h+var_18]
0x6FD94D: push    eax
0x6FD94E: xor     edi, edi
0x6FD950: push    esi
0x6FD951: mov     [esp+38h+var_18], edi
0x6FD955: call    NiTMap_GetAt
0x6FD95A: xor     ebp, ebp
0x6FD95C: cmp     [esi+4Eh], di
0x6FD960: jbe     loc_6FDA98
0x6FD966: mov     ecx, [esi+48h]
0x6FD969: mov     ebx, [ecx+ebp*4]
0x6FD96C: cmp     ebx, edi
0x6FD96E: jz      loc_6FDAC2
0x6FD974: push    0Ch; Size
0x6FD976: call    FormHeapAlloc
0x6FD97B: add     esp, 4
0x6FD97E: cmp     eax, edi
0x6FD980: jz      short loc_6FD98E
0x6FD982: mov     [eax], edi
0x6FD984: mov     [eax+4], edi
0x6FD987: mov     [eax+8], edi
0x6FD98A: mov     esi, eax
0x6FD98C: jmp     short loc_6FD990
0x6FD98E: xor     esi, esi
0x6FD990: mov     edi, [esp+30h+var_18]
0x6FD994: movzx   edx, word ptr [edi+4Ch]
0x6FD998: add     edi, 44h ; 'D'
0x6FD99B: cmp     ebp, edx
0x6FD99D: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6FD9A5: mov     [esp+30h+var_14], esi
0x6FD9A9: jb      short loc_6FD9B9
0x6FD9AB: movzx   eax, word ptr [edi+0Eh]
0x6FD9AF: add     eax, ebp
0x6FD9B1: push    eax
0x6FD9B2: mov     ecx, edi
0x6FD9B4: call    NiTArray_SetSize
0x6FD9B9: lea     ecx, [esp+30h+var_14]
0x6FD9BD: push    ecx
0x6FD9BE: push    ebp
0x6FD9BF: mov     ecx, edi
0x6FD9C1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FD9C6: xor     edi, edi
0x6FD9C8: cmp     [ebx+8], edi
0x6FD9CB: jbe     loc_6FDA83
0x6FD9D1: mov     edx, [ebx]
0x6FD9D3: mov     eax, [edx+edi*4]
0x6FD9D6: test    eax, eax
0x6FD9D8: jz      short loc_6FDA4A
0x6FD9DA: mov     edx, [esp+30h+arg_0]
0x6FD9DE: lea     ecx, [esp+30h+var_14]
0x6FD9E2: push    ecx
0x6FD9E3: mov     ecx, [edx]
0x6FD9E5: push    eax
0x6FD9E6: mov     [esp+38h+var_14], 0
0x6FD9EE: call    NiTMap_GetAt
0x6FD9F3: test    al, al
0x6FD9F5: mov     eax, [esi+4]
0x6FD9F8: jz      short loc_6FDA22
0x6FD9FA: cmp     [esi+8], eax
0x6FD9FD: jnz     short loc_6FDA14
0x6FD9FF: test    eax, eax
0x6FDA01: jbe     short loc_6FDA07
0x6FDA03: add     eax, eax
0x6FDA05: jmp     short loc_6FDA0C
0x6FDA07: mov     eax, 1
0x6FDA0C: push    eax
0x6FDA0D: mov     ecx, esi
0x6FDA0F: call    sub_6E8CA0
0x6FDA14: mov     eax, [esi+8]
0x6FDA17: mov     ecx, [esi]
0x6FDA19: mov     edx, [esp+30h+var_14]
0x6FDA1D: mov     [ecx+eax*4], edx
0x6FDA20: jmp     short loc_6FDA73
0x6FDA22: cmp     [esi+8], eax
0x6FDA25: jnz     short loc_6FDA3C
0x6FDA27: test    eax, eax
0x6FDA29: jbe     short loc_6FDA2F
0x6FDA2B: add     eax, eax
0x6FDA2D: jmp     short loc_6FDA34
0x6FDA2F: mov     eax, 1
0x6FDA34: push    eax
0x6FDA35: mov     ecx, esi
0x6FDA37: call    sub_6E8CA0
0x6FDA3C: mov     eax, [esi+8]
0x6FDA3F: mov     ecx, [esi]
0x6FDA41: mov     dword ptr [ecx+eax*4], 0
0x6FDA48: jmp     short loc_6FDA73
0x6FDA4A: mov     eax, [esi+4]
0x6FDA4D: cmp     [esi+8], eax
0x6FDA50: jnz     short loc_6FDA67
0x6FDA52: test    eax, eax
0x6FDA54: jbe     short loc_6FDA5A
0x6FDA56: add     eax, eax
0x6FDA58: jmp     short loc_6FDA5F
0x6FDA5A: mov     eax, 1
0x6FDA5F: push    eax
0x6FDA60: mov     ecx, esi
0x6FDA62: call    sub_6E8CA0
0x6FDA67: mov     edx, [esi+8]
0x6FDA6A: mov     eax, [esi]
0x6FDA6C: mov     dword ptr [eax+edx*4], 0
0x6FDA73: add     dword ptr [esi+8], 1
0x6FDA77: add     edi, 1
0x6FDA7A: cmp     edi, [ebx+8]
0x6FDA7D: jb      loc_6FD9D1
0x6FDA83: mov     esi, [esp+30h+var_10]
0x6FDA87: xor     edi, edi
0x6FDA89: movzx   ecx, word ptr [esi+4Eh]
0x6FDA8D: add     ebp, 1
0x6FDA90: cmp     ebp, ecx
0x6FDA92: jb      loc_6FD966
0x6FDA98: mov     ecx, [esp+30h+var_18]
0x6FDA9C: mov     eax, [ecx+3Ch]
0x6FDA9F: push    eax
0x6FDAA0: mov     dword ptr [ecx+3Ch], 0FFFFFFFFh
0x6FDAA7: call    sub_6FD5D0
0x6FDAAC: mov     ecx, [esp+30h+var_C]
0x6FDAB0: mov     large fs:0, ecx
0x6FDAB7: pop     ecx
0x6FDAB8: pop     edi
0x6FDAB9: pop     esi
0x6FDABA: pop     ebp
0x6FDABB: pop     ebx
0x6FDABC: add     esp, 1Ch
0x6FDABF: retn    4
0x6FDAC2: mov     ebx, [esp+30h+var_18]
0x6FDAC6: movzx   ecx, word ptr [ebx+4Ch]
0x6FDACA: add     ebx, 44h ; 'D'
0x6FDACD: cmp     ebp, ecx
0x6FDACF: mov     [esp+30h+var_14], edi
0x6FDAD3: jb      short loc_6FDAE3
0x6FDAD5: movzx   edx, word ptr [ebx+0Eh]
0x6FDAD9: add     edx, ebp
0x6FDADB: push    edx
0x6FDADC: mov     ecx, ebx
0x6FDADE: call    NiTArray_SetSize
0x6FDAE3: lea     eax, [esp+30h+var_14]
0x6FDAE7: push    eax
0x6FDAE8: push    ebp
0x6FDAE9: mov     ecx, ebx
0x6FDAEB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FDAF0: jmp     short loc_6FDA89
