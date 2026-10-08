0x6F2DB0: push    0FFFFFFFFh
0x6F2DB2: push    offset SEH_6F2DB0
0x6F2DB7: mov     eax, large fs:0
0x6F2DBD: push    eax
0x6F2DBE: push    ecx
0x6F2DBF: push    esi
0x6F2DC0: push    edi
0x6F2DC1: mov     eax, ds:0B30AACh
0x6F2DC6: xor     eax, esp
0x6F2DC8: push    eax
0x6F2DC9: lea     eax, [esp+1Ch+var_C]
0x6F2DCD: mov     large fs:0, eax
0x6F2DD3: mov     esi, ecx
0x6F2DD5: mov     [esp+1Ch+var_10], esi
0x6F2DD9: mov     edi, [esp+1Ch+source]
0x6F2DDD: push    0FFFFFFFFh; count
0x6F2DDF: push    0; offset
0x6F2DE1: mov     dword ptr [esi+18h], 0Fh
0x6F2DE8: mov     dword ptr [esi+14h], 0
0x6F2DEF: push    edi; source
0x6F2DF0: mov     byte ptr [esi+4], 0
0x6F2DF4: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F2DF9: mov     eax, [edi+1Ch]
0x6F2DFC: add     edi, 20h ; ' '
0x6F2DFF: push    edi
0x6F2E00: lea     ecx, [esi+20h]
0x6F2E03: mov     [esp+20h+var_4], 0
0x6F2E0B: mov     [esi+1Ch], eax
0x6F2E0E: call    sub_6F23C0
0x6F2E13: mov     eax, esi
0x6F2E15: mov     ecx, [esp+1Ch+var_C]
0x6F2E19: mov     large fs:0, ecx
0x6F2E20: pop     ecx
0x6F2E21: pop     edi
0x6F2E22: pop     esi
0x6F2E23: add     esp, 10h
0x6F2E26: retn    4
0x9C88A0: mov     ecx, [ebp-10h]; this
0x9C88A3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C88A8: mov     edx, [esp+arg_4]
0x9C88AC: lea     eax, [edx-0Ch]
0x9C88AF: mov     ecx, [edx-10h]
0x9C88B2: xor     ecx, eax
0x9C88B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C88B9: mov     eax, offset stru_AF0FC4
0x9C88BE: jmp     ___CxxFrameHandler3
