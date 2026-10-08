0x6F2D30: push    0FFFFFFFFh
0x6F2D32: push    offset SEH_6F2DB0
0x6F2D37: mov     eax, large fs:0
0x6F2D3D: push    eax
0x6F2D3E: push    ecx
0x6F2D3F: push    esi
0x6F2D40: push    edi
0x6F2D41: mov     eax, ds:0B30AACh
0x6F2D46: xor     eax, esp
0x6F2D48: push    eax
0x6F2D49: lea     eax, [esp+1Ch+var_C]
0x6F2D4D: mov     large fs:0, eax
0x6F2D53: mov     esi, ecx
0x6F2D55: mov     [esp+1Ch+var_10], esi
0x6F2D59: mov     edi, [esp+1Ch+source]
0x6F2D5D: push    0FFFFFFFFh; count
0x6F2D5F: push    0; offset
0x6F2D61: mov     dword ptr [esi+18h], 0Fh
0x6F2D68: mov     dword ptr [esi+14h], 0
0x6F2D6F: push    edi; source
0x6F2D70: mov     byte ptr [esi+4], 0
0x6F2D74: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F2D79: add     edi, 1Ch
0x6F2D7C: push    edi
0x6F2D7D: lea     ecx, [esi+1Ch]
0x6F2D80: mov     [esp+20h+var_4], 0
0x6F2D88: call    sub_6F22C0
0x6F2D8D: mov     eax, esi
0x6F2D8F: mov     ecx, [esp+1Ch+var_C]
0x6F2D93: mov     large fs:0, ecx
0x6F2D9A: pop     ecx
0x6F2D9B: pop     edi
0x6F2D9C: pop     esi
0x6F2D9D: add     esp, 10h
0x6F2DA0: retn    4
0x9C88A0: mov     ecx, [ebp-10h]; this
0x9C88A3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C88A8: mov     edx, [esp+arg_4]
0x9C88AC: lea     eax, [edx-0Ch]
0x9C88AF: mov     ecx, [edx-10h]
0x9C88B2: xor     ecx, eax
0x9C88B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C88B9: mov     eax, offset stru_AF0FC4
0x9C88BE: jmp     ___CxxFrameHandler3
