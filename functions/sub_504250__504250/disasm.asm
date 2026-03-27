0x504250: push    ecx
0x504251: mov     ecx, [esp+4+arg_10]
0x504255: mov     edx, [esp+4+arg_C]
0x504259: push    esi
0x50425A: mov     esi, [esp+8+a4]
0x50425E: push    edi
0x50425F: mov     edi, [esp+0Ch+l]
0x504263: lea     eax, [esp+0Ch+var_4]
0x504267: push    eax; UInt16
0x504268: mov     eax, [esp+10h+a3]
0x50426C: push    edi; l
0x50426D: push    ecx; a6
0x50426E: mov     ecx, [esp+18h+arg_4]
0x504272: push    edx; a5
0x504273: mov     edx, [esp+1Ch+a1]
0x504277: push    esi; a4
0x504278: push    eax; a3
0x504279: push    ecx; a2
0x50427A: push    edx; a1
0x50427B: mov     dword ptr [esp+2Ch+var_4], 0
0x504283: call    Script_ExtractArgs
0x504288: add     esp, 20h
0x50428B: test    al, al
0x50428D: jnz     short loc_504293
0x50428F: pop     edi
0x504290: pop     esi
0x504291: pop     ecx
0x504292: retn
0x504293: test    esi, esi
0x504295: fldz
0x504297: push    ebx
0x504298: mov     ebx, [esp+10h+arg_18]
0x50429C: fstp    qword ptr [ebx]
0x50429E: jz      short loc_5042BA
0x5042A0: test    edi, edi
0x5042A2: jz      short loc_5042BA
0x5042A4: mov     eax, dword ptr [esp+10h+var_4]
0x5042A8: push    20h ; ' '
0x5042AA: push    eax
0x5042AB: mov     ecx, edi
0x5042AD: call    sub_4FB5F0
0x5042B2: test    al, al
0x5042B4: jz      short loc_5042BA
0x5042B6: fld1
0x5042B8: fstp    qword ptr [ebx]
0x5042BA: pop     ebx
0x5042BB: pop     edi
0x5042BC: mov     al, 1
0x5042BE: pop     esi
0x5042BF: pop     ecx
0x5042C0: retn
