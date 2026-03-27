0x8C64A0: push    0FFFFFFFFh
0x8C64A2: push    offset SEH_8C64A0
0x8C64A7: mov     eax, large fs:0
0x8C64AD: push    eax
0x8C64AE: push    ebp
0x8C64AF: push    esi
0x8C64B0: push    edi
0x8C64B1: mov     eax, ds:0B30AACh
0x8C64B6: xor     eax, esp
0x8C64B8: push    eax
0x8C64B9: lea     eax, [esp+1Ch+var_C]
0x8C64BD: mov     large fs:0, eax
0x8C64C3: mov     edi, ecx
0x8C64C5: mov     ebp, [esp+1Ch+arg_0]
0x8C64C9: test    ebp, ebp
0x8C64CB: jz      short loc_8C653D
0x8C64CD: push    1
0x8C64CF: push    50h ; 'P'
0x8C64D1: mov     ecx, offset FormHeap
0x8C64D6: call    j_MemoryHeap_Alloc
0x8C64DB: mov     dl, al
0x8C64DD: and     dl, 0Fh
0x8C64E0: mov     cl, 10h
0x8C64E2: sub     cl, dl
0x8C64E4: movzx   edx, cl
0x8C64E7: add     eax, edx
0x8C64E9: mov     [eax-1], cl
0x8C64EC: mov     [esp+1Ch+arg_0], eax
0x8C64F0: push    ebp
0x8C64F1: mov     ecx, eax; this
0x8C64F3: mov     [esp+20h+var_4], 0
0x8C64FB: call    ??0hkNiTriStripsShape@@QAE@XZ; hkNiTriStripsShape::hkNiTriStripsShape(void)
0x8C6500: mov     esi, eax
0x8C6502: mov     eax, [edi]
0x8C6504: mov     edx, [eax+4Ch]
0x8C6507: push    esi
0x8C6508: mov     ecx, edi
0x8C650A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8C6512: call    edx
0x8C6514: cmp     word ptr [esi+4], 0
0x8C6519: jz      short loc_8C6533
0x8C651B: add     word ptr [esi+6], 0FFFFh
0x8C6520: movzx   eax, word ptr [esi+6]
0x8C6524: test    ax, ax
0x8C6527: jnz     short loc_8C6533
0x8C6529: mov     eax, [esi]
0x8C652B: mov     edx, [eax]
0x8C652D: push    1
0x8C652F: mov     ecx, esi
0x8C6531: call    edx
0x8C6533: mov     eax, [edi]
0x8C6535: mov     edx, [eax+7Ch]
0x8C6538: push    ebp
0x8C6539: mov     ecx, edi
0x8C653B: call    edx
0x8C653D: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8C6541: mov     large fs:0, ecx
0x8C6548: pop     ecx
0x8C6549: pop     edi
0x8C654A: pop     esi
0x8C654B: pop     ebp
0x8C654C: add     esp, 0Ch
0x8C654F: retn    4
