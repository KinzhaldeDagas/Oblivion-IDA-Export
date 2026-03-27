0x8A1C20: push    0FFFFFFFFh
0x8A1C22: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x8A1C27: mov     eax, large fs:0
0x8A1C2D: push    eax
0x8A1C2E: push    ecx
0x8A1C2F: push    ebx
0x8A1C30: push    ebp
0x8A1C31: push    esi
0x8A1C32: push    edi
0x8A1C33: mov     eax, ds:0B30AACh
0x8A1C38: xor     eax, esp
0x8A1C3A: push    eax
0x8A1C3B: lea     eax, [esp+24h+var_C]
0x8A1C3F: mov     large fs:0, eax
0x8A1C45: mov     edi, ecx
0x8A1C47: push    offset stru_BA7C80; lpCriticalSection
0x8A1C4C: call    dword ptr ds:0A2806Ch
0x8A1C52: call    dword ptr ds:0A2808Ch
0x8A1C58: mov     ebp, 1
0x8A1C5D: add     ds:0BA7CFCh, ebp
0x8A1C63: push    14h; Size
0x8A1C65: mov     ds:0BA7CF8h, eax
0x8A1C6A: call    FormHeapAlloc
0x8A1C6F: mov     esi, eax
0x8A1C71: add     esp, 4
0x8A1C74: mov     [esp+24h+var_10], esi
0x8A1C78: xor     ebx, ebx
0x8A1C7A: cmp     esi, ebx
0x8A1C7C: mov     [esp+24h+var_4], ebx
0x8A1C80: jz      short loc_8A1CA9
0x8A1C82: mov     ecx, esi; this
0x8A1C84: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8A1C89: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8A1C8F: mov     [esi+0Ch], ebx
0x8A1C92: mov     [esi+10h], ebx
0x8A1C95: add     ds:0BA7D70h, ebp
0x8A1C9B: mov     dword ptr [esi], offset ??_7bhkTransformShape@@6B@; const bhkTransformShape::`vftable'
0x8A1CA1: add     ds:0BA7D64h, ebp
0x8A1CA7: jmp     short loc_8A1CAB
0x8A1CA9: xor     esi, esi
0x8A1CAB: mov     ecx, [esp+24h+arg_0]
0x8A1CAF: mov     eax, [edi]
0x8A1CB1: mov     edx, [eax+80h]
0x8A1CB7: push    ecx
0x8A1CB8: push    esi
0x8A1CB9: mov     ecx, edi
0x8A1CBB: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8A1CC3: call    edx
0x8A1CC5: sub     ds:0BA7CFCh, ebp
0x8A1CCB: jnz     short loc_8A1CD3
0x8A1CCD: mov     ds:0BA7CF8h, ebx
0x8A1CD3: push    offset stru_BA7C80; lpCriticalSection
0x8A1CD8: call    dword ptr ds:0A28074h
0x8A1CDE: mov     eax, esi
0x8A1CE0: mov     ecx, dword ptr [esp+24h+var_C]
0x8A1CE4: mov     large fs:0, ecx
0x8A1CEB: pop     ecx
0x8A1CEC: pop     edi
0x8A1CED: pop     esi
0x8A1CEE: pop     ebp
0x8A1CEF: pop     ebx
0x8A1CF0: add     esp, 10h
0x8A1CF3: retn    4
