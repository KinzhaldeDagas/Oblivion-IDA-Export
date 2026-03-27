0x504150: push    ecx
0x504151: mov     ecx, [esp+4+arg_10]
0x504155: mov     edx, [esp+4+arg_C]
0x504159: push    esi
0x50415A: mov     esi, [esp+8+a4]
0x50415E: push    edi
0x50415F: mov     edi, [esp+0Ch+l]
0x504163: lea     eax, [esp+0Ch+var_4]
0x504167: push    eax; UInt16
0x504168: mov     eax, [esp+10h+a3]
0x50416C: push    edi; l
0x50416D: push    ecx; a6
0x50416E: mov     ecx, [esp+18h+arg_4]
0x504172: push    edx; a5
0x504173: mov     edx, [esp+1Ch+a1]
0x504177: push    esi; a4
0x504178: push    eax; a3
0x504179: push    ecx; a2
0x50417A: push    edx; a1
0x50417B: mov     dword ptr [esp+2Ch+var_4], 0
0x504183: call    Script_ExtractArgs
0x504188: add     esp, 20h
0x50418B: test    al, al
0x50418D: jnz     short loc_504193
0x50418F: pop     edi
0x504190: pop     esi
0x504191: pop     ecx
0x504192: retn
0x504193: test    esi, esi
0x504195: fldz
0x504197: push    ebx
0x504198: mov     ebx, [esp+10h+arg_18]
0x50419C: fstp    qword ptr [ebx]
0x50419E: jz      short loc_5041BA
0x5041A0: test    edi, edi
0x5041A2: jz      short loc_5041BA
0x5041A4: mov     eax, dword ptr [esp+10h+var_4]
0x5041A8: push    10h
0x5041AA: push    eax
0x5041AB: mov     ecx, edi
0x5041AD: call    sub_4FB5F0
0x5041B2: test    al, al
0x5041B4: jz      short loc_5041BA
0x5041B6: fld1
0x5041B8: fstp    qword ptr [ebx]
0x5041BA: pop     ebx
0x5041BB: pop     edi
0x5041BC: mov     al, 1
0x5041BE: pop     esi
0x5041BF: pop     ecx
0x5041C0: retn
