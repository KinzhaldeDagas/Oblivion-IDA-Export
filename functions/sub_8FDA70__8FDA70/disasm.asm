0x8FDA70: mov     edx, [esp+arg_0]
0x8FDA74: mov     eax, [edx]
0x8FDA76: fld     dword ptr [eax+1Ch]
0x8FDA79: mov     ecx, [esp+arg_8]
0x8FDA7D: fmul    dword ptr ds:0A9B9BCh
0x8FDA83: push    esi
0x8FDA84: mov     esi, [esp+4+arg_4]
0x8FDA88: fcomp   dword ptr [ecx+8]
0x8FDA8B: fnstsw  ax
0x8FDA8D: test    ah, 41h
0x8FDA90: jnp     short loc_8FDADD
0x8FDA92: mov     eax, [esi]
0x8FDA94: fld     dword ptr [eax+1Ch]
0x8FDA97: fmul    dword ptr ds:0A9B9BCh
0x8FDA9D: fcomp   dword ptr [ecx+8]
0x8FDAA0: fnstsw  ax
0x8FDAA2: test    ah, 41h
0x8FDAA5: jnp     short loc_8FDADD
0x8FDAA7: mov     ecx, ds:0BA7D98h
0x8FDAAD: mov     edx, [ecx]
0x8FDAAF: push    1Ch
0x8FDAB1: push    60h ; '`'
0x8FDAB3: call    dword ptr [edx+10h]
0x8FDAB6: mov     esi, eax
0x8FDAB8: mov     eax, [esp+4+arg_C]
0x8FDABC: lea     ecx, [esi+10h]
0x8FDABF: mov     word ptr [esi+4], 60h ; '`'
0x8FDAC5: mov     word ptr [esi+6], 1
0x8FDACB: mov     [esi+8], eax
0x8FDACE: mov     dword ptr [esi], offset off_A9B988
0x8FDAD4: call    sub_936420
0x8FDAD9: mov     eax, esi
0x8FDADB: pop     esi
0x8FDADC: retn
0x8FDADD: mov     eax, [esp+4+arg_C]
0x8FDAE1: push    eax
0x8FDAE2: push    ecx
0x8FDAE3: push    esi
0x8FDAE4: push    edx
0x8FDAE5: call    sub_9393E0
0x8FDAEA: add     esp, 10h
0x8FDAED: pop     esi
0x8FDAEE: retn
