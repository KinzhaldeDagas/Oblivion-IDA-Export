0x6D8200: push    0FFFFFFFFh
0x6D8202: push    offset ??1NiSequence@@UAE@XZ_SEH
0x6D8207: mov     eax, large fs:0
0x6D820D: push    eax
0x6D820E: sub     esp, 8
0x6D8211: push    ebx
0x6D8212: push    ebp
0x6D8213: push    esi
0x6D8214: push    edi
0x6D8215: mov     eax, ds:0B30AACh
0x6D821A: xor     eax, esp
0x6D821C: push    eax
0x6D821D: lea     eax, [esp+28h+var_C]
0x6D8221: mov     large fs:0, eax
0x6D8227: mov     esi, ecx
0x6D8229: mov     [esp+28h+var_10], esi
0x6D822D: mov     dword ptr [esi], offset ??_7NiSequence@@6B@; const NiSequence::`vftable'
0x6D8233: mov     eax, [esi+8]
0x6D8236: push    eax
0x6D8237: mov     [esp+2Ch+var_4], 3
0x6D823F: call    FormHeapFree
0x6D8244: xor     ebp, ebp
0x6D8246: add     esp, 4
0x6D8249: cmp     [esi+26h], bp
0x6D824D: jbe     loc_6D830D
0x6D8253: push    ebp
0x6D8254: lea     eax, [esp+2Ch+var_14]
0x6D8258: push    eax
0x6D8259: lea     ecx, [esi+1Ch]
0x6D825C: call    sub_6D7F60
0x6D8261: mov     ebx, eax
0x6D8263: mov     edi, [ebx]
0x6D8265: test    edi, edi
0x6D8267: mov     byte ptr [esp+28h+var_4], 4
0x6D826C: jz      short loc_6D8290
0x6D826E: lea     ecx, [edi+4]
0x6D8271: push    ecx; lpAddend
0x6D8272: call    dword ptr ds:0A2807Ch
0x6D8278: test    eax, eax
0x6D827A: jnz     short loc_6D828A
0x6D827C: test    edi, edi
0x6D827E: jz      short loc_6D828A
0x6D8280: mov     edx, [edi]
0x6D8282: mov     eax, [edx]
0x6D8284: push    1
0x6D8286: mov     ecx, edi
0x6D8288: call    eax
0x6D828A: mov     dword ptr [ebx], 0
0x6D8290: mov     edi, dword ptr [esp+28h+var_14]
0x6D8294: test    edi, edi
0x6D8296: mov     byte ptr [esp+28h+var_4], 3
0x6D829B: jz      short loc_6D82B9
0x6D829D: lea     ecx, [edi+4]
0x6D82A0: push    ecx; lpAddend
0x6D82A1: call    dword ptr ds:0A2807Ch
0x6D82A7: test    eax, eax
0x6D82A9: jnz     short loc_6D82B9
0x6D82AB: test    edi, edi
0x6D82AD: jz      short loc_6D82B9
0x6D82AF: mov     edx, [edi]
0x6D82B1: mov     eax, [edx]
0x6D82B3: push    1
0x6D82B5: mov     ecx, edi
0x6D82B7: call    eax
0x6D82B9: movzx   ecx, word ptr [esi+16h]
0x6D82BD: cmp     ebp, ecx
0x6D82BF: jb      short loc_6D82C5
0x6D82C1: xor     eax, eax
0x6D82C3: jmp     short loc_6D82F5
0x6D82C5: mov     edx, [esi+10h]
0x6D82C8: mov     ecx, [edx+ebp*4]
0x6D82CB: test    ecx, ecx
0x6D82CD: lea     eax, [edx+ebp*4]
0x6D82D0: mov     dword ptr [eax], 0
0x6D82D6: jz      short loc_6D82DE
0x6D82D8: add     word ptr [esi+18h], 0FFFFh
0x6D82DE: movzx   eax, word ptr [esi+16h]
0x6D82E2: movzx   edx, ax
0x6D82E5: sub     edx, 1
0x6D82E8: cmp     ebp, edx
0x6D82EA: jnz     short loc_6D82F3
0x6D82EC: add     eax, 0FFFFFFFFh
0x6D82EF: mov     [esi+16h], ax
0x6D82F3: mov     eax, ecx
0x6D82F5: push    eax
0x6D82F6: call    FormHeapFree
0x6D82FB: movzx   eax, word ptr [esi+26h]
0x6D82FF: add     ebp, 1
0x6D8302: add     esp, 4
0x6D8305: cmp     ebp, eax
0x6D8307: jb      loc_6D8253
0x6D830D: mov     edi, [esi+2Ch]
0x6D8310: test    edi, edi
0x6D8312: mov     byte ptr [esp+28h+var_4], 2
0x6D8317: jz      short loc_6D8335
0x6D8319: lea     ecx, [edi+4]
0x6D831C: push    ecx; lpAddend
0x6D831D: call    dword ptr ds:0A2807Ch
0x6D8323: test    eax, eax
0x6D8325: jnz     short loc_6D8335
0x6D8327: test    edi, edi
0x6D8329: jz      short loc_6D8335
0x6D832B: mov     edx, [edi]
0x6D832D: mov     eax, [edx]
0x6D832F: push    1
0x6D8331: mov     ecx, edi
0x6D8333: call    eax
0x6D8335: mov     eax, [esi+20h]
0x6D8338: test    eax, eax
0x6D833A: mov     byte ptr [esp+28h+var_4], 1
0x6D833F: mov     dword ptr [esi+1Ch], offset ??_7?$NiTArray@V?$NiPointer@VNiTransformController@@@@@@6B@; const NiTArray<NiPointer<NiTransformController>>::`vftable'
0x6D8346: jz      short loc_6D8365
0x6D8348: mov     ecx, [eax-4]
0x6D834B: lea     edi, [eax-4]
0x6D834E: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6D8353: push    ecx; int
0x6D8354: push    4; unsigned int
0x6D8356: push    eax; void *
0x6D8357: call    $LN21
0x6D835C: push    edi
0x6D835D: call    FormHeapFree
0x6D8362: add     esp, 4
0x6D8365: mov     eax, [esi+10h]
0x6D8368: push    eax
0x6D8369: mov     dword ptr [esi+0Ch], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x6D8370: call    FormHeapFree
0x6D8375: add     esp, 4
0x6D8378: mov     ecx, esi
0x6D837A: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6D8382: call    NiRefObject_destr
0x6D8387: mov     ecx, dword ptr [esp+28h+var_C]
0x6D838B: mov     large fs:0, ecx
0x6D8392: pop     ecx
0x6D8393: pop     edi
0x6D8394: pop     esi
0x6D8395: pop     ebp
0x6D8396: pop     ebx
0x6D8397: add     esp, 14h
0x6D839A: retn
