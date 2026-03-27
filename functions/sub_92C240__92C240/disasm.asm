0x92C240: push    ebp
0x92C241: mov     ebp, esp
0x92C243: and     esp, 0FFFFFFF0h
0x92C246: mov     eax, 1094h
0x92C24B: call    __alloca_probe
0x92C250: mov     ecx, large fs:2Ch
0x92C257: push    ebx
0x92C258: mov     ebx, ds:0BA9DE4h
0x92C25E: mov     eax, [ecx+ebx*4]
0x92C261: mov     edx, [eax+1A4h]
0x92C267: push    esi
0x92C268: cmp     edx, [eax+1A8h]
0x92C26E: push    edi
0x92C26F: jnb     short loc_92C295
0x92C271: mov     edi, eax
0x92C273: mov     esi, [edi+1A4h]
0x92C279: mov     dword ptr [esi], offset aTtplanestovert; "TtplanesToVerts"
0x92C27F: rdtsc
0x92C281: mov     [esp+10A0h+var_1080], eax
0x92C285: mov     eax, [esp+10A0h+var_1080]
0x92C289: mov     [esi+4], eax
0x92C28C: add     esi, 0Ch
0x92C28F: mov     [edi+1A4h], esi
0x92C295: mov     edi, [ebp+arg_0]
0x92C298: mov     esi, [edi+4]
0x92C29B: xor     eax, eax
0x92C29D: mov     [esp+10A0h+var_1090], eax
0x92C2A1: mov     [esp+10A0h+var_108C], eax
0x92C2A5: mov     eax, [ecx+ebx*4]
0x92C2A8: mov     ecx, [eax+19Ch]
0x92C2AE: mov     [esp+10A0h+var_107C], eax
0x92C2B2: lea     eax, [esi+1]
0x92C2B5: shl     eax, 4
0x92C2B8: mov     [esp+10A0h+var_1088], 80000000h
0x92C2C0: mov     edx, [ecx+20h]
0x92C2C3: and     eax, 0FFFFFFF0h
0x92C2C6: lea     ebx, [edx+eax]
0x92C2C9: cmp     ebx, [ecx+2Ch]
0x92C2CC: ja      short loc_92C2D5
0x92C2CE: mov     [ecx+20h], ebx
0x92C2D1: mov     eax, edx
0x92C2D3: jmp     short loc_92C2DB
0x92C2D5: mov     edx, [ecx]
0x92C2D7: push    eax
0x92C2D8: call    dword ptr [edx+0Ch]
0x92C2DB: mov     ecx, [edi+4]
0x92C2DE: or      esi, 80000000h
0x92C2E4: xor     edx, edx
0x92C2E6: test    ecx, ecx
0x92C2E8: mov     [esp+10A0h+var_1090], eax
0x92C2EC: mov     [esp+10A0h+var_1088], esi
0x92C2F0: mov     [esp+10A0h+var_1084], eax
0x92C2F4: mov     [esp+10A0h+var_108C], ecx
0x92C2F8: jle     short loc_92C31A
0x92C2FA: xor     eax, eax
0x92C2FC: lea     esp, [esp+0]
0x92C300: mov     ecx, [edi]
0x92C302: movaps  xmm0, xmmword ptr [ecx+eax]
0x92C306: mov     ecx, [esp+10A0h+var_1090]
0x92C30A: movaps  xmmword ptr [eax+ecx], xmm0
0x92C30E: mov     ecx, [esp+10A0h+var_108C]
0x92C312: inc     edx
0x92C313: add     eax, 10h
0x92C316: cmp     edx, ecx
0x92C318: jl      short loc_92C300
0x92C31A: cmp     ecx, 1
0x92C31D: jle     short loc_92C335
0x92C31F: mov     edx, [esp+10A0h+var_1090]
0x92C323: push    offset sub_92C9B0
0x92C328: dec     ecx
0x92C329: push    ecx
0x92C32A: push    0
0x92C32C: push    edx
0x92C32D: call    sub_92B640
0x92C332: add     esp, 10h
0x92C335: lea     eax, [esp+50h]
0x92C339: push    eax
0x92C33A: lea     ecx, [esp+10A4h+var_1034+4]
0x92C33E: push    ecx
0x92C33F: lea     edx, [esp+10A8h+var_1074]
0x92C343: push    edx
0x92C344: lea     eax, [esp+10ACh+var_1078]
0x92C348: push    eax
0x92C349: lea     ecx, [esp+10B0h+var_1090]
0x92C34D: push    ecx
0x92C34E: call    sub_92BD20
0x92C353: add     esp, 14h
0x92C356: cmp     eax, 1
0x92C359: jnz     loc_92C3E9
0x92C35F: mov     edx, large fs:2Ch
0x92C366: mov     eax, ds:0BA9DE4h
0x92C36B: mov     eax, [edx+eax*4]
0x92C36E: mov     ecx, [eax+1A4h]
0x92C374: cmp     ecx, [eax+1A8h]
0x92C37A: mov     esi, [esp+10A0h+var_107C]
0x92C37E: jnb     short loc_92C3A2
0x92C380: mov     ecx, [esi+1A4h]
0x92C386: mov     dword ptr [ecx], offset aEt; "Et"
0x92C38C: rdtsc
0x92C38E: mov     [esp+10A0h+var_1080], eax
0x92C392: mov     edx, [esp+10A0h+var_1080]
0x92C396: mov     [ecx+4], edx
0x92C399: add     ecx, 0Ch
0x92C39C: mov     [esi+1A4h], ecx
0x92C3A2: mov     ecx, [esi+19Ch]
0x92C3A8: mov     eax, [esp+10A0h+var_1084]
0x92C3AC: cmp     eax, [ecx+28h]
0x92C3AF: mov     [ecx+20h], eax
0x92C3B2: jnz     short loc_92C3BA
0x92C3B4: mov     edx, [ecx]
0x92C3B6: push    eax
0x92C3B7: call    dword ptr [edx+10h]
0x92C3BA: mov     eax, [esp+10A0h+var_1088]
0x92C3BE: test    eax, eax
0x92C3C0: js      short loc_92C3DD
0x92C3C2: mov     ecx, [esi+19Ch]
0x92C3C8: and     eax, 3FFFFFFFh
0x92C3CD: push    14h
0x92C3CF: shl     eax, 4
0x92C3D2: push    eax
0x92C3D3: mov     eax, [esp+10A8h+var_1090]
0x92C3D7: push    eax
0x92C3D8: call    sub_8A75D0
0x92C3DD: mov     eax, 1
0x92C3E2: pop     edi
0x92C3E3: pop     esi
0x92C3E4: pop     ebx
0x92C3E5: mov     esp, ebp
0x92C3E7: pop     ebp
0x92C3E8: retn
0x92C3E9: mov     esi, [ebp+arg_4]
0x92C3EC: mov     edx, [esi+8]
0x92C3EF: mov     eax, [esi+4]
0x92C3F2: and     edx, 3FFFFFFFh
0x92C3F8: cmp     eax, edx
0x92C3FA: lea     ecx, [esp+10A0h+var_1000]
0x92C401: mov     [esp+10A0h+var_1010], ecx
0x92C408: mov     [esp+10A0h+var_100C], 0
0x92C413: mov     [esp+10A0h+var_1008], 80000080h
0x92C41E: jnz     short loc_92C42B
0x92C420: push    10h
0x92C422: push    esi
0x92C423: call    sub_8A6EE0
0x92C428: add     esp, 8
0x92C42B: mov     ecx, [esi+4]
0x92C42E: mov     edi, [esi]
0x92C430: movaps  xmm0, xmmword ptr [esp+50h]
0x92C435: mov     eax, ecx
0x92C437: shl     eax, 4
0x92C43A: add     eax, edi
0x92C43C: inc     ecx
0x92C43D: mov     [esi+4], ecx
0x92C440: movaps  xmmword ptr [eax], xmm0
0x92C443: mov     eax, [esi+8]
0x92C446: mov     ecx, [esi+4]
0x92C449: and     eax, 3FFFFFFFh
0x92C44E: cmp     ecx, eax
0x92C450: jnz     short loc_92C45D
0x92C452: push    10h
0x92C454: push    esi
0x92C455: call    sub_8A6EE0
0x92C45A: add     esp, 8
0x92C45D: mov     ecx, [esi+4]
0x92C460: mov     ebx, [esi]
0x92C462: movaps  xmm0, [esp+10A0h+var_1034+4]
0x92C467: mov     eax, ecx
0x92C469: shl     eax, 4
0x92C46C: add     eax, ebx
0x92C46E: inc     ecx
0x92C46F: mov     [esi+4], ecx
0x92C472: movaps  xmmword ptr [eax], xmm0
0x92C475: mov     edx, [esp+10A0h+var_100C]
0x92C47C: mov     ebx, [esp+10A0h+var_1010]
0x92C483: mov     ecx, [esp+10A0h+var_103C]
0x92C487: movaps  xmm0, xmmword ptr [esp+10A0h+var_1064+4]
0x92C48C: mov     eax, edx
0x92C48E: shl     eax, 5
0x92C491: add     eax, ebx
0x92C493: inc     edx
0x92C494: mov     [esp+10A0h+var_100C], edx
0x92C49B: mov     edx, [esp+10A0h+var_1040]
0x92C49F: mov     [eax], edx
0x92C4A1: mov     [eax+4], ecx
0x92C4A4: mov     ecx, [esp+10A0h+var_1068]
0x92C4A8: lea     edx, [esp+10A0h+var_1034+4]
0x92C4AC: mov     [esp+10A0h+var_1068], edx
0x92C4B0: mov     [eax+8], ecx
0x92C4B3: movaps  xmmword ptr [eax+10h], xmm0
0x92C4B7: mov     ecx, [esp+10A0h+var_1018]
0x92C4BE: mov     eax, [esp+10A0h+var_1020]
0x92C4C5: lea     edx, [esp+10A0h+var_1064+4]
0x92C4C9: push    edx
0x92C4CA: mov     edx, [esp+10A4h+var_101C]
0x92C4D1: push    edx
0x92C4D2: push    ecx
0x92C4D3: push    eax
0x92C4D4: mov     [esp+10B0h+var_1070], eax
0x92C4D8: lea     eax, [esp+10B0h+var_1090]
0x92C4DC: push    eax
0x92C4DD: mov     [esp+10B4h+var_106C], ecx
0x92C4E1: call    sub_92B580
0x92C4E6: push    esi
0x92C4E7: lea     ecx, [esp+10B8h+var_1010]
0x92C4EE: push    ecx
0x92C4EF: lea     edx, [esp+10BCh+var_1090]
0x92C4F3: push    edx
0x92C4F4: lea     eax, [esp+10C0h+var_1070]
0x92C4F8: push    eax
0x92C4F9: call    sub_92C020
0x92C4FE: mov     ecx, [esp+10C4h+var_1018]
0x92C505: mov     eax, [esp+10C4h+var_101C]
0x92C50C: lea     edx, [esp+10C4h+var_1034+4]
0x92C513: mov     [esp+10C4h+var_1068], edx
0x92C517: lea     edx, [esp+10C4h+var_1064+4]
0x92C51B: push    edx
0x92C51C: mov     edx, [esp+10C8h+var_1020]
0x92C523: push    edx
0x92C524: push    ecx
0x92C525: push    eax
0x92C526: mov     [esp+10D4h+var_1070], eax
0x92C52A: lea     eax, [esp+10D4h+var_1090]
0x92C52E: push    eax
0x92C52F: mov     [esp+10D8h+var_106C], ecx
0x92C533: call    sub_92B580
0x92C538: push    esi
0x92C539: lea     ecx, [esp+10DCh+var_1010]
0x92C540: push    ecx
0x92C541: lea     edx, [esp+10E0h+var_1090]
0x92C545: push    edx
0x92C546: lea     eax, [esp+10E4h+var_1070]
0x92C54A: push    eax
0x92C54B: call    sub_92C020
0x92C550: mov     eax, [esp+10E8h+var_1040]
0x92C557: mov     ecx, [esp+10E8h+var_1038]
0x92C55E: lea     edx, [esp+98h]
0x92C565: mov     [esp+10E8h+var_1068], edx
0x92C56C: add     esp, 48h
0x92C56F: lea     edx, [esp+10A0h+var_1064+4]
0x92C573: push    edx
0x92C574: mov     edx, [esp+10A4h+var_103C]
0x92C578: mov     [esp+10A4h+var_1070], eax
0x92C57C: mov     [esp+10A4h+var_106C], ecx
0x92C580: push    edx
0x92C581: push    ecx
0x92C582: push    eax
0x92C583: lea     eax, [esp+10B0h+var_1090]
0x92C587: push    eax
0x92C588: call    sub_92B580
0x92C58D: push    esi
0x92C58E: lea     ecx, [esp+10B8h+var_1010]
0x92C595: push    ecx
0x92C596: lea     edx, [esp+10BCh+var_1090]
0x92C59A: push    edx
0x92C59B: lea     eax, [esp+10C0h+var_1070]
0x92C59F: push    eax
0x92C5A0: call    sub_92C020
0x92C5A5: mov     ecx, [esp+10C4h+var_1038]
0x92C5AC: mov     eax, [esp+10C4h+var_103C]
0x92C5B3: lea     edx, [esp+74h]
0x92C5B7: mov     [esp+10C4h+var_1068], edx
0x92C5BB: lea     edx, [esp+10C4h+var_1064+4]
0x92C5BF: push    edx
0x92C5C0: mov     edx, [esp+10C8h+var_1040]
0x92C5C7: push    edx
0x92C5C8: push    ecx
0x92C5C9: push    eax
0x92C5CA: mov     [esp+10D4h+var_1070], eax
0x92C5CE: lea     eax, [esp+10D4h+var_1090]
0x92C5D2: push    eax
0x92C5D3: mov     [esp+10D8h+var_106C], ecx
0x92C5D7: call    sub_92B580
0x92C5DC: push    esi
0x92C5DD: lea     ecx, [esp+10DCh+var_1010]
0x92C5E4: push    ecx
0x92C5E5: lea     edx, [esp+10E0h+var_1090]
0x92C5E9: push    edx
0x92C5EA: lea     eax, [esp+10E4h+var_1070]
0x92C5EE: push    eax
0x92C5EF: call    sub_92C020
0x92C5F4: mov     eax, [esp+10E8h+var_1008]
0x92C5FB: add     esp, 48h
0x92C5FE: test    eax, eax
0x92C600: js      short loc_92C624
0x92C602: mov     ecx, [esp+10A0h+var_1010]
0x92C609: mov     edx, [esp+10A0h+var_107C]
0x92C60D: and     eax, 3FFFFFFFh
0x92C612: push    14h
0x92C614: shl     eax, 5
0x92C617: push    eax
0x92C618: push    ecx
0x92C619: mov     ecx, [edx+19Ch]
0x92C61F: call    sub_8A75D0
0x92C624: mov     eax, [esi+4]
0x92C627: dec     eax
0x92C628: mov     ebx, [esi]
0x92C62A: mov     edx, ebx
0x92C62C: js      short loc_92C6AB
0x92C62E: inc     eax
0x92C62F: mov     [esp+10A0h+var_1080], eax
0x92C633: mov     eax, [esp+10A0h+var_108C]
0x92C637: xor     ecx, ecx
0x92C639: test    eax, eax
0x92C63B: jle     short loc_92C692
0x92C63D: movaps  xmm2, xmmword ptr [ebx]
0x92C640: mov     edi, [esp+10A0h+var_1090]
0x92C644: movaps  xmm1, xmmword ptr [edi]
0x92C647: movaps  xmm0, xmm1
0x92C64A: mulps   xmm0, xmm2
0x92C64D: movaps  xmm3, xmm1
0x92C650: shufps  xmm3, xmm1, 0FFh
0x92C654: movaps  xmm1, xmm0
0x92C657: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x92C65B: addss   xmm1, xmm3
0x92C65F: movaps  xmm3, xmm0
0x92C662: shufps  xmm3, xmm0, 55h ; 'U'
0x92C666: lea     eax, [esp+10A0h+var_1078]
0x92C66A: addss   xmm3, xmm0
0x92C66E: addps   xmm3, xmm1
0x92C671: movss   dword ptr [eax], xmm3
0x92C675: fld     [esp+10A0h+var_1078]
0x92C679: fcomp   dword ptr ds:0A3C778h
0x92C67F: fnstsw  ax
0x92C681: test    ah, 41h
0x92C684: jz      short loc_92C69D
0x92C686: mov     eax, [esp+10A0h+var_108C]
0x92C68A: inc     ecx
0x92C68B: add     edi, 10h
0x92C68E: cmp     ecx, eax
0x92C690: jl      short loc_92C644
0x92C692: movaps  xmm0, xmmword ptr [ebx]
0x92C695: mov     eax, edx
0x92C697: add     edx, 10h
0x92C69A: movaps  xmmword ptr [eax], xmm0
0x92C69D: mov     eax, [esp+10A0h+var_1080]
0x92C6A1: add     ebx, 10h
0x92C6A4: dec     eax
0x92C6A5: mov     [esp+10A0h+var_1080], eax
0x92C6A9: jnz     short loc_92C633
0x92C6AB: mov     ebx, [esi]
0x92C6AD: mov     eax, [esi+8]
0x92C6B0: sub     edx, ebx
0x92C6B2: sar     edx, 4
0x92C6B5: mov     edi, edx
0x92C6B7: and     eax, 3FFFFFFFh
0x92C6BC: cmp     eax, edi
0x92C6BE: jge     short loc_92C6D4
0x92C6C0: add     eax, eax
0x92C6C2: cmp     edi, eax
0x92C6C4: jl      short loc_92C6C8
0x92C6C6: mov     eax, edi
0x92C6C8: push    10h
0x92C6CA: push    eax
0x92C6CB: push    esi
0x92C6CC: call    sub_8A6E40
0x92C6D1: add     esp, 0Ch
0x92C6D4: cmp     edi, 1
0x92C6D7: mov     [esi+4], edi
0x92C6DA: jle     short loc_92C6F0
0x92C6DC: mov     ecx, [esi]
0x92C6DE: push    offset sub_92C9B0
0x92C6E3: dec     edi
0x92C6E4: push    edi
0x92C6E5: push    0
0x92C6E7: push    ecx
0x92C6E8: call    sub_92B640
0x92C6ED: add     esp, 10h
0x92C6F0: lea     edx, [esp+10A0h+var_1078]
0x92C6F4: push    edx; int
0x92C6F5: push    esi; int
0x92C6F6: push    37A7C5ACh; float
0x92C6FB: call    sub_92DCA0
0x92C700: mov     ecx, ds:0BA9DE4h
0x92C706: mov     eax, large fs:2Ch
0x92C70C: mov     eax, [eax+ecx*4]
0x92C70F: mov     edx, [eax+1A4h]
0x92C715: mov     ecx, [eax+1A8h]
0x92C71B: mov     esi, [esp+10ACh+var_107C]
0x92C71F: add     esp, 0Ch
0x92C722: cmp     edx, ecx
0x92C724: jnb     short loc_92C748
0x92C726: mov     ecx, [esi+1A4h]
0x92C72C: mov     dword ptr [ecx], offset aEt; "Et"
0x92C732: rdtsc
0x92C734: mov     [esp+10A0h+var_1078], eax
0x92C738: mov     eax, [esp+10A0h+var_1078]
0x92C73C: mov     [ecx+4], eax
0x92C73F: add     ecx, 0Ch
0x92C742: mov     [esi+1A4h], ecx
0x92C748: mov     ecx, [esi+19Ch]
0x92C74E: mov     eax, [esp+10A0h+var_1084]
0x92C752: cmp     eax, [ecx+28h]
0x92C755: mov     [ecx+20h], eax
0x92C758: jnz     short loc_92C760
0x92C75A: mov     edx, [ecx]
0x92C75C: push    eax
0x92C75D: call    dword ptr [edx+10h]
0x92C760: mov     eax, [esp+10A0h+var_1088]
0x92C764: test    eax, eax
0x92C766: js      short loc_92C783
0x92C768: mov     ecx, [esi+19Ch]
0x92C76E: and     eax, 3FFFFFFFh
0x92C773: push    14h
0x92C775: shl     eax, 4
0x92C778: push    eax
0x92C779: mov     eax, [esp+10A8h+var_1090]
0x92C77D: push    eax
0x92C77E: call    sub_8A75D0
0x92C783: pop     edi
0x92C784: pop     esi
0x92C785: xor     eax, eax
0x92C787: pop     ebx
0x92C788: mov     esp, ebp
0x92C78A: pop     ebp
0x92C78B: retn
