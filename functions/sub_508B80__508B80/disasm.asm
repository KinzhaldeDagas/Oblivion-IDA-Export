0x508B80: sub     esp, 1Ch
0x508B83: xor     eax, eax
0x508B85: mov     dword ptr [esp+1Ch+var_1C], eax
0x508B88: mov     [esp+1Ch+var_18], eax
0x508B8C: mov     [esp+1Ch+var_14], eax
0x508B90: lea     eax, [esp+1Ch+var_14]
0x508B94: push    eax
0x508B95: mov     eax, [esp+20h+l]
0x508B99: lea     ecx, [esp+20h+var_18]
0x508B9D: push    ecx
0x508B9E: mov     ecx, [esp+24h+arg_10]
0x508BA2: lea     edx, [esp+24h+var_1C]
0x508BA6: push    edx; UInt16
0x508BA7: mov     edx, [esp+28h+arg_C]
0x508BAB: push    eax; l
0x508BAC: mov     eax, [esp+2Ch+a4]
0x508BB0: push    ecx; a6
0x508BB1: mov     ecx, [esp+30h+a3]
0x508BB5: push    edx; a5
0x508BB6: mov     edx, [esp+34h+arg_4]
0x508BBA: push    eax; a4
0x508BBB: mov     eax, [esp+38h+a1]
0x508BBF: push    ecx; a3
0x508BC0: push    edx; a2
0x508BC1: push    eax; a1
0x508BC2: call    Script_ExtractArgs
0x508BC7: add     esp, 28h
0x508BCA: test    al, al
0x508BCC: jnz     short loc_508BD2
0x508BCE: add     esp, 1Ch
0x508BD1: retn
0x508BD2: fild    dword ptr [esp+1Ch+var_1C]
0x508BD5: fld     qword ptr ds:0A4C2D0h
0x508BDB: fmul    st(1), st
0x508BDD: fxch    st(1)
0x508BDF: fstp    [esp+1Ch+var_10]
0x508BE3: mov     ecx, [esp+1Ch+var_10]
0x508BE7: fild    [esp+1Ch+var_18]
0x508BEB: mov     ds:0B4616Ch, ecx
0x508BF1: fmul    st, st(1)
0x508BF3: fstp    [esp+1Ch+var_C]
0x508BF7: mov     edx, [esp+1Ch+var_C]
0x508BFB: mov     ds:0B46170h, edx
0x508C01: fimul   [esp+1Ch+var_14]
0x508C05: fstp    [esp+1Ch+var_8]
0x508C09: mov     eax, [esp+1Ch+var_8]
0x508C0D: fld1
0x508C0F: mov     ds:0B46174h, eax
0x508C14: fstp    [esp+1Ch+var_4]
0x508C18: mov     al, 1
0x508C1A: mov     ecx, [esp+1Ch+var_4]
0x508C1E: mov     ds:0B46178h, ecx
0x508C24: add     esp, 1Ch
0x508C27: retn
