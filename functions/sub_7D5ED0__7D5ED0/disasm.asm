0x7D5ED0: push    0FFFFFFFFh
0x7D5ED2: push    offset SEH_8C8970
0x7D5ED7: mov     eax, large fs:0
0x7D5EDD: push    eax
0x7D5EDE: push    ecx
0x7D5EDF: push    esi
0x7D5EE0: push    edi
0x7D5EE1: mov     eax, ds:0B30AACh
0x7D5EE6: xor     eax, esp
0x7D5EE8: push    eax
0x7D5EE9: lea     eax, [esp+1Ch+var_C]
0x7D5EED: mov     large fs:0, eax
0x7D5EF3: mov     edi, ecx
0x7D5EF5: cmp     dword ptr [edi+148h], 0
0x7D5EFC: lea     esi, [edi+148h]
0x7D5F02: jnz     short loc_7D5F4A
0x7D5F04: push    0C0h ; 'À'; Size
0x7D5F09: call    FormHeapAlloc
0x7D5F0E: add     esp, 4
0x7D5F11: mov     [esp+1Ch+var_10], eax
0x7D5F15: test    eax, eax
0x7D5F17: mov     [esp+1Ch+var_4], 0
0x7D5F1F: jz      short loc_7D5F2C
0x7D5F21: push    0; a2
0x7D5F23: mov     ecx, eax; this
0x7D5F25: call    NiTriShape_NiTriShape
0x7D5F2A: jmp     short loc_7D5F2E
0x7D5F2C: xor     eax, eax
0x7D5F2E: push    eax; a2
0x7D5F2F: mov     ecx, esi; this
0x7D5F31: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7D5F39: call    NiSmartPointer_Set??
0x7D5F3E: mov     ecx, [esi]
0x7D5F40: push    offset aFence; "fence"
0x7D5F45: call    NiObjectNET_SetName
0x7D5F4A: push    esi
0x7D5F4B: lea     ecx, [edi+0E4h]
0x7D5F51: call    sub_749800
0x7D5F56: mov     eax, [edi+0E8h]
0x7D5F5C: mov     [edi+144h], eax
0x7D5F62: mov     ecx, [esp+1Ch+var_C]
0x7D5F66: mov     large fs:0, ecx
0x7D5F6D: pop     ecx
0x7D5F6E: pop     edi
0x7D5F6F: pop     esi
0x7D5F70: add     esp, 10h
0x7D5F73: retn
