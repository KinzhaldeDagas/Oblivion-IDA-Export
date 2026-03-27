0x941BF0: mov     eax, [esp+arg_0]
0x941BF4: sub     esp, 0Ch
0x941BF7: push    esi
0x941BF8: push    edi; Args
0x941BF9: mov     esi, ecx
0x941BFB: push    eax
0x941BFC: lea     ecx, [esp+18h+var_C]
0x941C00: call    sub_8BBF50
0x941C05: mov     ecx, [esi+8]
0x941C08: lea     edi, [esi+8]
0x941C0B: push    ecx; Args
0x941C0C: lea     edx, [esp+18h+var_C]
0x941C10: push    offset aSHkobject; "\n%s<hkobject"
0x941C15: push    edx; int
0x941C16: call    sub_8BBEE0
0x941C1B: mov     eax, dword ptr [esp+20h+Args]
0x941C1F: add     esp, 0Ch
0x941C22: test    eax, eax
0x941C24: jz      short loc_941C39
0x941C26: push    eax; Args
0x941C27: lea     eax, [esp+18h+var_C]
0x941C2B: push    offset aClassS; " class=\"%s\""
0x941C30: push    eax; int
0x941C31: call    sub_8BBEE0
0x941C36: add     esp, 0Ch
0x941C39: mov     eax, dword ptr [esp+14h+arg_4]
0x941C3D: test    eax, eax
0x941C3F: jz      short loc_941C54
0x941C41: push    eax; Args
0x941C42: lea     ecx, [esp+18h+var_C]
0x941C46: push    offset aNameS; " name=\"%s\""
0x941C4B: push    ecx; int
0x941C4C: call    sub_8BBEE0
0x941C51: add     esp, 0Ch
0x941C54: lea     edx, [esp+14h+var_C]
0x941C58: push    offset asc_A67E7C; ">"
0x941C5D: push    edx; int
0x941C5E: call    sub_8BBEE0
0x941C63: add     esp, 8
0x941C66: mov     ecx, 1
0x941C6B: call    sub_941B90
0x941C70: lea     ecx, [esp+14h+var_C]
0x941C74: call    sub_8BC000
0x941C79: pop     edi
0x941C7A: pop     esi
0x941C7B: add     esp, 0Ch
0x941C7E: retn    0Ch
