0x506260: push    ecx
0x506261: mov     ecx, [esp+4+l]
0x506265: mov     edx, [esp+4+arg_10]
0x506269: lea     eax, [esp+4+var_4]
0x50626C: push    eax; UInt16
0x50626D: mov     eax, [esp+8+arg_C]
0x506271: push    ecx; l
0x506272: mov     ecx, [esp+0Ch+a4]
0x506276: push    edx; a6
0x506277: mov     edx, [esp+10h+a3]
0x50627B: push    eax; a5
0x50627C: mov     eax, [esp+14h+arg_4]
0x506280: push    ecx; a4
0x506281: mov     ecx, [esp+18h+a1]
0x506285: push    edx; a3
0x506286: push    eax; a2
0x506287: push    ecx; a1
0x506288: mov     dword ptr [esp+24h+var_4], 0
0x506290: call    Script_ExtractArgs
0x506295: add     esp, 20h
0x506298: test    al, al
0x50629A: jnz     short loc_50629E
0x50629C: pop     ecx
0x50629D: retn
0x50629E: mov     ecx, dword ptr [esp+4+var_4]
0x5062A1: test    ecx, ecx
0x5062A3: jz      short loc_5062AC
0x5062A5: push    0FFFFFFFFh
0x5062A7: call    TESObjectCELL_SetDetachTime
0x5062AC: mov     al, 1
0x5062AE: pop     ecx
0x5062AF: retn
