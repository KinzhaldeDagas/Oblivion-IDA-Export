0x8ED800: sub     esp, 10h
0x8ED803: mov     eax, [esp+10h+arg_8]
0x8ED807: mov     edx, [ecx]
0x8ED809: mov     [esp+10h+var_4], eax
0x8ED80D: mov     eax, [eax+14h]
0x8ED810: mov     [esp+10h+var_C], eax
0x8ED814: lea     eax, [esp+10h+var_10]
0x8ED817: push    eax
0x8ED818: mov     eax, [esp+14h+arg_4]
0x8ED81C: push    0
0x8ED81E: push    eax
0x8ED81F: mov     [esp+1Ch+var_10], offset off_A9B0D0
0x8ED827: mov     byte ptr [esp+1Ch+var_8], 0
0x8ED82C: call    dword ptr [edx+18h]
0x8ED82F: mov     eax, [esp+10h+arg_0]
0x8ED833: mov     cl, byte ptr [esp+10h+var_8]
0x8ED837: mov     [eax], cl
0x8ED839: add     esp, 10h
0x8ED83C: retn    0Ch
