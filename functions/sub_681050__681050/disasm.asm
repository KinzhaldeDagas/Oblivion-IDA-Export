0x681050: sub     esp, 128h
0x681056: mov     eax, ds:0B30AACh
0x68105B: xor     eax, esp
0x68105D: mov     [esp+128h+var_4], eax
0x681064: push    ebx
0x681065: push    esi
0x681066: push    edi
0x681067: mov     edi, [esp+134h+arg_0]
0x68106E: test    edi, edi
0x681070: mov     esi, ecx
0x681072: jz      loc_68147B
0x681078: mov     eax, [esi+28h]
0x68107B: test    eax, eax
0x68107D: jz      loc_68118C
0x681083: cmp     [esi+4], eax
0x681086: jnz     short loc_6810F3
0x681088: mov     eax, ds:0B33EA0h
0x68108D: fild    dword ptr ds:0B33EA0h
0x681093: test    eax, eax
0x681095: jge     short loc_68109D
0x681097: fadd    dword ptr ds:0A2FC78h
0x68109D: fsub    dword ptr [esi+8]
0x6810A0: fstp    [esp+134h+var_120]
0x6810A4: fld     [esp+134h+var_120]
0x6810A8: fcomp   qword ptr ds:0A74B10h
0x6810AE: fnstsw  ax
0x6810B0: test    ah, 41h
0x6810B3: jnz     short loc_6810D7
0x6810B5: fldz
0x6810B7: lea     ecx, [esp+134h+Format]
0x6810BB: push    offset aExpiringLastDo; "Expiring last door."
0x6810C0: fstp    dword ptr [esi+8]
0x6810C3: push    ecx
0x6810C4: mov     dword ptr [esi+4], 0
0x6810CB: call    __sprintf
0x6810D0: lea     edx, [esp+13Ch+Format]
0x6810D4: push    edx
0x6810D5: jmp     short loc_6810EB
0x6810D7: lea     eax, [esp+134h+Format]
0x6810DB: push    offset aIgnoringSameDo; "Ignoring same door."
0x6810E0: push    eax
0x6810E1: call    __sprintf
0x6810E6: lea     ecx, [esp+13Ch+Format]
0x6810EA: push    ecx; Format
0x6810EB: call    Interface_ConsolePrint
0x6810F0: add     esp, 0Ch
0x6810F3: mov     ecx, [esi+28h]
0x6810F6: cmp     ecx, [esi+4]
0x6810F9: jz      loc_68118C
0x6810FF: call    sub_4DE660
0x681104: add     eax, 0FFFFFFFFh; switch 4 cases
0x681107: cmp     eax, 3
0x68110A: ja      short def_68110C
0x68110C: jmp     ds:jpt_68110C[eax*4]; switch jump
0x681113: mov     ecx, [esi+28h]; jumptable 0068110C cases 1,3
0x681116: push    1
0x681118: push    0
0x68111A: push    0
0x68111C: push    edi
0x68111D: call    ActivateRef
0x681122: test    al, al
0x681124: jnz     short loc_681131
0x681126: mov     byte ptr [esi+0Ch], 7
0x68112A: mov     al, 1
0x68112C: jmp     loc_68147D
0x681131: mov     ecx, [esi+28h]
0x681134: mov     edx, [ecx]
0x681136: mov     eax, [edx+154h]
0x68113C: call    eax
0x68113E: test    eax, eax
0x681140: jz      short loc_68115B
0x681142: mov     ecx, [esi+28h]
0x681145: mov     edx, [ecx]
0x681147: mov     eax, [edx+144h]
0x68114D: call    eax
0x68114F: mov     ecx, [esi+28h]
0x681152: push    ecx
0x681153: call    sub_60DDC0
0x681158: add     esp, 4
0x68115B: mov     edx, [esi+28h]
0x68115E: mov     [esi+4], edx
0x681161: fild    dword ptr ds:0B33EA0h
0x681167: mov     eax, ds:0B33EA0h
0x68116C: test    eax, eax
0x68116E: jge     short loc_681176
0x681170: fadd    dword ptr ds:0A2FC78h
0x681176: fstp    dword ptr [esi+8]
0x681179: fldz; jumptable 0068110C cases 2,4
0x68117B: mov     byte ptr [esi+0Ch], 5
0x68117F: fstp    dword ptr [esi+1Ch]
