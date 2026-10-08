0x73E9A0: push    0FFFFFFFFh
0x73E9A2: push    offset SEH_8C8970
0x73E9A7: mov     eax, large fs:0
0x73E9AD: push    eax
0x73E9AE: push    ecx
0x73E9AF: push    esi
0x73E9B0: push    edi
0x73E9B1: mov     eax, ds:0B30AACh
0x73E9B6: xor     eax, esp
0x73E9B8: push    eax
0x73E9B9: lea     eax, [esp+1Ch+var_C]
0x73E9BD: mov     large fs:0, eax
0x73E9C3: mov     edi, ecx
0x73E9C5: push    30h ; '0'; Size
0x73E9C7: call    FormHeapAlloc
0x73E9CC: add     esp, 4
0x73E9CF: mov     [esp+1Ch+var_10], eax
0x73E9D3: xor     esi, esi
0x73E9D5: cmp     eax, esi
0x73E9D7: mov     [esp+1Ch+var_4], esi
0x73E9DB: jz      short loc_73E9E6
0x73E9DD: mov     ecx, eax
0x73E9DF: call    sub_73E630
0x73E9E4: mov     esi, eax
0x73E9E6: mov     eax, [edi+8]
0x73E9E9: mov     [esi+8], eax
0x73E9EC: mov     ecx, [edi+0Ch]
0x73E9EF: mov     [esi+0Ch], ecx
0x73E9F2: mov     edx, [edi+10h]
0x73E9F5: mov     [esi+10h], edx
0x73E9F8: mov     eax, [edi+14h]
0x73E9FB: mov     [esi+14h], eax
0x73E9FE: mov     ecx, [edi+28h]
0x73EA01: push    ecx
0x73EA02: mov     ecx, esi
0x73EA04: mov     [esp+20h+var_4], 0FFFFFFFFh
0x73EA0C: call    sub_73E6A0
0x73EA11: mov     edx, [edi+28h]
0x73EA14: mov     eax, [edi+2Ch]
0x73EA17: mov     ecx, [esi+2Ch]
0x73EA1A: add     edx, edx
0x73EA1C: add     edx, edx
0x73EA1E: push    edx; byteCount
0x73EA1F: push    eax; source
0x73EA20: push    ecx; destination
0x73EA21: call    _memcpy;
0x73EA26: add     esp, 0Ch
0x73EA29: mov     eax, esi
0x73EA2B: mov     ecx, [esp+1Ch+var_C]
0x73EA2F: mov     large fs:0, ecx
0x73EA36: pop     ecx
0x73EA37: pop     edi
0x73EA38: pop     esi
0x73EA39: add     esp, 10h
0x73EA3C: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
