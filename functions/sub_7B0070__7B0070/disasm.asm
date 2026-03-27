0x7B0070: cmp     dword ptr [ecx+0ACh], 5
0x7B0077: jge     loc_7B0155
0x7B007D: mov     eax, [ecx+0ACh]
0x7B0083: shl     eax, 4
0x7B0086: fld     dword ptr [eax+0B2C1F0h]
0x7B008C: fmul    dword ptr ds:0B2C1ECh
0x7B0092: fstp    dword ptr [ecx+0B0h]
0x7B0098: mov     edx, [ecx+0ACh]
0x7B009E: shl     edx, 4
0x7B00A1: fld     dword ptr [edx+0B2C250h]
0x7B00A7: fmul    dword ptr ds:0B2C1ECh
0x7B00AD: fstp    dword ptr [ecx+0C0h]
0x7B00B3: mov     eax, [ecx+0ACh]
0x7B00B9: shl     eax, 4
0x7B00BC: fld     dword ptr [eax+0B2C1F4h]
0x7B00C2: fmul    dword ptr ds:0B2C1ECh
0x7B00C8: fstp    dword ptr [ecx+0B4h]
0x7B00CE: mov     edx, [ecx+0ACh]
0x7B00D4: shl     edx, 4
0x7B00D7: fld     dword ptr [edx+0B2C254h]
0x7B00DD: fmul    dword ptr ds:0B2C1ECh
0x7B00E3: fstp    dword ptr [ecx+0C4h]
0x7B00E9: mov     eax, [ecx+0ACh]
0x7B00EF: shl     eax, 4
0x7B00F2: fld     dword ptr [eax+0B2C1F8h]
0x7B00F8: fmul    dword ptr ds:0B2C1ECh
0x7B00FE: fstp    dword ptr [ecx+0B8h]
0x7B0104: mov     edx, [ecx+0ACh]
0x7B010A: shl     edx, 4
0x7B010D: fld     dword ptr [edx+0B2C258h]
0x7B0113: fmul    dword ptr ds:0B2C1ECh
0x7B0119: fstp    dword ptr [ecx+0C8h]
0x7B011F: mov     eax, [ecx+0ACh]
0x7B0125: shl     eax, 4
0x7B0128: fld     dword ptr [eax+0B2C1FCh]
0x7B012E: fmul    dword ptr ds:0B2C1ECh
0x7B0134: fstp    dword ptr [ecx+0BCh]
0x7B013A: mov     edx, [ecx+0ACh]
0x7B0140: shl     edx, 4
0x7B0143: fld     dword ptr [edx+0B2C25Ch]
0x7B0149: fmul    dword ptr ds:0B2C1ECh
0x7B014F: fstp    dword ptr [ecx+0CCh]
0x7B0155: mov     ecx, [ecx+18h]
0x7B0158: mov     edx, [esp+arg_C]
0x7B015C: mov     eax, [ecx]
0x7B015E: mov     edx, [edx+28h]
0x7B0161: mov     eax, [eax+24h]
0x7B0164: push    edx
0x7B0165: call    eax
0x7B0167: xor     eax, eax
0x7B0169: retn    1Ch
