0x6F8D30: push    0FFFFFFFFh
0x6F8D32: push    offset SEH_6F8D30
0x6F8D37: mov     eax, large fs:0
0x6F8D3D: push    eax
0x6F8D3E: sub     esp, 20h
0x6F8D41: push    ebx
0x6F8D42: push    esi
0x6F8D43: mov     eax, ds:0B30AACh
0x6F8D48: xor     eax, esp
0x6F8D4A: push    eax
0x6F8D4B: lea     eax, [esp+38h+var_C]
0x6F8D4F: mov     large fs:0, eax
0x6F8D55: mov     eax, [esp+38h+source]
0x6F8D59: xor     ebx, ebx
0x6F8D5B: push    0FFFFFFFFh; count
0x6F8D5D: push    ebx; offset
0x6F8D5E: push    eax; source
0x6F8D5F: lea     ecx, [esp+44h+var_28]; this
0x6F8D63: mov     [esp+44h+var_2C], ebx
0x6F8D67: mov     [esp+44h+var_28.capacity], 0Fh
0x6F8D6F: mov     [esp+44h+var_28.size], ebx
0x6F8D73: mov     byte ptr [esp+44h+var_28.storage], bl
0x6F8D77: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F8D7C: mov     edx, [esp+38h+Src]
0x6F8D80: mov     eax, edx
0x6F8D82: mov     [esp+38h+var_4], ebx
0x6F8D86: lea     esi, [eax+1]
0x6F8D89: lea     esp, [esp+0]
0x6F8D90: mov     cl, [eax]
0x6F8D92: add     eax, 1
0x6F8D95: cmp     cl, bl
0x6F8D97: jnz     short loc_6F8D90
0x6F8D99: sub     eax, esi
0x6F8D9B: push    eax; MaxCount
0x6F8D9C: push    edx; Src
0x6F8D9D: lea     ecx, [esp+40h+var_28]; int
0x6F8DA1: call    sub_6F6CA0
0x6F8DA6: mov     esi, [esp+38h+arg_0]
0x6F8DAA: push    0FFFFFFFFh; count
0x6F8DAC: push    ebx; offset
0x6F8DAD: mov     dword ptr [esi+18h], 0Fh
0x6F8DB4: mov     [esi+14h], ebx
0x6F8DB7: push    eax; source
0x6F8DB8: mov     ecx, esi; this
0x6F8DBA: mov     [esi+4], bl
0x6F8DBD: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F8DC2: cmp     [esp+38h+var_28.capacity], 10h
0x6F8DC7: jb      short loc_6F8DD6
0x6F8DC9: mov     ecx, dword ptr [esp+38h+var_28.storage]
0x6F8DCD: push    ecx
0x6F8DCE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F8DD3: add     esp, 4
0x6F8DD6: mov     eax, esi
0x6F8DD8: mov     ecx, [esp+38h+var_C]
0x6F8DDC: mov     large fs:0, ecx
0x6F8DE3: pop     ecx
0x6F8DE4: pop     esi
0x6F8DE5: pop     ebx
0x6F8DE6: add     esp, 2Ch
0x6F8DE9: retn
0x9C8EB0: lea     ecx, [ebp-28h]; this
0x9C8EB3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C8EB8: mov     edx, [esp+source]
0x9C8EBC: lea     eax, [edx-28h]
0x9C8EBF: mov     ecx, [edx-2Ch]
0x9C8EC2: xor     ecx, eax
0x9C8EC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8EC9: mov     eax, offset stru_AF1798
0x9C8ECE: jmp     ___CxxFrameHandler3
