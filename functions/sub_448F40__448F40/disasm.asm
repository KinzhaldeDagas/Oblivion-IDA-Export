0x448F40: push    0FFFFFFFFh
0x448F42: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x448F47: mov     eax, large fs:0
0x448F4D: push    eax
0x448F4E: push    ecx
0x448F4F: push    ebx
0x448F50: push    ebp
0x448F51: push    esi
0x448F52: push    edi
0x448F53: mov     eax, ds:0B30AACh
0x448F58: xor     eax, esp
0x448F5A: push    eax
0x448F5B: lea     eax, [esp+24h+var_C]
0x448F5F: mov     large fs:0, eax
0x448F65: mov     ebp, ecx
0x448F67: mov     ecx, [ebp+0CDCh]
0x448F6D: test    ecx, ecx
0x448F6F: jnz     short loc_448FB6
0x448F71: push    10h; Size
0x448F73: call    FormHeapAlloc
0x448F78: add     esp, 4
0x448F7B: mov     [esp+24h+var_10], eax
0x448F7F: test    eax, eax
0x448F81: mov     [esp+24h+var_4], 0
0x448F89: jz      short loc_448FA4
0x448F8B: push    0
0x448F8D: mov     ecx, eax
0x448F8F: call    ContainerExtraData_constr
0x448F94: mov     [esp+24h+var_4], 0FFFFFFFFh
0x448F9C: mov     [ebp+0CDCh], eax
0x448FA2: jmp     short loc_448FBB
0x448FA4: xor     eax, eax
0x448FA6: mov     [esp+24h+var_4], 0FFFFFFFFh
0x448FAE: mov     [ebp+0CDCh], eax
0x448FB4: jmp     short loc_448FBB
0x448FB6: call    sub_48F180
0x448FBB: mov     edi, [esp+24h+arg_0]
0x448FBF: lea     esi, [edi+44h]
0x448FC2: mov     ecx, esi; this
0x448FC4: call    ExtraDataList_GetContainerChanges
0x448FC9: mov     ecx, [ebp+0CDCh]
0x448FCF: push    0
0x448FD1: push    edi
0x448FD2: push    ecx
0x448FD3: mov     ecx, eax
0x448FD5: call    sub_48E9A0
0x448FDA: mov     ecx, esi
0x448FDC: call    sub_420680
0x448FE1: mov     esi, eax
0x448FE3: test    esi, esi
0x448FE5: jz      short loc_44900E
0x448FE7: lea     ecx, [esi+44h]; this
0x448FEA: call    ExtraDataList_GetContainerChanges
0x448FEF: mov     ebx, eax
0x448FF1: test    ebx, ebx
0x448FF3: jz      short loc_44900E
0x448FF5: push    esi
0x448FF6: mov     ecx, ebx
0x448FF8: call    sub_48E740
0x448FFD: mov     edx, [ebp+0CDCh]
0x449003: push    0
0x449005: push    esi
0x449006: push    edx
0x449007: mov     ecx, ebx
0x449009: call    sub_48E9A0
0x44900E: mov     ecx, edi; this
0x449010: call    TESObjectREFR_GetParentCell
0x449015: test    eax, eax
0x449017: jz      short loc_449028
0x449019: mov     ecx, [ebp+0CDCh]
0x44901F: push    ecx
0x449020: push    edi
0x449021: mov     ecx, eax
0x449023: call    sub_4CB2B0
0x449028: mov     ecx, dword ptr [esp+24h+var_C]
0x44902C: mov     large fs:0, ecx
0x449033: pop     ecx
0x449034: pop     edi
0x449035: pop     esi
0x449036: pop     ebp
0x449037: pop     ebx
0x449038: add     esp, 10h
0x44903B: retn    4
