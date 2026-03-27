0x435B50: push    0FFFFFFFFh
0x435B52: push    offset SEH_8094D0
0x435B57: mov     eax, large fs:0
0x435B5D: push    eax
0x435B5E: push    ebx
0x435B5F: push    ebp
0x435B60: push    esi
0x435B61: push    edi
0x435B62: mov     eax, ___security_cookie
0x435B67: xor     eax, esp
0x435B69: push    eax
0x435B6A: lea     eax, [esp+20h+var_C]
0x435B6E: mov     large fs:0, eax
0x435B74: mov     edi, ecx
0x435B76: mov     eax, [esp+20h+arg_0]
0x435B7A: mov     cx, [esp+20h+arg_4]
0x435B7F: xor     ebp, ebp
0x435B81: cmp     ax, bp
0x435B84: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VQueuedFile@@@@@@6B@; const NiTArray<NiPointer<QueuedFile>>::`vftable'
0x435B8A: mov     [edi+8], ax
0x435B8E: mov     [edi+0Eh], cx
0x435B92: mov     [edi+0Ah], bp
0x435B96: mov     [edi+0Ch], bp
0x435B9A: jbe     short loc_435BF6
0x435B9C: movzx   esi, ax
0x435B9F: xor     ecx, ecx
0x435BA1: mov     eax, esi
0x435BA3: mov     edx, 4
0x435BA8: mul     edx
0x435BAA: seto    cl
0x435BAD: neg     ecx
0x435BAF: or      ecx, eax
0x435BB1: xor     eax, eax
0x435BB3: add     ecx, 4
0x435BB6: setb    al
0x435BB9: neg     eax
0x435BBB: or      eax, ecx
0x435BBD: push    eax; Size
0x435BBE: call    FormHeapAlloc
0x435BC3: add     esp, 4
0x435BC6: mov     [esp+20h+arg_0], eax
0x435BCA: cmp     eax, ebp
0x435BCC: mov     [esp+20h+var_4], ebp
0x435BD0: jz      short loc_435BEF
0x435BD2: push    offset sub_4BDDC0; a5
0x435BD7: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x435BDC: push    esi; size
0x435BDD: lea     ebx, [eax+4]
0x435BE0: push    4; a2
0x435BE2: push    ebx; a1
0x435BE3: mov     [eax], esi
0x435BE5: call    ArrayConstructor
0x435BEA: mov     [edi+4], ebx
0x435BED: jmp     short loc_435BF9
0x435BEF: xor     ebx, ebx
0x435BF1: mov     [edi+4], ebx
0x435BF4: jmp     short loc_435BF9
0x435BF6: mov     [edi+4], ebp
0x435BF9: mov     eax, edi
0x435BFB: mov     ecx, [esp+20h+var_C]
0x435BFF: mov     large fs:0, ecx
0x435C06: pop     ecx
0x435C07: pop     edi
0x435C08: pop     esi
0x435C09: pop     ebp
0x435C0A: pop     ebx
0x435C0B: add     esp, 0Ch
0x435C0E: retn    8
