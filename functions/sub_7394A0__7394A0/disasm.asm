0x7394A0: push    0FFFFFFFFh
0x7394A2: push    offset SEH_8094D0
0x7394A7: mov     eax, large fs:0
0x7394AD: push    eax
0x7394AE: push    ebx
0x7394AF: push    ebp
0x7394B0: push    esi
0x7394B1: push    edi
0x7394B2: mov     eax, ds:0B30AACh
0x7394B7: xor     eax, esp
0x7394B9: push    eax
0x7394BA: lea     eax, [esp+20h+var_C]
0x7394BE: mov     large fs:0, eax
0x7394C4: mov     edi, ecx
0x7394C6: mov     eax, [esp+20h+arg_0]
0x7394CA: mov     cx, [esp+20h+arg_4]
0x7394CF: xor     ebp, ebp
0x7394D1: cmp     ax, bp
0x7394D4: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiScreenTexture@@@@@@6B@; const NiTArray<NiPointer<NiScreenTexture>>::`vftable'
0x7394DA: mov     [edi+8], ax
0x7394DE: mov     [edi+0Eh], cx
0x7394E2: mov     [edi+0Ah], bp
0x7394E6: mov     [edi+0Ch], bp
0x7394EA: jbe     short loc_739546
0x7394EC: movzx   esi, ax
0x7394EF: xor     ecx, ecx
0x7394F1: mov     eax, esi
0x7394F3: mov     edx, 4
0x7394F8: mul     edx
0x7394FA: seto    cl
0x7394FD: neg     ecx
0x7394FF: or      ecx, eax
0x739501: xor     eax, eax
0x739503: add     ecx, 4
0x739506: setb    al
0x739509: neg     eax
0x73950B: or      eax, ecx
0x73950D: push    eax; Size
0x73950E: call    FormHeapAlloc
0x739513: add     esp, 4
0x739516: mov     [esp+20h+arg_0], eax
0x73951A: cmp     eax, ebp
0x73951C: mov     [esp+20h+var_4], ebp
0x739520: jz      short loc_73953F
0x739522: push    offset sub_7016A0; a5
0x739527: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x73952C: push    esi; size
0x73952D: lea     ebx, [eax+4]
0x739530: push    4; a2
0x739532: push    ebx; a1
0x739533: mov     [eax], esi
0x739535: call    ArrayConstructor
0x73953A: mov     [edi+4], ebx
0x73953D: jmp     short loc_739549
0x73953F: xor     ebx, ebx
0x739541: mov     [edi+4], ebx
0x739544: jmp     short loc_739549
0x739546: mov     [edi+4], ebp
0x739549: mov     eax, edi
0x73954B: mov     ecx, [esp+20h+var_C]
0x73954F: mov     large fs:0, ecx
0x739556: pop     ecx
0x739557: pop     edi
0x739558: pop     esi
0x739559: pop     ebp
0x73955A: pop     ebx
0x73955B: add     esp, 0Ch
0x73955E: retn    8
