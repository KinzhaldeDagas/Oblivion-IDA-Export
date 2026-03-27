0x6EB5E0: sub     esp, 10h
0x6EB5E3: fldz
0x6EB5E5: push    ebx
0x6EB5E6: fst     [esp+14h+var_8]
0x6EB5EA: push    edi
0x6EB5EB: fld1
0x6EB5ED: mov     edi, ecx
0x6EB5EF: xor     bl, bl
0x6EB5F1: fstp    [esp+18h+var_C]
0x6EB5F5: cmp     [edi+0Dh], bl
0x6EB5F8: mov     [esp+18h+var_D], 0
0x6EB5FD: jbe     loc_6EB716
0x6EB603: push    ebp
0x6EB604: mov     ebp, [esp+1Ch+arg_4]
0x6EB608: push    esi
0x6EB609: jmp     short loc_6EB612
0x6EB60B: jmp     short loc_6EB610
0x6EB60D: align 10h
0x6EB610: fldz
0x6EB612: movzx   eax, bl
0x6EB615: lea     esi, [eax+eax*2]
0x6EB618: mov     eax, [edi+14h]
0x6EB61B: add     esi, esi
0x6EB61D: add     esi, esi
0x6EB61F: add     esi, esi
0x6EB621: mov     ecx, [eax+esi]
0x6EB624: test    ecx, ecx
0x6EB626: lea     edx, [eax+esi]
0x6EB629: jz      loc_6EB6CD
0x6EB62F: fcom    dword ptr [edx+8]
0x6EB632: fnstsw  ax
0x6EB634: test    ah, 5
0x6EB637: jp      loc_6EB6CD
0x6EB63D: test    ecx, ecx
0x6EB63F: fld     [esp+20h+arg_0]
0x6EB643: fstp    [esp+20h+var_4]
0x6EB647: jz      short loc_6EB675
0x6EB649: fcomp   dword ptr [edx+8]
0x6EB64C: fnstsw  ax
0x6EB64E: test    ah, 44h
0x6EB651: jnp     short loc_6EB677
0x6EB653: test    byte ptr [edi+0Ch], 1
0x6EB657: jz      short loc_6EB660
0x6EB659: fld     dword ptr [edx+14h]
0x6EB65C: fstp    [esp+20h+var_4]
0x6EB660: fld     [esp+20h+var_4]
0x6EB664: fld     st
0x6EB666: fld     dword ptr ds:0A79F00h
0x6EB66C: fucompp
0x6EB66E: fnstsw  ax
0x6EB670: test    ah, 44h
0x6EB673: jp      short loc_6EB684
0x6EB675: fstp    st
0x6EB677: fld     [esp+20h+var_C]
0x6EB67B: fsub    dword ptr [edx+8]
0x6EB67E: fstp    [esp+20h+var_C]
0x6EB682: jmp     short loc_6EB6CF
0x6EB684: mov     edx, [ecx]
0x6EB686: mov     edx, [edx+60h]
0x6EB689: lea     eax, [esp+20h+arg_4]
0x6EB68D: push    eax
0x6EB68E: push    ebp
0x6EB68F: push    ecx
0x6EB690: fstp    [esp+2Ch+var_2C]
0x6EB693: call    edx
0x6EB695: test    al, al
0x6EB697: jz      short loc_6EB6BC
0x6EB699: movzx   ecx, byte ptr [esp+20h+arg_4]
0x6EB69E: mov     eax, [edi+14h]
0x6EB6A1: mov     [esp+20h+var_4], ecx
0x6EB6A5: mov     [esp+20h+var_D], 1
0x6EB6AA: fld     dword ptr [eax+esi+8]
0x6EB6AE: fimul   [esp+20h+var_4]
0x6EB6B2: fadd    [esp+20h+var_8]
0x6EB6B6: fstp    [esp+20h+var_8]
0x6EB6BA: jmp     short loc_6EB6CF
0x6EB6BC: fld     [esp+20h+var_C]
0x6EB6C0: mov     edx, [edi+14h]
0x6EB6C3: fsub    dword ptr [edx+esi+8]
0x6EB6C7: fstp    [esp+20h+var_C]
0x6EB6CB: jmp     short loc_6EB6CF
0x6EB6CD: fstp    st
0x6EB6CF: add     bl, 1
0x6EB6D2: cmp     bl, [edi+0Dh]
0x6EB6D5: jb      loc_6EB610
0x6EB6DB: cmp     [esp+20h+var_D], 0
0x6EB6E0: pop     esi
0x6EB6E1: pop     ebp
0x6EB6E2: jz      short loc_6EB718
0x6EB6E4: fld     [esp+18h+var_8]
0x6EB6E8: fdiv    [esp+18h+var_C]
0x6EB6EC: fstp    [esp+18h+arg_4]
0x6EB6F0: fld     [esp+18h+arg_4]
0x6EB6F4: fcomp   dword ptr ds:0A3D65Ch
0x6EB6FA: fnstsw  ax
0x6EB6FC: test    ah, 5
0x6EB6FF: jp      short loc_6EB732
0x6EB701: mov     edx, [esp+18h+arg_8]
0x6EB705: mov     byte ptr [edi+30h], 0
0x6EB709: pop     edi
0x6EB70A: mov     byte ptr [edx], 0
0x6EB70D: mov     al, 1
0x6EB70F: pop     ebx
0x6EB710: add     esp, 10h
0x6EB713: retn    0Ch
0x6EB716: fstp    st
0x6EB718: mov     eax, [esp+18h+arg_8]
0x6EB71C: mov     byte ptr [eax], 0
0x6EB71F: mov     cl, ds:0A7C6ACh
0x6EB725: mov     [edi+30h], cl
0x6EB728: pop     edi
0x6EB729: xor     al, al
0x6EB72B: pop     ebx
0x6EB72C: add     esp, 10h
0x6EB72F: retn    0Ch
0x6EB732: mov     eax, [esp+18h+arg_8]
0x6EB736: mov     byte ptr [edi+30h], 1
0x6EB73A: pop     edi
0x6EB73B: mov     byte ptr [eax], 1
0x6EB73E: mov     al, 1
0x6EB740: pop     ebx
0x6EB741: add     esp, 10h
0x6EB744: retn    0Ch
