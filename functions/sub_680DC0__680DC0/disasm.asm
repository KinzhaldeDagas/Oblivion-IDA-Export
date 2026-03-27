0x680DC0: push    0FFFFFFFFh
0x680DC2: push    offset SEH_680DC0
0x680DC7: mov     eax, large fs:0
0x680DCD: push    eax
0x680DCE: push    ecx
0x680DCF: mov     eax, ds:0B30AACh
0x680DD4: xor     eax, esp
0x680DD6: push    eax
0x680DD7: lea     eax, [esp+14h+var_C]
0x680DDB: mov     large fs:0, eax
0x680DE1: mov     eax, ecx
0x680DE3: xor     ecx, ecx
0x680DE5: mov     [eax], ecx
0x680DE7: fldz
0x680DE9: fst     dword ptr [eax+18h]
0x680DEC: mov     [eax+0Ch], cl
0x680DEF: fst     dword ptr [eax+8]
0x680DF2: mov     [eax+0Dh], cl
0x680DF5: fst     dword ptr [eax+14h]
0x680DF8: mov     [eax+4], ecx
0x680DFB: fst     dword ptr [eax+10h]
0x680DFE: fst     dword ptr [eax+1Ch]
0x680E01: fstp    dword ptr [eax+24h]
0x680E04: mov     [eax+28h], ecx
0x680E07: mov     [eax+2Ch], ecx
0x680E0A: mov     [eax+30h], ecx
0x680E0D: mov     ecx, [esp+14h+var_C]
0x680E11: mov     large fs:0, ecx
0x680E18: pop     ecx
0x680E19: add     esp, 10h
0x680E1C: retn
