0x789610: push    0FFFFFFFFh
0x789612: push    offset SEH_789610
0x789617: mov     eax, large fs:0
0x78961D: push    eax
0x78961E: sub     esp, 88h
0x789624: push    ebx
0x789625: push    esi
0x789626: push    edi
0x789627: mov     eax, ds:0B30AACh
0x78962C: xor     eax, esp
0x78962E: push    eax
0x78962F: lea     eax, [esp+0A4h+var_C]
0x789636: mov     large fs:0, eax
0x78963C: mov     edi, ecx
0x78963E: mov     esi, [esp+0A4h+arg_0]
0x789645: mov     ecx, esi
0x789647: call    sub_78EB40
0x78964C: lea     esp, [esp+0]
0x789650: add     eax, 0FFFFDCD6h; switch 8 cases
0x789655: cmp     eax, 7
0x789658: ja      def_78965E; jumptable 0078965E default case, cases 9006-9008
0x78965E: jmp     ds:jpt_78965E[eax*4]; switch jump
0x789665: mov     ecx, esi; jumptable 0078965E case 9002
0x789667: call    sub_78EB40
0x78966C: mov     [edi+18h], eax
0x78966F: jmp     short loc_78969D
0x789671: mov     ecx, esi; jumptable 0078965E case 9003
0x789673: call    sub_78EB10
0x789678: fstp    dword ptr [edi+1Ch]
0x78967B: jmp     short loc_78969D
0x78967D: mov     ecx, esi; jumptable 0078965E case 9004
0x78967F: call    sub_78EB10
0x789684: fstp    dword ptr [edi+20h]
0x789687: jmp     short loc_78969D
0x789689: mov     ecx, esi; jumptable 0078965E case 9009
0x78968B: call    sub_78EB10
0x789690: fstp    dword ptr [edi+24h]
0x789693: jmp     short loc_78969D
0x789695: mov     ecx, [edi]; jumptable 0078965E case 9005
0x789697: push    esi
0x789698: call    sub_7A28E0
0x78969D: mov     ecx, esi
0x78969F: call    sub_787810
0x7896A4: test    al, al
0x7896A6: jnz     short loc_7896D1
0x7896A8: mov     ecx, esi
0x7896AA: call    sub_78EB40
0x7896AF: cmp     eax, 2329h
0x7896B4: jnz     short loc_789650
0x7896B6: mov     ecx, [esp+0A4h+var_C]
0x7896BD: mov     large fs:0, ecx
0x7896C4: pop     ecx
0x7896C5: pop     edi
0x7896C6: pop     esi
0x7896C7: pop     ebx
0x7896C8: add     esp, 94h
0x7896CE: retn    4
0x7896D1: push    32h ; '2'; MaxCount
0x7896D3: xor     ebx, ebx
0x7896D5: push    offset aPrematureEndOf; "premature end of file reached parsing n"...
0x7896DA: lea     ecx, [esp+0ACh+var_78]
0x7896DE: mov     [esp+0ACh+var_60], 0Fh
0x7896E6: mov     [esp+0ACh+var_64], ebx
0x7896EA: mov     [esp+0ACh+var_74], bl
0x7896EE: call    sub_414500
0x7896F3: push    ebx
0x7896F4: lea     eax, [esp+0A8h+var_78]
0x7896F8: push    eax
0x7896F9: lea     ecx, [esp+0ACh+var_5C]
0x7896FD: mov     [esp+0ACh+var_4], 1
0x789708: call    sub_789190
0x78970D: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x789712: lea     ecx, [esp+0A8h+var_5C]
0x789716: push    ecx
0x789717: call    ThrowException??
0x78971C: push    12h; jumptable 0078965E default case, cases 9006-9008
0x78971E: xor     ebx, ebx
0x789720: push    offset aMalformedLodIn; "malformed lod info"
0x789725: lea     ecx, [esp+0ACh+var_94]
0x789729: mov     [esp+0ACh+var_7C], 0Fh
0x789731: mov     [esp+0ACh+var_80], ebx
0x789735: mov     [esp+0ACh+var_90], bl
0x789739: call    sub_414500
0x78973E: push    ebx
0x78973F: lea     edx, [esp+0A8h+var_94]
0x789743: push    edx
0x789744: lea     ecx, [esp+0ACh+var_34]
0x789748: mov     [esp+0ACh+var_4], ebx
0x78974F: call    sub_789190
0x789754: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x789759: lea     eax, [esp+0A8h+var_34]
0x78975D: push    eax
0x78975E: call    ThrowException??
