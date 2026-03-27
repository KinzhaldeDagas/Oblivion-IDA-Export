0x72C160: sub     esp, 18h
0x72C163: mov     eax, ds:0B30AACh
0x72C168: xor     eax, esp
0x72C16A: mov     [esp+18h+var_4], eax
0x72C16E: push    ebx
0x72C16F: push    ebp
0x72C170: push    esi
0x72C171: mov     esi, [esp+24h+a2]
0x72C175: push    edi
0x72C176: push    esi; a2
0x72C177: mov     ebx, ecx
0x72C179: call    sub_7009A0
0x72C17E: mov     eax, ds:0B3FF1Ch
0x72C183: push    eax; ArgList
0x72C184: call    TESOutput_PrintString
0x72C189: movzx   edi, word ptr [esi+0Ah]
0x72C18D: movzx   ecx, word ptr [esi+8]
0x72C191: add     esp, 4
0x72C194: cmp     edi, ecx
0x72C196: mov     [esp+28h+var_18], eax
0x72C19A: jb      short loc_72C1AA
0x72C19C: movzx   edx, word ptr [esi+0Eh]
0x72C1A0: add     edx, edi
0x72C1A2: push    edx
0x72C1A3: mov     ecx, esi
0x72C1A5: call    NiTArray_SetSize
0x72C1AA: lea     eax, [esp+28h+var_18]
0x72C1AE: push    eax
0x72C1AF: push    edi
0x72C1B0: mov     ecx, esi
0x72C1B2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72C1B7: mov     eax, [ebx+10h]
0x72C1BA: test    eax, eax
0x72C1BC: jz      short loc_72C1FA
0x72C1BE: mov     eax, [eax+8]
0x72C1C1: push    eax; int
0x72C1C2: push    offset aRootParent; "Root Parent"
0x72C1C7: call    TESOutput_PrintLabeledString
0x72C1CC: movzx   edi, word ptr [esi+0Ah]
0x72C1D0: movzx   ecx, word ptr [esi+8]
0x72C1D4: add     esp, 8
0x72C1D7: cmp     edi, ecx
0x72C1D9: mov     [esp+28h+var_18], eax
0x72C1DD: jb      short loc_72C1ED
0x72C1DF: movzx   edx, word ptr [esi+0Eh]
0x72C1E3: add     edx, edi
0x72C1E5: push    edx
0x72C1E6: mov     ecx, esi
0x72C1E8: call    NiTArray_SetSize
0x72C1ED: lea     eax, [esp+28h+var_18]
0x72C1F1: push    eax
0x72C1F2: push    edi
0x72C1F3: mov     ecx, esi
0x72C1F5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72C1FA: mov     ebp, [ebx+8]
0x72C1FD: test    ebp, ebp
0x72C1FF: jz      loc_72C38C
0x72C205: mov     eax, [ebx+0Ch]
0x72C208: test    eax, eax
0x72C20A: jz      short loc_72C20F
0x72C20C: mov     eax, [eax+8]
0x72C20F: push    eax; int
0x72C210: push    offset aHardwarePartit; "Hardware partitions"
0x72C215: call    TESOutput_PrintLabeledUnsignedInt
0x72C21A: movzx   edi, word ptr [esi+0Ah]
0x72C21E: movzx   ecx, word ptr [esi+8]
0x72C222: add     esp, 8
0x72C225: cmp     edi, ecx
0x72C227: mov     [esp+28h+var_18], eax
0x72C22B: jb      short loc_72C23B
0x72C22D: movzx   edx, word ptr [esi+0Eh]
0x72C231: add     edx, edi
0x72C233: push    edx
0x72C234: mov     ecx, esi
0x72C236: call    NiTArray_SetSize
0x72C23B: lea     eax, [esp+28h+var_18]
0x72C23F: push    eax
0x72C240: push    edi
0x72C241: mov     ecx, esi
0x72C243: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72C248: mov     ebp, [ebp+40h]
0x72C24B: push    ebp; int
0x72C24C: push    offset aBoneCount; "Bone Count"
0x72C251: call    TESOutput_PrintLabeledUnsignedInt
0x72C256: movzx   edi, word ptr [esi+0Ah]
0x72C25A: movzx   ecx, word ptr [esi+8]
0x72C25E: add     esp, 8
0x72C261: cmp     edi, ecx
0x72C263: mov     [esp+28h+var_18], eax
0x72C267: jb      short loc_72C277
0x72C269: movzx   edx, word ptr [esi+0Eh]
0x72C26D: add     edx, edi
0x72C26F: push    edx
0x72C270: mov     ecx, esi
0x72C272: call    NiTArray_SetSize
0x72C277: lea     eax, [esp+28h+var_18]
0x72C27B: push    eax
0x72C27C: push    edi
0x72C27D: mov     ecx, esi
0x72C27F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72C284: xor     ecx, ecx
0x72C286: mov     eax, ebp
0x72C288: mov     edx, 4
0x72C28D: mul     edx
0x72C28F: seto    cl
0x72C292: neg     ecx
0x72C294: or      ecx, eax
0x72C296: push    ecx; Size
0x72C297: call    FormHeapAlloc
0x72C29C: mov     edi, eax
0x72C29E: add     esp, 4
0x72C2A1: xor     eax, eax
0x72C2A3: test    ebp, ebp
0x72C2A5: mov     [esp+28h+var_18], edi
0x72C2A9: jbe     short loc_72C2C3
0x72C2AB: jmp     short loc_72C2B0
0x72C2AD: align 10h
0x72C2B0: mov     ecx, [ebx+14h]
0x72C2B3: mov     edx, [ecx+eax*4]
0x72C2B6: mov     ecx, [edx+8]
0x72C2B9: mov     [edi+eax*4], ecx
0x72C2BC: add     eax, 1
0x72C2BF: cmp     eax, ebp
0x72C2C1: jb      short loc_72C2B0
0x72C2C3: push    offset sub_72BAE0
0x72C2C8: push    4
0x72C2CA: push    ebp
0x72C2CB: push    edi
0x72C2CC: call    unknown_libname_60
0x72C2D1: add     esp, 10h
0x72C2D4: xor     ebx, ebx
0x72C2D6: test    ebp, ebp
0x72C2D8: jbe     loc_72C383
0x72C2DE: mov     edi, edi
0x72C2E0: push    ebx; ArgList
0x72C2E1: push    offset a3d; "  %3d"
0x72C2E6: lea     edx, [esp+30h+DstBuf]
0x72C2EA: push    0Ah; SizeInBytes
0x72C2EC: push    edx; DstBuf
0x72C2ED: call    sub_6C5D40
0x72C2F2: mov     eax, [edi+ebx*4]
0x72C2F5: add     esp, 10h
0x72C2F8: test    eax, eax
0x72C2FA: jnz     short loc_72C301
0x72C2FC: mov     eax, offset aNoname_0; "<noname>"
0x72C301: push    eax; int
0x72C302: lea     eax, [esp+2Ch+DstBuf]
0x72C306: push    eax; ArgList
0x72C307: call    TESOutput_PrintLabeledString
0x72C30C: movzx   edi, word ptr [esi+0Ah]
0x72C310: movzx   ecx, word ptr [esi+8]
0x72C314: add     esp, 8
0x72C317: cmp     edi, ecx
0x72C319: mov     [esp+28h+var_14], eax
0x72C31D: jb      short loc_72C331
0x72C31F: movzx   edx, word ptr [esi+0Eh]
0x72C323: add     edx, edi
0x72C325: push    edx
0x72C326: mov     ecx, esi
0x72C328: call    NiTArray_SetSize
0x72C32D: mov     eax, [esp+28h+var_14]
0x72C331: movzx   ecx, word ptr [esi+0Ah]
0x72C335: cmp     edi, ecx
0x72C337: jb      short loc_72C34B
0x72C339: test    eax, eax
0x72C33B: lea     edx, [edi+1]
0x72C33E: mov     [esi+0Ah], dx
0x72C342: jz      short loc_72C36E
0x72C344: add     word ptr [esi+0Ch], 1
0x72C349: jmp     short loc_72C36E
0x72C34B: test    eax, eax
0x72C34D: jz      short loc_72C35F
0x72C34F: mov     ecx, [esi+4]
0x72C352: cmp     dword ptr [ecx+edi*4], 0
0x72C356: jnz     short loc_72C36E
0x72C358: add     word ptr [esi+0Ch], 1
0x72C35D: jmp     short loc_72C36E
0x72C35F: mov     edx, [esi+4]
0x72C362: cmp     dword ptr [edx+edi*4], 0
0x72C366: jz      short loc_72C36E
0x72C368: add     word ptr [esi+0Ch], 0FFFFh
0x72C36E: mov     ecx, [esi+4]
0x72C371: add     ebx, 1
0x72C374: cmp     ebx, ebp
0x72C376: mov     [ecx+edi*4], eax
0x72C379: mov     edi, [esp+28h+var_18]
0x72C37D: jb      loc_72C2E0
0x72C383: push    edi
0x72C384: call    FormHeapFree
0x72C389: add     esp, 4
0x72C38C: mov     ecx, [esp+28h+var_4]
0x72C390: pop     edi
0x72C391: pop     esi
0x72C392: pop     ebp
0x72C393: pop     ebx
0x72C394: xor     ecx, esp
0x72C396: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72C39B: add     esp, 18h
0x72C39E: retn    4
