0x523DE0: push    0FFFFFFFFh
0x523DE2: push    offset SEH_8094D0
0x523DE7: mov     eax, large fs:0
0x523DED: push    eax
0x523DEE: push    ebx
0x523DEF: push    ebp
0x523DF0: push    esi
0x523DF1: push    edi
0x523DF2: mov     eax, ds:0B30AACh
0x523DF7: xor     eax, esp
0x523DF9: push    eax
0x523DFA: lea     eax, [esp+20h+var_C]
0x523DFE: mov     large fs:0, eax
0x523E04: mov     edi, ecx
0x523E06: mov     eax, [esp+20h+arg_0]
0x523E0A: mov     cx, [esp+20h+arg_4]
0x523E0F: xor     ebp, ebp
0x523E11: cmp     ax, bp
0x523E14: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTArray<NiPointer<NiTexture>>::`vftable'
0x523E1A: mov     [edi+8], ax
0x523E1E: mov     [edi+0Eh], cx
0x523E22: mov     [edi+0Ah], bp
0x523E26: mov     [edi+0Ch], bp
0x523E2A: jbe     short loc_523E86
0x523E2C: movzx   esi, ax
0x523E2F: xor     ecx, ecx
0x523E31: mov     eax, esi
0x523E33: mov     edx, 4
0x523E38: mul     edx
0x523E3A: seto    cl
0x523E3D: neg     ecx
0x523E3F: or      ecx, eax
0x523E41: xor     eax, eax
0x523E43: add     ecx, 4
0x523E46: setb    al
0x523E49: neg     eax
0x523E4B: or      eax, ecx
0x523E4D: push    eax; Size
0x523E4E: call    FormHeapAlloc
0x523E53: add     esp, 4
0x523E56: mov     [esp+20h+arg_0], eax
0x523E5A: cmp     eax, ebp
0x523E5C: mov     [esp+20h+var_4], ebp
0x523E60: jz      short loc_523E7F
0x523E62: push    offset sub_7016A0; a5
0x523E67: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x523E6C: push    esi; size
0x523E6D: lea     ebx, [eax+4]
0x523E70: push    4; a2
0x523E72: push    ebx; a1
0x523E73: mov     [eax], esi
0x523E75: call    ArrayConstructor
0x523E7A: mov     [edi+4], ebx
0x523E7D: jmp     short loc_523E89
0x523E7F: xor     ebx, ebx
0x523E81: mov     [edi+4], ebx
0x523E84: jmp     short loc_523E89
0x523E86: mov     [edi+4], ebp
0x523E89: mov     eax, edi
0x523E8B: mov     ecx, [esp+20h+var_C]
0x523E8F: mov     large fs:0, ecx
0x523E96: pop     ecx
0x523E97: pop     edi
0x523E98: pop     esi
0x523E99: pop     ebp
0x523E9A: pop     ebx
0x523E9B: add     esp, 0Ch
0x523E9E: retn    8
