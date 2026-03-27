0x6FF310: push    esi
0x6FF311: push    edi
0x6FF312: mov     edi, [esp+8+arg_0]
0x6FF316: push    edi
0x6FF317: mov     esi, ecx
0x6FF319: call    sub_752DC0
0x6FF31E: mov     eax, [edi+21Ch]
0x6FF324: mov     edx, [eax+4]
0x6FF327: push    1
0x6FF329: lea     ecx, [esp+0Ch+arg_0]
0x6FF32D: push    ecx
0x6FF32E: push    4
0x6FF330: add     esi, 20h ; ' '
0x6FF333: push    esi
0x6FF334: push    eax
0x6FF335: mov     [esp+1Ch+arg_0], 4
0x6FF33D: call    edx
0x6FF33F: add     esp, 14h
0x6FF342: pop     edi
0x6FF343: pop     esi
0x6FF344: retn    4
