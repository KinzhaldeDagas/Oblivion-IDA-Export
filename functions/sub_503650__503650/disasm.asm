0x503650: push    ecx
0x503651: mov     ecx, [esp+4+l]
0x503655: mov     edx, [esp+4+arg_10]
0x503659: push    esi
0x50365A: mov     esi, [esp+8+a4]
0x50365E: lea     eax, [esp+8+var_4]
0x503662: push    eax; UInt16
0x503663: mov     eax, [esp+0Ch+arg_C]
0x503667: push    ecx; l
0x503668: mov     ecx, [esp+10h+a3]
0x50366C: push    edx; a6
0x50366D: mov     edx, [esp+14h+arg_4]
0x503671: push    eax; a5
0x503672: mov     eax, [esp+18h+a1]
0x503676: push    esi; a4
0x503677: push    ecx; a3
0x503678: push    edx; a2
0x503679: push    eax; a1
0x50367A: mov     dword ptr [esp+28h+var_4], 0
0x503682: call    Script_ExtractArgs
0x503687: add     esp, 20h
0x50368A: test    al, al
0x50368C: jnz     short loc_503691
0x50368E: pop     esi
0x50368F: pop     ecx
0x503690: retn
0x503691: mov     ecx, [esp+8+arg_18]
0x503695: mov     edx, dword ptr [esp+8+var_4]
0x503699: push    ecx
0x50369A: push    0
0x50369C: push    edx
0x50369D: push    esi
0x50369E: call    sub_4F4D50
0x5036A3: add     esp, 10h
0x5036A6: pop     esi
0x5036A7: pop     ecx
0x5036A8: retn
