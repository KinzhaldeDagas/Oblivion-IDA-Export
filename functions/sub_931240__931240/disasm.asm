0x931240: sub     esp, 214h
0x931246: mov     ecx, [esp+214h+arg_0]
0x93124D: mov     edx, [ecx+0Ch]
0x931250: mov     eax, [esp+214h+arg_4]
0x931257: push    ebp
0x931258: mov     ebp, [eax]
0x93125A: push    esi
0x93125B: mov     esi, [esp+21Ch+arg_18]
0x931262: mov     [esp+21Ch+var_210], edx
0x931266: mov     edx, [esi+4]
0x931269: cmp     edx, 1
0x93126C: jle     loc_9313CE
0x931272: push    edi
0x931273: mov     edi, [esi]
0x931275: fld     dword ptr [edi+0Ch]
0x931278: fsub    dword ptr [edi+4]
0x93127B: fcomp   [esp+220h+var_210]
0x93127F: fnstsw  ax
0x931281: test    ah, 5
0x931284: jp      loc_9313CD
0x93128A: lea     eax, [esp+220h+var_200]
0x93128E: mov     ecx, 80000040h
0x931293: mov     [esp+220h+var_20C], eax
0x931297: mov     [esp+220h+var_208], 0
0x93129F: mov     [esp+220h+var_204], ecx
0x9312A3: mov     eax, [edi+4]
0x9312A6: xor     edi, edi
0x9312A8: test    edx, edx
0x9312AA: mov     [esp+220h+var_214], eax
0x9312AE: jle     short loc_93131A
0x9312B0: push    ebx
0x9312B1: jmp     short loc_9312B7
0x9312B3: mov     ecx, [esp+224h+var_204]
0x9312B7: mov     edx, [esi]
0x9312B9: fld     dword ptr [edx+edi*8+4]
0x9312BD: lea     ebx, [edx+edi*8]
0x9312C0: fsub    [esp+224h+var_214]
0x9312C4: fcomp   [esp+224h+var_210]
0x9312C8: fnstsw  ax
0x9312CA: test    ah, 41h
0x9312CD: jz      short loc_931319
0x9312CF: mov     eax, [esp+224h+var_208]
0x9312D3: and     ecx, 3FFFFFFFh
0x9312D9: cmp     eax, ecx
0x9312DB: jnz     short loc_9312EC
0x9312DD: lea     eax, [esp+224h+var_20C]
0x9312E1: push    8
0x9312E3: push    eax
0x9312E4: call    sub_8A6EE0
0x9312E9: add     esp, 8
0x9312EC: mov     ecx, [ebx]
0x9312EE: mov     eax, [esp+224h+var_208]
0x9312F2: mov     edx, [esp+224h+var_20C]
0x9312F6: mov     [edx+eax*8], ecx
0x9312F9: mov     edx, [esp+224h+var_208]
0x9312FD: mov     ecx, [ebx+4]
0x931300: mov     eax, [esp+224h+var_20C]
0x931304: mov     [eax+edx*8+4], ecx
0x931308: mov     edx, [esp+224h+var_208]
0x93130C: mov     eax, [esi+4]
0x93130F: inc     edx
0x931310: inc     edi
0x931311: cmp     edi, eax
0x931313: mov     [esp+224h+var_208], edx
0x931317: jl      short loc_9312B3
0x931319: pop     ebx
0x93131A: mov     edx, [esp+220h+arg_14]
0x931321: mov     eax, [esp+220h+arg_10]
0x931328: lea     ecx, [esp+220h+var_20C]
0x93132C: push    ecx; int
0x93132D: mov     ecx, [esp+224h+arg_C]
0x931334: push    edx; int
0x931335: mov     edx, [esp+228h+arg_8]
0x93133C: push    eax; int
0x93133D: mov     eax, [esp+22Ch+var_214]
0x931341: push    ecx; int
0x931342: mov     ecx, [esp+230h+arg_0]
0x931349: push    edx; int
0x93134A: push    eax; float
0x93134B: push    ecx; int
0x93134C: push    ebp; int
0x93134D: call    sub_92EC70
0x931352: mov     eax, [esp+240h+var_20C]
0x931356: mov     ecx, [eax]
0x931358: mov     edx, [esi]
0x93135A: mov     [edx], ecx
0x93135C: mov     eax, [eax+4]
0x93135F: mov     [edx+4], eax
0x931362: mov     ecx, [esi]
0x931364: mov     edx, [esp+240h+var_214]
0x931368: mov     [ecx+4], edx
0x93136B: mov     eax, [esi+8]
0x93136E: and     eax, 3FFFFFFFh
0x931373: add     esp, 20h
0x931376: cmp     eax, 1
0x931379: jge     short loc_931393
0x93137B: add     eax, eax
0x93137D: cmp     eax, 1
0x931380: jg      short loc_931387
0x931382: mov     eax, 1
0x931387: push    8
0x931389: push    eax
0x93138A: push    esi
0x93138B: call    sub_8A6E40
0x931390: add     esp, 0Ch
0x931393: mov     eax, [esp+220h+var_204]
0x931397: test    eax, eax
0x931399: mov     dword ptr [esi+4], 1
0x9313A0: js      short loc_9313CD
0x9313A2: mov     ecx, ds:0BA9DE4h
0x9313A8: mov     edx, large fs:2Ch
0x9313AF: and     eax, 3FFFFFFFh
0x9313B4: shl     eax, 3
0x9313B7: push    14h
0x9313B9: push    eax
0x9313BA: mov     eax, [esp+228h+var_20C]
0x9313BE: push    eax
0x9313BF: mov     eax, [edx+ecx*4]
0x9313C2: mov     ecx, [eax+19Ch]
0x9313C8: call    sub_8A75D0
0x9313CD: pop     edi
0x9313CE: pop     esi
0x9313CF: pop     ebp
0x9313D0: add     esp, 214h
0x9313D6: retn
