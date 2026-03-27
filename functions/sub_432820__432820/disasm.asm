0x432820: mov     eax, [esp+arg_4]
0x432824: push    ebx
0x432825: mov     ebx, [esp+4+arg_0]
0x432829: push    ebp
0x43282A: push    esi
0x43282B: mov     esi, [ebx+10h]
0x43282E: push    edi
0x43282F: mov     edi, [ebx+14h]
0x432832: push    0
0x432834: cdq
0x432835: push    10000h
0x43283A: push    edx
0x43283B: push    eax
0x43283C: mov     ebp, ecx
0x43283E: and     esi, 0FF00FFFFh
0x432844: call    __allmul
0x432849: add     esi, eax
0x43284B: adc     edi, edx
0x43284D: push    edi
0x43284E: push    esi
0x43284F: push    ebx
0x432850: mov     ecx, ebp
0x432852: call    sub_432220
0x432857: pop     edi
0x432858: pop     esi
0x432859: pop     ebp
0x43285A: pop     ebx
0x43285B: retn    8
