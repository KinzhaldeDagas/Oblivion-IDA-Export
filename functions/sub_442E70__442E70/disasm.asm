0x442E70: sub     esp, 8
0x442E73: push    ebp
0x442E74: mov     ebp, [esp+0Ch+arg_0]
0x442E78: push    edi
0x442E79: xor     al, al
0x442E7B: xor     edi, edi
0x442E7D: cmp     ebp, edi
0x442E7F: mov     [esp+10h+var_4], ecx
0x442E83: mov     [esp+10h+var_5], al
0x442E87: jz      loc_442F65
0x442E8D: push    ebx
0x442E8E: mov     ebx, dword ptr [esp+14h+arg_10]
0x442E92: test    bl, bl
0x442E94: jz      loc_442F64
0x442E9A: push    esi
0x442E9B: mov     esi, [ebp+14h]
0x442E9E: cmp     esi, edi
0x442EA0: jz      short loc_442EC1
0x442EA2: lea     eax, [esi+4]
0x442EA5: push    eax; lpAddend
0x442EA6: call    dword ptr ds:0A2807Ch
0x442EAC: test    eax, eax
0x442EAE: jnz     short loc_442EBE
0x442EB0: cmp     esi, edi
0x442EB2: jz      short loc_442EBE
0x442EB4: mov     edx, [esi]
0x442EB6: mov     eax, [edx]
0x442EB8: push    1
0x442EBA: mov     ecx, esi
0x442EBC: call    eax
0x442EBE: mov     [ebp+14h], edi
0x442EC1: push    edi
0x442EC2: push    offset Vector3_InitValue?
0x442EC7: push    offset Vector3_InitValue?
0x442ECC: mov     ecx, ebp
0x442ECE: call    sub_959D60
0x442ED3: mov     ecx, ds:0B333A0h
0x442ED9: mov     ecx, [ecx+34h]
0x442EDC: cmp     ecx, edi
0x442EDE: jz      short loc_442F03
0x442EE0: fld     [esp+18h+arg_C]
0x442EE4: mov     edx, [esp+18h+arg_8]
0x442EE8: mov     eax, [esp+18h+arg_4]
0x442EEC: push    ebx; char
0x442EED: push    ecx
0x442EEE: fstp    [esp+20h+var_20]; float
0x442EF1: push    edx; int
0x442EF2: push    eax; int
0x442EF3: push    ebp; int
0x442EF4: call    sub_4D1BA0
0x442EF9: pop     esi
0x442EFA: pop     ebx
0x442EFB: pop     edi
0x442EFC: pop     ebp
0x442EFD: add     esp, 8
0x442F00: retn    14h
0x442F03: mov     ebx, [esp+18h+arg_8]
0x442F07: mov     eax, ds:0B06A2Ch
0x442F0C: lea     esp, [esp+0]
0x442F10: cmp     edi, eax
0x442F12: jnb     short loc_442F5F
0x442F14: xor     esi, esi
0x442F16: cmp     esi, eax
0x442F18: jnb     short loc_442F5A
0x442F1A: mov     ecx, [esp+18h+var_4]
0x442F1E: mov     ecx, [ecx+8]
0x442F21: push    esi
0x442F22: push    edi
0x442F23: call    GetGridEntry
0x442F28: mov     ecx, [eax]
0x442F2A: test    ecx, ecx
0x442F2C: jz      short loc_442F50
0x442F2E: mov     edx, dword ptr [esp+18h+arg_10]
0x442F32: fld     [esp+18h+arg_C]
0x442F36: mov     eax, [esp+18h+arg_4]
0x442F3A: push    edx; char
0x442F3B: push    ecx
0x442F3C: fstp    [esp+20h+var_20]; float
0x442F3F: push    ebx; int
0x442F40: push    eax; int
0x442F41: push    ebp; int
0x442F42: call    sub_4D1BA0
0x442F47: test    al, al
0x442F49: jz      short loc_442F50
0x442F4B: mov     [esp+18h+var_5], 1
0x442F50: mov     eax, ds:0B06A2Ch
0x442F55: add     esi, 1
0x442F58: jmp     short loc_442F16
0x442F5A: add     edi, 1
0x442F5D: jmp     short loc_442F10
0x442F5F: mov     al, [esp+18h+var_5]
0x442F63: pop     esi
0x442F64: pop     ebx
0x442F65: pop     edi
0x442F66: pop     ebp
0x442F67: add     esp, 8
0x442F6A: retn    14h
