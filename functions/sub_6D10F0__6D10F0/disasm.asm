0x6D10F0: push    0FFFFFFFFh
0x6D10F2: push    offset SEH_8094D0
0x6D10F7: mov     eax, large fs:0
0x6D10FD: push    eax
0x6D10FE: push    ebx
0x6D10FF: push    ebp
0x6D1100: push    esi
0x6D1101: push    edi
0x6D1102: mov     eax, ds:0B30AACh
0x6D1107: xor     eax, esp
0x6D1109: push    eax
0x6D110A: lea     eax, [esp+20h+var_C]
0x6D110E: mov     large fs:0, eax
0x6D1114: mov     ebp, ecx
0x6D1116: mov     eax, [ebp+54h]
0x6D1119: xor     ebx, ebx
0x6D111B: cmp     eax, ebx
0x6D111D: jz      short loc_6D113C
0x6D111F: mov     ecx, [eax-4]
0x6D1122: lea     edi, [eax-4]
0x6D1125: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6D112A: push    ecx; int
0x6D112B: push    4; unsigned int
0x6D112D: push    eax; void *
0x6D112E: call    $LN21
0x6D1133: push    edi
0x6D1134: call    FormHeapFree
0x6D1139: add     esp, 4
0x6D113C: mov     si, word ptr [esp+20h+arg_0]
0x6D1141: cmp     si, bx
0x6D1144: jz      short loc_6D119C
0x6D1146: movzx   edi, si
0x6D1149: xor     ecx, ecx
0x6D114B: mov     eax, edi
0x6D114D: mov     edx, 4
0x6D1152: mul     edx
0x6D1154: seto    cl
0x6D1157: neg     ecx
0x6D1159: or      ecx, eax
0x6D115B: xor     eax, eax
0x6D115D: add     ecx, 4
0x6D1160: setb    al
0x6D1163: neg     eax
0x6D1165: or      eax, ecx
0x6D1167: push    eax; Size
0x6D1168: call    FormHeapAlloc
0x6D116D: add     esp, 4
0x6D1170: mov     [esp+20h+arg_0], eax
0x6D1174: cmp     eax, ebx
0x6D1176: mov     [esp+20h+var_4], ebx
0x6D117A: jz      short loc_6D1194
0x6D117C: push    offset sub_7016A0; a5
0x6D1181: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x6D1186: push    edi; size
0x6D1187: lea     ebx, [eax+4]
0x6D118A: push    4; a2
0x6D118C: push    ebx; a1
0x6D118D: mov     [eax], edi
0x6D118F: call    ArrayConstructor
0x6D1194: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6D119C: mov     [ebp+54h], ebx
0x6D119F: movzx   edi, si
0x6D11A2: lea     ebx, [ebp+40h]
0x6D11A5: push    edi
0x6D11A6: mov     ecx, ebx
0x6D11A8: call    sub_4CA040
0x6D11AD: xor     esi, esi
0x6D11AF: test    edi, edi
0x6D11B1: jbe     short loc_6D11D4
0x6D11B3: fldz
0x6D11B5: fstp    [esp+20h+arg_0]
0x6D11B9: lea     esp, [esp+0]
0x6D11C0: lea     ecx, [esp+20h+arg_0]
0x6D11C4: push    ecx
0x6D11C5: push    esi
0x6D11C6: mov     ecx, ebx
0x6D11C8: call    sub_4CA210
0x6D11CD: add     esi, 1
0x6D11D0: cmp     esi, edi
0x6D11D2: jb      short loc_6D11C0
0x6D11D4: mov     ecx, [esp+20h+var_C]
0x6D11D8: mov     large fs:0, ecx
0x6D11DF: pop     ecx
0x6D11E0: pop     edi
0x6D11E1: pop     esi
0x6D11E2: pop     ebp
0x6D11E3: pop     ebx
0x6D11E4: add     esp, 0Ch
0x6D11E7: retn    4
