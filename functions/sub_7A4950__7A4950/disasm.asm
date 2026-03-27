0x7A4950: push    0FFFFFFFFh
0x7A4952: push    offset SEH_7A4950
0x7A4957: mov     eax, large fs:0
0x7A495D: push    eax
0x7A495E: sub     esp, 80h
0x7A4964: push    ebx
0x7A4965: push    ebp
0x7A4966: push    esi
0x7A4967: push    edi
0x7A4968: mov     eax, ds:0B30AACh
0x7A496D: xor     eax, esp
0x7A496F: push    eax
0x7A4970: lea     eax, [esp+0A0h+var_C]
0x7A4977: mov     large fs:0, eax
0x7A497D: mov     ebp, ecx
0x7A497F: mov     esi, [esp+0A0h+arg_0]
0x7A4986: mov     ecx, esi
0x7A4988: call    sub_78EB40
0x7A498D: xor     ebx, ebx
0x7A498F: nop
0x7A4990: cmp     eax, 7D0h
0x7A4995: jg      loc_7A4A6A
0x7A499B: jz      short loc_7A49B5
0x7A499D: cmp     eax, 3F6h
0x7A49A2: jnz     def_7A4A78; jumptable 007A4A78 default case
0x7A49A8: push    esi
0x7A49A9: mov     ecx, ebp
0x7A49AB: call    sub_7A4190
0x7A49B0: jmp     loc_7A4AE5
0x7A49B5: sub     esp, 1Ch
0x7A49B8: mov     eax, esp
0x7A49BA: mov     [esp+0BCh+var_8C], esp
0x7A49BE: push    eax
0x7A49BF: mov     ecx, esi
0x7A49C1: call    sub_78EC20
0x7A49C6: lea     ecx, [esp+0BCh+var_88]
0x7A49CA: call    sub_789120
0x7A49CF: push    0FFFFFFFFh
0x7A49D1: push    ebx
0x7A49D2: lea     ecx, [esp+0A8h+var_88]
0x7A49D6: lea     edi, [ebp+24h]
0x7A49D9: push    ecx
0x7A49DA: mov     ecx, edi
0x7A49DC: mov     [esp+0ACh+var_4], ebx
0x7A49E3: call    sub_414420
0x7A49E8: cmp     [esp+0A0h+var_70], 10h
0x7A49ED: mov     [esp+0A0h+var_4], 0FFFFFFFFh
0x7A49F8: jb      short loc_7A4A07
0x7A49FA: mov     edx, [esp+0A0h+var_84]
0x7A49FE: push    edx
0x7A49FF: call    FormHeapFree
0x7A4A04: add     esp, 4
0x7A4A07: lea     eax, [esp+0A0h+var_6C]
0x7A4A0B: push    eax
0x7A4A0C: mov     ecx, edi
0x7A4A0E: mov     [esp+0A4h+var_70], 0Fh
0x7A4A16: mov     [esp+0A4h+var_74], ebx
0x7A4A1A: mov     byte ptr [esp+0A4h+var_84], bl
0x7A4A1E: call    sub_789430
0x7A4A23: push    0FFFFFFFFh
0x7A4A25: push    ebx
0x7A4A26: push    eax
0x7A4A27: mov     ecx, edi
0x7A4A29: mov     [esp+0ACh+var_4], 1
0x7A4A34: call    sub_414420
0x7A4A39: cmp     [esp+0A0h+var_54], 10h
0x7A4A3E: mov     [esp+0A0h+var_4], 0FFFFFFFFh
0x7A4A49: jb      short loc_7A4A58
0x7A4A4B: mov     ecx, [esp+0A0h+var_68]
0x7A4A4F: push    ecx
0x7A4A50: call    FormHeapFree
0x7A4A55: add     esp, 4
0x7A4A58: mov     [esp+0A0h+var_54], 0Fh
0x7A4A60: mov     [esp+0A0h+var_58], ebx
0x7A4A64: mov     byte ptr [esp+0A0h+var_68], bl
0x7A4A68: jmp     short loc_7A4AE5
0x7A4A6A: add     eax, 0FFFFF82Fh; switch 7 cases
0x7A4A6F: cmp     eax, 6
0x7A4A72: ja      def_7A4A78; jumptable 007A4A78 default case
0x7A4A78: jmp     ds:jpt_7A4A78[eax*4]; switch jump
0x7A4A7F: mov     ecx, esi; jumptable 007A4A78 case 2005
0x7A4A81: call    sub_78EB40
0x7A4A86: push    eax
0x7A4A87: mov     ecx, ebp
0x7A4A89: call    sub_7A24F0
0x7A4A8E: jmp     short loc_7A4AE5
0x7A4A90: mov     ecx, esi; jumptable 007A4A78 case 2003
0x7A4A92: call    sub_78EB10
0x7A4A97: fstp    dword ptr [ebp+44h]
0x7A4A9A: jmp     short loc_7A4AE5
0x7A4A9C: mov     ecx, esi; jumptable 007A4A78 case 2001
0x7A4A9E: call    sub_78EB10
0x7A4AA3: fstp    dword ptr [ebp+40h]
0x7A4AA6: jmp     short loc_7A4AE5
0x7A4AA8: mov     ecx, esi; jumptable 007A4A78 case 2004
0x7A4AAA: call    sub_78EB40
0x7A4AAF: jmp     short loc_7A4AE5
0x7A4AB1: mov     ecx, [esi]; jumptable 007A4A78 case 2002
0x7A4AB3: lea     edx, [ecx+1]
0x7A4AB6: mov     [esi], edx
0x7A4AB8: mov     edx, [esi+8]
0x7A4ABB: cmp     edx, ebx
0x7A4ABD: jz      short loc_7A4AC8
0x7A4ABF: mov     eax, [esi+0Ch]
0x7A4AC2: sub     eax, edx
0x7A4AC4: cmp     ecx, eax
0x7A4AC6: jb      short loc_7A4AE5
0x7A4AC8: call    __invalid_parameter_noinfo
0x7A4ACD: jmp     short loc_7A4AE5
0x7A4ACF: mov     ecx, esi; jumptable 007A4A78 case 2006
0x7A4AD1: call    sub_78EB10
0x7A4AD6: fstp    dword ptr [ebp+4Ch]
0x7A4AD9: jmp     short loc_7A4AE5
0x7A4ADB: mov     ecx, esi; jumptable 007A4A78 case 2007
0x7A4ADD: call    sub_78EB10
0x7A4AE2: fstp    dword ptr [ebp+50h]
0x7A4AE5: mov     ecx, esi
0x7A4AE7: call    sub_78EB40
0x7A4AEC: cmp     eax, 3EBh
0x7A4AF1: jnz     loc_7A4990
0x7A4AF7: mov     ecx, [esp+0A0h+var_C]
0x7A4AFE: mov     large fs:0, ecx
0x7A4B05: pop     ecx
0x7A4B06: pop     edi
0x7A4B07: pop     esi
0x7A4B08: pop     ebp
0x7A4B09: pop     ebx
0x7A4B0A: add     esp, 8Ch
0x7A4B10: retn    4
0x7A4B13: push    22h ; '"'; jumptable 007A4A78 default case
0x7A4B15: push    offset aMalformedGener; "malformed general tree information"
0x7A4B1A: lea     ecx, [esp+0A8h+var_50]
0x7A4B1E: mov     [esp+0A8h+var_38], 0Fh
0x7A4B26: mov     [esp+0A8h+var_3C], ebx
0x7A4B2A: mov     [esp+0A8h+var_4C], bl
0x7A4B2E: call    sub_414500
0x7A4B33: push    ebx
0x7A4B34: lea     eax, [esp+0A4h+var_50]
0x7A4B38: push    eax
0x7A4B39: lea     ecx, [esp+0A8h+var_34]
0x7A4B3D: mov     [esp+0A8h+var_4], 2
0x7A4B48: call    sub_789190
0x7A4B4D: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A4B52: lea     ecx, [esp+0A4h+var_34]
0x7A4B56: push    ecx
0x7A4B57: call    ThrowException??
