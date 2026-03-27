0x50BF80: fldz
0x50BF82: push    esi
0x50BF83: mov     esi, [esp+4+arg_8]
0x50BF87: test    esi, esi
0x50BF89: push    edi
0x50BF8A: mov     edi, [esp+8+arg_18]
0x50BF8E: fstp    qword ptr [edi]
0x50BF90: mov     [esp+8+arg_18], 0
0x50BF98: jz      short loc_50BFC1
0x50BF9A: mov     ecx, esi; this
0x50BF9C: call    sub_4D8360
0x50BFA1: test    eax, eax
0x50BFA3: jz      short loc_50BFC1
0x50BFA5: mov     ecx, esi; this
0x50BFA7: call    sub_4D8360
0x50BFAC: mov     eax, [eax+0Ch]
0x50BFAF: lea     ecx, [esp+8+arg_18]
0x50BFB3: push    edi
0x50BFB4: push    ecx
0x50BFB5: mov     [esp+10h+arg_18], eax
0x50BFB9: call    sub_4F9FB0
0x50BFBE: add     esp, 8
0x50BFC1: cmp     byte ptr ds:0B361ACh, 0
0x50BFC8: pop     edi
0x50BFC9: pop     esi
0x50BFCA: jz      short loc_50BFDE
0x50BFCC: mov     edx, [esp+arg_18]
0x50BFD0: push    edx
0x50BFD1: push    offset aGetactionref08; "GetActionRef >> (%08x)"
0x50BFD6: call    Interface_ConsolePrint
0x50BFDB: add     esp, 8
0x50BFDE: mov     al, 1
0x50BFE0: retn
