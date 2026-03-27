0x74D310: push    esi
0x74D311: push    edi
0x74D312: mov     edi, [esp+8+arg_0]
0x74D316: push    edi
0x74D317: mov     esi, ecx
0x74D319: call    sub_753010
0x74D31E: mov     eax, [edi+21Ch]
0x74D324: push    1
0x74D326: lea     ecx, [esp+0Ch+arg_0]
0x74D32A: push    ecx
0x74D32B: push    4
0x74D32D: lea     edx, [esi+54h]
0x74D330: push    edx
0x74D331: push    eax
0x74D332: mov     eax, [eax+4]
0x74D335: mov     [esp+1Ch+arg_0], 4
0x74D33D: call    eax
0x74D33F: mov     eax, [edi+21Ch]
0x74D345: push    1
0x74D347: lea     ecx, [esp+20h+arg_0]
0x74D34B: push    ecx
0x74D34C: push    4
0x74D34E: lea     edx, [esi+58h]
0x74D351: push    edx
0x74D352: push    eax
0x74D353: mov     eax, [eax+4]
0x74D356: mov     [esp+30h+arg_0], 4
0x74D35E: call    eax
0x74D360: mov     edi, [edi+21Ch]
0x74D366: mov     edx, [edi+4]
0x74D369: push    1
0x74D36B: lea     ecx, [esp+34h+arg_0]
0x74D36F: push    ecx
0x74D370: push    4
0x74D372: add     esi, 5Ch ; '\'
0x74D375: push    esi
0x74D376: push    edi
0x74D377: mov     [esp+44h+arg_0], 4
0x74D37F: call    edx
0x74D381: add     esp, 3Ch
0x74D384: pop     edi
0x74D385: pop     esi
0x74D386: retn    4
