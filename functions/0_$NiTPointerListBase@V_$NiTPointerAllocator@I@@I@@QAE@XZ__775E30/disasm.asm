0x775E30: push    ecx
0x775E31: push    ebp
0x775E32: xor     eax, eax
0x775E34: mov     ebp, ecx
0x775E36: cmp     [ebp+45Ah], ax
0x775E3D: push    esi
0x775E3E: mov     [esp+0Ch+var_4], eax
0x775E42: jbe     short loc_775EB4
0x775E44: push    ebx
0x775E45: push    edi
0x775E46: jmp     short loc_775E50
0x775E48: align 10h
0x775E50: mov     ecx, [ebp+454h]
0x775E56: mov     ebx, [ecx+eax*4]
0x775E59: test    ebx, ebx
0x775E5B: jz      short loc_775EA0
0x775E5D: mov     edi, [ebx+14h]
0x775E60: lea     esi, [ebx+10h]
0x775E63: xor     eax, eax
0x775E65: cmp     edi, eax
0x775E67: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@I@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,uint>::`vftable'
0x775E6D: jz      short loc_775E84
0x775E6F: nop
0x775E70: mov     edx, [esi]
0x775E72: mov     eax, edi
0x775E74: mov     edi, [edi]
0x775E76: push    eax
0x775E77: mov     eax, [edx+8]
0x775E7A: mov     ecx, esi
0x775E7C: call    eax
0x775E7E: test    edi, edi
0x775E80: jnz     short loc_775E70
0x775E82: xor     eax, eax
0x775E84: push    ebx
0x775E85: mov     [esi+0Ch], eax
0x775E88: mov     [esi+4], eax
0x775E8B: mov     [esi+8], eax
0x775E8E: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@I@@6B@; const NiTListBase<NiTPointerAllocator<uint>,uint>::`vftable'
0x775E94: call    FormHeapFree
0x775E99: mov     eax, [esp+18h+var_4]
0x775E9D: add     esp, 4
0x775EA0: movzx   ecx, word ptr [ebp+45Ah]
0x775EA7: add     eax, 1
0x775EAA: cmp     eax, ecx
0x775EAC: mov     [esp+14h+var_4], eax
0x775EB0: jb      short loc_775E50
0x775EB2: pop     edi
0x775EB3: pop     ebx
0x775EB4: mov     esi, [ebp+460h]
0x775EBA: test    esi, esi
0x775EBC: jz      short loc_775ECE
0x775EBE: mov     ecx, esi
0x775EC0: call    sub_775DA0
0x775EC5: push    esi
0x775EC6: call    FormHeapFree
0x775ECB: add     esp, 4
0x775ECE: mov     esi, [ebp+464h]
0x775ED4: test    esi, esi
0x775ED6: jz      short loc_775EE8
0x775ED8: mov     ecx, esi
0x775EDA: call    sub_775DA0
0x775EDF: push    esi
0x775EE0: call    FormHeapFree
0x775EE5: add     esp, 4
0x775EE8: mov     edx, [ebp+454h]
0x775EEE: push    edx
0x775EEF: mov     dword ptr [ebp+450h], offset ??_7?$NiTArray@PAVModeDesc@NiDX9AdapterDesc@@@@6B@; const NiTArray<NiDX9AdapterDesc::ModeDesc *>::`vftable'
0x775EF9: call    FormHeapFree
0x775EFE: add     esp, 4
0x775F01: pop     esi
0x775F02: pop     ebp
0x775F03: pop     ecx
0x775F04: retn
