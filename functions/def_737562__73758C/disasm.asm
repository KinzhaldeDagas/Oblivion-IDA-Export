0x73758C: xor     ebx, ebx; jumptable 00737562 default case
0x73758E: xor     esi, esi
0x737590: cmp     [esp+arg_88], esi
0x737597: jbe     loc_7376B6
0x73759D: lea     ecx, [ecx+0]
0x7375A0: mov     al, [ebp+111h]
0x7375A6: cmp     al, 10h
0x7375A8: jz      loc_737653
0x7375AE: cmp     al, 18h
0x7375B0: jz      short loc_737608
0x7375B2: cmp     al, 20h ; ' '
0x7375B4: jnz     loc_7376A2
0x7375BA: movzx   edx, byte ptr [ebp+10Ch]
0x7375C1: push    edx
0x7375C2: push    ebx
0x7375C3: push    esi
0x7375C4: sub     esp, 44h
0x7375C7: lea     eax, [esp+50h+arg_30]
0x7375CE: mov     ecx, esp
0x7375D0: mov     [esp+50h+arg_2C], esp
0x7375D7: push    eax
0x7375D8: call    sub_70F010
0x7375DD: sub     esp, 44h
0x7375E0: lea     eax, [ebp+110h]
0x7375E6: mov     ecx, esp
0x7375E8: mov     [esp+94h+arg_2C], esp
0x7375EF: push    eax
0x7375F0: call    sub_70F010
0x7375F5: mov     ecx, [esp+94h+arg_84]
0x7375FC: push    edi
0x7375FD: push    ecx
0x7375FE: call    sub_736A20
0x737603: jmp     loc_73769C
0x737608: movzx   edx, byte ptr [ebp+10Ch]
0x73760F: push    edx
0x737610: push    ebx
0x737611: push    esi
0x737612: sub     esp, 44h
0x737615: lea     eax, [esp+50h+arg_30]
0x73761C: mov     ecx, esp
0x73761E: mov     [esp+50h+arg_2C], esp
0x737625: push    eax
0x737626: call    sub_70F010
0x73762B: sub     esp, 44h
0x73762E: lea     eax, [ebp+110h]
0x737634: mov     ecx, esp
0x737636: mov     [esp+94h+arg_2C], esp
0x73763D: push    eax
0x73763E: call    sub_70F010
0x737643: mov     ecx, [esp+94h+arg_84]
0x73764A: push    edi
0x73764B: push    ecx
0x73764C: call    sub_736950
0x737651: jmp     short loc_73769C
0x737653: movzx   edx, byte ptr [ebp+10Ch]
0x73765A: push    edx
0x73765B: push    ebx
0x73765C: push    esi
0x73765D: sub     esp, 44h
0x737660: lea     eax, [esp+50h+arg_30]
0x737667: mov     ecx, esp
0x737669: mov     [esp+50h+arg_2C], esp
0x737670: push    eax
0x737671: call    sub_70F010
0x737676: sub     esp, 44h
0x737679: lea     eax, [ebp+110h]
0x73767F: mov     ecx, esp
0x737681: mov     [esp+94h+arg_2C], esp
0x737688: push    eax
0x737689: call    sub_70F010
0x73768E: mov     ecx, [esp+94h+arg_84]
0x737695: push    edi
0x737696: push    ecx
0x737697: call    sub_736EB0
0x73769C: add     esp, 9Ch
0x7376A2: add     esi, 1
0x7376A5: cmp     esi, [esp+arg_88]
0x7376AC: jb      loc_7375A0
0x7376B2: mov     eax, [esp+arg_18]
0x7376B6: add     eax, 1
0x7376B9: lea     edx, [eax+1]
0x7376BC: cmp     edx, [esp+arg_14]
0x7376C0: mov     [esp+arg_18], eax
0x7376C4: jb      loc_73755D
0x7376CA: mov     esi, [esp+lpCriticalSection]
0x7376CE: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x7376D2: jnz     short loc_7376DB
0x7376D4: mov     dword ptr [esi+78h], 0
0x7376DB: push    esi; lpCriticalSection
0x7376DC: call    dword ptr ds:0A28074h
0x7376E2: mov     eax, edi
0x7376E4: mov     ecx, [esp+arg_74]
0x7376E8: mov     large fs:0, ecx
0x7376EF: pop     ecx
0x7376F0: pop     edi
0x7376F1: pop     esi
0x7376F2: pop     ebp
0x7376F3: pop     ebx
0x7376F4: add     esp, 70h
0x7376F7: retn    8
