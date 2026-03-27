0x943540: push    ebp
0x943541: mov     ebp, esp
0x943543: and     esp, 0FFFFFFF0h
0x943546: sub     esp, 224h
0x94354C: mov     eax, [ebp+arg_C]
0x94354F: push    ebx
0x943550: mov     dword ptr [eax], 7F7FFFFFh
0x943556: mov     eax, [ebp+arg_8]
0x943559: test    eax, eax
0x94355B: mov     ebx, ecx
0x94355D: mov     ecx, [ebp+arg_10]
0x943560: push    esi
0x943561: push    edi
0x943562: mov     dword ptr [ecx], 0FF7FFFFFh
0x943568: jle     loc_943609
0x94356E: mov     edi, [ebp+arg_4]
0x943571: mov     dword ptr [esp+230h+var_21C+8], eax
0x943575: mov     eax, [edi]
0x943577: mov     ecx, [ebx+8]
0x94357A: mov     edx, [ecx]
0x94357C: lea     esi, [esp+230h+var_200]
0x943580: push    esi
0x943581: push    eax
0x943582: call    dword ptr [edx+28h]
0x943585: mov     esi, eax
0x943587: test    esi, esi
0x943589: jz      short loc_9435BF
0x94358B: mov     ecx, [ebp+arg_0]
0x94358E: mov     eax, [esi]
0x943590: push    ecx
0x943591: mov     ecx, esi
0x943593: call    dword ptr [eax+10h]
0x943596: fstp    dword ptr [esp+230h+var_21C+4]
0x94359A: mov     edx, [ebp+arg_0]
0x94359D: movaps  xmm0, xmmword ptr ds:0A965C0h
0x9435A4: movaps  xmm1, xmmword ptr [edx]
0x9435A7: mov     eax, [esi]
0x9435A9: lea     ecx, [esp+230h+var_21C+0Ch]
0x9435AD: push    ecx
0x9435AE: xorps   xmm1, xmm0
0x9435B1: mov     ecx, esi
0x9435B3: movaps  [esp+234h+var_21C+0Ch], xmm1
0x9435B8: call    dword ptr [eax+10h]
0x9435BB: fchs
0x9435BD: jmp     short loc_9435CD
0x9435BF: fld     dword ptr ds:0A2FAA8h
0x9435C5: mov     dword ptr [esp+230h+var_21C+4], 0
0x9435CD: mov     ecx, [ebp+arg_C]
0x9435D0: fld     st
0x9435D2: fcomp   dword ptr [ecx]
0x9435D4: fnstsw  ax
0x9435D6: test    ah, 5
0x9435D9: jp      short loc_9435DF
0x9435DB: fstp    dword ptr [ecx]
0x9435DD: jmp     short loc_9435E1
0x9435DF: fstp    st
0x9435E1: fld     dword ptr [esp+230h+var_21C+4]
0x9435E5: mov     ecx, [ebp+arg_10]
0x9435E8: fcomp   dword ptr [ecx]
0x9435EA: fnstsw  ax
0x9435EC: test    ah, 41h
0x9435EF: jnz     short loc_9435F7
0x9435F1: mov     edx, dword ptr [esp+230h+var_21C+4]
0x9435F5: mov     [ecx], edx
0x9435F7: mov     eax, dword ptr [esp+230h+var_21C+8]
0x9435FB: add     edi, 10h
0x9435FE: dec     eax
0x9435FF: mov     dword ptr [esp+230h+var_21C+8], eax
0x943603: jnz     loc_943575
0x943609: pop     edi
0x94360A: pop     esi
0x94360B: pop     ebx
0x94360C: mov     esp, ebp
0x94360E: pop     ebp
0x94360F: retn    14h
