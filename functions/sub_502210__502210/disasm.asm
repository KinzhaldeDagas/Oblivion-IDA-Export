0x502210: push    ecx
0x502211: mov     ecx, [esp+4+l]
0x502215: fldz
0x502217: mov     edx, [esp+4+arg_10]
0x50221B: fstp    dword ptr [esp+4+var_4]
0x50221E: lea     eax, [esp+4+var_4]
0x502221: push    eax; UInt16
0x502222: mov     eax, [esp+8+arg_C]
0x502226: push    ecx; l
0x502227: mov     ecx, [esp+0Ch+a4]
0x50222B: push    edx; a6
0x50222C: mov     edx, [esp+10h+a3]
0x502230: push    eax; a5
0x502231: mov     eax, [esp+14h+arg_4]
0x502235: push    ecx; a4
0x502236: mov     ecx, [esp+18h+a1]
0x50223A: push    edx; a3
0x50223B: push    eax; a2
0x50223C: push    ecx; a1
0x50223D: call    Script_ExtractArgs
0x502242: add     esp, 20h
0x502245: test    al, al
0x502247: jnz     short loc_50224B
0x502249: pop     ecx
0x50224A: retn
0x50224B: fld     dword ptr [esp+4+var_4]
0x50224E: sub     esp, 8
0x502251: fstp    [esp+0Ch+var_C]
0x502254: push    offset aValue0_4f; "Value = %0.4f"
0x502259: call    Interface_ConsolePrint
0x50225E: add     esp, 0Ch
0x502261: mov     al, 1
0x502263: pop     ecx
0x502264: retn
