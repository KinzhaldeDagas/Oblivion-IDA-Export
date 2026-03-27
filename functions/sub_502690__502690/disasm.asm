0x502690: push    ecx
0x502691: mov     ecx, [esp+4+l]
0x502695: mov     edx, [esp+4+arg_10]
0x502699: push    esi
0x50269A: mov     esi, [esp+8+a4]
0x50269E: lea     eax, [esp+8+var_4]
0x5026A2: push    eax; UInt16
0x5026A3: mov     eax, [esp+0Ch+arg_C]
0x5026A7: push    ecx; l
0x5026A8: mov     ecx, [esp+10h+a3]
0x5026AC: push    edx; a6
0x5026AD: mov     edx, [esp+14h+arg_4]
0x5026B1: push    eax; a5
0x5026B2: mov     eax, [esp+18h+a1]
0x5026B6: push    esi; a4
0x5026B7: push    ecx; a3
0x5026B8: push    edx; a2
0x5026B9: push    eax; a1
0x5026BA: mov     dword ptr [esp+28h+var_4], 0
0x5026C2: call    Script_ExtractArgs
0x5026C7: add     esp, 20h
0x5026CA: test    al, al
0x5026CC: jnz     short loc_5026D1
0x5026CE: pop     esi
0x5026CF: pop     ecx
0x5026D0: retn
0x5026D1: mov     ecx, [esp+8+arg_18]
0x5026D5: mov     edx, dword ptr [esp+8+var_4]
0x5026D9: push    ecx
0x5026DA: push    0
0x5026DC: push    edx
0x5026DD: push    esi
0x5026DE: call    sub_4F61A0
0x5026E3: add     esp, 10h
0x5026E6: pop     esi
0x5026E7: pop     ecx
0x5026E8: retn
