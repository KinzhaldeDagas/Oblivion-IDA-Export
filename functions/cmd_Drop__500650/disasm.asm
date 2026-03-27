0x500650: sub     esp, 8
0x500653: mov     edx, [esp+8+l]
0x500657: push    esi
0x500658: mov     esi, [esp+0Ch+a4]
0x50065C: lea     eax, [esp+0Ch+var_8]
0x500660: push    eax
0x500661: mov     eax, [esp+10h+arg_10]
0x500665: lea     ecx, [esp+10h+var_4]
0x500669: push    ecx; UInt16
0x50066A: mov     ecx, [esp+14h+arg_C]
0x50066E: push    edx; l
0x50066F: mov     edx, [esp+18h+a3]
0x500673: push    eax; a6
0x500674: mov     eax, [esp+1Ch+arg_4]
0x500678: push    ecx; a5
0x500679: mov     ecx, [esp+20h+a1]
0x50067D: push    esi; a4
0x50067E: push    edx; a3
0x50067F: push    eax; a2
0x500680: push    ecx; a1
0x500681: mov     [esp+30h+var_4], 0
0x500689: mov     [esp+30h+var_8], 0
0x500691: call    Script_ExtractArgs
0x500696: add     esp, 24h
0x500699: test    al, al
0x50069B: jnz     short loc_5006A2
0x50069D: pop     esi
0x50069E: add     esp, 8
0x5006A1: retn
0x5006A2: test    esi, esi
0x5006A4: jz      short loc_5006CC
0x5006A6: mov     eax, [esp+0Ch+var_8]
0x5006AA: mov     ecx, [esp+0Ch+var_4]
0x5006AE: mov     edx, [esi]
0x5006B0: mov     edx, [edx+100h]
0x5006B6: push    0
0x5006B8: push    1
0x5006BA: push    0
0x5006BC: push    0
0x5006BE: push    0
0x5006C0: push    1
0x5006C2: push    0
0x5006C4: push    eax
0x5006C5: push    0
0x5006C7: push    ecx
0x5006C8: mov     ecx, esi
0x5006CA: call    edx
0x5006CC: mov     al, 1
0x5006CE: pop     esi
0x5006CF: add     esp, 8
0x5006D2: retn
