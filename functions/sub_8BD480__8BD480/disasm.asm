0x8BD480: push    ebp
0x8BD481: mov     ebp, esp
0x8BD483: and     esp, 0FFFFFFF0h
0x8BD486: push    0FFFFFFFFh
0x8BD488: push    offset SEH_8BD480
0x8BD48D: mov     eax, large fs:0
0x8BD493: push    eax
0x8BD494: sub     esp, 58h
0x8BD497: mov     eax, ds:0B30AACh
0x8BD49C: xor     eax, esp
0x8BD49E: mov     [esp+64h+var_14], eax
0x8BD4A2: push    ebx
0x8BD4A3: push    esi
0x8BD4A4: push    edi
0x8BD4A5: mov     eax, ds:0B30AACh
0x8BD4AA: xor     eax, esp
0x8BD4AC: push    eax
0x8BD4AD: lea     eax, [esp+74h+var_C]
0x8BD4B1: mov     large fs:0, eax
0x8BD4B7: mov     esi, [ebp+arg_0]
0x8BD4BA: test    esi, esi
0x8BD4BC: mov     edi, ecx
0x8BD4BE: jz      short loc_8BD529
0x8BD4C0: mov     ecx, ds:0BA7D98h
0x8BD4C6: mov     eax, [ecx]
0x8BD4C8: mov     edx, [eax+10h]
0x8BD4CB: push    2Eh ; '.'
0x8BD4CD: push    130h
0x8BD4D2: call    edx
0x8BD4D4: mov     ebx, eax
0x8BD4D6: mov     word ptr [ebx+4], 130h
0x8BD4DC: mov     [esp+74h+var_64], ebx
0x8BD4E0: mov     eax, [esi]
0x8BD4E2: push    eax
0x8BD4E3: lea     ecx, [esp+78h+var_60]
0x8BD4E7: push    ecx
0x8BD4E8: lea     ecx, [esi+20h]
0x8BD4EB: mov     [esp+7Ch+var_4], 0
0x8BD4F3: call    sub_8A2050
0x8BD4F8: mov     edx, [esi+4]
0x8BD4FB: push    eax
0x8BD4FC: push    edx
0x8BD4FD: mov     ecx, ebx
0x8BD4FF: call    sub_90F580
0x8BD504: mov     ebx, eax
0x8BD506: mov     eax, [edi]
0x8BD508: mov     edx, [eax+4Ch]
0x8BD50B: push    ebx
0x8BD50C: mov     ecx, edi
0x8BD50E: mov     [esp+78h+var_4], 0FFFFFFFFh
0x8BD516: call    edx
0x8BD518: mov     ecx, ebx
0x8BD51A: call    sub_8BC730
0x8BD51F: mov     eax, [edi]
0x8BD521: mov     edx, [eax+7Ch]
0x8BD524: push    esi
0x8BD525: mov     ecx, edi
0x8BD527: call    edx
0x8BD529: mov     ecx, [esp+74h+var_C]
0x8BD52D: mov     large fs:0, ecx
0x8BD534: pop     ecx
0x8BD535: pop     edi
0x8BD536: pop     esi
0x8BD537: pop     ebx
0x8BD538: mov     ecx, [esp+64h+var_14]
0x8BD53C: xor     ecx, esp
0x8BD53E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BD543: mov     esp, ebp
0x8BD545: pop     ebp
0x8BD546: retn    4
