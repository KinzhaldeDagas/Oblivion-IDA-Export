0x928480: push    ebp
0x928481: mov     ebp, esp
0x928483: and     esp, 0FFFFFFF0h
0x928486: sub     esp, 34h
0x928489: push    ebx
0x92848A: mov     ebx, [ebp+arg_4]
0x92848D: push    esi
0x92848E: mov     esi, [ebp+arg_0]
0x928491: mov     eax, [esi+28h]
0x928494: push    edi
0x928495: push    8
0x928497: push    eax
0x928498: push    ebx
0x928499: push    esi
0x92849A: mov     edi, ecx
0x92849C: call    sub_8F0F70
0x9284A1: mov     edx, [esi+1Ch]
0x9284A4: add     esp, 10h
0x9284A7: lea     ecx, [edi+10h]
0x9284AA: push    ecx
0x9284AB: push    edx
0x9284AC: lea     ecx, [esp+48h+var_30]
0x9284B0: call    sub_88FCC0
0x9284B5: mov     ecx, [esi+20h]
0x9284B8: lea     eax, [edi+20h]
0x9284BB: push    eax
0x9284BC: push    ecx
0x9284BD: lea     ecx, [esp+48h+var_20]
0x9284C1: call    sub_88FCC0
0x9284C6: mov     edx, [esi+1Ch]
0x9284C9: add     edi, 30h ; '0'
0x9284CC: push    edi
0x9284CD: push    edx
0x9284CE: lea     ecx, [esp+48h+var_10]
0x9284D2: call    sub_88FE00
0x9284D7: push    ebx
0x9284D8: lea     eax, [esp+44h+var_30]
0x9284DC: push    esi
0x9284DD: push    eax
0x9284DE: call    sub_8F1790
0x9284E3: add     esp, 0Ch
0x9284E6: pop     edi
0x9284E7: pop     esi
0x9284E8: pop     ebx
0x9284E9: mov     esp, ebp
0x9284EB: pop     ebp
0x9284EC: retn    8
