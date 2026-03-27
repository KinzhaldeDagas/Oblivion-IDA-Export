0x760460: test    [esp+arg_0], 2
0x760465: push    ebp
0x760466: mov     ebp, ecx
0x760468: jz      short loc_7604A8
0x76046A: push    ebx
0x76046B: push    esi
0x76046C: push    edi
0x76046D: mov     edi, [ebp-4]
0x760470: lea     ebx, [ebp-4]
0x760473: mov     esi, edi
0x760475: imul    esi, 64h ; 'd'
0x760478: add     esi, ebp
0x76047A: sub     edi, 1
0x76047D: js      short loc_76048F
0x76047F: nop
0x760480: sub     esi, 64h ; 'd'
0x760483: mov     ecx, esi; this
0x760485: call    sub_760240
0x76048A: sub     edi, 1
0x76048D: jns     short loc_760480
0x76048F: test    [esp+10h+arg_0], 1
0x760494: jz      short loc_76049F
0x760496: push    ebx
0x760497: call    FormHeapFree
0x76049C: add     esp, 4
0x76049F: pop     edi
0x7604A0: pop     esi
0x7604A1: mov     eax, ebx
0x7604A3: pop     ebx
0x7604A4: pop     ebp
0x7604A5: retn    4
0x7604A8: call    sub_760240
0x7604AD: test    [esp+4+arg_0], 1
0x7604B2: jz      short loc_7604BD
0x7604B4: push    ebp
0x7604B5: call    FormHeapFree
0x7604BA: add     esp, 4
0x7604BD: mov     eax, ebp
0x7604BF: pop     ebp
0x7604C0: retn    4
