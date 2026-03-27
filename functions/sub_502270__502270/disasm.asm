0x502270: push    ecx
0x502271: mov     ecx, [esp+4+l]
0x502275: mov     edx, [esp+4+arg_10]
0x502279: lea     eax, [esp+4+var_4]
0x50227C: push    eax; UInt16
0x50227D: mov     eax, [esp+8+arg_C]
0x502281: push    ecx; l
0x502282: mov     ecx, [esp+0Ch+a4]
0x502286: push    edx; a6
0x502287: mov     edx, [esp+10h+a3]
0x50228B: push    eax; a5
0x50228C: mov     eax, [esp+14h+arg_4]
0x502290: push    ecx; a4
0x502291: mov     ecx, [esp+18h+a1]
0x502295: push    edx; a3
0x502296: push    eax; a2
0x502297: push    ecx; a1
0x502298: mov     dword ptr [esp+24h+var_4], 0
0x5022A0: call    Script_ExtractArgs
0x5022A5: add     esp, 20h
0x5022A8: test    al, al
0x5022AA: jnz     short loc_5022AE
0x5022AC: pop     ecx
0x5022AD: retn
0x5022AE: mov     edx, [esp+4+arg_18]
0x5022B2: mov     eax, dword ptr [esp+4+var_4]
0x5022B5: push    edx
0x5022B6: push    0
0x5022B8: push    eax
0x5022B9: push    0
0x5022BB: call    sub_4F4570
0x5022C0: add     esp, 10h
0x5022C3: pop     ecx
0x5022C4: retn
