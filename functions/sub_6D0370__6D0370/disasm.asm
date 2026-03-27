0x6D0370: push    ebx
0x6D0371: push    ebp
0x6D0372: mov     ebp, [esp+8+arg_0]
0x6D0376: push    esi
0x6D0377: push    edi
0x6D0378: push    ebp
0x6D0379: mov     esi, ecx
0x6D037B: call    sub_6D0550
0x6D0380: mov     eax, [ebp+21Ch]
0x6D0386: mov     edx, [eax+4]
0x6D0389: push    1
0x6D038B: lea     ecx, [esp+14h+arg_0]
0x6D038F: push    ecx
0x6D0390: push    2
0x6D0392: lea     edi, [esi+44h]
0x6D0395: push    edi
0x6D0396: push    eax
0x6D0397: mov     [esp+24h+arg_0], 2
0x6D039F: call    edx
0x6D03A1: movzx   eax, word ptr [edi]
0x6D03A4: add     esp, 14h
0x6D03A7: push    eax
0x6D03A8: mov     ecx, esi
0x6D03AA: call    sub_6D0010
0x6D03AF: xor     ebx, ebx
0x6D03B1: cmp     [edi], bx
0x6D03B4: jbe     short loc_6D03CE
0x6D03B6: mov     ecx, ebp
0x6D03B8: call    sub_712A90
0x6D03BD: mov     edx, [esi+40h]
0x6D03C0: movzx   ecx, bx
0x6D03C3: add     ebx, 1
0x6D03C6: mov     [edx+ecx*4], eax
0x6D03C9: cmp     bx, [edi]
0x6D03CC: jb      short loc_6D03B6
0x6D03CE: pop     edi
0x6D03CF: pop     esi
0x6D03D0: pop     ebp
0x6D03D1: pop     ebx
0x6D03D2: retn    4
