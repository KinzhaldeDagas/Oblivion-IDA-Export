0x784210: push    0FFFFFFFFh
0x784212: push    offset SEH_784210
0x784217: mov     eax, large fs:0
0x78421D: push    eax
0x78421E: push    ecx
0x78421F: push    ebx
0x784220: push    ebp
0x784221: push    esi
0x784222: push    edi
0x784223: mov     eax, ds:0B30AACh
0x784228: xor     eax, esp
0x78422A: push    eax
0x78422B: lea     eax, [esp+24h+var_C]
0x78422F: mov     large fs:0, eax
0x784235: mov     edi, ecx
0x784237: fldz
0x784239: mov     eax, [edi+40h]
0x78423C: test    eax, eax
0x78423E: fstp    [esp+24h+var_10]
0x784242: lea     esi, [edi+3Ch]
0x784245: jz      loc_78434E
0x78424B: mov     ecx, [esi+8]
0x78424E: sub     ecx, eax
0x784250: mov     eax, 2AAAAAABh
0x784255: imul    ecx
0x784257: sar     edx, 2
0x78425A: mov     eax, edx
0x78425C: shr     eax, 1Fh
0x78425F: add     eax, edx
0x784261: cmp     eax, 1F4h
0x784266: jnz     loc_78434E
0x78426C: fld     [esp+24h+arg_0]
0x784270: fld     qword ptr ds:0A8BA00h
0x784276: fmul    st, st(1)
0x784278: call    Double_To_SInt32
0x78427D: mov     ebx, eax
0x78427F: cmp     ebx, 1F3h
0x784285: mov     [esp+24h+arg_0], ebx
0x784289: mov     ecx, esi
0x78428B: jnz     short loc_78429A
0x78428D: push    eax
0x78428E: fstp    st
0x784290: call    sub_784000
0x784295: fld     dword ptr [eax+4]
0x784298: jmp     short loc_7842DD
0x78429A: fild    [esp+24h+arg_0]
0x78429E: lea     eax, [ebx+1]
0x7842A1: fld     qword ptr ds:0A8B9F8h
0x7842A7: push    eax
0x7842A8: fmul    st(1), st
0x7842AA: fxch    st(2)
0x7842AC: fsubrp  st(1), st
0x7842AE: fdivrp  st(1), st
0x7842B0: fstp    [esp+28h+var_10]
0x7842B4: call    sub_784000
0x7842B9: push    ebx
0x7842BA: mov     ecx, esi
0x7842BC: mov     ebp, eax
0x7842BE: call    sub_784000
0x7842C3: fld     dword ptr [eax+4]
0x7842C6: fstp    [esp+24h+arg_0]
0x7842CA: fld     dword ptr [ebp+4]
0x7842CD: fld     [esp+24h+arg_0]
0x7842D1: fld     st
0x7842D3: fsubp   st(2), st
0x7842D5: fld     [esp+24h+var_10]
0x7842D9: fmulp   st(2), st
0x7842DB: faddp   st(1), st
0x7842DD: fstp    [esp+24h+var_10]
0x7842E1: mov     eax, 1
0x7842E6: test    ds:0B42960h, al
0x7842EC: fld     dword ptr [edi+4]
0x7842EF: fsub    dword ptr [edi]
0x7842F1: fmul    [esp+24h+var_10]
0x7842F5: fadd    dword ptr [edi]
0x7842F7: fstp    [esp+24h+var_10]
0x7842FB: jnz     short loc_78432A
0x7842FD: or      ds:0B42960h, eax
0x784303: mov     ecx, offset unk_B4295D
0x784308: mov     [esp+24h+var_4], 0
0x784310: call    sub_78EAF0
0x784315: push    offset sub_A26E10; void (__cdecl *)()
0x78431A: call    _atexit
0x78431F: add     esp, 4
0x784322: mov     [esp+24h+var_4], 0FFFFFFFFh
0x78432A: fld     dword ptr [edi+8]
0x78432D: sub     esp, 8
0x784330: fstp    [esp+2Ch+var_28]; float
0x784334: mov     ecx, offset unk_B4295D
0x784339: fld     dword ptr [edi+8]
0x78433C: fchs
0x78433E: fstp    [esp+2Ch+var_2C]; float
0x784341: call    sub_78EA00
0x784346: fadd    [esp+24h+var_10]
0x78434A: fstp    [esp+24h+var_10]
0x78434E: fld     [esp+24h+var_10]
0x784352: mov     ecx, [esp+24h+var_C]
0x784356: mov     large fs:0, ecx
0x78435D: pop     ecx
0x78435E: pop     edi
0x78435F: pop     esi
0x784360: pop     ebp
0x784361: pop     ebx
0x784362: add     esp, 10h
0x784365: retn    4
