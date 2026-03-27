0x7D6BD0: push    0FFFFFFFFh
0x7D6BD2: push    offset ??0BSRenderedTexture@@QAE@XZ_SEH
0x7D6BD7: mov     eax, large fs:0
0x7D6BDD: push    eax
0x7D6BDE: sub     esp, 8
0x7D6BE1: push    ebx
0x7D6BE2: push    ebp
0x7D6BE3: push    esi
0x7D6BE4: push    edi
0x7D6BE5: mov     eax, ds:0B30AACh
0x7D6BEA: xor     eax, esp
0x7D6BEC: push    eax
0x7D6BED: lea     eax, [esp+28h+var_C]
0x7D6BF1: mov     large fs:0, eax
0x7D6BF7: mov     ebx, ecx
0x7D6BF9: mov     [esp+28h+var_10], ebx
0x7D6BFD: mov     ebp, ds:0A28078h
0x7D6C03: xor     esi, esi
0x7D6C05: push    offset NiRefObject_objcount; lpAddend
0x7D6C0A: mov     dword ptr [ebx], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7D6C10: mov     [ebx+4], esi
0x7D6C13: call    ebp ; InterlockedIncrement
0x7D6C15: push    offset sub_7016A0; a5
0x7D6C1A: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D6C1F: push    6; size
0x7D6C21: lea     eax, [ebx+8]
0x7D6C24: push    4; a2
0x7D6C26: push    eax; a1
0x7D6C27: mov     [esp+3Ch+var_4], esi
0x7D6C2B: mov     dword ptr [ebx], offset ??_7BSRenderedTexture@@6B@; const BSRenderedTexture::`vftable'
0x7D6C31: mov     [esp+3Ch+var_14], eax
0x7D6C35: call    ArrayConstructor
0x7D6C3A: mov     [ebx+20h], esi
0x7D6C3D: mov     edi, esi
0x7D6C3F: mov     esi, [esp+28h+arg_0]
0x7D6C43: cmp     edi, esi
0x7D6C45: mov     byte ptr [esp+28h+var_4], 2
0x7D6C4A: jz      short loc_7D6C79
0x7D6C4C: test    edi, edi
0x7D6C4E: jz      short loc_7D6C6C
0x7D6C50: lea     eax, [edi+4]
0x7D6C53: push    eax; lpAddend
0x7D6C54: call    dword ptr ds:0A2807Ch
0x7D6C5A: test    eax, eax
0x7D6C5C: jnz     short loc_7D6C6C
0x7D6C5E: test    edi, edi
0x7D6C60: jz      short loc_7D6C6C
0x7D6C62: mov     edx, [edi]
0x7D6C64: mov     eax, [edx]
0x7D6C66: push    1
0x7D6C68: mov     ecx, edi
0x7D6C6A: call    eax
0x7D6C6C: test    esi, esi
0x7D6C6E: mov     [ebx+20h], esi
0x7D6C71: jz      short loc_7D6C79
0x7D6C73: lea     ecx, [esi+4]
0x7D6C76: push    ecx; lpAddend
0x7D6C77: call    ebp ; InterlockedIncrement
0x7D6C79: cmp     byte ptr [esp+28h+a3], 0
0x7D6C7E: jz      loc_7D6D21
0x7D6C84: test    esi, esi
0x7D6C86: jz      short loc_7D6CA3
0x7D6C88: mov     edx, [esi]
0x7D6C8A: mov     eax, [edx+4]
0x7D6C8D: mov     ecx, esi
0x7D6C8F: call    eax
0x7D6C91: test    eax, eax
0x7D6C93: jz      short loc_7D6CA3
0x7D6C95: cmp     eax, offset unk_BAA880
0x7D6C9A: jz      short loc_7D6CEA
0x7D6C9C: mov     eax, [eax+4]
0x7D6C9F: test    eax, eax
0x7D6CA1: jnz     short loc_7D6C95
0x7D6CA3: mov     edi, [esp+28h+arg_8]
0x7D6CA7: test    edi, edi
0x7D6CA9: jz      short loc_7D6CCB
0x7D6CAB: mov     edx, [esi]
0x7D6CAD: mov     eax, [edx+4Ch]
0x7D6CB0: mov     ebp, [edi+8]
0x7D6CB3: mov     ecx, esi
0x7D6CB5: call    eax
0x7D6CB7: cmp     ebp, eax
0x7D6CB9: jb      short loc_7D6CCB
0x7D6CBB: mov     edx, [esi]
0x7D6CBD: mov     eax, [edx+50h]
0x7D6CC0: mov     ebp, [edi+0Ch]
0x7D6CC3: mov     ecx, esi
0x7D6CC5: call    eax
0x7D6CC7: cmp     ebp, eax
0x7D6CC9: jnb     short loc_7D6D21
0x7D6CCB: mov     ecx, ds:0B43104h
0x7D6CD1: mov     edx, [esi]
0x7D6CD3: mov     eax, [edx+54h]
0x7D6CD6: push    ecx
0x7D6CD7: mov     ecx, esi
0x7D6CD9: call    eax
0x7D6CDB: push    eax
0x7D6CDC: call    sub_70BE00
0x7D6CE1: add     esp, 8
0x7D6CE4: mov     [esp+28h+a3], eax
0x7D6CE8: jmp     short loc_7D6D25
0x7D6CEA: mov     ecx, [esp+28h+arg_8]
0x7D6CEE: test    ecx, ecx
0x7D6CF0: mov     eax, [esi+44h]
0x7D6CF3: jz      short loc_7D6D0B
0x7D6CF5: mov     edx, [ecx+8]
0x7D6CF8: cmp     edx, [eax+8]
0x7D6CFB: jb      short loc_7D6D0B
0x7D6CFD: mov     edx, [ecx+0Ch]
0x7D6D00: cmp     edx, [eax+0Ch]
0x7D6D03: jb      short loc_7D6D0B
0x7D6D05: mov     [esp+28h+a3], ecx
0x7D6D09: jmp     short loc_7D6D25
0x7D6D0B: mov     ecx, ds:0B43104h
0x7D6D11: push    ecx
0x7D6D12: push    eax
0x7D6D13: call    sub_70BE00
0x7D6D18: add     esp, 8
0x7D6D1B: mov     [esp+28h+a3], eax
0x7D6D1F: jmp     short loc_7D6D25
0x7D6D21: mov     [esp+28h+a3], edi
0x7D6D25: test    esi, esi
0x7D6D27: jz      short loc_7D6D44
0x7D6D29: mov     edx, [esi]
0x7D6D2B: mov     eax, [edx+4]
0x7D6D2E: mov     ecx, esi
0x7D6D30: call    eax
0x7D6D32: test    eax, eax
0x7D6D34: jz      short loc_7D6D44
0x7D6D36: cmp     eax, offset unk_BAA880
0x7D6D3B: jz      short loc_7D6DA8
0x7D6D3D: mov     eax, [eax+4]
0x7D6D40: test    eax, eax
0x7D6D42: jnz     short loc_7D6D36
0x7D6D44: mov     ecx, [esp+28h+a3]
0x7D6D48: mov     edx, ds:0B3F928h
0x7D6D4E: mov     eax, [esi]
0x7D6D50: push    ecx; a3
0x7D6D51: push    edx; a2
0x7D6D52: mov     edx, [eax+54h]
0x7D6D55: mov     ecx, esi
0x7D6D57: call    edx
0x7D6D59: push    eax; a1
0x7D6D5A: call    CreateNewRenderTargetGroupAndDoSomething
0x7D6D5F: mov     ecx, [esp+34h+var_14]; this
0x7D6D63: add     esp, 0Ch
0x7D6D66: push    eax; a2
0x7D6D67: call    NiSmartPointer_Set??
0x7D6D6C: lea     edi, [ebx+0Ch]
0x7D6D6F: mov     ebp, 5
0x7D6D74: mov     esi, [edi]
0x7D6D76: test    esi, esi
0x7D6D78: jz      short loc_7D6D9C
0x7D6D7A: lea     eax, [esi+4]
0x7D6D7D: push    eax; lpAddend
0x7D6D7E: call    dword ptr ds:0A2807Ch
0x7D6D84: test    eax, eax
0x7D6D86: jnz     short loc_7D6D96
0x7D6D88: test    esi, esi
0x7D6D8A: jz      short loc_7D6D96
0x7D6D8C: mov     edx, [esi]
0x7D6D8E: mov     eax, [edx]
0x7D6D90: push    1
0x7D6D92: mov     ecx, esi
0x7D6D94: call    eax
0x7D6D96: mov     dword ptr [edi], 0
0x7D6D9C: add     edi, 4
0x7D6D9F: sub     ebp, 1
0x7D6DA2: jnz     short loc_7D6D74
0x7D6DA4: mov     eax, ebx
0x7D6DA6: jmp     short loc_7D6E22
0x7D6DA8: mov     ebp, [esp+28h+var_14]
0x7D6DAC: lea     ebx, [esi+44h]
0x7D6DAF: mov     [esp+28h+arg_8], 6
0x7D6DB7: jmp     short loc_7D6DC0
0x7D6DB9: align 10h
0x7D6DC0: mov     ecx, [esp+28h+a3]
0x7D6DC4: mov     edx, ds:0B3F928h
0x7D6DCA: mov     eax, [ebx]
0x7D6DCC: push    ecx; a3
0x7D6DCD: push    edx; a2
0x7D6DCE: push    eax; a1
0x7D6DCF: call    CreateNewRenderTargetGroupAndDoSomething
0x7D6DD4: mov     esi, [ebp+0]
0x7D6DD7: mov     edi, eax
0x7D6DD9: add     esp, 0Ch
0x7D6DDC: cmp     esi, edi
0x7D6DDE: jz      short loc_7D6E11
0x7D6DE0: test    esi, esi
0x7D6DE2: jz      short loc_7D6E00
0x7D6DE4: lea     eax, [esi+4]
0x7D6DE7: push    eax; lpAddend
0x7D6DE8: call    dword ptr ds:0A2807Ch
0x7D6DEE: test    eax, eax
0x7D6DF0: jnz     short loc_7D6E00
0x7D6DF2: test    esi, esi
0x7D6DF4: jz      short loc_7D6E00
0x7D6DF6: mov     edx, [esi]
0x7D6DF8: mov     eax, [edx]
0x7D6DFA: push    1
0x7D6DFC: mov     ecx, esi
0x7D6DFE: call    eax
0x7D6E00: test    edi, edi
0x7D6E02: mov     [ebp+0], edi
0x7D6E05: jz      short loc_7D6E11
0x7D6E07: add     edi, 4
0x7D6E0A: push    edi; lpAddend
0x7D6E0B: call    dword ptr ds:0A28078h
0x7D6E11: add     ebx, 4
0x7D6E14: add     ebp, 4
0x7D6E17: sub     [esp+28h+arg_8], 1
0x7D6E1C: jnz     short loc_7D6DC0
0x7D6E1E: mov     eax, [esp+28h+var_10]
0x7D6E22: mov     ecx, dword ptr [esp+28h+var_C]
0x7D6E26: mov     large fs:0, ecx
0x7D6E2D: pop     ecx
0x7D6E2E: pop     edi
0x7D6E2F: pop     esi
0x7D6E30: pop     ebp
0x7D6E31: pop     ebx
0x7D6E32: add     esp, 14h
0x7D6E35: retn    0Ch
