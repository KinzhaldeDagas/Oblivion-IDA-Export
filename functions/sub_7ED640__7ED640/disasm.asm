0x7ED640: push    0FFFFFFFFh
0x7ED642: push    offset SEH_8C8970
0x7ED647: mov     eax, large fs:0
0x7ED64D: push    eax
0x7ED64E: push    ecx
0x7ED64F: push    esi
0x7ED650: push    edi
0x7ED651: mov     eax, ds:0B30AACh
0x7ED656: xor     eax, esp
0x7ED658: push    eax
0x7ED659: lea     eax, [esp+1Ch+var_C]
0x7ED65D: mov     large fs:0, eax
0x7ED663: mov     edi, ecx
0x7ED665: push    6Ch ; 'l'; Size
0x7ED667: call    FormHeapAlloc
0x7ED66C: add     esp, 4
0x7ED66F: mov     [esp+1Ch+var_10], eax
0x7ED673: xor     esi, esi
0x7ED675: cmp     eax, esi
0x7ED677: mov     [esp+1Ch+var_4], esi
0x7ED67B: jz      short loc_7ED686
0x7ED67D: mov     ecx, eax; this
0x7ED67F: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x7ED684: mov     esi, eax
0x7ED686: mov     eax, [esp+1Ch+arg_0]
0x7ED68A: push    eax
0x7ED68B: push    esi
0x7ED68C: mov     ecx, edi
0x7ED68E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7ED696: call    sub_7E2490
0x7ED69B: mov     eax, esi
0x7ED69D: mov     ecx, [esp+1Ch+var_C]
0x7ED6A1: mov     large fs:0, ecx
0x7ED6A8: pop     ecx
0x7ED6A9: pop     edi
0x7ED6AA: pop     esi
0x7ED6AB: add     esp, 10h
0x7ED6AE: retn    4
