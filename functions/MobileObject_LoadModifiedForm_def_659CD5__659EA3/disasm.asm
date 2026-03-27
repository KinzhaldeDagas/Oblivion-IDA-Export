0x659EA3: mov     edx, [esi]; jumptable 00659CD5 default case
0x659EA5: mov     eax, [edx+154h]
0x659EAB: mov     ecx, esi
0x659EAD: call    eax
0x659EAF: test    eax, eax
0x659EB1: jz      short loc_659EE1
0x659EB3: push    0; a2
0x659EB5: mov     ecx, esi; this
0x659EB7: call    TESObjectREFR_GetParentCell
0x659EBC: mov     ecx, ds:0B333A0h
0x659EC2: push    eax; a1
0x659EC3: call    TESObjectCELL_IsProcessLevel?LowHigh
0x659EC8: test    al, al
0x659ECA: jz      short loc_659ED3
0x659ECC: cmp     [esp+arg_F], 0
0x659ED1: jz      short loc_659EE1
0x659ED3: mov     edx, [esi]
0x659ED5: mov     eax, [edx+150h]
0x659EDB: push    0
0x659EDD: mov     ecx, esi
0x659EDF: call    eax
0x659EE1: mov     edi, [esp+4+a1]
0x659EE5: mov     ebp, [esp+4+a2]
0x659EE9: push    edi; a1
0x659EEA: push    ebp; a2
0x659EEB: mov     ecx, esi; this
0x659EED: call    TESObjectREFR_LoadModifiedForm
0x659EF2: mov     ecx, [esi+58h]
0x659EF5: test    ecx, ecx
0x659EF7: jz      short loc_659F06
0x659EF9: mov     edx, [ecx]
0x659EFB: mov     eax, [edx+3F8h]
0x659F01: push    esi
0x659F02: push    edi
0x659F03: push    ebp
0x659F04: call    eax
0x659F06: mov     ecx, [esp+10h+arg_4]
0x659F0A: mov     large fs:0, ecx
0x659F11: pop     ecx
0x659F12: pop     edi
0x659F13: pop     esi
0x659F14: pop     ebp
0x659F15: add     esp, 14h
0x659F18: retn    8
