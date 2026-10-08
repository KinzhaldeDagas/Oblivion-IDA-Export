0x78EC20: push    0FFFFFFFFh; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x78EC22: push    offset SEH_78EC20
0x78EC27: mov     eax, large fs:0
0x78EC2D: push    eax
0x78EC2E: sub     esp, 0Ch
0x78EC31: push    ebx
0x78EC32: push    ebp
0x78EC33: push    esi
0x78EC34: push    edi
0x78EC35: mov     eax, ds:0B30AACh
0x78EC3A: xor     eax, esp
0x78EC3C: push    eax
0x78EC3D: lea     eax, [esp+2Ch+var_C]
0x78EC41: mov     large fs:0, eax
0x78EC47: mov     ebp, [esp+2Ch+outSmallString]
0x78EC4B: xor     ebx, ebx
0x78EC4D: mov     [esp+2Ch+var_14], ebx
0x78EC51: mov     dword ptr [ebp+18h], 0Fh
0x78EC58: mov     [ebp+14h], ebx
0x78EC5B: mov     esi, ecx
0x78EC5D: mov     [esp+2Ch+var_10], ebp
0x78EC61: mov     [ebp+4], bl
0x78EC64: mov     eax, [esi+8]
0x78EC67: cmp     eax, ebx
0x78EC69: mov     edi, [esi]
0x78EC6B: mov     [esp+2Ch+var_4], ebx
0x78EC6F: mov     [esp+2Ch+var_14], 1
0x78EC77: jz      short loc_78EC82
0x78EC79: mov     ecx, [esi+0Ch]
0x78EC7C: sub     ecx, eax
0x78EC7E: cmp     edi, ecx
0x78EC80: jb      short loc_78EC87
0x78EC82: call    __invalid_parameter_noinfo
0x78EC87: mov     eax, [esi+8]
0x78EC8A: add     dword ptr [esi], 4
0x78EC8D: add     eax, edi
0x78EC8F: mov     eax, [eax]
0x78EC91: cmp     eax, ebx
0x78EC93: jle     short loc_78ECD0
0x78EC95: mov     ebx, eax
0x78EC97: mov     edi, [esi]
0x78EC99: lea     eax, [edi+1]
0x78EC9C: mov     [esi], eax
0x78EC9E: mov     ecx, [esi+8]
0x78ECA1: test    ecx, ecx
0x78ECA3: jz      short loc_78ECAE
0x78ECA5: mov     eax, [esi+0Ch]
0x78ECA8: sub     eax, ecx
0x78ECAA: cmp     edi, eax
0x78ECAC: jb      short loc_78ECB3
0x78ECAE: call    __invalid_parameter_noinfo
0x78ECB3: mov     ecx, [esi+8]
0x78ECB6: mov     dl, [edi+ecx]
0x78ECB9: mov     byte ptr [esp+2Ch+var_18], dl
0x78ECBD: mov     eax, [esp+2Ch+var_18]
0x78ECC1: push    eax
0x78ECC2: push    1
0x78ECC4: mov     ecx, ebp
0x78ECC6: call    sub_6EDAA0
0x78ECCB: sub     ebx, 1
0x78ECCE: jnz     short loc_78EC97
0x78ECD0: mov     eax, ebp
0x78ECD2: mov     ecx, [esp+2Ch+var_C]
0x78ECD6: mov     large fs:0, ecx
0x78ECDD: pop     ecx
0x78ECDE: pop     edi
0x78ECDF: pop     esi
0x78ECE0: pop     ebp
0x78ECE1: pop     ebx
0x78ECE2: add     esp, 18h
0x78ECE5: retn    4
0x9CBB50: mov     eax, [ebp-14h]
0x9CBB53: and     eax, 1
0x9CBB56: jz      locret_9CBB68
0x9CBB5C: and     dword ptr [ebp-14h], 0FFFFFFFEh
0x9CBB60: mov     ecx, [ebp-10h]; this
0x9CBB63: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CBB68: retn
0x9CBB69: mov     edx, [esp+arg_4]
0x9CBB6D: lea     eax, [edx-1Ch]
0x9CBB70: mov     ecx, [edx-20h]
0x9CBB73: xor     ecx, eax
0x9CBB75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBB7A: mov     eax, offset stru_AF4A00
0x9CBB7F: jmp     ___CxxFrameHandler3
