0x503590: push    ecx
0x503591: mov     ecx, [esp+4+l]
0x503595: mov     edx, [esp+4+arg_10]
0x503599: lea     eax, [esp+4+var_4]
0x50359C: push    eax; UInt16
0x50359D: mov     eax, [esp+8+arg_C]
0x5035A1: push    ecx; l
0x5035A2: mov     ecx, [esp+0Ch+a4]
0x5035A6: push    edx; a6
0x5035A7: mov     edx, [esp+10h+a3]
0x5035AB: push    eax; a5
0x5035AC: mov     eax, [esp+14h+arg_4]
0x5035B0: push    ecx; a4
0x5035B1: mov     ecx, [esp+18h+a1]
0x5035B5: push    edx; a3
0x5035B6: push    eax; a2
0x5035B7: push    ecx; a1
0x5035B8: mov     dword ptr [esp+24h+var_4], 0
0x5035C0: call    Script_ExtractArgs
0x5035C5: add     esp, 20h
0x5035C8: test    al, al
0x5035CA: jnz     short loc_5035CE
0x5035CC: pop     ecx
0x5035CD: retn
0x5035CE: mov     edx, [esp+4+arg_18]
0x5035D2: mov     eax, dword ptr [esp+4+var_4]
0x5035D5: mov     ecx, ds:0B333C4h
0x5035DB: push    edx
0x5035DC: push    0
0x5035DE: push    eax
0x5035DF: push    ecx
0x5035E0: call    sub_4F70C0
0x5035E5: add     esp, 10h
0x5035E8: pop     ecx
0x5035E9: retn
