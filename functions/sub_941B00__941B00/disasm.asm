0x941B00: sub     esp, 0Ch
0x941B03: push    ebx
0x941B04: push    esi
0x941B05: push    edi
0x941B06: mov     edi, dword ptr [esp+18h+Args]
0x941B0A: mov     esi, ecx
0x941B0C: push    edi
0x941B0D: lea     ecx, [esp+1Ch+var_C]
0x941B11: call    sub_8BBF50
0x941B16: mov     ebx, [esp+18h+arg_8]
0x941B1A: mov     eax, [esi+8]
0x941B1D: push    ebx
0x941B1E: push    eax; Args
0x941B1F: lea     ecx, [esp+20h+var_C]
0x941B23: push    offset aSHkrawdataSize; "\n%s<hkrawdata size=\"%i\"><![CDATA[\n"
0x941B28: push    ecx; int
0x941B29: call    sub_8BBEE0
0x941B2E: mov     edx, [esp+28h+arg_4]
0x941B32: push    ebx
0x941B33: push    edx
0x941B34: push    edi; Args
0x941B35: call    sub_9414C0
0x941B3A: mov     esi, eax
0x941B3C: lea     eax, [esp+34h+var_C]
0x941B40: push    offset aHkrawdata; "\n]]></hkrawdata>"
0x941B45: push    eax; int
0x941B46: call    sub_8BBEE0
0x941B4B: add     esp, 24h
0x941B4E: lea     ecx, [esp+18h+var_C]
0x941B52: call    sub_8BC000
0x941B57: pop     edi
0x941B58: mov     eax, esi
0x941B5A: pop     esi
0x941B5B: pop     ebx
0x941B5C: add     esp, 0Ch
0x941B5F: retn    0Ch
