0x5E91E0: sub     esp, 0Ch
0x5E91E3: push    ebx
0x5E91E4: push    ebp
0x5E91E5: push    esi
0x5E91E6: push    edi
0x5E91E7: mov     ebx, ecx
0x5E91E9: push    8; Size
0x5E91EB: mov     [esp+20h+var_4], ebx
0x5E91EF: call    FormHeapAlloc
0x5E91F4: xor     ebp, ebp
0x5E91F6: add     esp, 4
0x5E91F9: cmp     eax, ebp
0x5E91FB: jz      short loc_5E9208
0x5E91FD: mov     [eax], ebp
0x5E91FF: mov     [eax+4], ebp
0x5E9202: mov     [esp+1Ch+var_C], eax
0x5E9206: jmp     short loc_5E920C
0x5E9208: mov     [esp+1Ch+var_C], ebp
0x5E920C: mov     eax, [ebx]
0x5E920E: mov     edx, [eax+170h]
0x5E9214: mov     ecx, ebx
0x5E9216: xor     esi, esi
0x5E9218: call    edx
0x5E921A: mov     edi, eax
0x5E921C: cmp     edi, ebp
0x5E921E: jz      short loc_5E9232
0x5E9220: mov     eax, [ebx]
0x5E9222: mov     edx, [eax+190h]
0x5E9228: mov     ecx, ebx
0x5E922A: call    edx
0x5E922C: test    al, al
0x5E922E: jz      short loc_5E9232
0x5E9230: mov     esi, edi
0x5E9232: lea     edi, [esi+58h]
0x5E9235: cmp     edi, ebp
0x5E9237: jz      short loc_5E928D
0x5E9239: lea     esp, [esp+0]
0x5E9240: mov     ebp, [edi]
0x5E9242: test    ebp, ebp
0x5E9244: jz      short loc_5E928D
0x5E9246: mov     eax, [ebp+18h]
0x5E9249: mov     edx, [eax+18h]
0x5E924C: lea     esi, [ebp+18h]
0x5E924F: mov     ecx, esi
0x5E9251: call    edx
0x5E9253: cmp     eax, 4
0x5E9256: jz      short loc_5E9286
0x5E9258: mov     eax, [esi]
0x5E925A: mov     edx, [eax+18h]
0x5E925D: mov     ecx, esi
0x5E925F: call    edx
0x5E9261: cmp     eax, 1
0x5E9264: jz      short loc_5E9286
0x5E9266: mov     eax, [ebx+5Ch]
0x5E9269: mov     edx, [eax+1Ch]
0x5E926C: push    0
0x5E926E: push    0
0x5E9270: lea     ecx, [ebx+5Ch]
0x5E9273: push    0
0x5E9275: push    esi
0x5E9276: call    edx
0x5E9278: test    al, al
0x5E927A: jz      short loc_5E9286
0x5E927C: mov     ecx, [esp+2Ch+var_1C]
0x5E9280: push    ebp
0x5E9281: call    BSSimpleList_PushFront
0x5E9286: mov     edi, [edi+4]
0x5E9289: test    edi, edi
0x5E928B: jnz     short loc_5E9240
0x5E928D: mov     ecx, ebx; this
0x5E928F: call    Actor_IsNPC
0x5E9294: test    al, al
0x5E9296: jz      short loc_5E9314
0x5E9298: mov     eax, [ebx]
0x5E929A: mov     edx, [eax+170h]
0x5E92A0: mov     ecx, ebx
0x5E92A2: call    edx
0x5E92A4: test    eax, eax
0x5E92A6: jz      short loc_5E9314
0x5E92A8: mov     eax, [eax+0E8h]
0x5E92AE: test    eax, eax
0x5E92B0: jz      short loc_5E9314
0x5E92B2: lea     ebp, [eax+30h]
0x5E92B5: test    ebp, ebp
0x5E92B7: jz      short loc_5E9314
0x5E92B9: lea     esp, [esp+0]
0x5E92C0: mov     edi, [ebp+0]
0x5E92C3: test    edi, edi
0x5E92C5: jz      short loc_5E9314
0x5E92C7: mov     eax, [edi+18h]
0x5E92CA: mov     edx, [eax+18h]
0x5E92CD: lea     esi, [edi+18h]
0x5E92D0: mov     ecx, esi
0x5E92D2: call    edx
0x5E92D4: cmp     eax, 4
0x5E92D7: jz      short loc_5E930D
0x5E92D9: mov     eax, [esi]
0x5E92DB: mov     edx, [eax+18h]
0x5E92DE: mov     ecx, esi
0x5E92E0: call    edx
0x5E92E2: cmp     eax, 1
0x5E92E5: jz      short loc_5E930D
0x5E92E7: mov     eax, [ebx+5Ch]
0x5E92EA: mov     edx, [eax+1Ch]
0x5E92ED: push    0
0x5E92EF: push    0
0x5E92F1: lea     ecx, [ebx+5Ch]
0x5E92F4: push    0
0x5E92F6: push    esi
0x5E92F7: call    edx
0x5E92F9: test    al, al
0x5E92FB: jnz     short loc_5E9303
0x5E92FD: cmp     [esp+3Ch+var_14], al
0x5E9301: jnz     short loc_5E930D
0x5E9303: mov     ecx, [esp+3Ch+var_2C]
0x5E9307: push    edi
0x5E9308: call    BSSimpleList_PushFront
0x5E930D: mov     ebp, [ebp+4]
0x5E9310: test    ebp, ebp
0x5E9312: jnz     short loc_5E92C0
0x5E9314: mov     ecx, [ebx+58h]
0x5E9317: mov     eax, [ecx]
0x5E9319: mov     edx, [eax+454h]
0x5E931F: push    0
0x5E9321: push    ebx
0x5E9322: call    edx
0x5E9324: mov     edi, eax
0x5E9326: test    edi, edi
0x5E9328: jz      short loc_5E939B
0x5E932A: lea     ebx, [ebx+0]
0x5E9330: cmp     dword ptr [edi+4], 0
0x5E9334: jnz     short loc_5E933B
0x5E9336: cmp     dword ptr [edi], 0
0x5E9339: jz      short loc_5E939B
0x5E933B: mov     esi, [edi]
0x5E933D: test    esi, esi
0x5E933F: jz      short loc_5E9394
0x5E9341: mov     eax, [ebx+5Ch]
0x5E9344: mov     eax, [eax+1Ch]
0x5E9347: push    0
0x5E9349: push    0
0x5E934B: lea     ecx, [ebx+5Ch]
0x5E934E: push    0
0x5E9350: lea     edx, [esi+18h]
0x5E9353: push    edx
0x5E9354: call    eax
0x5E9356: test    al, al
0x5E9358: jnz     short loc_5E9360
0x5E935A: cmp     byte ptr [esp+54h+var_2C], al
0x5E935E: jnz     short loc_5E9394
0x5E9360: mov     ebp, [esp+54h+var_44]
0x5E9364: cmp     dword ptr [ebp+0], 0
0x5E9368: jz      short loc_5E9391
0x5E936A: push    8; Size
0x5E936C: call    FormHeapAlloc
0x5E9371: add     esp, 4
0x5E9374: test    eax, eax
0x5E9376: jz      short loc_5E9386
0x5E9378: mov     ecx, [ebp+0]
0x5E937B: mov     [eax], ecx
0x5E937D: mov     dword ptr [eax+4], 0
0x5E9384: jmp     short loc_5E9388
0x5E9386: xor     eax, eax
0x5E9388: mov     edx, [ebp+4]
0x5E938B: mov     [eax+4], edx
0x5E938E: mov     [ebp+4], eax
0x5E9391: mov     [ebp+0], esi
0x5E9394: mov     edi, [edi+4]
0x5E9397: test    edi, edi
0x5E9399: jnz     short loc_5E9330
0x5E939B: push    8; Size
0x5E939D: call    FormHeapAlloc
0x5E93A2: add     esp, 4
0x5E93A5: test    eax, eax
0x5E93A7: jz      short loc_5E93BA
0x5E93A9: mov     dword ptr [eax], 0
0x5E93AF: mov     dword ptr [eax+4], 0
0x5E93B6: mov     ebx, eax
0x5E93B8: jmp     short loc_5E93BC
0x5E93BA: xor     ebx, ebx
0x5E93BC: mov     eax, [esp+54h+var_44]
0x5E93C0: test    eax, eax
0x5E93C2: mov     [esp+54h+var_40], eax
0x5E93C6: jz      loc_5E94B1
0x5E93CC: lea     esp, [esp+0]
0x5E93D0: mov     eax, [esp+54h+var_40]
0x5E93D4: mov     ebp, [eax]
0x5E93D6: test    ebp, ebp
0x5E93D8: jz      loc_5E94B1
0x5E93DE: push    0
0x5E93E0: lea     edi, [ebp+24h]
0x5E93E3: push    3
0x5E93E5: mov     ecx, edi
0x5E93E7: call    EffectItemList_GetStrongestItem
0x5E93EC: mov     ecx, [esp+54h+var_34]
0x5E93F0: mov     esi, ebp
0x5E93F2: neg     esi
0x5E93F4: sbb     esi, esi
0x5E93F6: add     ecx, 0FFFFFFE6h; switch 10 cases
0x5E93F9: and     esi, edi
0x5E93FB: cmp     ecx, 9
0x5E93FE: ja      def_5E9404
0x5E9404: jmp     ds:jpt_5E9404[ecx*4]; switch jump
0x5E940B: mov     ecx, [eax+1Ch]; jumptable 005E9404 case 34
0x5E940E: cmp     dword ptr [ecx+64h], 4
0x5E9412: jmp     loc_5E9494
0x5E9417: mov     edx, [eax+1Ch]; jumptable 005E9404 case 35
0x5E941A: cmp     dword ptr [edx+64h], 5
0x5E941E: jmp     short loc_5E9494
0x5E9420: cmp     dword ptr [eax+10h], 2; jumptable 005E9404 case 27
0x5E9424: jmp     short loc_5E9494
0x5E9426: mov     eax, [eax+1Ch]; jumptable 005E9404 case 30
0x5E9429: cmp     dword ptr [eax+64h], 0
0x5E942D: jmp     short loc_5E9494
0x5E942F: mov     ecx, [eax+1Ch]; jumptable 005E9404 case 31
0x5E9432: cmp     dword ptr [ecx+64h], 1
0x5E9436: jmp     short loc_5E9494
0x5E9438: mov     edx, [eax+1Ch]; jumptable 005E9404 case 32
0x5E943B: cmp     dword ptr [edx+64h], 2
0x5E943F: jmp     short loc_5E9494
0x5E9441: mov     eax, [eax+1Ch]; jumptable 005E9404 case 33
0x5E9444: cmp     dword ptr [eax+64h], 3
0x5E9448: jmp     short loc_5E9494
0x5E944A: cmp     dword ptr [eax+10h], 0; jumptable 005E9404 case 29
0x5E944E: jnz     short def_5E9404
0x5E9450: mov     edi, [esp+54h+var_30]
0x5E9454: cmp     edi, 0FFFFFFFFh
0x5E9457: jz      short loc_5E9496; jumptable 005E9404 case 26
0x5E9459: test    esi, esi
0x5E945B: jz      short def_5E9404
0x5E945D: lea     ecx, [ecx+0]
0x5E9460: cmp     dword ptr [esi+8], 0
0x5E9464: jnz     short loc_5E946C
0x5E9466: cmp     dword ptr [esi+4], 0
0x5E946A: jz      short def_5E9404
0x5E946C: mov     ecx, [esi+4]
0x5E946F: mov     edx, [ecx+1Ch]
0x5E9472: cmp     [edx+98h], edi
0x5E9478: jnz     short loc_5E9482
0x5E947A: push    ebp
0x5E947B: mov     ecx, ebx
0x5E947D: call    BSSimpleList_PushFront
0x5E9482: mov     esi, [esi+8]
0x5E9485: test    esi, esi
0x5E9487: jz      short def_5E9404
0x5E9489: add     esi, 0FFFFFFFCh
0x5E948C: jnz     short loc_5E9460
0x5E948E: jmp     short def_5E9404
0x5E9490: cmp     dword ptr [eax+10h], 1; jumptable 005E9404 case 28
0x5E9494: jnz     short def_5E9404
0x5E9496: push    ebp; jumptable 005E9404 case 26
0x5E9497: mov     ecx, ebx
0x5E9499: call    BSSimpleList_PushFront
