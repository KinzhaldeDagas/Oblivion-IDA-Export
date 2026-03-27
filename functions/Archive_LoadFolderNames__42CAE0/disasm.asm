0x42CAE0: push    ecx
0x42CAE1: push    esi
0x42CAE2: mov     esi, ecx
0x42CAE4: test    byte ptr [esi+194h], 10h
0x42CAEB: jz      short loc_42CB05
0x42CAED: mov     eax, [esi+19Ch]
0x42CAF3: mov     ecx, [esp+8+arg_0]
0x42CAF7: mov     eax, [eax+ecx*4]
0x42CAFA: add     eax, [esi+198h]
0x42CB00: pop     esi
0x42CB01: pop     ecx
0x42CB02: retn    4
0x42CB05: push    ebx
0x42CB06: mov     ebx, 1
0x42CB0B: test    [esi+160h], bl
0x42CB11: jz      loc_42CBF4
0x42CB17: mov     ecx, [esi+164h]
0x42CB1D: mov     eax, ds:BSFile_FilePos_Beg
0x42CB22: mov     edx, [esi]
0x42CB24: mov     edx, [edx+0Ch]
0x42CB27: push    ebp
0x42CB28: shl     ecx, 4
0x42CB2B: add     ecx, 24h ; '$'
0x42CB2E: push    eax
0x42CB2F: push    ecx
0x42CB30: mov     ecx, esi
0x42CB32: call    edx
0x42CB34: mov     ebp, [esp+10h+arg_0]
0x42CB38: test    ebp, ebp
0x42CB3A: jbe     short loc_42CB86
0x42CB3C: push    edi
0x42CB3D: xor     edi, edi
0x42CB3F: nop
0x42CB40: mov     edx, [esi+4]
0x42CB43: push    ebx
0x42CB44: lea     eax, [esp+18h+arg_0]
0x42CB48: push    eax
0x42CB49: push    ebx
0x42CB4A: lea     ecx, [esp+20h+var_4+3]
0x42CB4E: push    ecx
0x42CB4F: push    esi
0x42CB50: mov     [esp+28h+arg_0], ebx
0x42CB54: call    edx
0x42CB56: mov     ecx, ds:BSFile_FilePos_Cur
0x42CB5C: mov     edx, [esi+178h]
0x42CB62: mov     eax, [esi]
0x42CB64: mov     eax, [eax+0Ch]
0x42CB67: add     esp, 14h
0x42CB6A: push    ecx
0x42CB6B: mov     ecx, [edi+edx+8]
0x42CB6F: movzx   edx, byte ptr [esp+18h+var_4+3]
0x42CB74: shl     ecx, 4
0x42CB77: add     ecx, edx
0x42CB79: push    ecx
0x42CB7A: mov     ecx, esi
0x42CB7C: call    eax
0x42CB7E: add     edi, 10h
0x42CB81: sub     ebp, ebx
0x42CB83: jnz     short loc_42CB40
0x42CB85: pop     edi
0x42CB86: mov     eax, [esi+4]
0x42CB89: push    ebx
0x42CB8A: lea     ecx, [esp+14h+arg_0]
0x42CB8E: push    ecx
0x42CB8F: push    ebx
0x42CB90: lea     edx, [esp+1Ch+var_4+3]
0x42CB94: push    edx
0x42CB95: push    esi
0x42CB96: mov     [esp+24h+arg_0], ebx
0x42CB9A: call    eax
0x42CB9C: mov     eax, [esi+198h]
0x42CBA2: add     esp, 14h
0x42CBA5: test    eax, eax
0x42CBA7: pop     ebp
0x42CBA8: jz      short loc_42CBBD
0x42CBAA: push    eax
0x42CBAB: call    FormHeapFree
0x42CBB0: add     esp, 4
0x42CBB3: mov     dword ptr [esi+198h], 0
0x42CBBD: movzx   ecx, byte ptr [esp+0Ch+var_4+3]
0x42CBC2: push    ecx; Size
0x42CBC3: call    FormHeapAlloc
0x42CBC8: movzx   ecx, byte ptr [esp+10h+var_4+3]
0x42CBCD: push    ebx
0x42CBCE: lea     edx, [esp+14h+arg_0]
0x42CBD2: push    edx
0x42CBD3: mov     edx, [esi+4]
0x42CBD6: push    ecx
0x42CBD7: push    eax
0x42CBD8: push    esi
0x42CBD9: mov     [esi+198h], eax
0x42CBDF: mov     [esp+24h+arg_0], ebx
0x42CBE3: call    edx
0x42CBE5: mov     eax, [esi+198h]
0x42CBEB: add     esp, 18h
0x42CBEE: pop     ebx
0x42CBEF: pop     esi
0x42CBF0: pop     ecx
0x42CBF1: retn    4
0x42CBF4: pop     ebx
0x42CBF5: xor     eax, eax
0x42CBF7: pop     esi
0x42CBF8: pop     ecx
0x42CBF9: retn    4
