0x733380: mov     eax, [esp+arg_4]
0x733384: push    ebx
0x733385: push    ebp
0x733386: mov     ebp, [esp+8+arg_0]
0x73338A: cmp     eax, ebp
0x73338C: mov     ebx, ecx
0x73338E: jle     loc_73343B
0x733394: push    esi
0x733395: push    edi
0x733396: jmp     short loc_73339C
0x733398: mov     eax, [esp+10h+arg_4]
0x73339C: push    eax
0x73339D: push    ebp
0x73339E: mov     ecx, ebx
0x7333A0: lea     edi, [ebp-1]
0x7333A3: lea     esi, [eax+1]
0x7333A6: call    sub_733200
0x7333AB: fstp    [esp+10h+arg_0]
0x7333AF: fld     [esp+10h+arg_0]
0x7333B3: mov     edx, [ebx+2Ch]
0x7333B6: lea     ecx, [edx+esi*4]
0x7333B9: fld     dword ptr [ecx-4]
0x7333BC: sub     ecx, 4
0x7333BF: fcomp   st(1)
0x7333C1: sub     esi, 1
0x7333C4: fnstsw  ax
0x7333C6: test    ah, 41h
0x7333C9: jz      short loc_7333B9
0x7333CB: lea     ecx, [edx+edi*4]
0x7333CE: fld     dword ptr [ecx+4]
0x7333D1: add     ecx, 4
0x7333D4: fcomp   st(1)
0x7333D6: add     edi, 1
0x7333D9: fnstsw  ax
0x7333DB: test    ah, 5
0x7333DE: jnp     short loc_7333CE
0x7333E0: cmp     edi, esi
0x7333E2: jge     short loc_733412
0x7333E4: mov     eax, [ebx+28h]
0x7333E7: mov     ecx, [eax+edi*4]
0x7333EA: mov     edx, [eax+esi*4]
0x7333ED: mov     [eax+edi*4], edx
0x7333F0: mov     eax, [ebx+28h]
0x7333F3: mov     [eax+esi*4], ecx
0x7333F6: mov     eax, [ebx+2Ch]
0x7333F9: fld     dword ptr [eax+edi*4]
0x7333FC: fstp    [esp+10h+arg_0]
0x733400: fld     dword ptr [eax+esi*4]
0x733403: fstp    dword ptr [eax+edi*4]
0x733406: mov     ecx, [ebx+2Ch]
0x733409: fld     [esp+10h+arg_0]
0x73340D: fstp    dword ptr [ecx+esi*4]
0x733410: jmp     short loc_7333B3
0x733412: cmp     esi, [esp+10h+arg_4]
0x733416: fstp    st
0x733418: jnz     short loc_733423
0x73341A: add     esi, 0FFFFFFFFh
0x73341D: mov     [esp+10h+arg_4], esi
0x733421: jmp     short loc_73342F
0x733423: push    esi
0x733424: push    ebp
0x733425: mov     ecx, ebx
0x733427: call    sub_733380
0x73342C: lea     ebp, [esi+1]
0x73342F: cmp     [esp+10h+arg_4], ebp
0x733433: jg      loc_733398
0x733439: pop     edi
0x73343A: pop     esi
0x73343B: pop     ebp
0x73343C: pop     ebx
0x73343D: retn    8
