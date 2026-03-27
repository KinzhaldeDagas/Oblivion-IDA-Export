0x8BA650: push    0FFFFFFFFh
0x8BA652: push    offset SEH_8BA650
0x8BA657: mov     eax, large fs:0
0x8BA65D: push    eax
0x8BA65E: push    ebx
0x8BA65F: push    esi
0x8BA660: push    edi
0x8BA661: mov     eax, ds:0B30AACh
0x8BA666: xor     eax, esp
0x8BA668: push    eax
0x8BA669: lea     eax, [esp+1Ch+var_C]
0x8BA66D: mov     large fs:0, eax
0x8BA673: mov     esi, ecx
0x8BA675: mov     edi, [esp+1Ch+arg_0]
0x8BA679: test    edi, edi
0x8BA67B: jz      short loc_8BA6D6
0x8BA67D: mov     ecx, ds:0BA7D98h
0x8BA683: mov     eax, [ecx]
0x8BA685: mov     edx, [eax+10h]
0x8BA688: push    2Eh ; '.'
0x8BA68A: push    0A0h ; ' '
0x8BA68F: call    edx
0x8BA691: mov     word ptr [eax+4], 0A0h ; ' '
0x8BA697: mov     [esp+1Ch+arg_0], eax
0x8BA69B: mov     ecx, [edi]
0x8BA69D: push    ecx
0x8BA69E: lea     edx, [edi+20h]
0x8BA6A1: push    edx
0x8BA6A2: mov     ecx, eax
0x8BA6A4: mov     [esp+24h+var_4], 0
0x8BA6AC: call    sub_8CDCB0
0x8BA6B1: mov     ebx, eax
0x8BA6B3: mov     eax, [esi]
0x8BA6B5: mov     edx, [eax+4Ch]
0x8BA6B8: push    ebx
0x8BA6B9: mov     ecx, esi
0x8BA6BB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8BA6C3: call    edx
0x8BA6C5: mov     ecx, ebx
0x8BA6C7: call    sub_8BC730
0x8BA6CC: mov     eax, [esi]
0x8BA6CE: mov     edx, [eax+7Ch]
0x8BA6D1: push    edi
0x8BA6D2: mov     ecx, esi
0x8BA6D4: call    edx
0x8BA6D6: mov     ecx, [esp+1Ch+var_C]
0x8BA6DA: mov     large fs:0, ecx
0x8BA6E1: pop     ecx
0x8BA6E2: pop     edi
0x8BA6E3: pop     esi
0x8BA6E4: pop     ebx
0x8BA6E5: add     esp, 0Ch
0x8BA6E8: retn    4
