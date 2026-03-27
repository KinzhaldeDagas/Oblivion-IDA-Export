0x495C10: sub     esp, 138h
0x495C16: mov     eax, ds:0B30AACh
0x495C1B: xor     eax, esp
0x495C1D: mov     [esp+138h+var_4], eax
0x495C24: mov     eax, [esp+138h+arg_0]
0x495C2B: push    ebx
0x495C2C: push    edi
0x495C2D: mov     edi, [esp+140h+arg_4]
0x495C34: test    edi, edi
0x495C36: mov     ebx, ecx
0x495C38: jz      loc_495CF5
0x495C3E: push    ebp
0x495C3F: mov     [esp+144h+lParam], eax
0x495C43: lea     eax, [esp+144h+lParam]
0x495C47: push    eax; lParam
0x495C48: mov     ecx, 5
0x495C4D: push    0; wParam
0x495C4F: mov     [esp+14Ch+var_118], ecx
0x495C53: mov     [esp+14Ch+var_114], ecx
0x495C57: mov     ecx, [ebx+0Ch]
0x495C5A: push    1100h; Msg
0x495C5F: push    ecx; hWnd
0x495C60: mov     [esp+154h+var_134], 0FFFF0002h
0x495C68: mov     [esp+154h+var_130], 27h ; '''
0x495C70: mov     [esp+154h+var_10C], edi
0x495C74: mov     [esp+154h+var_120], offset aNiblendtransfo; "NiBlendTransformInterps"
0x495C7C: call    dword ptr ds:0A28290h
0x495C82: xor     ebp, ebp
0x495C84: cmp     [edi+44h], bp
0x495C88: mov     [esp+144h+lParam], eax
0x495C8C: jbe     short loc_495CF4
0x495C8E: push    esi
0x495C8F: nop
0x495C90: mov     edx, [edi+40h]
0x495C93: movzx   eax, bp
0x495C96: mov     ecx, [edx+eax*4]
0x495C99: test    ecx, ecx
0x495C9B: jz      short loc_495CEA
0x495C9D: lea     esi, [eax+eax*2]
0x495CA0: shl     esi, 4
0x495CA3: add     esi, [edi+3Ch]
0x495CA6: jz      short loc_495CEA
0x495CA8: mov     [esp+148h+var_10C], esi
0x495CAC: mov     ecx, [ecx+8]
0x495CAF: push    ecx
0x495CB0: push    eax
0x495CB1: lea     edx, [esp+150h+var_104]
0x495CB5: push    offset aInterpDTargetS; "Interp: %d, Target:%s"
0x495CBA: push    edx
0x495CBB: call    __sprintf
0x495CC0: mov     edx, [ebx+0Ch]
0x495CC3: add     esp, 10h
0x495CC6: lea     ecx, [esp+148h+lParam]
0x495CCA: push    ecx; lParam
0x495CCB: push    0; wParam
0x495CCD: push    1100h; Msg
0x495CD2: lea     eax, [esp+154h+var_104]
0x495CD6: push    edx; hWnd
0x495CD7: mov     [esp+158h+var_120], eax
0x495CDB: call    dword ptr ds:0A28290h
0x495CE1: push    esi
0x495CE2: push    eax
0x495CE3: mov     ecx, ebx
0x495CE5: call    sub_495120
0x495CEA: add     ebp, 1
0x495CED: cmp     bp, [edi+44h]
0x495CF1: jb      short loc_495C90
0x495CF3: pop     esi
0x495CF4: pop     ebp
0x495CF5: mov     ecx, [esp+140h+var_4]
0x495CFC: pop     edi
0x495CFD: pop     ebx
0x495CFE: xor     ecx, esp
0x495D00: call    @__security_check_cookie@4; __security_check_cookie(x)
0x495D05: add     esp, 138h
0x495D0B: retn    8
