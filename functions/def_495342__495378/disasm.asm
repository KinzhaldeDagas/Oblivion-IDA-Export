0x495378: fld     dword ptr [edi+48h]; jumptable 00495342 default case
0x49537B: fstp    [esp+arg_10]
0x49537F: fldz
0x495381: fcom    [esp+arg_10]
0x495385: fnstsw  ax
0x495387: test    ah, 41h
0x49538A: jnz     short loc_495392
0x49538C: fstp    [esp+arg_10]
0x495390: jmp     short loc_495394
0x495392: fstp    st
0x495394: mov     eax, [edi+0Ch]
0x495397: fld     [esp+arg_10]
0x49539B: push    eax
0x49539C: sub     esp, 8
0x49539F: fstp    [esp+0Ch+var_C]
0x4953A2: push    ecx
0x4953A3: mov     ecx, [edi+8]
0x4953A6: push    ecx
0x4953A7: lea     edx, [esp+14h+arg_48]
0x4953AB: push    offset aSSOffset_2fCou; "%s: %s, Offset: %.2f, Count: %d"
0x4953B0: push    edx
0x4953B1: call    __sprintf
0x4953B6: mov     edx, [ebp+0Ch]
0x4953B9: add     esp, 1Ch
0x4953BC: lea     ecx, [esp+lParam]
0x4953C0: push    ecx; lParam
0x4953C1: push    0; wParam
0x4953C3: lea     eax, [esp+8+arg_48]
0x4953C7: mov     [esp+8+arg_2C], eax
0x4953CB: mov     eax, 5
0x4953D0: push    1100h; Msg
0x4953D5: mov     [esp+0Ch+lParam], ebx
0x4953D9: mov     ebx, ds:0A28290h
0x4953DF: push    edx; hWnd
0x4953E0: mov     [esp+10h+arg_34], eax
0x4953E4: mov     [esp+10h+arg_38], eax
0x4953E8: call    ebx ; SendMessageA
0x4953EA: mov     [esp+lParam], eax
0x4953EE: mov     eax, [edi]
0x4953F0: mov     edx, [eax+30h]
0x4953F3: push    esi
0x4953F4: mov     ecx, edi
0x4953F6: call    edx
0x4953F8: xor     edi, edi
0x4953FA: cmp     [esi+0Ah], di
0x4953FE: jbe     short loc_495434
0x495400: mov     eax, [esi+4]
0x495403: mov     ecx, [eax+edi*4]
0x495406: lea     edx, [esp+4+arg_10]
0x49540A: push    edx; lParam
0x49540B: mov     eax, 6
0x495410: push    0; wParam
0x495412: mov     [esp+0Ch+arg_30], eax
0x495416: mov     [esp+0Ch+arg_34], eax
0x49541A: mov     eax, [ebp+0Ch]
0x49541D: push    1100h; Msg
0x495422: push    eax; hWnd
0x495423: mov     [esp+14h+arg_28], ecx
0x495427: call    ebx ; SendMessageA
0x495429: movzx   ecx, word ptr [esi+0Ah]
0x49542D: add     edi, 1
0x495430: cmp     edi, ecx
0x495432: jb      short loc_495400
0x495434: xor     ecx, ecx
0x495436: xor     eax, eax
0x495438: cmp     [esi+0Ah], cx
0x49543C: jbe     short loc_495452
0x49543E: mov     edi, edi
0x495440: mov     edi, [esi+4]
0x495443: movzx   edx, ax
0x495446: add     eax, 1
0x495449: mov     [edi+edx*4], ecx
0x49544C: cmp     ax, [esi+0Ah]
0x495450: jb      short loc_495440
0x495452: mov     [esi+0Ah], cx
0x495456: mov     [esi+0Ch], cx
0x49545A: mov     eax, [esi]
0x49545C: mov     edx, [eax]
0x49545E: push    1
0x495460: mov     ecx, esi
0x495462: call    edx
0x495464: mov     ecx, [esp+8+arg_144]
0x49546B: mov     large fs:0, ecx
0x495472: pop     ecx
0x495473: pop     edi
0x495474: pop     esi
0x495475: pop     ebp
0x495476: pop     ebx
0x495477: mov     ecx, [esp-0Ch+arg_140]
0x49547E: xor     ecx, esp
0x495480: call    @__security_check_cookie@4; __security_check_cookie(x)
0x495485: add     esp, 148h
0x49548B: retn    8
