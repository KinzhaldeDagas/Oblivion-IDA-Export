0x6C7D90: push    0FFFFFFFFh
0x6C7D92: push    offset SEH_8094D0
0x6C7D97: mov     eax, large fs:0
0x6C7D9D: push    eax
0x6C7D9E: push    ebx
0x6C7D9F: push    ebp
0x6C7DA0: push    esi
0x6C7DA1: push    edi
0x6C7DA2: mov     eax, ds:0B30AACh
0x6C7DA7: xor     eax, esp
0x6C7DA9: push    eax
0x6C7DAA: lea     eax, [esp+20h+var_C]
0x6C7DAE: mov     large fs:0, eax
0x6C7DB4: mov     edi, ecx
0x6C7DB6: mov     eax, [esp+20h+arg_0]
0x6C7DBA: mov     cx, [esp+20h+arg_4]
0x6C7DBF: xor     ebp, ebp
0x6C7DC1: cmp     ax, bp
0x6C7DC4: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiInterpController@@@@@@6B@; const NiTArray<NiPointer<NiInterpController>>::`vftable'
0x6C7DCA: mov     [edi+8], ax
0x6C7DCE: mov     [edi+0Eh], cx
0x6C7DD2: mov     [edi+0Ah], bp
0x6C7DD6: mov     [edi+0Ch], bp
0x6C7DDA: jbe     short loc_6C7E36
0x6C7DDC: movzx   esi, ax
0x6C7DDF: xor     ecx, ecx
0x6C7DE1: mov     eax, esi
0x6C7DE3: mov     edx, 4
0x6C7DE8: mul     edx
0x6C7DEA: seto    cl
0x6C7DED: neg     ecx
0x6C7DEF: or      ecx, eax
0x6C7DF1: xor     eax, eax
0x6C7DF3: add     ecx, 4
0x6C7DF6: setb    al
0x6C7DF9: neg     eax
0x6C7DFB: or      eax, ecx
0x6C7DFD: push    eax; Size
0x6C7DFE: call    FormHeapAlloc
0x6C7E03: add     esp, 4
0x6C7E06: mov     [esp+20h+arg_0], eax
0x6C7E0A: cmp     eax, ebp
0x6C7E0C: mov     [esp+20h+var_4], ebp
0x6C7E10: jz      short loc_6C7E2F
0x6C7E12: push    offset sub_7016A0; a5
0x6C7E17: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x6C7E1C: push    esi; size
0x6C7E1D: lea     ebx, [eax+4]
0x6C7E20: push    4; a2
0x6C7E22: push    ebx; a1
0x6C7E23: mov     [eax], esi
0x6C7E25: call    ArrayConstructor
0x6C7E2A: mov     [edi+4], ebx
0x6C7E2D: jmp     short loc_6C7E39
0x6C7E2F: xor     ebx, ebx
0x6C7E31: mov     [edi+4], ebx
0x6C7E34: jmp     short loc_6C7E39
0x6C7E36: mov     [edi+4], ebp
0x6C7E39: mov     eax, edi
0x6C7E3B: mov     ecx, [esp+20h+var_C]
0x6C7E3F: mov     large fs:0, ecx
0x6C7E46: pop     ecx
0x6C7E47: pop     edi
0x6C7E48: pop     esi
0x6C7E49: pop     ebp
0x6C7E4A: pop     ebx
0x6C7E4B: add     esp, 0Ch
0x6C7E4E: retn    8
