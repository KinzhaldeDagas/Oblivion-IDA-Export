0x71B300: push    0FFFFFFFFh
0x71B302: push    offset SEH_7F1F00
0x71B307: mov     eax, large fs:0
0x71B30D: push    eax
0x71B30E: push    ebx
0x71B30F: push    ebp
0x71B310: push    esi
0x71B311: push    edi
0x71B312: mov     eax, ds:0B30AACh
0x71B317: xor     eax, esp
0x71B319: push    eax
0x71B31A: lea     eax, [esp+20h+var_C]
0x71B31E: mov     large fs:0, eax
0x71B324: mov     esi, [esp+20h+arg_4]
0x71B328: mov     edi, [esp+20h+arg_0]
0x71B32C: push    esi
0x71B32D: lea     ecx, [edi+8]
0x71B330: call    sub_70E260
0x71B335: test    al, al
0x71B337: jnz     loc_71B43A
0x71B33D: mov     ebx, [esp+20h+arg_8]
0x71B341: test    ebx, ebx
0x71B343: jz      loc_71B416
0x71B349: cmp     ebx, edi
0x71B34B: jz      loc_71B412
0x71B351: push    esi
0x71B352: lea     ecx, [ebx+8]
0x71B355: call    sub_71AD40
0x71B35A: test    al, al
0x71B35C: jz      loc_71B416
0x71B362: mov     eax, [ebx+54h]
0x71B365: mov     eax, [eax]
0x71B367: mov     ecx, [edi+54h]
0x71B36A: cmp     eax, [ecx]
0x71B36C: jnz     loc_71B416
0x71B372: mov     edx, [ebx+58h]
0x71B375: mov     eax, [edx]
0x71B377: mov     ecx, [edi+58h]
0x71B37A: cmp     eax, [ecx]
0x71B37C: jnz     loc_71B416
0x71B382: mov     ebp, [ebx+60h]
0x71B385: cmp     ebp, [edi+60h]
0x71B388: ja      loc_71B416
0x71B38E: xor     esi, esi
0x71B390: test    ebp, ebp
0x71B392: jbe     short loc_71B3C1
0x71B394: mov     edx, [edi+5Ch]
0x71B397: mov     ecx, [edx+esi*4+4]
0x71B39B: sub     ecx, [edx+esi*4]
0x71B39E: lea     eax, [edx+esi*4]
0x71B3A1: mov     edx, [edi+50h]
0x71B3A4: add     edx, [eax]
0x71B3A6: mov     eax, [ebx+5Ch]
0x71B3A9: mov     eax, [eax+esi*4]
0x71B3AC: add     eax, [ebx+50h]
0x71B3AF: push    ecx; Size
0x71B3B0: push    edx; Src
0x71B3B1: push    eax; Dst
0x71B3B2: call    _memcpy
0x71B3B7: add     esi, 1
0x71B3BA: add     esp, 0Ch
0x71B3BD: cmp     esi, ebp
0x71B3BF: jb      short loc_71B394
0x71B3C1: mov     eax, [edi+4Ch]
0x71B3C4: test    eax, eax
0x71B3C6: jz      short loc_71B412
0x71B3C8: mov     ecx, [ebx+4Ch]
0x71B3CB: test    ecx, ecx
0x71B3CD: jnz     short loc_71B40C
0x71B3CF: push    24h ; '$'; Size
0x71B3D1: call    FormHeapAlloc
0x71B3D6: add     esp, 4
0x71B3D9: mov     [esp+20h+arg_4], eax
0x71B3DD: test    eax, eax
0x71B3DF: mov     [esp+20h+var_4], 0
0x71B3E7: jz      short loc_71B3F6
0x71B3E9: mov     edi, [edi+4Ch]
0x71B3EC: push    edi
0x71B3ED: mov     ecx, eax
0x71B3EF: call    sub_732690
0x71B3F4: jmp     short loc_71B3F8
0x71B3F6: xor     eax, eax
0x71B3F8: push    eax
0x71B3F9: mov     ecx, ebx
0x71B3FB: mov     [esp+24h+var_4], 0FFFFFFFFh
0x71B403: call    sub_71B140
0x71B408: mov     eax, ebx
0x71B40A: jmp     short loc_71B43C
0x71B40C: push    eax
0x71B40D: call    sub_732480
0x71B412: mov     eax, ebx
0x71B414: jmp     short loc_71B43C
0x71B416: push    70h ; 'p'; Size
0x71B418: call    FormHeapAlloc
0x71B41D: add     esp, 4
0x71B420: mov     [esp+20h+arg_4], eax
0x71B424: test    eax, eax
0x71B426: mov     [esp+20h+var_4], 1
0x71B42E: jz      short loc_71B43A
0x71B430: push    edi
0x71B431: mov     ecx, eax
0x71B433: call    sub_70E3D0
0x71B438: jmp     short loc_71B43C
0x71B43A: xor     eax, eax
0x71B43C: mov     ecx, [esp+20h+var_C]
0x71B440: mov     large fs:0, ecx
0x71B447: pop     ecx
0x71B448: pop     edi
0x71B449: pop     esi
0x71B44A: pop     ebp
0x71B44B: pop     ebx
0x71B44C: add     esp, 0Ch
0x71B44F: retn    10h
