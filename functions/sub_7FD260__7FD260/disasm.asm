0x7FD260: push    ecx
0x7FD261: push    ebx
0x7FD262: push    ebp
0x7FD263: push    esi
0x7FD264: push    edi
0x7FD265: push    1Ah; a1
0x7FD267: call    GetShaderDefinition
0x7FD26C: mov     esi, [eax+4]
0x7FD26F: add     eax, 4
0x7FD272: add     esp, 4
0x7FD275: test    esi, esi
0x7FD277: jz      short loc_7FD2A9
0x7FD279: mov     ebx, [esp+14h+arg_0]
0x7FD27D: lea     eax, [ebx-15Eh]
0x7FD283: cmp     ax, 1
0x7FD287: ja      short loc_7FD2A9
0x7FD289: lea     ecx, [esi+7Ch]
0x7FD28C: push    ecx
0x7FD28D: lea     ecx, [esi+2Ch]
0x7FD290: call    sub_55E2A0
0x7FD295: lea     edx, [esi+80h]
0x7FD29B: push    edx
0x7FD29C: lea     ecx, [esi+30h]
0x7FD29F: call    sub_55E2A0
0x7FD2A4: jmp     loc_7FD32D
0x7FD2A9: mov     edi, [esi+2Ch]
0x7FD2AC: cmp     edi, [esi+84h]
0x7FD2B2: mov     ebx, ds:0A28078h
0x7FD2B8: mov     ebp, ds:0A2807Ch
0x7FD2BE: jz      short loc_7FD2EF
0x7FD2C0: test    edi, edi
0x7FD2C2: jz      short loc_7FD2DC
0x7FD2C4: lea     eax, [edi+4]
0x7FD2C7: push    eax; lpAddend
0x7FD2C8: call    ebp ; InterlockedDecrement
0x7FD2CA: test    eax, eax
0x7FD2CC: jnz     short loc_7FD2DC
0x7FD2CE: test    edi, edi
0x7FD2D0: jz      short loc_7FD2DC
0x7FD2D2: mov     edx, [edi]
0x7FD2D4: mov     eax, [edx]
0x7FD2D6: push    1
0x7FD2D8: mov     ecx, edi
0x7FD2DA: call    eax
0x7FD2DC: mov     eax, [esi+84h]
0x7FD2E2: test    eax, eax
0x7FD2E4: mov     [esi+2Ch], eax
0x7FD2E7: jz      short loc_7FD2EF
0x7FD2E9: add     eax, 4
0x7FD2EC: push    eax; lpAddend
0x7FD2ED: call    ebx ; InterlockedIncrement
0x7FD2EF: mov     edi, [esi+30h]
0x7FD2F2: cmp     edi, [esi+88h]
0x7FD2F8: jz      short loc_7FD329
0x7FD2FA: test    edi, edi
0x7FD2FC: jz      short loc_7FD316
0x7FD2FE: lea     ecx, [edi+4]
0x7FD301: push    ecx; lpAddend
0x7FD302: call    ebp ; InterlockedDecrement
0x7FD304: test    eax, eax
0x7FD306: jnz     short loc_7FD316
0x7FD308: test    edi, edi
0x7FD30A: jz      short loc_7FD316
0x7FD30C: mov     edx, [edi]
0x7FD30E: mov     eax, [edx]
0x7FD310: push    1
0x7FD312: mov     ecx, edi
0x7FD314: call    eax
0x7FD316: mov     eax, [esi+88h]
0x7FD31C: test    eax, eax
0x7FD31E: mov     [esi+30h], eax
0x7FD321: jz      short loc_7FD329
0x7FD323: add     eax, 4
0x7FD326: push    eax; lpAddend
0x7FD327: call    ebx ; InterlockedIncrement
0x7FD329: mov     ebx, [esp+14h+arg_0]
0x7FD32D: cmp     bx, 4
0x7FD331: jnz     short loc_7FD33A
0x7FD333: mov     edx, 1
0x7FD338: jmp     short loc_7FD350
0x7FD33A: cmp     bx, 5
0x7FD33E: jnz     short loc_7FD347
0x7FD340: mov     edx, 2
0x7FD345: jmp     short loc_7FD350
0x7FD347: movzx   edx, bx
0x7FD34A: sub     edx, 12Ah
0x7FD350: mov     esi, 1
0x7FD355: mov     ecx, offset dword_B46964
0x7FD35A: xor     edi, edi
0x7FD35C: sub     ecx, esi
0x7FD35E: mov     eax, 2
0x7FD363: mov     [esp+14h+var_4], ecx
0x7FD367: cmp     edi, 5
0x7FD36A: jge     short loc_7FD393
0x7FD36C: mov     ebp, ds:0B46B98h[edi*4]
0x7FD373: test    ebp, ebp
0x7FD375: jz      short loc_7FD3AD
0x7FD377: mov     ecx, esi
0x7FD379: mov     ebx, 1
0x7FD37E: shl     ebx, cl
0x7FD380: test    ds:0B46988h[edx*4], ebx
0x7FD387: mov     ebx, [esp+14h+arg_0]
0x7FD38B: setnz   cl
0x7FD38E: mov     [ebp+8], cl
0x7FD391: jmp     short loc_7FD3AD
0x7FD393: mov     ecx, esi
0x7FD395: mov     ebp, 1
0x7FD39A: shl     ebp, cl
0x7FD39C: test    ds:0B46988h[edx*4], ebp
0x7FD3A3: mov     ebp, [esp+14h+var_4]
0x7FD3A7: setnz   cl
0x7FD3AA: mov     [esi+ebp], cl
0x7FD3AD: cmp     esi, 5
0x7FD3B0: jge     short loc_7FD3D9
0x7FD3B2: mov     ebp, ds:0B46B9Ch[edi*4]
0x7FD3B9: test    ebp, ebp
0x7FD3BB: jz      short loc_7FD3F2
0x7FD3BD: mov     ecx, eax
0x7FD3BF: mov     ebx, 1
0x7FD3C4: shl     ebx, cl
0x7FD3C6: test    ds:0B46988h[edx*4], ebx
0x7FD3CD: mov     ebx, [esp+14h+arg_0]
0x7FD3D1: setnz   cl
0x7FD3D4: mov     [ebp+8], cl
0x7FD3D7: jmp     short loc_7FD3F2
0x7FD3D9: mov     ecx, eax
0x7FD3DB: mov     ebp, 1
0x7FD3E0: shl     ebp, cl
0x7FD3E2: test    ds:0B46988h[edx*4], ebp
0x7FD3E9: setnz   cl
0x7FD3EC: mov     byte ptr ds:dword_B46964[esi], cl
0x7FD3F2: cmp     eax, 5
0x7FD3F5: jge     short loc_7FD41F
0x7FD3F7: mov     ebp, ds:0B46BA0h[edi*4]
0x7FD3FE: test    ebp, ebp
0x7FD400: jz      short loc_7FD439
0x7FD402: lea     ecx, [eax+1]
0x7FD405: mov     ebx, 1
0x7FD40A: shl     ebx, cl
0x7FD40C: test    ds:0B46988h[edx*4], ebx
0x7FD413: mov     ebx, [esp+14h+arg_0]
0x7FD417: setnz   cl
0x7FD41A: mov     [ebp+8], cl
0x7FD41D: jmp     short loc_7FD439
0x7FD41F: lea     ecx, [eax+1]
0x7FD422: mov     ebp, 1
0x7FD427: shl     ebp, cl
0x7FD429: test    ds:0B46988h[edx*4], ebp
0x7FD430: setnz   cl
0x7FD433: mov     byte ptr ds:dword_B46964[eax], cl
0x7FD439: add     edi, 3
0x7FD43C: add     esi, 3
0x7FD43F: add     eax, 3
0x7FD442: cmp     edi, 21h ; '!'
0x7FD445: jl      loc_7FD367
0x7FD44B: mov     edi, ds:0B46A60h[edx*4]
0x7FD452: mov     esi, 1
0x7FD457: xor     eax, eax
0x7FD459: sub     esi, offset byte_B46930
0x7FD45F: nop
0x7FD460: lea     ecx, byte_B46930[esi+eax]
0x7FD467: mov     ebp, 1
0x7FD46C: shl     ebp, cl
0x7FD46E: test    edi, ebp
0x7FD470: setnz   cl
0x7FD473: mov     ds:byte_B46930[eax], cl
0x7FD479: add     eax, 1
0x7FD47C: cmp     eax, 31h ; '1'
0x7FD47F: jl      short loc_7FD460
0x7FD481: cmp     bx, 4
0x7FD485: mov     eax, 1010101h
0x7FD48A: mov     ds:0B46935h, ax
0x7FD490: mov     ds:0B46937h, al
0x7FD495: mov     ds:0B46974h, ax
0x7FD49B: mov     ds:0B46976h, al
0x7FD4A0: jz      loc_7FD532
0x7FD4A6: cmp     bx, 5
0x7FD4AA: jz      loc_7FD532
0x7FD4B0: lea     edx, [ebx-156h]
0x7FD4B6: cmp     dx, 7
0x7FD4BA: ja      short loc_7FD4EB
0x7FD4BC: movzx   eax, bx
0x7FD4BF: mov     esi, ds:0B46F28h[eax*4]
0x7FD4C6: cmp     dword ptr [esi+30h], 0
0x7FD4CA: jnz     short loc_7FD4D4
0x7FD4CC: call    sub_772DF0
0x7FD4D1: mov     [esi+30h], eax
0x7FD4D4: mov     ecx, [esi+30h]
0x7FD4D7: push    0
0x7FD4D9: push    0Fh
0x7FD4DB: push    0A8h ; '¨'
0x7FD4E0: call    sub_772CD0
0x7FD4E5: pop     edi
0x7FD4E6: pop     esi
0x7FD4E7: pop     ebp
0x7FD4E8: pop     ebx
0x7FD4E9: pop     ecx
0x7FD4EA: retn
0x7FD4EB: lea     ecx, [ebx-12Bh]
0x7FD4F1: cmp     cx, 34h ; '4'
0x7FD4F5: ja      short loc_7FD526
0x7FD4F7: movzx   edx, bx
0x7FD4FA: mov     esi, ds:0B46F28h[edx*4]
0x7FD501: cmp     dword ptr [esi+30h], 0
0x7FD505: jnz     short loc_7FD50F
0x7FD507: call    sub_772DF0
0x7FD50C: mov     [esi+30h], eax
0x7FD50F: mov     ecx, [esi+30h]
0x7FD512: push    0
0x7FD514: push    7
0x7FD516: push    0A8h ; '¨'
0x7FD51B: call    sub_772CD0
0x7FD520: pop     edi
0x7FD521: pop     esi
0x7FD522: pop     ebp
0x7FD523: pop     ebx
0x7FD524: pop     ecx
0x7FD525: retn
0x7FD526: movzx   eax, bx
0x7FD529: mov     esi, ds:0B46F28h[eax*4]
0x7FD530: jmp     short loc_7FD539
0x7FD532: mov     esi, ds:0B473D0h[edx*4]
0x7FD539: cmp     dword ptr [esi+30h], 0
0x7FD53D: jnz     short loc_7FD547
0x7FD53F: call    sub_772DF0
0x7FD544: mov     [esi+30h], eax
0x7FD547: mov     ecx, [esi+30h]
0x7FD54A: push    0
0x7FD54C: push    0
0x7FD54E: push    0A8h ; '¨'
0x7FD553: call    sub_772CD0
0x7FD558: pop     edi
0x7FD559: pop     esi
0x7FD55A: pop     ebp
0x7FD55B: pop     ebx
0x7FD55C: pop     ecx
0x7FD55D: retn
