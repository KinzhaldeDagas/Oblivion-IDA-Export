0x6C0B80: mov     eax, [esp+arg_4]
0x6C0B84: fld     dword ptr [eax]
0x6C0B86: mov     ecx, [esp+arg_0]
0x6C0B8A: fstp    dword ptr [ecx]
0x6C0B8C: mov     edx, [eax+4]
0x6C0B8F: mov     [ecx+4], edx
0x6C0B92: mov     edx, [eax+8]
0x6C0B95: mov     [ecx+8], edx
0x6C0B98: mov     edx, [eax+0Ch]
0x6C0B9B: mov     [ecx+0Ch], edx
0x6C0B9E: mov     edx, [eax+10h]
0x6C0BA1: mov     [ecx+10h], edx
0x6C0BA4: fld     dword ptr [eax+14h]
0x6C0BA7: fstp    dword ptr [ecx+14h]
0x6C0BAA: add     eax, 30h ; '0'
0x6C0BAD: fld     dword ptr [eax-18h]
0x6C0BB0: add     ecx, 30h ; '0'
0x6C0BB3: fstp    dword ptr [ecx-18h]
0x6C0BB6: fld     dword ptr [eax-14h]
0x6C0BB9: fstp    dword ptr [ecx-14h]
0x6C0BBC: mov     edx, [eax-10h]
0x6C0BBF: mov     [ecx-10h], edx
0x6C0BC2: mov     edx, [eax-0Ch]
0x6C0BC5: mov     [ecx-0Ch], edx
0x6C0BC8: mov     edx, [eax-8]
0x6C0BCB: mov     [ecx-8], edx
0x6C0BCE: mov     edx, [eax-4]
0x6C0BD1: mov     [ecx-4], edx
0x6C0BD4: mov     edx, [eax]
0x6C0BD6: mov     [ecx], edx
0x6C0BD8: mov     edx, [eax+4]
0x6C0BDB: mov     [ecx+4], edx
0x6C0BDE: mov     edx, [eax+8]
0x6C0BE1: mov     [ecx+8], edx
0x6C0BE4: mov     eax, [eax+0Ch]
0x6C0BE7: mov     [ecx+0Ch], eax
0x6C0BEA: retn
