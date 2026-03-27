0x5046E0: push    ecx
0x5046E1: mov     ecx, [esp+4+arg_10]
0x5046E5: mov     edx, [esp+4+arg_C]
0x5046E9: push    esi
0x5046EA: mov     esi, [esp+8+a4]
0x5046EE: push    edi
0x5046EF: mov     edi, [esp+0Ch+l]
0x5046F3: lea     eax, [esp+0Ch+var_4]
0x5046F7: push    eax; UInt16
0x5046F8: mov     eax, [esp+10h+a3]
0x5046FC: push    edi; l
0x5046FD: push    ecx; a6
0x5046FE: mov     ecx, [esp+18h+arg_4]
0x504702: push    edx; a5
0x504703: mov     edx, [esp+1Ch+a1]
0x504707: push    esi; a4
0x504708: push    eax; a3
0x504709: push    ecx; a2
0x50470A: push    edx; a1
0x50470B: mov     dword ptr [esp+2Ch+var_4], 0
0x504713: call    Script_ExtractArgs
0x504718: add     esp, 20h
0x50471B: test    al, al
0x50471D: jnz     short loc_504723
0x50471F: pop     edi
0x504720: pop     esi
0x504721: pop     ecx
0x504722: retn
0x504723: test    esi, esi
0x504725: fldz
0x504727: push    ebx
0x504728: mov     ebx, [esp+10h+arg_18]
0x50472C: fstp    qword ptr [ebx]
0x50472E: jz      short loc_50474D
0x504730: test    edi, edi
0x504732: jz      short loc_50474D
0x504734: mov     eax, dword ptr [esp+10h+var_4]
0x504738: push    20000000h
0x50473D: push    eax
0x50473E: mov     ecx, edi
0x504740: call    sub_4FB5F0
0x504745: test    al, al
0x504747: jz      short loc_50474D
0x504749: fld1
0x50474B: fstp    qword ptr [ebx]
0x50474D: pop     ebx
0x50474E: pop     edi
0x50474F: mov     al, 1
0x504751: pop     esi
0x504752: pop     ecx
0x504753: retn
