0x802640: push    0FFFFFFFFh
0x802642: push    offset SEH_8C8970
0x802647: mov     eax, large fs:0
0x80264D: push    eax
0x80264E: push    ecx
0x80264F: push    esi
0x802650: push    edi
0x802651: mov     eax, ds:0B30AACh
0x802656: xor     eax, esp
0x802658: push    eax
0x802659: lea     eax, [esp+1Ch+var_C]
0x80265D: mov     large fs:0, eax
0x802663: push    6Ch ; 'l'; Size
0x802665: call    FormHeapAlloc
0x80266A: add     esp, 4
0x80266D: mov     [esp+1Ch+var_10], eax
0x802671: xor     esi, esi
0x802673: cmp     eax, esi
0x802675: mov     [esp+1Ch+var_4], esi
0x802679: jz      short loc_802684
0x80267B: mov     ecx, eax; this
0x80267D: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x802682: mov     esi, eax
0x802684: mov     edi, [esp+1Ch+arg_0]
0x802688: push    esi; a2
0x802689: mov     ecx, edi; this
0x80268B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x802693: call    sub_405680
0x802698: mov     eax, [esi]
0x80269A: mov     edx, [eax+58h]
0x80269D: push    edi
0x80269E: mov     ecx, esi
0x8026A0: call    edx
0x8026A2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8026A6: mov     large fs:0, ecx
0x8026AD: pop     ecx
0x8026AE: pop     edi
0x8026AF: pop     esi
0x8026B0: add     esp, 10h
0x8026B3: retn    4
