0x8CB4E0: push    esi
0x8CB4E1: mov     esi, [esp+4+arg_0]
0x8CB4E5: mov     eax, [esi+88h]
0x8CB4EB: push    edi
0x8CB4EC: mov     edi, [esp+8+arg_4]
0x8CB4F0: test    eax, eax
0x8CB4F2: mov     eax, [esp+8+arg_8]
0x8CB4F6: jz      short loc_8CB51C
0x8CB4F8: test    eax, eax
0x8CB4FA: jz      short loc_8CB510
0x8CB4FC: mov     eax, [esi+0ECh]
0x8CB502: test    eax, eax
0x8CB504: jz      short loc_8CB510
0x8CB506: push    edi
0x8CB507: push    esi
0x8CB508: call    sub_8DC770
0x8CB50D: add     esp, 8
0x8CB510: push    edi
0x8CB511: call    sub_91ED30
0x8CB516: add     esp, 4
0x8CB519: pop     edi
0x8CB51A: pop     esi
0x8CB51B: retn
0x8CB51C: test    eax, eax
0x8CB51E: mov     dword ptr [esi+88h], 1
0x8CB528: jz      short loc_8CB53E
0x8CB52A: mov     eax, [esi+0ECh]
0x8CB530: test    eax, eax
0x8CB532: jz      short loc_8CB53E
0x8CB534: push    edi
0x8CB535: push    esi
0x8CB536: call    sub_8DC770
0x8CB53B: add     esp, 8
0x8CB53E: push    edi
0x8CB53F: call    sub_91ED30
0x8CB544: mov     eax, [esi+88h]
0x8CB54A: add     esp, 4
0x8CB54D: dec     eax
0x8CB54E: mov     [esi+88h], eax
0x8CB554: jnz     short loc_8CB519
0x8CB556: mov     eax, [esi+84h]
0x8CB55C: test    eax, eax
0x8CB55E: jz      short loc_8CB519
0x8CB560: mov     al, [esi+90h]
0x8CB566: test    al, al
0x8CB568: jnz     short loc_8CB519
0x8CB56A: pop     edi
0x8CB56B: mov     ecx, esi
0x8CB56D: pop     esi
0x8CB56E: jmp     sub_899210
