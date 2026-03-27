0x568240: mov     ecx, [esp+arg_0]
0x568244: xor     eax, eax
0x568246: test    ecx, ecx
0x568248: jz      def_56825E; jumptable 0056825E default case, cases 17,28-30,37
0x56824E: movzx   edx, byte ptr [ecx+4]
0x568252: add     edx, 0FFFFFFF0h; switch 25 cases
0x568255: cmp     edx, 18h
0x568258: ja      def_56825E; jumptable 0056825E default case, cases 17,28-30,37
0x56825E: jmp     ds:jpt_56825E[edx*4]; switch jump
0x568265: mov     eax, 1; jumptable 0056825E case 18
0x56826A: retn
0x56826B: mov     eax, 2; jumptable 0056825E case 19
0x568270: retn
0x568271: mov     eax, 4; jumptable 0056825E case 21
0x568276: retn
0x568277: mov     eax, 6; jumptable 0056825E case 23
0x56827C: retn
0x56827D: mov     eax, 7; jumptable 0056825E case 24
0x568282: retn
0x568283: mov     eax, 9; jumptable 0056825E case 26
0x568288: retn
0x568289: mov     eax, 0Ah; jumptable 0056825E case 27
0x56828E: retn
0x56828F: mov     eax, 0Bh; jumptable 0056825E case 31
0x568294: retn
0x568295: mov     eax, 0Ch; jumptable 0056825E case 32
0x56829A: retn
0x56829B: mov     eax, 0Fh; jumptable 0056825E case 35
0x5682A0: retn
0x5682A1: mov     eax, 10h; jumptable 0056825E case 36
0x5682A6: retn
0x5682A7: mov     eax, 11h; jumptable 0056825E case 38
0x5682AC: retn
0x5682AD: mov     eax, 12h; jumptable 0056825E case 39
0x5682B2: retn
0x5682B3: call    AlchemyItem_IsEdible; jumptable 0056825E case 40
0x5682B8: neg     al
0x5682BA: sbb     eax, eax
0x5682BC: neg     eax
0x5682BE: add     eax, 13h
0x5682C1: retn
0x5682C2: mov     al, [ecx+7Ch]; jumptable 0056825E case 25
0x5682C5: and     al, 2
0x5682C7: neg     al
0x5682C9: sbb     eax, eax
0x5682CB: and     eax, 0Ch
0x5682CE: add     eax, 8
0x5682D1: retn
0x5682D2: mov     eax, 5; jumptable 0056825E case 22
0x5682D7: retn
0x5682D8: mov     eax, 3; jumptable 0056825E cases 20,34
0x5682DD: retn
0x5682DE: mov     cl, [ecx+90h]; jumptable 0056825E case 33
0x5682E4: cmp     cl, 5
0x5682E7: jz      short loc_5682F4
0x5682E9: cmp     cl, 4
0x5682EC: jz      short loc_5682F4
0x5682EE: mov     eax, 18h
0x5682F3: retn
0x5682F4: mov     eax, 19h
0x5682F9: retn
0x5682FA: mov     eax, 1Ah; jumptable 0056825E case 16
0x5682FF: retn; jumptable 0056825E default case, cases 17,28-30,37
