0x739710: push    0FFFFFFFFh
0x739712: push    offset SEH_8094D0
0x739717: mov     eax, large fs:0
0x73971D: push    eax
0x73971E: push    ebx
0x73971F: push    ebp
0x739720: push    esi
0x739721: push    edi
0x739722: mov     eax, ds:0B30AACh
0x739727: xor     eax, esp
0x739729: push    eax
0x73972A: lea     eax, [esp+20h+var_C]
0x73972E: mov     large fs:0, eax
0x739734: mov     edi, ecx
0x739736: mov     eax, [esp+20h+arg_0]
0x73973A: mov     cx, [esp+20h+arg_4]
0x73973F: xor     ebp, ebp
0x739741: cmp     ax, bp
0x739744: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiScreenPolygon@@@@@@6B@; const NiTArray<NiPointer<NiScreenPolygon>>::`vftable'
0x73974A: mov     [edi+8], ax
0x73974E: mov     [edi+0Eh], cx
0x739752: mov     [edi+0Ah], bp
0x739756: mov     [edi+0Ch], bp
0x73975A: jbe     short loc_7397B6
0x73975C: movzx   esi, ax
0x73975F: xor     ecx, ecx
0x739761: mov     eax, esi
0x739763: mov     edx, 4
0x739768: mul     edx
0x73976A: seto    cl
0x73976D: neg     ecx
0x73976F: or      ecx, eax
0x739771: xor     eax, eax
0x739773: add     ecx, 4
0x739776: setb    al
0x739779: neg     eax
0x73977B: or      eax, ecx
0x73977D: push    eax; Size
0x73977E: call    FormHeapAlloc
0x739783: add     esp, 4
0x739786: mov     [esp+20h+arg_0], eax
0x73978A: cmp     eax, ebp
0x73978C: mov     [esp+20h+var_4], ebp
0x739790: jz      short loc_7397AF
0x739792: push    offset sub_7016A0; a5
0x739797: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x73979C: push    esi; size
0x73979D: lea     ebx, [eax+4]
0x7397A0: push    4; a2
0x7397A2: push    ebx; a1
0x7397A3: mov     [eax], esi
0x7397A5: call    ArrayConstructor
0x7397AA: mov     [edi+4], ebx
0x7397AD: jmp     short loc_7397B9
0x7397AF: xor     ebx, ebx
0x7397B1: mov     [edi+4], ebx
0x7397B4: jmp     short loc_7397B9
0x7397B6: mov     [edi+4], ebp
0x7397B9: mov     eax, edi
0x7397BB: mov     ecx, [esp+20h+var_C]
0x7397BF: mov     large fs:0, ecx
0x7397C6: pop     ecx
0x7397C7: pop     edi
0x7397C8: pop     esi
0x7397C9: pop     ebp
0x7397CA: pop     ebx
0x7397CB: add     esp, 0Ch
0x7397CE: retn    8
