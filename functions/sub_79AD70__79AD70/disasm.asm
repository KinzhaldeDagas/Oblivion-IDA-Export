0x79AD70: push    ebp; Oblivion-authoritative copy construction for the 16-byte vector wrapper embedded at SFrondGuide+0x00. Allocates capacity for the exact source count and deep-copies 0x38-byte SFrondVertex records; scalar guide fields are copied separately by callers.
0x79AD71: mov     ebp, esp
0x79AD73: push    0FFFFFFFFh
0x79AD75: push    offset SEH_79AD70
0x79AD7A: mov     eax, large fs:0
0x79AD80: push    eax
0x79AD81: sub     esp, 8
0x79AD84: push    ebx
0x79AD85: push    esi
0x79AD86: push    edi
0x79AD87: mov     eax, ds:0B30AACh
0x79AD8C: xor     eax, ebp
0x79AD8E: push    eax
0x79AD8F: lea     eax, [ebp+var_C]
0x79AD92: mov     large fs:0, eax
0x79AD98: mov     [ebp+var_10], esp
0x79AD9B: mov     edi, ecx
0x79AD9D: mov     [ebp+var_14], edi
0x79ADA0: mov     esi, [ebp+source]
0x79ADA3: mov     eax, [esi+4]
0x79ADA6: test    eax, eax
0x79ADA8: jz      short loc_79ADC2
0x79ADAA: mov     ecx, [esi+8]
0x79ADAD: sub     ecx, eax
0x79ADAF: mov     eax, 92492493h
0x79ADB4: imul    ecx
0x79ADB6: add     edx, ecx
0x79ADB8: sar     edx, 5
0x79ADBB: mov     eax, edx
0x79ADBD: shr     eax, 1Fh
0x79ADC0: add     eax, edx
0x79ADC2: push    eax; count
0x79ADC3: mov     ecx, edi; this
0x79ADC5: call    OB_stVector_SFrondVertex_Buy_010201A0; Initializes an empty 16-byte SFrondVertex vector wrapper and, when count is nonzero, buys exact count capacity. Maximum count is 0x04924924 (0xFFFFFFFF/0x38).
0x79ADCA: test    al, al
0x79ADCC: jz      short loc_79AE13
0x79ADCE: mov     ebx, [esi+8]
0x79ADD1: cmp     [esi+4], ebx
0x79ADD4: mov     [ebp+var_4], 0
0x79ADDB: jbe     short loc_79ADE2
0x79ADDD: call    __invalid_parameter_noinfo
0x79ADE2: mov     ecx, [esi+4]
0x79ADE5: cmp     ecx, [esi+8]
0x79ADE8: mov     [ebp+source], ecx
0x79ADEB: jbe     short loc_79ADF5
0x79ADED: call    __invalid_parameter_noinfo
0x79ADF2: mov     ecx, [ebp+source]
0x79ADF5: mov     eax, [edi+4]
0x79ADF8: mov     byte ptr [ebp+source], 0
0x79ADFC: mov     edx, [ebp+source]
0x79ADFF: push    edx
0x79AE00: mov     edx, [ebp+source]
0x79AE03: push    edx
0x79AE04: push    edi
0x79AE05: push    eax; destinationFirst
0x79AE06: push    ebx; last
0x79AE07: push    ecx; first
0x79AE08: call    OB_SFrondVertex_UninitializedCopy_010201A0; Copies 0x38-byte SFrondVertex records from [first,last) into uninitialized destination storage and returns the constructed end.
0x79AE0D: add     esp, 18h
0x79AE10: mov     [edi+8], eax
0x79AE13: mov     eax, edi
0x79AE15: mov     ecx, [ebp+var_C]
0x79AE18: mov     large fs:0, ecx
0x79AE1F: pop     ecx
0x79AE20: pop     edi
0x79AE21: pop     esi
0x79AE22: pop     ebx
0x79AE23: mov     esp, ebp
0x79AE25: pop     ebp
0x79AE26: retn    4
0x79AE29: mov     ecx, [ebp+var_14]; this
0x79AE2C: call    OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x79AE31: push    0
0x79AE33: push    0
0x79AE35: call    ThrowException??
0x9CC1F0: mov     edx, [esp-4+arg_4]
0x9CC1F4: lea     eax, [edx+0Ch]
0x9CC1F7: mov     ecx, [edx-18h]
0x9CC1FA: xor     ecx, eax
0x9CC1FC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC201: mov     eax, offset stru_AF526C
0x9CC206: jmp     ___CxxFrameHandler3
