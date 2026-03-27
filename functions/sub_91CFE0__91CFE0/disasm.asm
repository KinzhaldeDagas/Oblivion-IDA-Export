0x91CFE0: mov     ecx, ds:0BA7D98h
0x91CFE6: mov     eax, [ecx]
0x91CFE8: push    32h ; '2'
0x91CFEA: push    3Ch ; '<'
0x91CFEC: call    dword ptr [eax+10h]
0x91CFEF: mov     ecx, [esp+arg_0]
0x91CFF3: push    ecx
0x91CFF4: mov     ecx, eax
0x91CFF6: mov     word ptr [eax+4], 3Ch ; '<'
0x91CFFC: call    sub_91CD70
0x91D001: test    eax, eax
0x91D003: jz      short loc_91D009
0x91D005: add     eax, 8
0x91D008: retn
0x91D009: xor     eax, eax
0x91D00B: retn
