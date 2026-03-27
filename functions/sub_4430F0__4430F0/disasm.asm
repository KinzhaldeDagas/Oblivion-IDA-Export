0x4430F0: sub     esp, 10h
0x4430F3: mov     edx, ds:0B06A2Ch
0x4430F9: push    ebx
0x4430FA: push    esi
0x4430FB: mov     ebx, ecx
0x4430FD: mov     ecx, [ebx+20h]
0x443100: mov     esi, [ebx+24h]
0x443103: mov     eax, edx
0x443105: shr     eax, 1
0x443107: push    edi
0x443108: xor     edi, edi
0x44310A: sub     ecx, eax
0x44310C: sub     esi, eax
0x44310E: mov     [esp+1Ch+var_C], edi
0x443112: mov     [esp+1Ch+var_8], ecx
0x443116: mov     [esp+1Ch+var_4], esi
0x44311A: push    ebp
0x44311B: cmp     edi, edx
0x44311D: mov     [esp+20h+var_10], edi
0x443121: jnb     loc_4431D1
0x443127: xor     ebp, ebp
0x443129: lea     esp, [esp+0]
0x443130: cmp     ebp, edx
0x443132: jnb     loc_4431C9
0x443138: mov     eax, [esp+20h+arg_0]
0x44313C: sub     eax, 0
0x44313F: jz      short loc_443154
0x443141: sub     eax, 1
0x443144: jnz     short loc_443162
0x443146: mov     ecx, [ebx+8]
0x443149: push    ebp
0x44314A: push    edi
0x44314B: call    GetGridEntry
0x443150: test    eax, eax
0x443152: jmp     short loc_443160
0x443154: mov     ecx, [ebx+8]
0x443157: push    ebp
0x443158: push    edi
0x443159: call    sub_4821B0
0x44315E: test    al, al
0x443160: jnz     short loc_4431B7
0x443162: mov     ecx, [ebx+74h]
0x443165: test    ecx, ecx
0x443167: jz      short loc_4431B7
0x443169: mov     eax, [esp+20h+var_8]
0x44316D: add     esi, ebp
0x44316F: add     edi, eax
0x443171: push    esi; int
0x443172: push    edi; ArgList
0x443173: call    sub_4F1630
0x443178: test    eax, eax
0x44317A: jnz     short loc_443193
0x44317C: mov     eax, [ebx+74h]
0x44317F: mov     ecx, ds:0B33A98h
0x443185: push    1
0x443187: push    eax
0x443188: push    esi
0x443189: push    edi
0x44318A: call    sub_447740
0x44318F: test    eax, eax
0x443191: jz      short loc_4431B3
0x443193: cmp     byte ptr [eax+26h], 3
0x443197: jz      short loc_4431B3
0x443199: xor     ecx, ecx
0x44319B: add     eax, 48h ; 'H'
0x44319E: jz      short loc_4431AF
0x4431A0: cmp     dword ptr [eax], 0
0x4431A3: jz      short loc_4431A8
0x4431A5: add     ecx, 1
0x4431A8: mov     eax, [eax+4]
0x4431AB: test    eax, eax
0x4431AD: jnz     short loc_4431A0
0x4431AF: add     [esp+20h+var_C], ecx
0x4431B3: mov     edi, [esp+20h+var_10]
0x4431B7: mov     esi, [esp+20h+var_4]
0x4431BB: mov     edx, ds:0B06A2Ch
0x4431C1: add     ebp, 1
0x4431C4: jmp     loc_443130
0x4431C9: add     edi, 1
0x4431CC: jmp     loc_44311B
0x4431D1: cmp     [esp+20h+var_C], 0
0x4431D6: pop     ebp
0x4431D7: jz      short loc_4431E6
0x4431D9: push    0
0x4431DB: push    0
0x4431DD: push    1
0x4431DF: mov     ecx, ebx
0x4431E1: call    sub_440AF0
0x4431E6: pop     edi
0x4431E7: pop     esi
0x4431E8: pop     ebx
0x4431E9: add     esp, 10h
0x4431EC: retn    4
