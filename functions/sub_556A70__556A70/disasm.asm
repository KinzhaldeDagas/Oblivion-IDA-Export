0x556A70: push    0FFFFFFFFh
0x556A72: push    offset SEH_556A70
0x556A77: mov     eax, large fs:0
0x556A7D: push    eax
0x556A7E: sub     esp, 0Ch
0x556A81: push    ebx
0x556A82: push    ebp
0x556A83: push    esi
0x556A84: push    edi
0x556A85: mov     eax, ds:0B30AACh
0x556A8A: xor     eax, esp
0x556A8C: push    eax
0x556A8D: lea     eax, [esp+2Ch+var_C]
0x556A91: mov     large fs:0, eax
0x556A97: mov     ebp, ecx
0x556A99: xor     ebx, ebx
0x556A9B: mov     [esp+2Ch+var_14], ebx
0x556A9F: mov     [esp+2Ch+var_4], ebx
0x556AA3: mov     [esp+2Ch+var_18], ebx
0x556AA7: mov     esi, [esp+2Ch+arg_0]
0x556AAB: mov     edi, [esi]
0x556AAD: cmp     edi, ebx
0x556AAF: mov     byte ptr [esp+2Ch+var_4], 1
0x556AB4: jz      short loc_556AD4
0x556AB6: lea     eax, [edi+4]
0x556AB9: push    eax; lpAddend
0x556ABA: call    dword ptr ds:0A2807Ch
0x556AC0: test    eax, eax
0x556AC2: jnz     short loc_556AD2
0x556AC4: cmp     edi, ebx
0x556AC6: jz      short loc_556AD2
0x556AC8: mov     edx, [edi]
0x556ACA: mov     eax, [edx]
0x556ACC: push    1
0x556ACE: mov     ecx, edi
0x556AD0: call    eax
0x556AD2: mov     [esi], ebx
0x556AD4: mov     eax, [ebp+8]
0x556AD7: cmp     eax, ebx
0x556AD9: jz      loc_556C50
0x556ADF: mov     ecx, [eax+10h]
0x556AE2: cmp     ecx, ebx
0x556AE4: jz      loc_556C50
0x556AEA: cmp     [ecx+0B4h], ebx
0x556AF0: jz      loc_556C50
0x556AF6: call    sub_700900
0x556AFB: push    eax; a2
0x556AFC: mov     ecx, esi; this
0x556AFE: call    NiSmartPointer_Set??
0x556B03: mov     ecx, [ebp+8]
0x556B06: mov     eax, [ecx+10h]
0x556B09: mov     eax, [eax+0B4h]
0x556B0F: lea     edx, [esp+2Ch+arg_0]
0x556B13: push    edx
0x556B14: mov     ecx, eax
0x556B16: call    sub_700790
0x556B1B: mov     eax, [eax]
0x556B1D: push    eax; a2
0x556B1E: lea     ecx, [esp+30h+var_14]; this
0x556B22: mov     byte ptr [esp+30h+var_4], 2
0x556B27: call    NiSmartPointer_Set??
0x556B2C: mov     eax, [esp+2Ch+arg_0]
0x556B30: cmp     eax, ebx
0x556B32: mov     byte ptr [esp+2Ch+var_4], 1
0x556B37: jz      short loc_556B57
0x556B39: mov     edi, eax
0x556B3B: add     eax, 4
0x556B3E: push    eax; lpAddend
0x556B3F: call    dword ptr ds:0A2807Ch
0x556B45: test    eax, eax
0x556B47: jnz     short loc_556B57
0x556B49: cmp     edi, ebx
0x556B4B: jz      short loc_556B57
0x556B4D: mov     eax, [edi]
0x556B4F: mov     edx, [eax]
0x556B51: push    1
0x556B53: mov     ecx, edi
0x556B55: call    edx
0x556B57: mov     ecx, [esi]
0x556B59: mov     eax, [ecx]
0x556B5B: mov     ebx, [esp+2Ch+var_14]
0x556B5F: mov     edx, [eax+8Ch]
0x556B65: push    ebx
0x556B66: call    edx
0x556B68: mov     eax, [esi]
0x556B6A: mov     edi, [eax+0B8h]
0x556B70: test    edi, edi
0x556B72: jz      short loc_556BB0
0x556B74: mov     ecx, [edi+0Ch]
0x556B77: test    ecx, ecx
0x556B79: jz      short loc_556BB0
0x556B7B: lea     eax, [esp+2Ch+arg_0]
0x556B7F: push    eax
0x556B80: call    sub_700790
0x556B85: mov     eax, [eax]
0x556B87: push    eax; a2
0x556B88: lea     ecx, [esp+30h+var_18]; this
0x556B8C: mov     byte ptr [esp+30h+var_4], 3
0x556B91: call    NiSmartPointer_Set??
0x556B96: lea     ecx, [esp+2Ch+arg_0]; this
0x556B9A: mov     byte ptr [esp+2Ch+var_4], 1
0x556B9F: call    sub_7016A0
0x556BA4: mov     ecx, [esp+2Ch+var_18]
0x556BA8: push    ecx; a2
0x556BA9: mov     ecx, edi; this
0x556BAB: call    sub_478300
0x556BB0: push    18h; Size
0x556BB2: call    FormHeapAlloc
0x556BB7: add     esp, 4
0x556BBA: mov     [esp+2Ch+var_10], eax
0x556BBE: test    eax, eax
0x556BC0: mov     byte ptr [esp+2Ch+var_4], 4
0x556BC5: jz      short loc_556BDE
0x556BC7: mov     edx, [ebp+8]
0x556BCA: mov     ecx, [edx+18h]
0x556BCD: mov     edx, [edx+14h]
0x556BD0: mov     edi, [esi]
0x556BD2: push    ecx; int
0x556BD3: push    edx; Src
0x556BD4: push    edi; int
0x556BD5: mov     ecx, eax
0x556BD7: call    sub_55C6E0
0x556BDC: jmp     short loc_556BE0
0x556BDE: xor     eax, eax
0x556BE0: test    eax, eax
0x556BE2: mov     byte ptr [esp+2Ch+var_4], 1
0x556BE7: jz      short loc_556BF1
0x556BE9: mov     ecx, [esi]
0x556BEB: push    eax
0x556BEC: call    NiNode_AddNiExtraData
0x556BF1: mov     eax, [ebp+8]
0x556BF4: mov     eax, [eax+20h]
0x556BF7: test    eax, eax
0x556BF9: jz      short loc_556C03
0x556BFB: mov     ecx, [esi]
0x556BFD: push    eax
0x556BFE: call    NiNode_AddNiExtraData
0x556C03: mov     esi, [esp+2Ch+var_18]
0x556C07: test    esi, esi
0x556C09: mov     byte ptr [esp+2Ch+var_4], 0
0x556C0E: jz      short loc_556C28
0x556C10: lea     ecx, [esi+4]
0x556C13: push    ecx; lpAddend
0x556C14: call    dword ptr ds:0A2807Ch
0x556C1A: test    eax, eax
0x556C1C: jnz     short loc_556C28
0x556C1E: mov     edx, [esi]
0x556C20: mov     eax, [edx]
0x556C22: push    1
0x556C24: mov     ecx, esi
0x556C26: call    eax
0x556C28: test    ebx, ebx
0x556C2A: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x556C32: jz      short loc_556C4C
0x556C34: lea     ecx, [ebx+4]
0x556C37: push    ecx; lpAddend
0x556C38: call    dword ptr ds:0A2807Ch
0x556C3E: test    eax, eax
0x556C40: jnz     short loc_556C4C
0x556C42: mov     edx, [ebx]
0x556C44: mov     eax, [edx]
0x556C46: push    1
0x556C48: mov     ecx, ebx
0x556C4A: call    eax
0x556C4C: mov     al, 1
0x556C4E: jmp     short loc_556C52
0x556C50: xor     al, al
0x556C52: mov     ecx, dword ptr [esp+2Ch+var_C]
0x556C56: mov     large fs:0, ecx
0x556C5D: pop     ecx
0x556C5E: pop     edi
0x556C5F: pop     esi
0x556C60: pop     ebp
0x556C61: pop     ebx
0x556C62: add     esp, 18h
0x556C65: retn    4
