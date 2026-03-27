0x500D90: sub     esp, 8
0x500D93: mov     edx, [esp+8+l]
0x500D97: lea     eax, [esp+8+var_8]
0x500D9A: push    eax
0x500D9B: mov     eax, [esp+0Ch+arg_10]
0x500D9F: lea     ecx, [esp+0Ch+var_4]
0x500DA3: push    ecx; UInt16
0x500DA4: mov     ecx, [esp+10h+arg_C]
0x500DA8: push    edx; l
0x500DA9: mov     edx, [esp+14h+a4]
0x500DAD: push    eax; a6
0x500DAE: mov     eax, [esp+18h+a3]
0x500DB2: push    ecx; a5
0x500DB3: mov     ecx, [esp+1Ch+arg_4]
0x500DB7: push    edx; a4
0x500DB8: mov     edx, [esp+20h+a1]
0x500DBC: push    eax; a3
0x500DBD: push    ecx; a2
0x500DBE: push    edx; a1
0x500DBF: mov     dword ptr [esp+2Ch+var_4], 0
0x500DC7: mov     [esp+2Ch+var_8], 0
0x500DCF: call    Script_ExtractArgs
0x500DD4: add     esp, 24h
0x500DD7: test    al, al
0x500DD9: jnz     short loc_500DDF
0x500DDB: add     esp, 8
0x500DDE: retn
0x500DDF: cmp     [esp+8+var_8], 0
0x500DE3: mov     ecx, dword ptr [esp+8+var_4]
0x500DE7: setnz   al
0x500DEA: push    eax
0x500DEB: push    ecx
0x500DEC: call    Sky_CreateOrGetGlobalObject
0x500DF1: mov     ecx, eax
0x500DF3: call    ForceWeather
0x500DF8: mov     al, 1
0x500DFA: add     esp, 8
0x500DFD: retn
