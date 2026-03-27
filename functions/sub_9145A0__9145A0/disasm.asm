0x9145A0: push    ebp
0x9145A1: mov     ebp, esp
0x9145A3: and     esp, 0FFFFFFF0h
0x9145A6: sub     esp, 84h
0x9145AC: push    ebx
0x9145AD: push    esi
0x9145AE: mov     esi, large fs:2Ch
0x9145B5: push    edi
0x9145B6: mov     edi, ds:0BA9DE4h
0x9145BC: mov     eax, [esi+edi*4]
0x9145BF: mov     edx, [eax+1A4h]
0x9145C5: cmp     edx, [eax+1A8h]
0x9145CB: mov     [esp+90h+var_74], ecx
0x9145CF: jnb     short loc_9145F9
0x9145D1: mov     ecx, eax
0x9145D3: mov     ebx, [ecx+1A4h]
0x9145D9: mov     dword ptr [ebx], offset aTtrcmopp; "TtrcMopp"
0x9145DF: rdtsc
0x9145E1: mov     [esp+90h+var_78], eax
0x9145E5: mov     eax, [esp+90h+var_78]
0x9145E9: mov     [ebx+4], eax
0x9145EC: add     ebx, 0Ch
0x9145EF: mov     [ecx+1A4h], ebx
0x9145F5: mov     ecx, [esp+90h+var_74]
0x9145F9: mov     edx, [ebp+arg_8]
0x9145FC: xor     eax, eax
0x9145FE: push    edx
0x9145FF: mov     edx, [ebp+arg_0]
0x914602: mov     [esp+94h+var_30], eax
0x914606: mov     [esp+94h+var_2C], eax
0x91460A: mov     eax, [ebp+arg_4]
0x91460D: push    eax
0x91460E: mov     eax, [ecx+10h]
0x914611: mov     ecx, [ecx+0Ch]
0x914614: push    edx
0x914615: push    eax
0x914616: push    ecx
0x914617: lea     ecx, [esp+0A4h+var_70]
0x91461B: call    sub_945960
0x914620: mov     eax, [esi+edi*4]
0x914623: mov     edx, [eax+1A4h]
0x914629: cmp     edx, [eax+1A8h]
0x91462F: jnb     short loc_914655
0x914631: mov     esi, eax
0x914633: mov     ecx, [esi+1A4h]
0x914639: mov     dword ptr [ecx], offset aEt; "Et"
0x91463F: rdtsc
0x914641: mov     [esp+90h+var_74], eax
0x914645: mov     eax, [esp+90h+var_74]
0x914649: mov     [ecx+4], eax
0x91464C: add     ecx, 0Ch
0x91464F: mov     [esi+1A4h], ecx
0x914655: pop     edi
0x914656: pop     esi
0x914657: pop     ebx
0x914658: mov     esp, ebp
0x91465A: pop     ebp
0x91465B: retn    0Ch
