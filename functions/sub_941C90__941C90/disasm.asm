0x941C90: sub     esp, 0Ch
0x941C93: push    edi
0x941C94: lea     edi, [ecx+8]
0x941C97: or      ecx, 0FFFFFFFFh
0x941C9A: call    sub_941B90
0x941C9F: mov     eax, [esp+10h+arg_0]
0x941CA3: push    eax
0x941CA4: lea     ecx, [esp+14h+var_C]
0x941CA8: call    sub_8BBF50
0x941CAD: mov     ecx, [edi]
0x941CAF: push    ecx; Args
0x941CB0: lea     edx, [esp+14h+var_C]
0x941CB4: push    offset aSHkobject_0; "\n%s</hkobject>"
0x941CB9: push    edx; int
0x941CBA: call    sub_8BBEE0
0x941CBF: add     esp, 0Ch
0x941CC2: lea     ecx, [esp+10h+var_C]
0x941CC6: call    sub_8BC000
0x941CCB: pop     edi
0x941CCC: add     esp, 0Ch
0x941CCF: retn    4
