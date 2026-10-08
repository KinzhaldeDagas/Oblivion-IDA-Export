0x709D60: push    0FFFFFFFFh
0x709D62: push    offset SEH_8C8970
0x709D67: mov     eax, large fs:0
0x709D6D: push    eax
0x709D6E: push    ecx
0x709D6F: push    esi
0x709D70: push    edi
0x709D71: mov     eax, ds:0B30AACh
0x709D76: xor     eax, esp
0x709D78: push    eax
0x709D79: lea     eax, [esp+1Ch+var_C]
0x709D7D: mov     large fs:0, eax
0x709D83: mov     edi, ecx
0x709D85: push    0C0h ; 'À'; Size
0x709D8A: call    FormHeapAlloc
0x709D8F: mov     esi, eax
0x709D91: add     esp, 4
0x709D94: mov     [esp+1Ch+var_10], esi
0x709D98: test    esi, esi
0x709D9A: mov     [esp+1Ch+var_4], 0
0x709DA2: jz      short loc_709DB3
0x709DA4: mov     ecx, esi
0x709DA6: call    sub_717590
0x709DAB: mov     dword ptr [esi], offset ??_7NiScreenElements@@6B@; const NiScreenElements::`vftable'
0x709DB1: jmp     short loc_709DB5
0x709DB3: xor     esi, esi
0x709DB5: mov     eax, [esp+1Ch+arg_0]
0x709DB9: push    eax
0x709DBA: push    esi
0x709DBB: mov     ecx, edi
0x709DBD: mov     [esp+24h+var_4], 0FFFFFFFFh
0x709DC5: call    j_j_NiGeometry_CopyMembersForClone
0x709DCA: mov     eax, esi
0x709DCC: mov     ecx, [esp+1Ch+var_C]
0x709DD0: mov     large fs:0, ecx
0x709DD7: pop     ecx
0x709DD8: pop     edi
0x709DD9: pop     esi
0x709DDA: add     esp, 10h
0x709DDD: retn    4
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
