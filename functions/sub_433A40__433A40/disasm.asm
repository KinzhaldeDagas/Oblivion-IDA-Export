0x433A40: push    0FFFFFFFFh
0x433A42: push    offset SEH_433A40
0x433A47: mov     eax, large fs:0
0x433A4D: push    eax
0x433A4E: sub     esp, 2Ch
0x433A51: push    ebx
0x433A52: push    ebp
0x433A53: push    esi
0x433A54: push    edi
0x433A55: mov     eax, ___security_cookie
0x433A5A: xor     eax, esp
0x433A5C: push    eax
0x433A5D: lea     eax, [esp+4Ch+var_C]
0x433A61: mov     large fs:0, eax
0x433A67: mov     [esp+4Ch+var_38], ecx
0x433A6B: mov     ebp, [esp+4Ch+arg_4]
0x433A6F: cmp     [esp+4Ch+arg_0], ebp
0x433A73: jle     loc_433BA5
0x433A79: call    sub_4322B0
0x433A7E: test    al, al
0x433A80: jz      short loc_433A9E
0x433A82: mov     eax, ModelLoaderPtr
0x433A87: mov     esi, [eax+18h]
0x433A8A: mov     edi, [esi+8]
0x433A8D: call    ds:GetCurrentThreadId
0x433A93: cmp     edi, eax
0x433A95: jz      short loc_433A9E
0x433A97: mov     ecx, esi
0x433A99: call    sub_431F50
0x433A9E: xor     ebx, ebx
0x433AA0: mov     [esp+4Ch+var_24], ebx
0x433AA4: mov     [esp+4Ch+var_1C], ebx
0x433AA8: mov     [esp+4Ch+var_18], ebx
0x433AAC: mov     [esp+4Ch+var_14], bl
0x433AB0: mov     [esp+4Ch+var_2C], offset ??_7?$BSTaskManagerIterator@_J@@6B@; const BSTaskManagerIterator<__int64>::`vftable'
0x433AB8: push    ebx; _DWORD
0x433AB9: push    ebx; _DWORD
0x433ABA: lea     ecx, [esp+54h+var_2C]; _DWORD
0x433ABE: mov     [esp+54h+var_4], ebx
0x433AC2: call    ds:??_7?$BSTaskManagerIterator@_J@@6B@; const BSTaskManagerIterator<__int64>::`vftable' ...
0x433AC8: mov     al, [esp+4Ch+var_14]
0x433ACC: and     al, 0FCh
0x433ACE: test    al, 2
0x433AD0: lea     ecx, [ebp+ebp*2+3]
0x433AD4: mov     [esp+4Ch+var_1C], ebx
0x433AD8: mov     [esp+4Ch+var_18], ebx
0x433ADC: mov     [esp+4Ch+var_24], ecx
0x433AE0: mov     [esp+4Ch+var_14], al
0x433AE4: jnz     loc_433B8A
0x433AEA: mov     edi, ds:InterlockedDecrement
0x433AF0: mov     dword ptr [esp+4Ch+var_34], ebx
0x433AF4: mov     dword ptr [esp+4Ch+var_34+4], ebx
0x433AF8: mov     [esp+4Ch+arg_4], ebx
0x433AFC: push    1
0x433AFE: lea     edx, [esp+50h+arg_4]
0x433B02: push    edx
0x433B03: lea     eax, [esp+54h+var_34]
0x433B07: push    eax
0x433B08: lea     ecx, [esp+58h+var_2C]
0x433B0C: push    ecx
0x433B0D: mov     ecx, [esp+5Ch+var_38]
0x433B11: mov     byte ptr [esp+5Ch+var_4], 1
0x433B16: call    sub_433760
0x433B1B: test    al, al
0x433B1D: mov     esi, [esp+4Ch+arg_4]
0x433B21: jz      short loc_433B45
0x433B23: mov     eax, dword ptr [esp+4Ch+var_34]
0x433B27: mov     edx, dword ptr [esp+4Ch+var_34+4]
0x433B2B: mov     cl, 10h
0x433B2D: call    __allshr
0x433B32: movzx   edx, al
0x433B35: cmp     edx, [esp+4Ch+arg_0]
0x433B39: jg      short loc_433B6A
0x433B3B: mov     eax, [esi]
0x433B3D: mov     edx, [eax+1Ch]
0x433B40: push    ebp
0x433B41: mov     ecx, esi
0x433B43: call    edx
0x433B45: cmp     esi, ebx
0x433B47: mov     byte ptr [esp+4Ch+var_4], bl
0x433B4B: jz      short loc_433B61
0x433B4D: lea     eax, [esi+8]
0x433B50: push    eax; lpAddend
0x433B51: call    edi ; InterlockedDecrement
0x433B53: test    eax, eax
0x433B55: jnz     short loc_433B61
0x433B57: mov     edx, [esi]
0x433B59: mov     eax, [edx]
0x433B5B: push    1
0x433B5D: mov     ecx, esi
0x433B5F: call    eax
0x433B61: test    [esp+4Ch+var_14], 2
0x433B66: jz      short loc_433AF0
0x433B68: jmp     short loc_433B8A
0x433B6A: mov     esi, [esp+4Ch+arg_4]
0x433B6E: cmp     esi, ebx
0x433B70: mov     byte ptr [esp+4Ch+var_4], bl
0x433B74: jz      short loc_433B8A
0x433B76: lea     ecx, [esi+8]
0x433B79: push    ecx; lpAddend
0x433B7A: call    edi ; InterlockedDecrement
0x433B7C: test    eax, eax
0x433B7E: jnz     short loc_433B8A
0x433B80: mov     edx, [esi]
0x433B82: mov     eax, [edx]
0x433B84: push    1
0x433B86: mov     ecx, esi
0x433B88: call    eax
0x433B8A: mov     ecx, [esp+4Ch+var_38]
0x433B8E: call    sub_432350
0x433B93: test    al, al
0x433B95: jz      short loc_433BA5
0x433B97: mov     ecx, ModelLoaderPtr
0x433B9D: mov     ecx, [ecx+18h]
0x433BA0: call    sub_431FA0
0x433BA5: mov     ecx, dword ptr [esp+4Ch+var_C]
0x433BA9: mov     large fs:0, ecx
0x433BB0: pop     ecx
0x433BB1: pop     edi
0x433BB2: pop     esi
0x433BB3: pop     ebp
0x433BB4: pop     ebx
0x433BB5: add     esp, 38h
0x433BB8: retn    8
