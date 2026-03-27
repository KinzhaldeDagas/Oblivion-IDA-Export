0x90BF82: push    ecx; jumptable 0090BCA5 default case
0x90BF83: mov     eax, esp
0x90BF85: mov     byte ptr [eax], 1
0x90BF88: push    200h
0x90BF8D: lea     eax, [esp+8+arg_30]
0x90BF91: push    eax
0x90BF92: lea     ecx, [esp+0Ch+arg_C]
0x90BF96: call    sub_8BBFB0
0x90BF9B: push    offset aUnknownClass_2; "Unknown class member type in structureL"...
0x90BFA0: lea     ecx, [esp+4+arg_C]
0x90BFA4: call    sub_8BBDB0
0x90BFA9: mov     ecx, ds:0BA7FB0h
0x90BFAF: mov     edx, [ecx]
0x90BFB1: push    0B7h ; '·'
0x90BFB6: push    offset a_UtilHkstructu; ".\\util\\hkStructureLayout.cpp"
0x90BFBB: lea     eax, [esp+8+arg_30]
0x90BFBF: push    eax
0x90BFC0: push    50A18B58h
0x90BFC5: push    3
0x90BFC7: call    dword ptr [edx+8]
0x90BFCA: lea     ecx, [esp+14h+var_4]
0x90BFCE: call    sub_8BC000
0x90BFD3: pop     edi; jumptable 0090BCA5 case 23
0x90BFD4: mov     eax, esi
0x90BFD6: pop     esi
0x90BFD7: pop     ebp
0x90BFD8: pop     ebx
0x90BFD9: add     esp, 224h
0x90BFDF: retn
